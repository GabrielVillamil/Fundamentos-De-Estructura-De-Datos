#include<iostream>
#include<conio.h>
using namespace std;
//Prototipos de la función
void pedirDatos();

template <class DATO> // Plantilla de Función   Paso de parametros por valor
void convertir(DATO x);

void convertirkelvin(float&);   // Paso de parametros por referencia

void convertir_r(float,float&,float&);

//Variables global
float n1;


int main(){
	
//Lllamados de la función
pedirDatos();
convertir(n1);
convertirkelvin(n1);

//cout<<"Memoria: "<<&n1;
float reamur=0,rankine=0;
cout<<"Los valores iniciales son: "<<reamur<<"   "<<rankine<<endl;
cout<<"Memoria: "<<&reamur<<endl;
cout<<"Memoria: "<<&rankine<<endl;
convertir_r(n1,reamur,rankine);
cout<<"Los nuevos valores son: "<<reamur<<"   "<<rankine<<endl;

cout<<"Memoria r: "<<&reamur<<endl;
cout<<"Memoria r: "<<&rankine<<endl;

	getch();
	return 0;
}

//Construcción de la función
void pedirDatos(){
	cout<<"digite la temperatura a calcular:"<<endl;
	cin>>n1;
}
template <class DATO>
void convertir(DATO x){
	x=(x*9/5)+32;
	cout<<"En grados farenheit:"<<x<<endl;	
}

void convertirkelvin(float& y){
	y=y+273.15;
	cout<<"La temperatura en kelvin es:"<<y<<endl;
}

void convertir_r(float x,float& reamur,float& rankine){
	reamur=x*1.8;
	rankine=(x*1.8)+491.67;
}
