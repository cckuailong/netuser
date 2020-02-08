# netuser

[中文 Readme](https://github.com/cckuailong/netuser/blob/master/README_cn.md)

Add or Delete User via windows api，it can be used when .net is inaccessible.

## P.S

Need the Administrator Authority

## API

- NetUserAdd                Add user which is ordinary authority
- NetLocalGroupAddMembers   Add to Administrator Group
- NetUserDel                Delete the user

## release

- [netuseradd.exe](https://github.com/cckuailong/netuser/releases/tag/v0.1)    Add an Administrator User(Username：ordinary Password：123456abc)
- [netuserdel.exe](https://github.com/cckuailong/netuser/releases/tag/v0.1)    Delete the User which named "ordinary"(netuseradd.exe add it minutes ago)
