#include <iostream>
using namespace std;

int main()
{
int num=0,cont=1;  // Variables
cout<<"Ingrese un numero: "<<endl;
cin>>num;
if(num<=9)
	{
	cout<<"El numero de digitos es 1";
	}
	
else{
	do	{ // instrucciones
		cont ++;
		num/=10;   
		}
		while((num/10)!=0); // condición
		cout<<"El resultado es: "<<cont<<endl;
	}
return 0;

}
