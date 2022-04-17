#include <jni.h>
#include <string>
#include "Logutil.h"

extern "C" JNIEXPORT jstring JNICALL
Java_com_meishe_ndkcollection_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    LOGI("Hello from C++");
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}