#include<iostream>
#include<cmath> 
using std::endl; 
using std::cout;
using std::cin;  


double factorial(double);

int main(int argc, char*argv[]){
	double n= 10; 		
	int x; 
	cout<<"Ingrese el valor de x: "<<endl; 	
	cin>>x;
	cout<<"e= "<<(pow(x,n))/factorial(n)<<endl;  
	return 0; 
	
}

double factorial(double n){
	
	double resultado=0.0; 
	if(n<2){

		resultado=1; 
		
	}	
	else{
		resultado= n*factorial(n-1);

	}
}

