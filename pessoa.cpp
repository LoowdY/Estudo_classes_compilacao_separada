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
		//construtor padrão
		Pessoa::Pessoa(){}
			
		//construtor com parâmetros para definiçãoi de nome do objeto
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
