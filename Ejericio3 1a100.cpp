#include<iostream>

using namespace std;

void conteo();

int main()
{
	conteo();
	return 0;
}
void conteo()
{
	int numero;
	numero=1;
	
	while(numero <= 99){
		cout<<numero++ <<endl;
	}
	while(numero >= 1){
		cout<<numero-- <<endl;
	}
	
}
