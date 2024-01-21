#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double x1=0, x2=0, radio, lado, base, altura, perimetro, apotema, angulo, radian, seno, coseno, tangente, hipotenusa, cat1, cat2;
	const double pi= 3.14159265358979323846;
	char bandera, cth;
	int opc=0;
	cout<<"*\n";
	cout<<"************   SISTEMAS DE CALCULOS   *************************\n";
	cout<<"************        MATEMATICO        *************************\n";
	cout<<"*\n";
	cout<<"*  [1] SUMA            |   [8] AREA_CIRCULO           *********\n";
	cout<<"*  [2] RESTA           |   [9] AREA_CUADRADO           ********\n";
	cout<<"*  [3] MULTIPLICACION  |   [10] AREA_TRIANGULO          *******\n";
	cout<<"*  [4] DIVISION        |   [11] AREA_RECTANGULO          ******\n";
	cout<<"*  [5] POTENCIACION    |   [12] AREA_ROMBOIDE             *****\n";
	cout<<"*  [6] RAIZ CUADRADA   |   [13] AREA_POLIGONO_REGULAR      ****\n";
	cout<<"*  [7] PORCENTAJE      |   [14] AREA_CILINDRO               ***\n";
	cout<<"*                      |                                   ****\n";
	cout<<"*  -----------------------------------------------------  *****\n";
	cout<<"*   [15] SENO, COCENO Y TANGENTE                         ******\n";
	cout<<"*   [16] TEOREMA DE PITAGORAS                           *******\n";
	cout<<"*                                                     *********\n";
	cout<<"*\n";
	bandera= 'x';
	do{
	cout<<"\n** Selecciona la operacion a realizar: "; cin>>opc;
	cout<<"*\n";
	switch(opc){
		case 1:
			cout<<"Digite los dos valores: "; cin>>x1>>x2;
			cout<<"El resultado de la suma "<<x1<<" + "<<x2<<" : "<<x1+x2<<endl;
			break;
		case 2:
			cout<<"Digite los dos valores: "; cin>>x1>>x2;
			cout<<"El resultado de la resta "<<x1<<" - "<<x2<<" : "<<x1-x2<<endl;
			break;
		case 3:
			cout<<"Digite los dos valores: "; cin>>x1>>x2;
			cout<<"El resultado de la multiplicacion "<<x1<<" * "<<x2<<" : "<<x1*x2<<endl;
			break;
		case 4:
			cout<<"Digite el dividendo y el divisor: "; cin>>x1>>x2;
			cout<<"El resultado de la Division "<<x1<<" / "<<x2<<" : "<<x1/x2<<endl;
			break;
		case 5:
			cout<<"Digite la base y el exponente: "; cin>>x1>>x2;
			cout<<"El resultado de la potencia "<<x1<<" ^ "<<x2<<" : "<<pow(x1,x2)<<endl;
			break;
		case 6:
			cout<<"Digite el numero que desea calcular: "; cin>>x1;
			cout<<"El resultado de la raiz cuadrada es: "<<sqrt(x1);
			break;
		case 7:
			cout<<"Digite la cantidad total y el porcentaje que desea cancular % : "; cin>>x1>>x2;
			cout<<"El porcentaje es: "<<(x1*x2)/100;
			break;
		case 8:
			cout<<"Digite el radio: "; cin>>radio;
			cout<<"\nEl Area del circulo es: "<<pi*pow(radio, 2);
			break;
		case 9:
			cout<<"Digite el lado del cuadrado: "; cin>>lado;
			cout<<"\nEl Area del cuadrado es: "<<lado*lado;
			break;
		case 10:
			cout<<"Digite la base y la altura del triangulo: ";cin>>base>>altura;
			cout<<"\nEl Area del triangulo es: "<<(base*altura)/2;
			break;
		case 11:
			cout<<"Digite la base y la altura del rectangulo:  ";cin>>base>>altura;
			cout<<"\nEl Area del rectangulo es: "<<base*altura;
			break;
		case 12:
			cout<<"Digite la base y la altura del romboide:  ";cin>>base>>altura;
			cout<<"\nEl Area del rectangulo es: "<<base*altura;
			break;
		case 13:
			cout<<"Digite el perimetro del poligono regular:  ";cin>>perimetro>>apotema;
			cout<<"\nEl Area del poligono regular es: "<<(perimetro*apotema)/2;
			break;
		case 14:
			cout<<"Digite el radio y la altura del cilindro:  ";cin>>radio>>altura;
			cout<<"\nEl Area del cilindro es: "<< (2*pow(radio, 2)+ 2*(radio*altura))*pi;
			break;
		case 15:
			cout<<"Digite el angulo en grados: "; cin>>angulo;
			radian= angulo*pi/180.0;
			seno= sin(radian);
			coseno= cos(radian);
			tangente= tan(radian);
			cout<<"\nEl seno [ "<<seno<<" ], el coseno [ "<<coseno<<" ], y la tangente es [ "<<tangente<<" ] ";
			break;
		case 16:
			cout<<"Opresiona [h] si deseas hallar la Hipotenusa, [c] si el Cateto: "; 
			cin>>cth;
			if (cth=='h'){
				cout<<"\nDigite los dos catetos: ";
				cin>>cat1>>cat2;
				cout<<"\nLa Hipotenusa es: "<<sqrt(pow(cat1,2) + pow(cat2,2));
				break;
			} else if(cth== 'c'){
				cout<<"\nDigite la hipotenusa y el cateto: "; cin>>hipotenusa>>cat1;
				cout<<"\nEl valor del otro cateto es: "<<sqrt(pow(hipotenusa,2)-pow(cat1,2));
				break;
			}
		default:
			cout<<"Error, opcion no valida ..";
	}
	cout<<"\nPresiona [y] para repetir el programa+--, [x] para salir .." ;
	cin>>bandera;

	} while((bandera=='y')||(bandera=='Y'));
	return 0;
}