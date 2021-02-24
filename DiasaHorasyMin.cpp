#include<iostream>
#include<conio.h>
using namespaces std;


template<class DATO>
void conertir(DATO x);
void dia(float&);

void convertir_r(int,int&,float&);

float dia;

int main(){
	float hora=0,min=0,seg=0;
	
	cout<<"Digite los dias que quiere convertir= ";
	cin>>dia;
	convertir(dia,hora,seg,min);
	cout<<"El total de horas es= "<<hora<<endl;
	
}
int convertir(int x,int& hora,int& min,int& seg)
{
	hora=x*24;
	min=hora*60;
	seg=min*60;
}
