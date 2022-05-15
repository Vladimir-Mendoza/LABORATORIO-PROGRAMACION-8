#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	
	double i, i0, a, b, c, Ur, i5, A, B, C, P, Q, p, q, r, d, e;
	cout.precision(3);
	cout<<"\n							CIRCUITO 5"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;

	cout<<"					Ingresa los valores del circuito"<<endl<<endl;
	cout<<"	Valor del Voltaje 1 = "; cin>> a;
	cout<<"	Valor de la corriente 1 = "; cin>> c;
	
	i = (a/40)/1;	
	i0 = 6*i; 
	A=a/p;
	B=((b*p)-(a*q))/(p*p);
	C=((c*(p*p))-(a*p*r)+(a*(q*q))-(b*p*q))/(p*p*p);

	P=((d*(p*p*p))+(2*a*q*p*r)-(b*r*(p*p))+(b*p*(q*q))-(a*(q*q*q))-(c*q*(p*p)))/(p*p*p);
	Q=((e*(p*p*p))+(b*q*p*r)-(a*r*(q*q))+(a*p*(r*r))-(c*r*(p*p)))/(p*p*p);

	cout<<"					El resultado de la corriente  Io es = " <<i<<" Amperios"<<endl<<endl;
	cout<<"					La fuente controlada de corriente  2vo es = " <<i0<<" Amperios"<<endl<<endl;
	
	return 0;
}
