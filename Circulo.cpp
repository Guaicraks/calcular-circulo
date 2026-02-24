#include <iostream>

using namespace std;

int main()
{
	double radio, diametro, area;
	int opcion;
	const double PI =3.14159265359;
	
	cout <<"Ingresa el numero del radio del circulo (en centimetros) ";
	cin >> radio;
	
	do {
		cout << "\n---- Menu ----\n";
		cout << "1 . Calcular el diametro del circulo\n";
		cout << "2 . Calcular el area del circulo\n";
		cout << "3. salir\n";
		cin >> opcion;
		
		switch (opcion) {
			
			case 1 : 
				diametro = 2 * radio;
				cout << "El diametro es: " << diametro << endl;
				break;
			
			case 2 :
				area = PI * radio * radio;
				cout << "La area del circulo es: " << area << endl;
				break;
			
			case 3 :
				cout <<"Saliendo del programa";
				break;
			
			default:
				cout << "Opcion no permitida";
		}
		
	}
	while (opcion !=3);
	
	return 0;
}