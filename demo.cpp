#include<iostream>
using namespace std;

class A
{
int x,u;

};

class B:public A
{
int w,z;

};
int  main()
{
    B b;
    A a=b;

}