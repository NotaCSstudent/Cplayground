#ifndef __NODE_H__
#define __NODE_H__
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Node{int x;int y;int z;};
union A{int a;int b;int c;};
union B{int a;int b;int c;};


struct linklist{int x;struct linklist *next;};







#include "node.c"


#endif // __NODE_H__