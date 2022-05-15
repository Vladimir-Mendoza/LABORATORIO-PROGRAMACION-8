#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	
	double i, i0, a, b, c, Ur, i5;
	cout.precision(3);
	cout<<"\n							CIRCUITO 3"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;

	cout<<"					Ingresa los valores del circuito"<<endl<<endl;
	cout<<"	Valor del Voltaje 1 = "; cin>> a;
	cout<<"	Valor del Voltaje 2 = "; cin>> c;
	
	i = (3*a/4)/0.25;	
	i0 = 8*i; 
	Ur = 11*(c/11) + 348;

	cout<<"					El resultado de la corriente  Ir es = " <<i<<" Amperios"<<endl<<endl;
	cout<<"					La fuente controlada de corriente  8Ir es = " <<i0<<" Amperios"<<endl<<endl;
	cout<<"					La fuente controlada de tencion 2Ur es = " <<Ur<<" Voltios"<<endl;
	
	return 0;
}
