LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
		./src/EMBJavaSupport.cpp \
		./src/pdfbuffer.cpp
  
LOCAL_C_INCLUDES := \
		$(LOCAL_PATH)/../contentsend/inc \
		$(LOCAL_PATH)/inc \
		$(LOCAL_PATH)/inc/foxit \
		$(LOCAL_PATH)/../common/inc \
		$(NDK_INCLUDE)
		  
LOCAL_CFLAGS := -DHAVE_PTHREADS -mfpu=neon -mfloat-abi=softfp -ffast-math -O3
LOCAL_MODULE := pdfbuffer

LOCAL_LDLIBS += -lm -llog -ldl -lc -lfpdfemb_android

LOCAL_LDLIBS += -L$(NDK_USR_LIB) \
		-L$(LOCAL_PATH)/../lib/ 		

include $(BUILD_SHARED_LIBRARY)
