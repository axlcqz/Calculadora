#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <math.h>

//sqrt es raiz y pow es potencia
void suma(), resta(), multiplicacion(), division(), obtnum();
void error();
float numero;
float a=0,b=0;

int main(){
	int opc=0;
do {
	system("ClS");
	std::cout << "\n 		Operaciones Aritmeticas";
	std::cout << "\n";
	std::cout << "\n 			Menu";
	std::cout << "\n";
	std::cout << "\n Las lista de operaciones que tienes disponibles son: ";
	std::cout << "\n";
	std::cout << "\n 1.- Suma";
	std::cout << "\n";
	std::cout << "\n 2.- Resta";
	std::cout << "\n";
	std::cout << "\n 3.- Multiplicacion";
	std::cout << "\n";
	std::cout << "\n 4.- Division";
	std::cout << "\n";
	std::cout << "\n 5.- Potencia";
	std::cout << "\n";
	std::cout << "\n 6.- Raiz";
	std::cout << "\n";
	std::cout << "\n 9.- Salir";
	std::cout << "\n";
	
	
	
	std::cout << "\n";
	std::cout << "\n Elije una opcion: ";
	/*Introduce el numero de la operacion que tu deseas realizar (1,2,3,4,5,6,9)*/
	std::cin>> opc;
	if (opc==1,2,3,4,5,6);
 }
	
while (numero!=0);
switch (opc){
		case 1:
			suma();
			break;
		case 2:
			resta();
			break;
		case 3:
			multiplicacion();
			break;
		case 4:
			division();
			break;
		case 5:
			system("ClS");
			std::cout <<"\ndame un valor: ";
			std::cin>> a;
			std::cout <<"\ndame la potencia: ";
			std::cin>> b;
			std::cout << "\n  la potencia es: "<<(pow(a,b));
			break;
			case 6:
			system("ClS");
			std::cout <<"\ndame un valor valor: ";
			std::cin>> a;
			std::cout << "\n  la raiz es: "<<(sqrt(a));
			break;
			case 9:
			system("ClS");
			std::cout <<"\n\tUsted ha salido vuelva pronto\n\n\n";
			system("pause");
			break;
			default:
			error();
			break;
			}
			return 0;
}

void error()
{
	system("ClS");
	printf("\tOpci%cn no v%clida\n",162,160);
	system("pause");
}

	
void suma(){
	system("ClS");
	std::cout << "\n Suma";
	obtnum();
	std::cout << "\n El resultado de la suma es: "<<(a+b);
}
void resta(){
	system("ClS");
	std::cout << "\n Resta";
	obtnum();
	std::cout << "\n El resultado de la resta es: "<<(a-b);	
}
void multiplicacion(){
	system("ClS");
	std::cout << "\n Multiplicacion";
	obtnum();
	std::cout << "\n El resultado de la multiplicacion es: "<<(a*b);
}
void division(){
	system("ClS");
	std::cout << "\n Division";
	obtnum();
	std::cout << "\n El resultado de la division es: "<<(a/b);
}
void obtnum(){
	std::cout << "\n\n Introduce el primer valor: ";
	std::cin>> a;
	std::cout << "\n Introduce el segundo valor: ";
	std::cin>> b;
}
