#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	
	double i, a, b, A, B, C, c;
	cout.precision(2);
	cout<<"\n							CIRCUITO 2"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;

	cout<<"					Ingresa los valores del circuito"<<endl<<endl;
	cout<<"	Valor del Voltaje = "; cin>> a;
	
	b = a /1.136363636;	
	i = (36 + b)/8; 
	A=((acos(((b*b)+(c*c)-(a*a))/(2*b*c)))*180);
	B=((acos(((a*a)+(c*c)-(b*b))/(2*a*c)))*180);
	C=((acos(((a*a)+(b*b)-(c*c))/(2*a*b)))*180);

	cout<<"					El resultado de la corriente es = " <<i<<" Amperios"<<endl;
	
	return 0;
}
