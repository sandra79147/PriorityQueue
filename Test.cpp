#include<iostream>
#include "PriorotyQueue.h"
#include <fstream>
#include <time.h>  
using namespace std;

int main()
{
    PriorotyQueue heap;
    heap.enqueue(5);
    heap.print();
    heap.enqueue(2);
    heap.print();
    heap.enqueue(0);
    heap.print();
    heap.enqueue(1);
    heap.print();
    heap.enqueue(3);
    heap.print();
    heap.enqueue(-1);
    heap.print();
    cout<<heap.dequeue()<<endl;
    heap.print();

    fstream returnEl;
    returnEl.open("dequeue.txt",ios::out);
    for(int i = 100;i<=5000;i++)
    {
        returnEl<<i<<" ";
        PriorotyQueue Queue;
        for(int n = 0; n<=i ; n++)
        {
            Queue.enqueue(n);
        }
        clock_t start, end;
        double times;

        start = clock(); 
        for(int n = 0; n<100 ; n++)
        {
            Queue.dequeue();
        }
        end = clock();
        times = double(end - start);
        returnEl<<times<< endl;
    }
}