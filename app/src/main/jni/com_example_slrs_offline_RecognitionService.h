/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_slrs_offline_RecognitionService */

#ifndef _Included_com_example_slrs_offline_RecognitionService
#define _Included_com_example_slrs_offline_RecognitionService
#ifdef __cplusplus
extern "C" {
#endif
#undef com_example_slrs_offline_RecognitionService_BIND_ABOVE_CLIENT
#define com_example_slrs_offline_RecognitionService_BIND_ABOVE_CLIENT 8L
#undef com_example_slrs_offline_RecognitionService_BIND_ADJUST_WITH_ACTIVITY
#define com_example_slrs_offline_RecognitionService_BIND_ADJUST_WITH_ACTIVITY 128L
#undef com_example_slrs_offline_RecognitionService_BIND_ALLOW_OOM_MANAGEMENT
#define com_example_slrs_offline_RecognitionService_BIND_ALLOW_OOM_MANAGEMENT 16L
#undef com_example_slrs_offline_RecognitionService_BIND_AUTO_CREATE
#define com_example_slrs_offline_RecognitionService_BIND_AUTO_CREATE 1L
#undef com_example_slrs_offline_RecognitionService_BIND_DEBUG_UNBIND
#define com_example_slrs_offline_RecognitionService_BIND_DEBUG_UNBIND 2L
#undef com_example_slrs_offline_RecognitionService_BIND_IMPORTANT
#define com_example_slrs_offline_RecognitionService_BIND_IMPORTANT 64L
#undef com_example_slrs_offline_RecognitionService_BIND_NOT_FOREGROUND
#define com_example_slrs_offline_RecognitionService_BIND_NOT_FOREGROUND 4L
#undef com_example_slrs_offline_RecognitionService_BIND_WAIVE_PRIORITY
#define com_example_slrs_offline_RecognitionService_BIND_WAIVE_PRIORITY 32L
#undef com_example_slrs_offline_RecognitionService_CONTEXT_IGNORE_SECURITY
#define com_example_slrs_offline_RecognitionService_CONTEXT_IGNORE_SECURITY 2L
#undef com_example_slrs_offline_RecognitionService_CONTEXT_INCLUDE_CODE
#define com_example_slrs_offline_RecognitionService_CONTEXT_INCLUDE_CODE 1L
#undef com_example_slrs_offline_RecognitionService_CONTEXT_RESTRICTED
#define com_example_slrs_offline_RecognitionService_CONTEXT_RESTRICTED 4L
#undef com_example_slrs_offline_RecognitionService_MODE_APPEND
#define com_example_slrs_offline_RecognitionService_MODE_APPEND 32768L
#undef com_example_slrs_offline_RecognitionService_MODE_ENABLE_WRITE_AHEAD_LOGGING
#define com_example_slrs_offline_RecognitionService_MODE_ENABLE_WRITE_AHEAD_LOGGING 8L
#undef com_example_slrs_offline_RecognitionService_MODE_MULTI_PROCESS
#define com_example_slrs_offline_RecognitionService_MODE_MULTI_PROCESS 4L
#undef com_example_slrs_offline_RecognitionService_MODE_PRIVATE
#define com_example_slrs_offline_RecognitionService_MODE_PRIVATE 0L
#undef com_example_slrs_offline_RecognitionService_MODE_WORLD_READABLE
#define com_example_slrs_offline_RecognitionService_MODE_WORLD_READABLE 1L
#undef com_example_slrs_offline_RecognitionService_MODE_WORLD_WRITEABLE
#define com_example_slrs_offline_RecognitionService_MODE_WORLD_WRITEABLE 2L
#undef com_example_slrs_offline_RecognitionService_START_CONTINUATION_MASK
#define com_example_slrs_offline_RecognitionService_START_CONTINUATION_MASK 15L
#undef com_example_slrs_offline_RecognitionService_START_FLAG_REDELIVERY
#define com_example_slrs_offline_RecognitionService_START_FLAG_REDELIVERY 1L
#undef com_example_slrs_offline_RecognitionService_START_FLAG_RETRY
#define com_example_slrs_offline_RecognitionService_START_FLAG_RETRY 2L
#undef com_example_slrs_offline_RecognitionService_START_NOT_STICKY
#define com_example_slrs_offline_RecognitionService_START_NOT_STICKY 2L
#undef com_example_slrs_offline_RecognitionService_START_REDELIVER_INTENT
#define com_example_slrs_offline_RecognitionService_START_REDELIVER_INTENT 3L
#undef com_example_slrs_offline_RecognitionService_START_STICKY
#define com_example_slrs_offline_RecognitionService_START_STICKY 1L
#undef com_example_slrs_offline_RecognitionService_START_STICKY_COMPATIBILITY
#define com_example_slrs_offline_RecognitionService_START_STICKY_COMPATIBILITY 0L
#undef com_example_slrs_offline_RecognitionService_STATE_DISCONNECTED
#define com_example_slrs_offline_RecognitionService_STATE_DISCONNECTED 0L
#undef com_example_slrs_offline_RecognitionService_STATE_CONNECTING
#define com_example_slrs_offline_RecognitionService_STATE_CONNECTING 1L
#undef com_example_slrs_offline_RecognitionService_STATE_CONNECTED
#define com_example_slrs_offline_RecognitionService_STATE_CONNECTED 2L
/*
 * Class:     com_example_slrs_offline_RecognitionService
 * Method:    initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_slrs_offline_RecognitionService_initialize
  (JNIEnv *, jobject);

/*
 * Class:     com_example_slrs_offline_RecognitionService
 * Method:    reset
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_slrs_offline_RecognitionService_reset
  (JNIEnv *, jobject);

/*
 * Class:     com_example_slrs_offline_RecognitionService
 * Method:    pass_data
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_com_example_slrs_offline_RecognitionService_pass_1data
  (JNIEnv *, jobject, jfloatArray, jfloatArray);

/*
 * Class:     com_example_slrs_offline_RecognitionService
 * Method:    run_recognize
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_example_slrs_offline_RecognitionService_run_1recognize
  (JNIEnv *, jobject);

/*
 * Class:     com_example_slrs_offline_RecognitionService
 * Method:    getString
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_example_slrs_offline_RecognitionService_getString
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif