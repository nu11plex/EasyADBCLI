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
#include <cstring>

#ifndef EASYADBCLI_MENU_H
#define EASYADBCLI_MENU_H
#define __AUTHOR__ "nu11plex"
#define __REL_DATE__ "2020/10/8"
#define __REL_VERSION__ 0.01

class menu {
public:
    void chinese() {
        std::cout << "欢迎使用EasyADB CLI模式！" << std::endl
                  << "发布日期:" << __DATE__ << "，由" << __AUTHOR__ << "编写。" << std::endl
                  << "编译日期:" << __DATE__ << " " << __TIME__ << std::endl
                  << "版本 " << __REL_VERSION__ << "." << std::endl
                  << "选项:" << std::endl
                  << "1.安装apk" << std::endl
                  << "0.选择语言";
    }

    void english() {
        std::cout << "Hello from EasyADB CLI mode!" << std::endl
                  << "Release at:" << __REL_DATE__ << ",by " << __AUTHOR__ << "." << std::endl
                  << "Compile at:" << getCompileDate() << " " << __TIME__ << std::endl
                  << "Version " << __REL_VERSION__ << "." << std::endl
                  << "Select option:" << std::endl
                  << "1.Install package"
                  << "0.Switch language";
    }

    void languageChooser() {
        std::cout << "Choose language/选择语言" << std::endl
                  << "1.English" << std::endl
                  << "2.Chinese" << std::endl;
        int opt;
        std::cin >> opt;
        switch (opt) {
            case 1:
                english();
                break;
            case 2:
                chinese();
                break;
            default:
                break;
        }
    }

private:
        void getCompileDateBase(uint8_t *Year, uint8_t *Month, uint8_t *Day) {
        const char *pMonth[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        const char Date[12] = __DATE__;//取编译时间
        uint8_t i;
        for (i = 0; i < 12; i++)if (memcmp(Date, pMonth[i], 3) == 0)*Month = i + 1, i = 12;
        *Year = (uint8_t) atoi(Date + 9); //Date[9]为２位年份，Date[7]为完整年份
        *Day = (uint8_t) atoi(Date + 4);
    }
    char g_date_buf[10];
    char *getCompileDate(void) {
        uint8_t Year, Month, Day;
        getCompileDateBase(&Year, &Month, &Day);//取编译时间
        sprintf(g_date_buf, "%02d%02d%02d", Year, Month, Day);//任意格式化
        return g_date_buf;
    }
} menu;

#endif //EASYADBCLI_MENU_H