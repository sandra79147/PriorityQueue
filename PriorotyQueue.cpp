#include<iostream>
#include "PriorotyQueue.h"
using namespace std;

PriorotyQueue:: PriorotyQueue()
{
    count = 0;
}

void PriorotyQueue:: enqueue(int x)
{
    if (count ==0)
    {
        D[count] = x;
        count = count + 1;
    }
    else if (count<maxlength-1)
    {
        count += 1;
        int i=count-1;
        while(i>0 && D[int((i-1)/2)]>x)
        {
            D[i] = D[int((i-1)/2)];
            i = int((i -1)/2);
        }
        D[i] = x;
    }
}
void PriorotyQueue:: makeNull()
{
    count = 0;
}
int PriorotyQueue:: dequeue()
{
    if(count>=1)
    {
        int result = D[0];
        int last = D[count-1];
        count -= 1;
        int i = 0;
        while(2*i +1<count)
        {
            int child = 2*i +1;
            if(child +1<count && D[child+1]<D[child])
            {
                child = child + 1;
            }
            if(last<=D[child])
            {
                break;
            }
            D[i] = D[child];
            i = child;
        }
        D[i] = last;
        return result;
    }
    else
    {
        abort();
    }
}
void PriorotyQueue:: print()
{
    for(int i =0; i<count;i++)
    {
        cout<<D[i]<< " ";
    }
    cout<<endl;
}