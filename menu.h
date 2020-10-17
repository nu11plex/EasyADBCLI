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

class menu {
public:
    void chinese() {
        std::cout << "欢迎使用EasyADB CLI模式！" << std::endl
                  << "发布日期:" << getCompileDate()<< "，由" << __AUTHOR__ << "编写。" << std::endl
                  << "编译日期:" << getCompileDate() << " " << __TIME__ << std::endl
                  << "版本 " << getReleaseVersion() << "." << std::endl
                  << "选项:" << std::endl
                  << "1.安装apk" << std::endl
                  << "0.选择语言";
    }

    void english() {
        std::cout << "Hello from EasyADB CLI mode!" << std::endl
                  << "Release at:" << getCompileDate() << ",by " << __AUTHOR__ << "." << std::endl
                  << "Compile at:" << getCompileDate() << " " << __TIME__ << std::endl
                  << "Version " << getReleaseVersion() << "." << std::endl
                  << "Select option:" << std::endl
                  << "1.Install package" << std::endl
                  << "0.Switch language" << std::endl ;
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
        const char Date[12] = __DATE__;
        uint8_t i;
        for (i = 0; i < 12; i++)if (memcmp(Date, pMonth[i], 3) == 0)*Month = i + 1, i = 12;
        *Year = (uint8_t) atoi(Date + 9);
        *Day = (uint8_t) atoi(Date + 4);
    }
    char g_date_buf[10];
    char *getCompileDate(void) {
        uint8_t Year, Month, Day;
        getCompileDateBase(&Year, &Month, &Day);
        sprintf(g_date_buf, "%02d20/%02d/%02d", Year, Month, Day);
        return g_date_buf;
    }
    char *getReleaseVersion(void){
        uint8_t Year, Month, Day;
        getCompileDateBase(&Year, &Month, &Day);
        sprintf(g_date_buf, "1.%02d.%02d", Month, Day);
        return g_date_buf;
    }
} menu;

#endif //EASYADBCLI_MENU_H