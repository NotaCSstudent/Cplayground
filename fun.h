#ifndef __FUN_H__
#define __FUN_H__
#include <stdio.h>
#include <stdlib.h>
int bolt(int excess,int power)
{
    return power*excess;
}

int strength(int x,int y,int z,int t)
{
    return x*y*z*t;
}


#include "node.c"

#endif // __FUN_H__