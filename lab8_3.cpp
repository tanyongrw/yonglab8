#include<iostream>
using namespace std;

char before(char x)
{
    if(x <= 'Z' and x >= 'A')
    {
        if(x=='A')
    {
        x = 'Z';
    }
    else
    {
        x-- ;
    }
    }
    else
    {
        x = '0' ;
    }
    return x ;
}
