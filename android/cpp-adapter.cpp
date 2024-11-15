#include <jni.h>
#include "react-native-timer-jsi.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_timerjsi_TimerJsiModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return timerjsi::multiply(a, b);
}
