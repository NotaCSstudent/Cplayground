#include "box.h"

int calcsize(int a,int b,int c)
{
    struct boxsize t = {a,b,c};
    return t.x * t.y * t.z;

}