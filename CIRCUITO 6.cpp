#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	
	double i, i0, a, b, c, Ur, i5, A, B, C, P, Q, p, q, r, d, e;
	cout.precision(3);
	cout<<"\n							CIRCUITO 6"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;

	cout<<"					Ingresa los valores del circuito"<<endl<<endl;
	cout<<"	Valor del Voltaje  = "; cin>> a;
	cout<<"	Valor de la Corriente  = "; cin>> b;
	cout<<"	Valor de la Resistencia  = "; cin>> c;
	
	i = (a/b)-(c/2);	
	i0 = 6*i; 
	A=a/p;
	B=((b*p)-(a*q))/(p*p);
	C=((c*(p*p))-(a*p*r)+(a*(q*q))-(b*p*q))/(p*p*p);

	Q=((e*(p*p*p))+(b*q*p*r)-(a*r*(q*q))+(a*p*(r*r))-(c*r*(p*p)))/(p*p*p);

	cout<<"\n\n		La resistencia Rx es = " <<i<<" Ohmios"<<endl<<endl;

	return 0;
}
