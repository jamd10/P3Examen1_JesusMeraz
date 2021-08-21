#ifndef RED_H
#define RED_H
#include <string>
#include <vector>
#include "PC.h"
class Red
{
	private:
	vector <PC*> ListaPC;
	public:
	Red();
	~Red();
	void ping(string, int);
	void agregarPC(PC*);
	vector<PC*> getVector();
	void imprimir();
};

#endif