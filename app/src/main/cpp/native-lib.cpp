#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_helloandroidinc_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {

    std::string fib = "the Fibonacci sequence goes: ";
    long a=1; //the starting number of the additive sequence
    long b=1; //the second number of the additive sequence
    long c; // a temp var for moving the numbers
    for (int i=0;i<100;i++)
    {
        fib += std::to_string(a) + " ";
        c=a;
        a=b;
        b=a+c;
    }
    std::string hello =  fib;
    return env->NewStringUTF(hello.c_str());
}
