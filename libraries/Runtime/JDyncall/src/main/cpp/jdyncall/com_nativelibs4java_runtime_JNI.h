/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nativelibs4java_runtime_JNI */

#ifndef _Included_com_nativelibs4java_runtime_JNI
#define _Included_com_nativelibs4java_runtime_JNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_init
  (JNIEnv *, jclass);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    sizeOf_size_t
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_nativelibs4java_runtime_JNI_sizeOf_1size_1t
  (JNIEnv *, jclass);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    sizeOf_wchar_t
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_nativelibs4java_runtime_JNI_sizeOf_1wchar_1t
  (JNIEnv *, jclass);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    sizeOf_ptrdiff_t
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_nativelibs4java_runtime_JNI_sizeOf_1ptrdiff_1t
  (JNIEnv *, jclass);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    registerMethod
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Method;J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_registerMethod
  (JNIEnv *, jclass, jclass, jobject, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    loadLibrary
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_loadLibrary
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    freeLibrary
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_freeLibrary
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    findSymbolInLibrary
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_findSymbolInLibrary
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    newGlobalRef
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_newGlobalRef
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    deleteGlobalRef
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_deleteGlobalRef
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    newWeakGlobalRef
 * Signature: (Ljava/lang/Object;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_newWeakGlobalRef
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    deleteWeakGlobalRef
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_deleteWeakGlobalRef
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    newDirectByteBuffer
 * Signature: (JJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_nativelibs4java_runtime_JNI_newDirectByteBuffer
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    getDirectBufferAddress
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_getDirectBufferAddress
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    getDirectBufferCapacity
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_com_nativelibs4java_runtime_JNI_getDirectBufferCapacity
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    createCallbacks
 * Signature: ([Ljava/lang/reflect/Method;[Lcom/nativelibs4java/runtime/MethodCallInfo;)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_nativelibs4java_runtime_JNI_createCallbacks
  (JNIEnv *, jclass, jobjectArray, jobjectArray);

/*
 * Class:     com_nativelibs4java_runtime_JNI
 * Method:    freeCallbacks
 * Signature: ([J)V
 */
JNIEXPORT void JNICALL Java_com_nativelibs4java_runtime_JNI_freeCallbacks
  (JNIEnv *, jclass, jlongArray);

#ifdef __cplusplus
}
#endif
#endif