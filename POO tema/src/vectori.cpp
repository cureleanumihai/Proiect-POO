#include "vectori.h"
#include <stdexcept>
#include<iostream>
using namespace std;
vectori::vectori(int n,int nr)
{  nr_elem=n;
   v=new int[nr_elem];
   for(int i=1;i<=nr_elem;i++)
       v[i]=nr;

}
vectori::vectori()
{ nr_elem=0;
}
vectori::vectori(int n)
{  nr_elem=n;
   v=new int[nr_elem];
}
vectori::vectori(const vectori & other)
{ nr_elem=other.nr_elem;
  v=new int[nr_elem];
  for(int i=1;i<=nr_elem;i++)
        v[i]=other.v[i];
}
vectori::~vectori()
{  delete [] v;

}
void vectori::reactualizare(int n,int nr)
{ delete [] v;
  int i;
  nr_elem=nr;
  v=new int[nr_elem];
  for(i=1;i<=nr_elem;i++)
      v[i]=n;
}
vectori vectori::operator=(const vectori & other)
{   nr_elem=other.nr_elem;
    if(&other==this)
          return *this;
    delete [] v;
    v=new int[nr_elem];
    for( int i=1;i<=nr_elem;i++)
        v[i]=other.v[i];
    return *this;
}
vectori vectori::operator*(const vectori & other)
{ int i;
  vectori b(nr_elem);
  for(i=1;i<=nr_elem;i++)
     b.v[i]=v[i]*other.v[i];
  return b;

}
int & vectori::operator[](int i)
{  return v[i];

}
int vectori::suma()
{ int s=0;
  for(int i=1;i<=nr_elem;i++)
      s=s+v[i];
  return s;
}
void vectori::maxim1()
{ int max1;int pozmax1=1;
  max1=v[1];
  for(int i=2;i<=nr_elem;i++)
  {   if(v[i]>max1)
      {  max1=v[i];
         pozmax1=i;
      }
  }
  cout<<"Maximul este "<<max1<<" si se afla pe pozitia "<<pozmax1<<"\n";

}
void vectori::ordonare()
{ int i,j;
  int aux;
  for(i=1;i<nr_elem;i++)
        for(j=i+1;j<=nr_elem;j++)
           if(v[i]>v[j])
           {  aux=v[i];
              v[i]=v[j];
              v[j]=aux;
           }
  return *this;
}
istream &operator >>(istream &in,vectori &a)
{   int *aux;
    int n;
    int i;
    in>>n;
    aux=new int[n];
    for(i=1;i<=n;i++)
        in>>aux[i];
    a.nr_elem=n;
    a.v=new int[a.nr_elem];
    for(i=1;i<=a.nr_elem;i++)
            a.v[i]=aux[i];
    return in;

}
ostream & operator<<(ostream & out,const vectori & a)
{  for(int i=1;i<=a.nr_elem;i++)
      out<<a.v[i]<<" ";
   out<<"\n";
   return out;
}
