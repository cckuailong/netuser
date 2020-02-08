# netuser

[English Readme](https://github.com/cckuailong/netuser/blob/master/README.md)

使用windows api添加，删除用户，可用于net无法使用时

## P.S

需要管理员权限

## API

- NetUserAdd                添加普通权限的用户
- NetLocalGroupAddMembers   添加Administrator权限
- NetUserDel                删除指定用户

## release

- [netuseradd.exe](https://github.com/cckuailong/netuser/releases/tag/v0.1)    添加一个帐号(用户名：ordinary 密码：123456abc)
- [netuserdel.exe](https://github.com/cckuailong/netuser/releases/tag/v0.1)    删除名字为ordinary的用户（netuseradd.exe新创建的）
