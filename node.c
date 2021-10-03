#include "node.h"

struct Node t1 = {1,2,3};
struct Node t2 = {3,2,4};

union A n1 = {1};
union A n2 = {1};



int myfunc(int x)
{
    if(x==0)
    {
        x +=1;
        for(int i=0;i<100;i++)
        {
            x+=1;
        }
        int y =x;
        while(y !=0)
        {
            x+=y;
            y-=1;
            
        }
        return x;
    }

    return x;
}

