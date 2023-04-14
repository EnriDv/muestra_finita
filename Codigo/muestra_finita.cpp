#include <iostream>
#include <cmath>
using namespace std;
void calculo ()
{
 double n,z,p,q,e,den,num,total;
  cout<<"--------------------------------------------"<<endl;
  cout<<"Introducir el numero de poblacion: "<<endl;
  cin>>n;
  cout<<"Introducir el nivel de confianza: "<<endl;
  cin>>z;
  cout<<"Introducir la probailidad de exito: "<<endl;
  cin>>p;
  cout<<"Introducir la probabilidad de fracaso: "<<endl;
  cin>>q;
  cout<<"Introducir el nivel de error: "<<endl;
  cin>>e;
  num=pow(z,2)*p*q*n;
  den=pow(e,2)*(n-1)+pow(z,2)*p*q;
  total=num/den;
  cout<<"La muestra finita es: "<<total<<endl;
}
bool verif ()
{
 string sino;
  bool i;
  cin>>sino;
  if(sino=="si"||sino=="Si"||sino=="SI")
  {
   i=1; 
  }else if (sino=="no"||sino=="No"||sino=="NO")
  {
    i=0;
  }
  return i;
}
int main()
{
  cout<<"Calculo de la mestra finita."<<endl;
  bool i;
  do{
    calculo();
    cout<<"--------------------------------------------"<<endl;
    cout<<endl<<"Desea hacer un nuevo calculo? (si o no)"<<endl;
    i=verif();
  }
  while(i!=0);
  return 0;
}
