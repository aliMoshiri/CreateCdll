#include <stdio.h>
#include "main.h"

// a sample exported function
void DLL_EXPORT showHelloWorldMessage()
{
    //MessageBoxA(0, sometext, "DLL Message", MB_OK | MB_ICONINFORMATION;
    printf("Hello World form C Language !!\n");
}

