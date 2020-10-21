#ifndef PRIOROTYQUEUE_H
#define PRIOROTYQUEUE_H 
#include<iostream>

const int maxlength = 1000;

class  PriorotyQueue
{
    private:
    int D[maxlength];
    int count;
    public:
    PriorotyQueue();
    void enqueue(int x);
    void makeNull();
    int dequeue();
    void print();

};
#endif