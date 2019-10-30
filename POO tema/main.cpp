#include <iostream>
#include <vectori.h>
#include<cassert>
using namespace std;
int main()
{   int n,nr;
    vectori a(3,4);
    cout<<a;
    vectori b;
    cin>>b;
    cout<<"eu";
    cout<<b.suma()<<"\n";
    b.ordonare();
    cout<<b;
    b.maxim1();
    vectori c(b);
    cout<<c;
    cout<<b*c;
    cout<<a*c;
    cin>>n>>nr;
    c.reactualizare(n,nr);
    cout<<c;
    return 0;
}
