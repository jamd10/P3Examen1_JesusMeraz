#include "PC.h"
#include <string>
#include <iostream>
using namespace std; 
PC::PC(){
	
}
PC::~PC(){
	
}
PC::PC(string ip, string netmask, string hostname){
	this->	ip = ip;
	this->	netmask = netmask;
	this->	hostname = hostname;
	
}
string PC::getIp(){
	return 	this-> ip;
}
void PC::setIp(string ip){
	this-> ip = ip;
}
string PC::getNetmask(){
	return 	this-> netmask;
}
void PC::setNetmask(string netmask){
	this-> netmask = netmask;
}

string PC::getHostname(){
	return 	this-> hostname;
}
void PC::setHostname(string hostname){
	this-> hostname = hostname;
}
string PC:: toString(){
	return ip + ", " + netmask+ ", "+ hostname + ", ";
}