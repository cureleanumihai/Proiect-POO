#ifndef VECTORI_H
#define VECTORI_H
#include<iostream>
#include <stdexcept>
using namespace std;
class vectori
{   private:
       int *v;
       int nr_elem;
    public:
       vectori();
       vectori(int n,int nr);
       vectori(int n);
       vectori( const vectori & other);
       ~vectori();
       vectori operator=(const vectori &other);
       int& operator[](int i);
       int suma();
       void maxim1();
       void ordonare();
       vectori operator*(const vectori &other);
       void reactualizare(int n,int nr);
       friend ostream & operator<<(ostream & out,const vectori &a);
       friend istream & operator>>(istream & in,vectori &a);
};

#endif // VECTORI_H
