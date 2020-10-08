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
#ifdef __MINGW__
const char* clear="cls"
#elif __CYGWIN__
const char* clear="cls";
#elif __CYGWIN32__
const char* clear="cls";
#else
const char *clear = "clear";
#endif
#define exec adb

class adbAbstractLayer {
public:
    static int remoteConnect(const std::string &ip, const std::string &port) {
        return 0;
    }

    static int localConnect() {
        return 0;
    }

    static int localConnect(const std::string &device) {
        return 0;
    }

    static int shell() {
        return system("adb shell");
    }
} adb;

#endif //ADB_H

