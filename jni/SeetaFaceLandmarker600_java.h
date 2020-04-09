/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_seetaface6_model_FaceLandmarker */

#ifndef _Included_com_seetaface6_model_FaceLandmarker
#define _Included_com_seetaface6_model_FaceLandmarker
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_seetaface6_model_FaceLandmarker
 * Method:    construct
 * Signature: (Lcom/seetaface6/model/SeetaModelSetting;)V
 */
JNIEXPORT void JNICALL Java_com_seetaface6_model_FaceLandmarker_construct
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_seetaface6_model_FaceLandmarker
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_seetaface6_model_FaceLandmarker_dispose
  (JNIEnv *, jobject);

/*
 * Class:     com_seetaface6_model_FaceLandmarker
 * Method:    number
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_seetaface6_model_FaceLandmarker_number
  (JNIEnv *, jobject);

/*
 * Class:     com_seetaface6_model_FaceLandmarker
 * Method:    mark
 * Signature: (Lcom/seetaface6/model/SeetaImageData;Lcom/seetaface6/model/SeetaRect;[Lcom/seetaface6/model/SeetaPointF;)V
 */
JNIEXPORT void JNICALL Java_com_seetaface6_model_FaceLandmarker_mark__Lcom_seetaface6_model_SeetaImageData_2Lcom_seetaface6_model_SeetaRect_2_3Lcom_seetaface6_model_SeetaPointF_2
  (JNIEnv *, jobject, jobject, jobject, jobjectArray);

/*
 * Class:     com_seetaface6_model_FaceLandmarker
 * Method:    mark
 * Signature: (Lcom/seetaface6/model/SeetaImageData;Lcom/seetaface6/model/SeetaRect;[Lcom/seetaface6/model/SeetaPointF;[I)V
 */
JNIEXPORT void JNICALL Java_com_seetaface6_model_FaceLandmarker_mark__Lcom_seetaface6_model_SeetaImageData_2Lcom_seetaface6_model_SeetaRect_2_3Lcom_seetaface6_model_SeetaPointF_2_3I
  (JNIEnv *, jobject, jobject, jobject, jobjectArray, jintArray);

#ifdef __cplusplus
}
#endif
#endif
