/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sage_HDHomeRunCaptureDevice */

#ifndef _Included_sage_HDHomeRunCaptureDevice
#define _Included_sage_HDHomeRunCaptureDevice
#ifdef __cplusplus
extern "C" {
#endif
#undef sage_HDHomeRunCaptureDevice_SM2210_ENCODER_MASK
#define sage_HDHomeRunCaptureDevice_SM2210_ENCODER_MASK 1L
#undef sage_HDHomeRunCaptureDevice_PYTHON2_ENCODER_MASK
#define sage_HDHomeRunCaptureDevice_PYTHON2_ENCODER_MASK 2L
#undef sage_HDHomeRunCaptureDevice_VBDVCR_ENCODER_MASK
#define sage_HDHomeRunCaptureDevice_VBDVCR_ENCODER_MASK 4L
#undef sage_HDHomeRunCaptureDevice_MICRONAS_AUDIO_MASK
#define sage_HDHomeRunCaptureDevice_MICRONAS_AUDIO_MASK 8L
#undef sage_HDHomeRunCaptureDevice_HCW_CAPTURE_MASK
#define sage_HDHomeRunCaptureDevice_HCW_CAPTURE_MASK 16L
#undef sage_HDHomeRunCaptureDevice_BLACKBIRD_CAPTURE_MASK
#define sage_HDHomeRunCaptureDevice_BLACKBIRD_CAPTURE_MASK 32L
#undef sage_HDHomeRunCaptureDevice_NEC61051_ENCODER_MASK
#define sage_HDHomeRunCaptureDevice_NEC61051_ENCODER_MASK 64L
#undef sage_HDHomeRunCaptureDevice_WISGO7007_ENCODER_MASK
#define sage_HDHomeRunCaptureDevice_WISGO7007_ENCODER_MASK 128L
#undef sage_HDHomeRunCaptureDevice_VWEB2010_ENCODER_MASK
#define sage_HDHomeRunCaptureDevice_VWEB2010_ENCODER_MASK 256L
#undef sage_HDHomeRunCaptureDevice_HDPVR_ENCODER_MASK
#define sage_HDHomeRunCaptureDevice_HDPVR_ENCODER_MASK 1048576L
/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    isCaptureDeviceValid0
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_sage_HDHomeRunCaptureDevice_isCaptureDeviceValid0
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    createEncoder0
 * Signature: (Ljava/lang/String;I)J
 */
JNIEXPORT jlong JNICALL Java_sage_HDHomeRunCaptureDevice_createEncoder0
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    destroyEncoder0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sage_HDHomeRunCaptureDevice_destroyEncoder0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    setupEncoding0
 * Signature: (JLjava/lang/String;J)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_HDHomeRunCaptureDevice_setupEncoding0
  (JNIEnv *, jobject, jlong, jstring, jlong);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    switchEncoding0
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_HDHomeRunCaptureDevice_switchEncoding0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    closeEncoding0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_HDHomeRunCaptureDevice_closeEncoding0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    eatEncoderData0
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_sage_HDHomeRunCaptureDevice_eatEncoderData0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    getOutputData0
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_sage_HDHomeRunCaptureDevice_getOutputData0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    setFilterEnable0
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_sage_HDHomeRunCaptureDevice_setFilterEnable0
  (JNIEnv *, jobject, jlong, jboolean);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    setChannel0
 * Signature: (JLjava/lang/String;ZI)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_HDHomeRunCaptureDevice_setChannel0
  (JNIEnv *, jobject, jlong, jstring, jboolean, jint);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    scanChannel0
 * Signature: (JLjava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sage_HDHomeRunCaptureDevice_scanChannel0
  (JNIEnv *, jobject, jlong, jstring, jstring, jint);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    setInput0
 * Signature: (JIILjava/lang/String;II)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_HDHomeRunCaptureDevice_setInput0
  (JNIEnv *, jobject, jlong, jint, jint, jstring, jint, jint);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    getBroadcastStandard0
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sage_HDHomeRunCaptureDevice_getBroadcastStandard0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_HDHomeRunCaptureDevice
 * Method:    getSignalStrength0
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_sage_HDHomeRunCaptureDevice_getSignalStrength0
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif