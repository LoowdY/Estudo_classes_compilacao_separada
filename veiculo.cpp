#include <iostream>
#include <string>
#include <cmath>
//incluindo arquivo .hpp (com nome da classe padrao)
#include "veiculo.hpp"
using namespace std;

class Veiculo{
	
	private:
		//vari�veis b�sicas (atributos)
		string fabrica;
		int cilindros;
		Pessoa proprietario;
		
	public:
		
		//fun��es set e get;
		//parametro deve ser passado, respectivamente, nome da fabrica (string),
		//cilindros (int) e nome da pessoa (Pessoa)
		
		//construtor padr�o
		Veiculo::Veiculo(){}
		
		//fun��o Veiculo j� ser� construtora e set ao mesmo tempo. Construtor com parametros
		Veiculo::Veiculo (string f, int c, Pessoa p)
		{
			fabrica = f;
			cilindros = c;
			proprietario = p;
		}
		string Veiculo::getFabrica()
		{
			return fabrica;
		}
		Pessoa Veiculo::getProprietario()
		{
			return proprietario;
		}
		int Veiculo::getCilindros()
		{
			return cilindros;
		}	 	 	 
		
};




