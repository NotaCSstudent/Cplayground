#include "node.h"
#include "box.h"


int main()
{
    printf("%d\n",t1.x);
    printf("%d\n",n1.a);
    printf("%d\n",calcsize(5,5,5));

    for(int i=0;i<10;i++)
    {
        i+=2;
    }
    int sum = 0;
    int i=0;
    int j=50;
    while(i<j)
    {
        sum+=i;
        sum+=j;
        i-=1;
        j+=1;

    }
    
}