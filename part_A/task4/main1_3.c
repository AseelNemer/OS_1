#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <dlfcn.h>


void (*hello)();

bool init_library()
{
    void *hdl =dlopen("./libHello.so",RTLD_LAZY);
    if(NULL==hdl)
        return false;
    hello=(void(*)(const char *))dlsym(hdl,"hello");
    if(NULL==hello)
        return false;
    return true;
}

int main()
{
    if(init_library)
        hello;
    else 
        printf("library was not loaded \n ");
    return 0;
}