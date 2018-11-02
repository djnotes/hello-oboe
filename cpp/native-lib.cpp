//
// Created by johndoe on 11/2/18.
//

#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_me_mehdi_hellooboe_MainActivity_stringFromJNI(JNIEnv* env, jobject thiz){
  return env->NewStringUTF("Hello from JNI");
}