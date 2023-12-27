#include <iostream>
#include <cmath>

using namespace std;

void title() {
	cout<<"************ Simple Quadratic Solver *************"<<endl;
	cout<<"*\t\t\t\t\t\t *";
	cout<<"\n*  The Best Tool for Solving Quadratic Equations *";
	cout<<"\n*\t    Developer => EmmycodezStudio         *";
	cout<<"\n*\t        Date => 4/12/23                  *";
	cout<<"\n*\t\t\t\t\t\t *";
	cout<<"\n**************************************************"<<endl;
}


void quadCalc() {
	// Parameters for a liable quad eqn
	cout<<"\nEnter a, b, c: ";
	int a, b, c, x1, x2, D;
	string B, C;
	cout<<"\na: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;
	cout<<"c: ";
	cin>>c;
	cout<<endl;
	
	//----------------------Display Equation----------------------
	if(b > 0) {
		B = "+";
	}
	else {
		B = "-";
	}
	
	if(c > 0) {
		C = "+";
	}
	else {
		C = "-";
	}
	
	// Print the equation using the absolute value of variables to eliminate unwanted data forms (-ve)
	if(a == 1) {
		cout<<"x²"<<B<<abs(b)<<"x"<<C<<abs(c)<<" = 0";
		cout<<endl;
	}
	else if(a > 1) {
		cout<<a<<"x²"<<B<<abs(b)<<"x"<<C<<abs(c)<<" = 0";
		cout<<endl;
	}
//---------------------------------------------------------------------
	
	// Let the determiner D = (b²-2ac)
	D = ((pow(b, 2)) - (4*a*c));
	
	// If determiner > 0, eqn is valid
	if(D > 0) {
		x1 = ((-b + sqrt(D)) / (2*a));
		x2 = ((-b - sqrt(D)) / (2*a));
		cout<<"\nroots are "<<x1<<" or "<<x2<<endl;
	}
	
	// If D = 0, eqn is valid
	else if(D == 0) {
		x1 = ((-b) / (2*a));
		x2 = ((-b) / (2*a));
		cout<<"\nroots are "<<x1<<" or "<<x2<<endl;
	}
	
	// If D < 0, eqn is invalid
	else {
		cout<<"\nInvalid Expression!!!"<<endl;
		cout<<"cannot compute negative determiner 'D'"<<endl;
	}
	
	}
	
int main()
{
	title();
	cout<<"WELCOME!!!"<<endl;
	
	quadCalc();
	
	string ans;
	
	while(true) {
		cout<<"\nCalculate again? Yes/No: ";
		cin>>ans;
		
		if(ans == "yes" || ans == "ye" || ans == "y") {
			quadCalc();
		}
		else {
			cout<<"\nGOODBYE!!!"<<endl;
			break;
		}
	}
	
	return 0;
}