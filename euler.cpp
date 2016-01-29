#include<iostream>
#include<cmath> 
using std::endl; 
using std::cout;
using std::cin;  


double factorial(double);
double altura(double,double,double);
double semiperimetro(double,double,double);
double distancia(double, double, double,double);  
double pendiente(double,double,double,double); 
bool validaciones(double,double,double,double,double,double,double,double); 

int main(int argc, char*argv[]){

	double n=10; 
	int x; 
	int op; 
	double x1,x2,x3,x4,y1,y2,y3,y4; 
	cout<<"\n1. Ejercicio 1\n2. Ejercicio 2\n3. Salir\nIngrese la opcion que desea:\n"; 
	cin>>op; 

	if(op==1){

		cout<<"Ingrese el valor de x: "<<endl; 	
		cin>>x;
		cout<<"e= "<<(pow(x,n))/factorial(n)<<endl;  
	
	}
	if(op==2){
		cout	<<"\nIngrese las coordenadas punto 1"
			<<"\nX1 : " ; 
		cin	>>x1; 
		cout	<<"\nY1 : " ;
		cin	>>y1;
		cout	<<"\nIngrese las coordenadas punto 2";
			<<"\nX2 : " ; 
		cin	>>X2; 
		cout	<<"\nY2 : " ;
		cin	>>y2;
		cout    <<"\nIngrese las coordenadas punto 3"; 
		        <<"\nX3 : " ;
		cin     >>X3;
		cout    <<"\nY3 : " ;
		cin	>>y3; 
		cout    <<"\nIngrese las coordenadas punto 4";
		        <<"\nX4 : " ;
		cin     >>X4;
		cout    <<"\nY4 : " ;
		cin     >>y4;

		cout	<<"\nA("<<x1<<","<<y1<<")"
			<<"\nA("<<x2<<","<<y2<<")"
			<<"\nA("<<x3<<","<<y3<<")"
			<<"\nA("<<x4<<","<<y4<<")";

		bool vall = false; 
		if( validaciones(x1,x2,x3,x4,y1,y2,y3,y4)==true){
			cout	<<"\nLos lados del trapecio miden: "<<endl
				<<"lado 1: "<<distancia(x1,x2,y1,y2)<<endl
				<<"Lado 2: "<<distancia(x2,x4,y2,y4)<<endl
				<<"Lado 3: "<<distancia(x4,x3,y4,y3)<<endl
				<<"Lado 4: "<<distancia(x3,x1,y3,y1)<<endl; 
			cout	<< "\nLos lados del triangulo 1 son: "<<endl
				<<"lado 1: "<<distancia(x1,x2,y1,y2)<<endl
				<<"Lado 2: "<<distancia(x2,x4,y2,y4)<<endl
				<<"Lado 3: "<<distancia(x4,x1,y4,y1)<<endl;
			cout	<<"\nLos lados del triangulo 2 son: "<<endl
				<<"Lado 1: "<<distancia(x4,x3,y4,y3)<<endl
				<<"Lado 2: "<<distancia(x3,x1,y3,y1)<<endl
				<<"Lado 3: "<<distancia(x1,x4,y1,y4)<<endl;
			cout	<<"\nPerimetro triangulo 1: "<<distancia(x1,x2,y1,y2)+
			distancia(x2,x4,y2,y4)+distancia(x4,x1,y4,y1)<<endl
				<<"\nPerimetro triangulo 2: "<<distancia(x4,x3,y4,y3)+distancia(x3,x1,y3,y1)+
				distancia(x1,x4,y1,y4)<<endl; 
			cout	<<"\nSemiperimetro triangulo 1: "<<(distancia(x1,x2,y1,y2)+
			distancia(x2,x4,y2,y4)+distancia(x4,x1,y4,y1))/2<<endl
				<< "\nSemiperimetro triangulo 2: "<<(distancia(x4,x3,y4,y3)+distancia(x3,x1,y3,y1)+
				distancia(x1,x4,y1,y4))/2<<endl;
				
			cout	<<"\nLas alturas del triangulo 1 son: "
				<<"Altura 1: "<<altura(distancia(x1,x2,y1,y2),distancia(x2,x4,y2,y4),distancia(x4,x1,y4,y1))<<endl 
				<<"Altura 2: "<<altura(distancia(x2,x4,y2,y4),distancia(x1,x2,y1,y2),distancia(x4,x1,y4,y1))<<endl
				<<"Altura 3: "<<altura(distancia(x4,x1,y4,y1),distancia(x2,x4,y2,y4),distancia(x1,x2,y1,y2))<<endl; 
				
			cout	<<"\nLas alturas del triangulo 2 son: "
				<<"Altura 1: "<<altura(distancia(x4,x3,y4,y3),distancia(x3,x1,y3,y1),distancia(x1,x4,y1,y4))<<endl
				<<"Altura 2: "<<altura(distancia(x3,x1,y3,y1),distancia(x4,x3,y4,y3),distancia(x1,x4,y1,y4))<<endl
				<<"Altura 2: "<<altura(distancia(x1,x4,y1,y4),distancia(x3,x1,y3,y1),distancia(x4,x3,y4,y3))<<endl;
			
			cout	<<"\nEl area del trapezoide es : "<<" Solo esto falto"<<endl; 

						
		}
		else{
			cout<<"Nose puede Ejecutar con los datos proporcionados!!\n"; 		
		}	
		    	
	}
	if(op==3){
		return 0; 
	
	}
	
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

double altura(double lado1,double lado2, double lado3){

	s=semiperimetro(); 
	
}

double semiperimetro(double lado1, double lado2, double lado3){
	
	return (lado1+lado2+lado3)/2;	
	
}
double distancia(double x1, double x2, double y1, double y2){

 	double distancia = sqrt(pow((x2-x1),2)+ (pow(y2-y1),2));
 	return distancia; 
  
}

double pendiente(double x1, double x2, double y1, double y2){
	return (y2-y1)/(x2-x1); 	

}

bool  validaciones(double x1,double x2,double x3,double x4, double y1, double y2, double y3, double y4){

	if(x1==x2 || x1==x3 || x1==x4 ||  x2==x3 || x2==x4
		 ||  x3==x4 || y1==y2 || y1==y3
		 || y1==y4 ||  y2==y3 || y2==y4 ||  y3==y4){
		return false;
		
	}else{
		return true; 
	}
	
	 
	 		 	
	}


