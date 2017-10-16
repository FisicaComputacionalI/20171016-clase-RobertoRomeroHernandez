//Programa que suma los nùmeros impares entre el 1 y 10
//Autor: Roberto Romero Hernández
//Fecha: Lunes 16 de Octubre de 2017
#include <iostream>
using namespace std;
int main()
{
  int sum=0;
  int count=1;
  while(count<10 ){
    if ((count%2)>0){
      sum=sum+count;
}
    count++;
 }
  cout<<sum<<endl;
  return 0;
}
