#include <iostream>
#include <string>
#include <vector>
#include "Red.h"
#include "PC.h"
using namespace std;
int menu();
int main(int argc, char** argv) {
	int op = menu();
	Red* lista = new Red();
	while(op != 3){
		switch(op){
			case 1: {
				string ip, netmask, hostname;
				cout<<"Ingrese la direccion IP: "<<endl;
				cin>>ip;
				cout<<"Ingrese la mascara de red: "<<endl;
				cin>>netmask;
				cout<<"Ingrese la hostname: "<<endl;
				cin>>hostname;
				PC* pc = new PC(ip, netmask, hostname);
				lista -> agregarPC(pc);
				cout <<"PC creada exitosamente"<< endl;
				break;
			}
			case 2:{
				int num;
				string exit = "";
				lista-> imprimir();
				cout<<"Ingrese el numero para acceder a una PC: "<<endl;
				cin>> num;
				string pingComando, ipComparar, comparar;
				while(exit != "exit"){
					PC* aux = lista->getVector().at(num);
					cout<<aux-> getHostname()<<"#";
					cin>>exit;
					comparar = exit;
					pingComando = comparar.substr(0, 4);
					if(exit.size() > 4){
						ipComparar = exit.substr(5, exit.size());
					}
						
					if(exit == "show"){
						cout<<"IP: "<<aux-> getIp()<<endl;
						cout<<"Netmask: "<<aux->getNetmask() << endl;
					}else if(pingComando == "ping_"){
						lista-> ping(ipComparar, num);
					}
				}
				cout<<"***************************** Sesion finalizada *****************************"<<endl;
				break;
			}
			default: {
				cout<<"Opcion invalida"<< endl;
				menu();
				break;
			}
		}
		op = menu();
	}
	lista->~Red();
	return 0;
}
int menu(){
	int opcion = 0;
	cout<<"********** Menu **********"<<endl;
	cout<<"* 1. Agregar PC          *"<<endl;
	cout<<"* 2. Ingresar PC         *"<<endl;
	cout<<"* 3. Salir               *"<<endl;
	cout<<"**************************"<<endl;
	cout<<"Elija una opcion: "<<endl;
	cin>> opcion;
	return opcion;
}