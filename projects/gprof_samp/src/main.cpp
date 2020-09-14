//test_gprof.c
#include<stdio.h>

void func1()
{
    printf("\n Inside func1 \n");

    static int g = 0;
    for(int i = 0; i < 1000000; i++)
        g++;
}

void func2()
{
    printf("\n Inside func2 \n");

    static int g = 0;
    for(int i = 0; i < 1000000; i++)
        g++;
}

int main()
{
    printf("\n Inside main()\n");

    for(int i = 0; i < 1000000; i++)
    {
        func1();
        func2();
    }

    return 0;
}