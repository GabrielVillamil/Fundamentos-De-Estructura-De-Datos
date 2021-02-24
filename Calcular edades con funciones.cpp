#include<iostream>
using namespace std;

void pedir_datos();
int calcular(int x);
void resultado(int x);


int ano;

int main()
{
	pedir_datos();
	calcular(ano);
	cout<<"Su edad es = "<<calcular(ano);
	resultado(calcular(ano));
	return 0;

	
}


void pedir_datos()
{
    cout<<"Ingrese su año de nacimiento = ";
	cin>>ano;
}

int calcular(int x)
{
	int edad;
	edad = ( 2021 - x );
	
	return edad;
}
void resultado(int x)
{
	if(x >= 1 and x <= 5)
	{
		cout<<endl <<"INFANTE";
	}
	else if(x >= 6 and x <= 10)
	{
		cout<<endl <<"NIÑEZ";
	}
	else if(x >= 11 and x <= 20)
	{
		cout<<endl <<"ADOLECENTE";
	}
	else if(x >= 21 and x <= 50)
	{
		cout<<endl <<"ADULTO";
	}
	else if(x > 50)
	{
		cout<<endl <<"ADULTO MAYOR";
	}
}
