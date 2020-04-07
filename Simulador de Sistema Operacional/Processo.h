#pragma once
#include <string.h>
#include <string>

using namespace std;

class Processo
{
private:
	int id;
	int tempoTotal; // em segundos
	int tempoRestante; // em segundos
	string estado;
public:
	Processo(int id, int tempoTot, string estado) {
		this->id = id;
		tempoTotal = tempoTot;
		tempoRestante = tempoTot;
		this->estado = estado;
	}
	void setId(int id) {
		this->id = id;
	}
	int getId() {
		return id;
	}
	void setTempoTotal(int tempoTotal) {
		this->tempoTotal = tempoTotal;
	}
	int getTempoTotal() {
		return tempoTotal;
	}
	void setTempoRestante(int tempoRestante) {
		this->tempoRestante = tempoRestante;
	}
	int getTempoRestante() {
		return tempoRestante;
	}
	void setEstado(int estado) {
		this->estado = estado;
	}
	string getEstado() {
		return estado;
	}

};

