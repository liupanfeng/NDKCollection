//
// Created by ms on 2022/4/15.
//

#include <android/log.h>

#ifndef NDKCOLLECTION_LOGUTIL_Hre
#define NDKCOLLECTION_LOGUTIL_H

#define LOG_TAG "native_from_ms"

//...是站位符号  输入的内容会直接赋值给 __VA_ARGS__ __android_log_print 是底层的一个函数
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VAR_ARGS__)

class Logutil {

};


#endif //NDKCOLLECTION_LOGUTIL_H
