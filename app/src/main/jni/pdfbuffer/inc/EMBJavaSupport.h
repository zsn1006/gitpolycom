/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport */

#ifndef _Included_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
#define _Included_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
#ifdef __cplusplus
extern "C" {
#endif
#undef com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_SUCCESS
#define com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_SUCCESS 0L
#undef com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_MEMORY
#define com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_MEMORY 1L
#undef com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_ERROR
#define com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_EMBJavaSupport_RESULT_ERROR -1L
/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFDocLoad
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FPDFDocLoad
  (JNIEnv *, jclass, jint, jstring);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFDocClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FPDFDocClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFDocGetPageCount
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FPDFDocGetPageCount
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageLoad
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FPDFPageLoad
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FPDFPageClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageStartParse
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FPDFPageStartParse
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageContinueParse
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FPDFPageContinueParse
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageGetSizeX
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FPDFPageGetSizeX
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFPageGetSizeY
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FPDFPageGetSizeY
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFRenderPageStart
 * Signature: (IIIIIIIILcom/polycom/cmad/pdf/FoxitEMBSDK/EMBJavaSupport/Rectangle;I)I
 */
JNIEXPORT jint JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FPDFRenderPageStart
  (JNIEnv *, jclass, jint, jint, jint, jint, jint, jint, jint, jint, jobject, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FPDFRenderPageContinue
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FPDFRenderPageContinue
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSInitLibrary
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSInitLibrary
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSDestroyLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSDestroyLibrary
  (JNIEnv *, jclass);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSMemInitFixedMemory
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSMemInitFixedMemory
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSMemDestroyMemory
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSMemDestroyMemory
  (JNIEnv *, jclass);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSBitmapCreate
 * Signature: (III[BI)I
 */
JNIEXPORT jint JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSBitmapCreate
  (JNIEnv *, jclass, jint, jint, jint, jbyteArray, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSBitmapDestroy
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSBitmapDestroy
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSBitmapGetBuffer
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSBitmapGetBuffer
  (JNIEnv *, jclass, jint, jbyteArray);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSBitmapFillColor
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSBitmapFillColor
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadGBCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSFontLoadGBCMap
  (JNIEnv *, jclass);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadGBExtCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSFontLoadGBExtCMap
  (JNIEnv *, jclass);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadCNSCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSFontLoadCNSCMap
  (JNIEnv *, jclass);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadKoreaCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSFontLoadKoreaCMap
  (JNIEnv *, jclass);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadJapanCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSFontLoadJapanCMap
  (JNIEnv *, jclass);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFontLoadJapanExtCMap
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSFontLoadJapanExtCMap
  (JNIEnv *, jclass);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSLoadJbig2Decoder
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSLoadJbig2Decoder
  (JNIEnv *, jclass);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSLoadJpeg2000Decoder
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSLoadJpeg2000Decoder
  (JNIEnv *, jclass);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFileReadAlloc
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSFileReadAlloc
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSFileReadRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSFileReadRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSPauseHandlerAlloc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSPauseHandlerAlloc
  (JNIEnv *, jclass);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSPauseHandlerRelease
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSPauseHandlerRelease
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSUnlock
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSUnlock
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    FSSetFileFontmap
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_FSSetFileFontmap
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    setPage
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_setPage
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport
 * Method:    closeDoc
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_polycom_mfw_pdf_FoxitEMBSDK_EMBJavaSupport_closeDoc
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
