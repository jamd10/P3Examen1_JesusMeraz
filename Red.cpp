#include "Red.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
using std::vector;
using namespace std;
Red::Red() {
}
Red::~Red() {
	for(int i = 0; i<ListaPC.size(); i++) {
		if(ListaPC[i] != NULL){
			delete ListaPC.at(i);
		}
	}
}
vector<PC*> Red::getVector() {
	return this->ListaPC;
}
void Red::agregarPC(PC* pc) {
	ListaPC.push_back(pc);
}
void Red::ping(string ipComparar, int num){
	/*string ip1, ip2, ip3, ip4, puntoIp = ".";
	int ip1_, ip2_, ip3_, ip4_;
	int cont;
	string binario1, binario2, binario3, binario4; 
	string* arreglo = new string[ipComparar.size()];
	string* ipObtenida1 = new string[ip1.size()];
	string* ipObtenida2 = new string[ip2.size()];
	string* ipObtenida3 = new string[ip3.size()];
	string* ipObtenida4 = new string[ip4.size()];
	for(int i = 0; i < ipComparar.size(); i++){
		arreglo[i] = ipComparar[i];
	}
	for(int i = 0; i < ipComparar.size(); i++){
		while(arreglo[i] != puntoIp){
			ip1 += arreglo[i];
			cont++;
		}
	}
	for(int i = cont; i < ipComparar.size(); i++){
		while(arreglo[i] != puntoIp){
			ip2 += arreglo[i];
			cont++;
		}
	}
	for(int i = cont; i < ipComparar.size(); i++){
		while(arreglo[i] != puntoIp){
			ip3 += arreglo[i];
			cont++;
		}
	}
	for(int i = cont; i < ipComparar.size(); i++){
		while(arreglo[i] != puntoIp){
			ip4 += arreglo[i];
			cont++;
		}
	}
	stringstream convertir1(ip1);
	stringstream convertir2(ip2);
	stringstream convertir3(ip3);
	stringstream convertir4(ip4);
	convertir1>>ip1_;
	convertir2>>ip2_;
	convertir3>>ip3_;
	convertir4>>ip4_;
	
	for (int i = 0; i < ip1.size(); i++){
		if(ip1_% 2 == 0){
			binario1 += "1";
		}else{
   			binario1 += "0";
    	}
	ip1_ = ip1_ / 2;
	}
	for (int i = 0; i < ip2.size(); i++){
		if(ip2_% 2 == 0){
			binario2 += "1";
		}else{
   			binario2 += "0";
    	}
	ip2_ = ip2_ / 2;
	}
	for (int i = 0; i < ip3.size(); i++){
		if(ip3_% 2 == 0){
			binario3 += "1";
		}else{
   			binario3 += "0";
    	}
	ip3_ = ip3_ / 2;
	}
	for (int i = 0; i < ip4.size(); i++){
		if(ip4_% 2 == 0){
			binario4 += "1";
		}else{
   			binario4 += "0";
    	}
	ip1_ = ip1_ / 2;
	}
	// comparar
	for (int i = 0; i < ListaPC.size(); i++){
		ListaPC[i]->getIp();
		string ip1, ip2, ip3, ip4, puntoIp = ".";
	int ip1_, ip2_, ip3_, ip4_;
	int cont;
	string binario11, binario22, binario33, binario44; 
	string* arreglo = new string[ipComparar.size()];
	string* ipObtenida1 = new string[ip1.size()];
	string* ipObtenida2 = new string[ip2.size()];
	string* ipObtenida3 = new string[ip3.size()];
	string* ipObtenida4 = new string[ip4.size()];
	for(int i = 0; i < ipComparar.size(); i++){
		arreglo[i] = ipComparar[i];
	}
	for(int i = 0; i < ipComparar.size(); i++){
		while(arreglo[i] != puntoIp){
			ip1 += arreglo[i];
			cont++;
		}
	}
	for(int i = cont; i < ipComparar.size(); i++){
		while(arreglo[i] != puntoIp){
			ip2 += arreglo[i];
			cont++;
		}
	}
	for(int i = cont; i < ipComparar.size(); i++){
		while(arreglo[i] != puntoIp){
			ip3 += arreglo[i];
			cont++;
		}
	}
	for(int i = cont; i < ipComparar.size(); i++){
		while(arreglo[i] != puntoIp){
			ip4 += arreglo[i];
			cont++;
		}
	}
	stringstream convertir1(ip1);
	stringstream convertir2(ip2);
	stringstream convertir3(ip3);
	stringstream convertir4(ip4);
	convertir1>>ip1_;
	convertir2>>ip2_;
	convertir3>>ip3_;
	convertir4>>ip4_;
	
	for (int i = 0; i < ip1.size(); i++){
		if(ip1_% 2 == 0){
			binario11 += "1";
		}else{
   			binario11 += "0";
    	}
	ip1_ = ip1_ / 2;
	}
	for (int i = 0; i < ip2.size(); i++){
		if(ip2_% 2 == 0){
			binario22 += "1";
		}else{
   			binario22 += "0";
    	}
	ip2_ = ip2_ / 2;
	}
	for (int i = 0; i < ip3.size(); i++){
		if(ip3_% 2 == 0){
			binario33 += "1";
		}else{
   			binario33 += "0";
    	}
	ip3_ = ip3_ / 2;
	}
	for (int i = 0; i < ip4.size(); i++){
		if(ip4_% 2 == 0){
			binario44 += "1";
		}else{
   			binario44 += "0";
    	}
	ip1_ = ip1_ / 2;
	}*/
	string arreglo[ipComparar.size()];
	string binario1, binario2, binario3, binario4; 
	for (int i = 0; i < ipComparar.size(); i++){
		arreglo[i] = ipComparar[i];
	}
	for (int i = 0; i < ipComparar.size(); i++){
		while(arreglo[i]!="."){
			binario1 = ipComparar.substr(0, i);
		}
	}
	for (int i = binario1; i < ipComparar.size(); i++){
		while(arreglo[i]!="."){
			binario2 = ipComparar.substr(binario1, i);
		}
	}
	for (int i = binario2; i < ipComparar.size(); i++){
		while(arreglo[i]!="."){
			binario3 = ipComparar.substr(binario2, i);
		}
	}
	for (int i = binario3; i < ipComparar.size(); i++){
		while(arreglo[i]!="."){
			binario4 = ipComparar.substr(binario3, i);
		}
	}
	int ip1_, ip2_, ip3_, ip4_;
	stringstream convertir1(binario1);
	stringstream convertir2(binario2);
	stringstream convertir3(binario3);
	stringstream convertir4(binario4);
	convertir1>>ip1_;
	convertir2>>ip2_;
	convertir3>>ip3_;
	convertir4>>ip4_;
	string binario11, binario22, binario33, binario44; 
	for (int i = 0; i < binario1.size(); i++){
		if(ip1_% 2 == 0){
			binario11 += "1";
		}else{
   			binario11 += "0";
    	}
	ip1_ = ip1_ / 2;
	}
	for (int i = 0; i < binario2.size(); i++){
		if(ip2_% 2 == 0){
			binario22 += "1";
		}else{
   			binario22 += "0";
    	}
	ip2_ = ip2_ / 2;
	}
	for (int i = 0; i < binario3.size(); i++){
		if(ip3_% 2 == 0){
			binario33 += "1";
		}else{
   			binario33 += "0";
    	}
	ip3_ = ip3_ / 2;
	}
	for (int i = 0; i < binario3.size(); i++){
		if(ip4_% 2 == 0){
			binario44 += "1";
		}else{
   			binario44 += "0";
    	}
	ip1_ = ip1_ / 2;
	}
	// comparar
	for (int i = 0; i < ListaPC.size(); i++){
			string arreglo[ListaPC.size()];
	string binario1, binario2, binario3, binario4; 
	for (int i = 0; i < ListaPC.size(); i++){
		arreglo[i] = ListaPC[i]->getIp();
	}
	for (int i = 0; i < ListaPC.size(); i++){
		while(arreglo[i]!="."){
			binario1 = ListaPC[i]->getIp().substr(0, i);
		}
	}
	for (int i = binario1; i < ipComparar.size(); i++){
		while(arreglo[i]!="."){
			binario2 = ListaPC[i]->getIp().substr(binario1, i);
		}
	}
	for (int i = binario2; i < ipComparar.size(); i++){
		while(arreglo[i]!="."){
			binario3 = ListaPC[i]->getIp().substr(binario2, i);
		}
	}
	for (int i = binario3; i < ipComparar.size(); i++){
		while(arreglo[i]!="."){
			binario4 = ListaPC[i]->getIp().substr(binario3, i);
		}
	}
	int ip1_, ip2_, ip3_, ip4_;
	stringstream convertir1(binario1);
	stringstream convertir2(binario2);
	stringstream convertir3(binario3);
	stringstream convertir4(binario4);
	convertir1>>ip1_;
	convertir2>>ip2_;
	convertir3>>ip3_;
	convertir4>>ip4_;
	string binario111, binario222, binario333, binario444; 
	for (int i = 0; i < binario1.size(); i++){
		if(ip1_% 2 == 0){
			binario111 += "1";
		}else{
   			binario111 += "0";
    	}
	ip1_ = ip1_ / 2;
	}
	for (int i = 0; i < binario2.size(); i++){
		if(ip2_% 2 == 0){
			binario222 += "1";
		}else{
   			binario222 += "0";
    	}
	ip2_ = ip2_ / 2;
	}
	for (int i = 0; i < binario3.size(); i++){
		if(ip3_% 2 == 0){
			binario333 += "1";
		}else{
   			binario333 += "0";
    	}
	ip3_ = ip3_ / 2;
	}
	for (int i = 0; i < binario3.size(); i++){
		if(ip4_% 2 == 0){
			binario444 += "1";
		}else{
   			binario444 += "0";
    	}
	ip1_ = ip1_ / 2;
	}
	if(binario111 == binario11 || binario222 == binario22 ||binario333 == binario33 ||binario444 == binario44 ){
		if(i == num){
			cout<<""<<endl;
			cout<<"Pingin to "<<ipComparar<<" with 32 bytes of data"<<endl;
			cout<<"Reply "<<ipComparar<<" bytes=32 time=37ms TTL46"<<endl;
			cout<<"Reply "<<ipComparar<<" bytes=32 time=37ms TTL46"<<endl;
			cout<<"Reply "<<ipComparar<<" bytes=32 time=37ms TTL46"<<endl;
			cout<<"Reply "<<ipComparar<<" bytes=32 time=37ms TTL46"<<endl;
			cout<<"Reply "<<ipComparar<<" bytes=32 time=37ms TTL46"<<endl;
			cout<<""<<endl;
			cout<<"Ping statics for "<<ipComparar<<":"<<endl;
			cout<<"	Packets: Sent = 4, recieved = 4, lost = 0 (0% loss) "<<endl;
		}else{
			cout<<""<<endl;
			cout<<"Pingin to "<<ipComparar<<" with 32 bytes of data"<<endl;
			cout<<"Reply "<<ipComparar<<" Destination host unreachable"<<endl;
			cout<<"Reply "<<ipComparar<<" Destination host unreachable"<<endl;
			cout<<"Reply "<<ipComparar<<" Destination host unreachable"<<endl;
			cout<<"Reply "<<ipComparar<<" Destination host unreachable"<<endl;
			cout<<""<<endl;
			cout<<"Ping statics for "<<ipComparar<<":"<<endl;
			cout<<"	Packets: Sent = 4, recieved = 4, lost = 0 (0% loss)"<<endl;
		}
		}else{
			cout<<""<<endl;
			cout<<"Pingin to "<<ipComparar<<" with 32 bytes of data"<<endl;
			cout<<"Request timed out"<<endl;
			cout<<"Request timed out"<<endl;
			cout<<"Request timed out"<<endl;
			cout<<"Request timed out"<<endl;
			cout<<""<<endl;
			cout<<"Ping statics for "<<ipComparar<<":"<<endl;
			cout<<"	Packets: Sent = 4, recieved = 0, lost = 4 (100% loss) "<<endl;
		}
	}
	// final
	
	delete[] arreglo;
	delete[] ipObtenida1;
	delete[] ipObtenida2;
	delete[] ipObtenida3;
	delete[] ipObtenida4;

}
void Red::imprimir(){
	for(int i = 0; i < ListaPC.size(); i++){
		cout<<i<<", "<<ListaPC[i]->getIp()<<", "<<ListaPC[i]->getNetmask()<<", "<<ListaPC[i]->getHostname()<<endl;
	}
}