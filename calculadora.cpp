//Programa que presenta las Operaciones Básicas
//Modificado por: Miguel Angel Bennett Valencia 
//Fecha:14-09-2022

#include<iostream>
using namespace std;

int main()
{
        float M,A,B,V,D,R;
	//Ingreso de datos 
       cout<<"Ingrese en valor de M=:";
       cin>>M;
 	cout<<"Ingrese en valor de  A=:";
	//Operaciones
       	cin>>A;
	B=M+A;
	V=M*A;
	D=M/A;
	R=M-A;
	//Muestra los resultados.
	cout<<"Las suma de "<<M<<" + "<<A<<" = "<<B<<endl;
	cout<<"Las  multiplicacion de "<<M<<" * "<<A<<" = "<<V<<endl;
	cout<<"Las division de "<<M<<" / "<<A<<" = "<<D<<endl;
	cout<<"Las resta de "<<M<<" - "<<A<<" = "<<R<<endl;
        return 0 ;     


}
