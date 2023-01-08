#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class complex 
{
    int real;
    int img;
public:
    void get(int a,int b)
    {
        real = a;
        img = b;
    }
void add(complex m, complex n)
{
    int x,y;
    x = m.real + n.real;
    y = m.img + n.img;
    cout<<"sum of complex number is  "<<endl<<x<<"+i"<<y<<endl;
}
};

int main()
{
    int p,q,m,n;
    complex m,n;
    cout<<"enter 1st complex number: ";
    cin>>p>>q;
    m.get(p,q);
    cout<<"enter 2nd complex number: ";
    cin>>p>>q;
    n.get(p,q);
    add(m,n)
}
