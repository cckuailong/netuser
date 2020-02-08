#include "pch.h"
#ifndef UNICODE    
#define UNICODE    
#endif    
#include  <stdio.h>  
#include  <windows.h>  
#include  <lm.h>  
#pragma comment(lib,"netapi32")    

int wmain(int argc, wchar_t *argv[])
{
	const wchar_t* username = L"ordinary";	// username
	const wchar_t* password = L"123456abc";	// password
	// define USER_INFO_1 struct
	
	USER_INFO_1 ui;
	DWORD dwError = 0;
	ui.usri1_name = (wchar_t*)username;    
	ui.usri1_password = (wchar_t*)password;
	ui.usri1_priv = USER_PRIV_USER;
	ui.usri1_home_dir = NULL;
	ui.usri1_comment = NULL;
	ui.usri1_flags = UF_SCRIPT;
	ui.usri1_script_path = NULL;
	 
	if (NetUserAdd(NULL, 1, (LPBYTE)&ui, &dwError) == NERR_Success) {
		printf("add user success\n");
	}
	else
	{
		printf("add user fail\n");
	}

	// add user to administrators group
	LOCALGROUP_MEMBERS_INFO_3 account;
	account.lgrmi3_domainandname = ui.usri1_name;
	if (NetLocalGroupAddMembers(NULL, L"Administrators", 3, (LPBYTE)&account, 1) == NERR_Success)
	{
		printf("priviledge promotion success\n");
	}
	else
	{
		printf("priviledge promotion fail\n");
	}
	
	// delete user
	
	if (NetUserDel(NULL, username) == NERR_Success) {
		printf("delete user success\n");
	}
	else {
		printf("delete user fail\n");
	}
	
	return 0;
}