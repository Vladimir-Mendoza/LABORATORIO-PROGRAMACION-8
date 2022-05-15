#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	
	double i, i0, a, b, c, Ur, i5, A, B, C, P, Q, p, q, r, d, e;
	cout.precision(3);
	cout<<"\n							CIRCUITO 1"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;

	cout<<"					Ingresa los valores del circuito"<<endl<<endl;
	cout<<"	Valor del Voltaje 1 = "; cin>> a;
	cout<<"	Valor de la corriente 1 = "; cin>> c;
	
	i = (a/40)/1;	
	i0 = (a/3)*5.47; 
	A=a/p;

	P=((d*(p*p*p))+(2*a*q*p*r)-(b*r*(p*p))+(b*p*(q*q))-(a*(q*q*q))-(c*q*(p*p)))/(p*p*p);
	Q=((e*(p*p*p))+(b*q*p*r)-(a*r*(q*q))+(a*p*(r*r))-(c*r*(p*p)))/(p*p*p);

	cout<<"\n\n		El resultado de la Potencia disipada por la resistencia de 5 [ohmios] es = "<<endl<<endl;
	cout<<"					P = " <<i0<<" Watts"<<endl<<endl;
	
	return 0;
}
