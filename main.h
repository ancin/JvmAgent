#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include <string>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <stdlib.h>

#include "jvmti.h"
#include "jni_md.h"

/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT __declspec(dllimport)
#endif

 JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *jvm, char *options, void *reserved);
 JNIEXPORT void JNICALL Agent_OnUnload(JavaVM *vm);
#ifdef __cplusplus
extern "C"
{

JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *jvm, char *options, void *reserved);
JNIEXPORT void JNICALL Agent_OnUnload(JavaVM *vm);
#endif
JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *jvm, char *options, void *reserved);
JNIEXPORT void JNICALL Agent_OnUnload(JavaVM *vm);

void mlog();
#ifdef __cplusplus
}

#endif
JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *jvm, char *options, void *reserved);
JNIEXPORT void JNICALL Agent_OnUnload(JavaVM *vm);
#endif // __MAIN_H__
