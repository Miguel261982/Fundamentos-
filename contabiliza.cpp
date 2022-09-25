//Creado por:Miguel Angel Bennett Valencia 
#include<iostream>
using namespace std;

int main()
{
	int M=0,B;
	float A,V=0;
	cout<<"Ingrese el limite B="; cin>>B;
	do{

	cout<<"Ingrese el numero A="; cin>>A;
	M=M+1;
	V=V+A;



	}while(M<B);
cout<<"Se ingresaron "<<B<<" numeros "<< "que sumaron "<<V<<endl;
	return 0; 



}


