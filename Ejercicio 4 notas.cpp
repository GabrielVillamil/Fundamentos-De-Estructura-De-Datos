#include<iostream>
using namespace std;

void pedir_datos();
float calculo(float x,float y,float z);
void resultado(float x);

float n1,n2,n3,x,total;

int main()
{
	pedir_datos();
	calculo(n1,n2,n3);
	resultado(x);

return 0;	
}

void pedir_datos()
{
	float n1,n2,n3; 
	
    cout<<"Ingrese nota del primer corte = ";
	cin>>n1;
	cout<<"Ingrese nota del segundo corte = ";
	cin>>n2;
	cout<<"Ingrese nota deltercer corte = ";
	cin>>n3;
}

float calculo(float x,float y,float z)
{
	float total;
	total = ((x*0.35)+(y*0.35)+(z*0.30));
	return total;
	
}
void resultado(float x)
{
	if(total <= 2.9){
		cout<< x <<" REPROBO";
	}
	else if(total >= 3 && x <= 4.5){
		cout<< x <<" APROBO";
	}
	else if(total > 4.5){
		cout<< x <<" EXCELENTE";
	}
}
