#include <iostream>
#include <string>
#include <cmath>
//incluindo arquivo .hpp (com nome da classe padrao)
#include "pessoa.hpp"
using namespace std;

class Pessoa
{
	private:
		string nome;
		
	public:
		//construtor padr�o
		Pessoa::Pessoa(){}
			
		//construtor com par�metros para defini��oi de nome do objeto
		Pessoa::Pessoa(string oNome)
		{
			nome = oNome;
		}
		string getNome()
		{
			return nome;
		}
		
		//outro construtor com parametros
		Pessoa(const Pessoa& oObjeto)
		{
			
		}		
	
	
};
