#include<iostream>
#include<cmath>
using namespace std;
class Denklem
{
	public:
		int a, b, c, x1, x2, d;
		Denklem () {a=0, b=0, c=0, x1=0, x2=0, d=0;}
		void hesapla(double a, double b, double c)
		{
			d=b*b-4*a*c;
			if(d<0) cout<<"Reel koku yoktur";
			else if(d==0)
			{
				x1=-b/2*a; cout<<"Cift katli koku vardir : "<<x1;
			}
			else 
			{
				x1=-b-sqrt(d)/2*a; x2=-b+sqrt(d)/2*a;
				cout<<"Birinci kok : "<<x1<<"\nIkinci kok : "<<x2;
		
		}	}
		};
int main()
{
	Denklem denklem;
	cout<<"a : "; cin>>denklem.a;
	cout<<"b : "; cin>>denklem.b;
	cout<<"c : "; cin>>denklem.c;
	denklem.hesapla(denklem.a,denklem.b,denklem.c);
	return 0;
}
