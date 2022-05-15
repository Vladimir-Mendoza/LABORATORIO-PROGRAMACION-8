#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	
	double i, j, n, a, m, c, b, p, q;
	cout.precision(3);
	cout<<"\n							CIRCUITO 4"<<endl;
	cout<<"													ETN - 307L"<<endl<<endl;

	cout<<"					Ingresa los valores del circuito"<<endl<<endl;
	cout<<"	Valor de la corriente del fasor = "; cin>> a;
	cout<<"	Valor de la Resistencia del Inductor = "; cin>> b;
	cout<<"	Valor del angulo del fasor de corriente = "; cin>> c;
	
	i = (3*a/30)/(0.25*4);	
	j = (6*a/30)/(0.25*4);	
	m = a*b;
	n = 0;  q= 45;
	p = a*1.414213562;


	cout<<"\n\n	La Respuesta del inciso a) es : "<<endl<<endl;
	cout<<"					Re es = " <<i<<" Ohmios"<<endl;
	cout<<"					Xe es = " <<j<<" Ohmios"<<endl<<endl;
	
	cout<<"\n\n	La Respuesta del inciso b) es : "<<endl<<endl;
	cout<<"					Voltaje del Inductor es = " <<m<<" < "<<n<<" Grados "<<endl;
	cout<<"					Voltaje (Vg) es = " <<p<<" < "<<q<<" Grados "<<endl<<endl;
	
	cout<<"\n\n	La Respuesta del inciso c) es : "<<endl<<endl;
	cout<<"					Voltaje (Vg) si Re y Xe = 0[ohmios] es = " <<n<<" Voltios"<<endl<<endl;
	
	return 0;
}
