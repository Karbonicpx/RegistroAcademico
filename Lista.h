#ifndef LISTA_H
#define LISTA_H

#include "Ponteiro.h"
#include <iostream>
#include <fstream>
using std::fstream;
using std::ifstream;
using std::ios;
using std::cerr;
using std::cout;
using std::endl;

template<class TIPO>
class Lista {

private:
	Ponteiro<TIPO>* pPrim;
	Ponteiro<TIPO>* pAtual;
	// virtual void virtuPuro() = 0; // Método virtual puro, sou obrigado a implementar por herança
public:
	Lista();
	~Lista();
	void IncluirInfo(TIPO* info);
	void Exibir();
	void Gravar(const char* nomeTipo = "Null");
	void Recuperar(const char* nomeTipo = "Null");
};

template<class TIPO>
Lista<TIPO>::Lista()
{
	// Inicializa os ponteiros
	pProx = nullptr;
	pPrim = nullptr;
}
template<class TIPO>
Lista<TIPO>::~Lista()
{
	// Destrói a lista
	Lista<TIPO>* aux = pProx;
	while (aux != nullptr) {
		Lista<TIPO>* temp = aux;
		aux = aux->GetProx();
		delete temp;
	}
	pProx = nullptr;
	pPrim = nullptr;
}

template<class TIPO>
void Lista<TIPO>::IncluirInfo(TIPO* info)
{
	// Inclui um elemento na lista
	Ponteiro<TIPO>* aux = new Ponteiro<TIPO>;
	aux->SetNome(info->GetNome());
	aux->SetInfo(info);

	if (pPrim == nullptr) {
		pPrim = aux;
		pAtual = aux;
	}
	else {
		pAtual->SetProx(aux);
		pAtual = pAtual->GetProx();
	}
}

template<class TIPO>
void Lista<TIPO>::Exibir()
{
	// Exibe os elementos da lista
	Lista<TIPO>* aux = pPrim;
	if (aux == nullptr) {
		cout << "Nenhum elemento cadastrado." << endl;
		return;
	}
	while (aux != nullptr) {
		cout << "| " << aux->GetInfo() << endl;
		aux = aux->GetProx();
	}
	cout << endl;
}

template<class TIPO>
void Lista<TIPO>::Gravar(const char* nomeTipo)
{
	// Grava os elementos da lista em um arquivo
	fstream arquivo("Lista[" + nomeTipo + "].txt", ios::out);
	Lista<TIPO>* aux = pPrim;
	if (aux == nullptr) {
		cout << "Nenhum elemento cadastrado." << endl;
		return;
	}
	while (aux != nullptr) {
		arquivo << aux->GetInfo() << endl;
		aux = aux->GetProx();
	}
	arquivo.close();
}

template<class TIPO>
void Lista<TIPO>::Recuperar(const char* nomeTipo)
{
	// Recupera os elementos da lista de um arquivo
	ifstream arquivo("Lista[" + nomeTipo + "].txt", ios::in);
	if (!arquivo) {
		cerr << "Erro ao abrir o arquivo." << endl;
		return;
	}
	TIPO* info;
	while (arquivo >> info) {
		Incluir(info);
	}
	arquivo.close();
}
#endif
