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
// adb.h:Abstraction Layer of adb(Android Debug Bridge).

#include <iostream>
#include <cstdio>
#include <string>
#include <climits>
#ifndef ADB_H
#define ADB_H
#ifdef __MINGW__ && __CYGWIN__
#define exec adb.exe
#else
#define exec adb
#endif

using namespace std;
int connect(char *ip,char *port){
    string a;
}
#endif //ADB_H

