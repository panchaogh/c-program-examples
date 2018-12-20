//
// Created by panchao on 18-12-13.
//

#ifndef BASICS_ADDRESSBOOK_H
#define BASICS_ADDRESSBOOK_H

#define PRINT_FORMAT1 printf("------------------------------------------------\n")
#define PRINT_FORMAT2 printf("姓名\t手机号码\n")

typedef struct AddressBook{
    char name[50]; //姓名
    char phone[12]; //手机
} AddressBook; //通讯录类型
typedef enum Option {
    ADDALL, DELETE, SELECT, INSERT, SAVEFILE, LOADFILE, SELECTALL, QUIT
} Option; //操作枚举类型
#define STORAGE_MAX 100 //定义存储大小

Option menuList(); //菜单列表
void addAddressBook(); //新增通讯录数据
int selectByName(char name[]); //根据名称查询通讯录信息
void showByName(); //根据名称展示通讯录信息,如果名称为NULL，则全部显示
void showAll(); //展示通讯录信息
void addPerson(); //新增通讯录联系人
void deletePersonByName(); //根据名称删除通讯录联系人
void saveFile(); //保存通讯录到文件中
void loadFile(); //加载文件中的数据到通讯录中
#endif //BASICS_ADDRESSBOOK_H
