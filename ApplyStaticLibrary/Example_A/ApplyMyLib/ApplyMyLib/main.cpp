#include <stdio.h>
#include "add.h"
//#pragma comment(lib,"BuildLIB.lib")
int main()
{
	int a = 2;
    int b = 1;
    printf("a=%d, b=%d\n", a,b);
    printf("add: %d\n", add(a,b));
    getchar();
    return 0;
}

