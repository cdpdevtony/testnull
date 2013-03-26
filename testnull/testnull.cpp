// testnull.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
typedef struct 
{
    int index;
    int p2;
}st;
int _tmain(int argc, _TCHAR* argv[])
{
    printf("%d\n", &((st*)0)->p2);

    printf("adfadfa");

	return 0;
}

