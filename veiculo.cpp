#include <iostream>
#include <string>
#include <cmath>
//incluindo arquivo .hpp (com nome da classe padrao)
#include "veiculo.hpp"
using namespace std;

class Veiculo{
	
	private:
		//variáveis básicas (atributos)
		string fabrica;
		int cilindros;
		Pessoa proprietario;
		
	public:
		
		//funções set e get;
		//parametro deve ser passado, respectivamente, nome da fabrica (string),
		//cilindros (int) e nome da pessoa (Pessoa)
		
		//construtor padrão
		Veiculo::Veiculo(){}
		
		//função Veiculo já será construtora e set ao mesmo tempo. Construtor com parametros
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




