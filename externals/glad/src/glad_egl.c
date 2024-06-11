/*

    EGL loader generated by glad 0.1.36 on Tue Jun 11 17:09:40 2024.

    Language/Generator: C/C++
    Specification: egl
    APIs: egl=1.5
    Profile: -
    Extensions:
        EGL_EXT_create_context_robustness,
        EGL_EXT_platform_x11,
        EGL_KHR_create_context,
        EGL_KHR_platform_x11
    Loader: True
    Local files: False
    Omit khrplatform: False
    Reproducible: False

    Commandline:
        --api="egl=1.5" --generator="c" --spec="egl" --extensions="EGL_EXT_create_context_robustness,EGL_EXT_platform_x11,EGL_KHR_create_context,EGL_KHR_platform_x11"
    Online:
        https://glad.dav1d.de/#language=c&specification=egl&loader=on&api=egl%3D1.5&extensions=EGL_EXT_create_context_robustness&extensions=EGL_EXT_platform_x11&extensions=EGL_KHR_create_context&extensions=EGL_KHR_platform_x11
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/glad_egl.h>

int gladLoadEGL(void) {
    return gladLoadEGLLoader((GLADloadproc)eglGetProcAddress);
}

static int find_extensionsEGL(void) {
	return 1;
}

static void find_coreEGL(void) {
}

int gladLoadEGLLoader(GLADloadproc load) {
	(void) load;
	find_coreEGL();

	if (!find_extensionsEGL()) return 0;
	return 1;
}

