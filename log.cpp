//
// Created by Reeb Deve on 2021/11/23.
//

#include "log.h"
#include <map>
#include <iostream>
#include <functional>
#include <time.h>
#include <string>

namespace TinyWebFrame{
    /// LogLevel method 实现
    const char* LogLevel::ToString(LogLevel::Level level) {
        switch (level) {
#define XX(name) \
        case LogLevel::name: \
        return #name;\
        break;
        XX(DEBUG);
        XX(INFO);
        XX(WARN);
        XX(ERROR);
        XX(FATAL);
#undef XX
            default:
                return "UNKNOW";
        }
    }
    LogLevel::Level LogLevel::FromString(const std::string &str) {
#define XX(level,v) \
    if(str == #v){  \
    return LogLevel::level; \
    }
    XX(DEBUG,debug);
    XX(INFO,info);
    XX(WARN,warn);
    XX(ERROR,error);
    XX(FATAL,fatal);

    XX(DEBUG,DEBUG);
    XX(INFO,INFO);
    XX(WARN,WARN);
    XX(ERROR,ERROR);
    XX(FATAL,FATAL);
    return LogLevel::UNKNOW;
#undef XX
    }

    ///LogEventWrap method实现


};
