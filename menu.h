// -*- C++ -*-
//===---------------------------- adb.h ----------------------------------===//
//
// Part of the EasyADB Project, under the GNU GPL License v3.
// See https://github.com/nu11plex/EasyADBCLI/LICENSE for license information.
//
//===----------------------------------------------------------------------===//
//
// Created by nu11plex on 2020/10/8.
//
// menu.h:Main menu of EasyADBCLI.

#include <iostream>
#ifndef EASYADBCLI_MENU_H
#define EASYADBCLI_MENU_H
#define _AUTHOR "nu11plex"
#define _REL_DATE "2020/10/8"
#define _REL_VERSION 0.01
class Translation{
    public:
        void chinese(){
            cout<<"欢迎使用EasyADB CLI模式！"<<endl
                <<"发布日期:"<<_REL_DATE<<"，由"<<_AUTHOR<<"编写。"<<endl
                <<"编译日期:"<<__DATE__<<endl
                <<"版本 "<<_REL_VERSION<<"."<<endl
                <<"选项:"<<endl
                <<"1.安装apk"<<endl
                <<"0.选择语言";
        }
        void english(){
            cout<<"Hello from EasyADB CLI mode!"<<endl
                <<"Release at:"<<_REL_DATE<<",by "<<_AUTHOR<<"."<<endl
                <<"Compile at:"<<__DATE__<<endl
                <<"Version "<<_REL_VERSION<<"."<<endl
                <<"Select option:"<<endl
                <<"1.Install package"
                <<"0.Switch language";
        }
}lang;
void languageChooser(){
    cout<<"Choose language/选择语言"<<endl
        <<"1.English"<<endl
        <<"2.Chinese"<<endl;
    int opt;
    cin>>opt;
    switch (opt) {
        case 1:lang.english();
        case 2:lang.chinese();
    }
}
void menu(){
//    languageChooser();
    cout<<;
}
#endif //EASYADBCLI_MENU_H
