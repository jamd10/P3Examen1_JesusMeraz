#ifndef PC_H
#define PC_H
#include <string>
using namespace std;
class PC
{
	private:
		string ip;
		string netmask;
		string hostname;
	public:
	 PC();
	 ~PC();
	 PC(string, string, string);
	 string getIp();
	 string getNetmask();
	 string getHostname();
	 void setIp(string);
	 void setNetmask(string);
	 void setHostname(string);
	 string toString();
};

#endif