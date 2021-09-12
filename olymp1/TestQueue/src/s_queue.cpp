#include "../include/s_queue.h"

s_queue::s_queue(int asize)
{
    //ctor
    p = new int[asize];
    pmax = &p[asize];
    h = p;
    t = p;
}

s_queue::~s_queue()
{
    //dtor
    delete[] p;
}

bool s_queue::push(int v)
{
    int *tp = h;
    tp++;
    if(  tp == pmax )
         tp = p;

    if( tp != t)
    {
        *tp = v;
        h = tp;
        return true;
    }
    return false;
}

bool s_queue::pop(int &v)
{
    if(t == h)
        return false;
    v = *t;
    t++;
    if(t == pmax)
        t = p;
    return true;
}

bool s_queue::peak(int &v)
{
    if(t == h)
        return false;
    v = *t;
    return true;
}

