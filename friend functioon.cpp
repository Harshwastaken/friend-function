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
    friend complex add(complex ,complex );
};
complex add(complex m , complex n)
{
    complex x;
    x.real = m.real + n.real;
    x.img = m.img + n.img;
    return x;
}


int main()
{
    int p,q;
    complex y,z;
    cout<<"enter 1st complex number: ";
    cin>>p>>q;
    y.get(p,q);
    cout<<"enter 2nd complex number: ";
    cin>>p>>q;
    z.get(p,q);
    complex sum = add(y,z);
    cout<<"sum of complex number is  "<<endl<<sum.real<<"+i"<<sum.img;
}
