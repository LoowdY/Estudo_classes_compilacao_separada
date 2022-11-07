#include <iostream>
#include <string>
#include <cmath>
//incluindo arquivo .hpp (com nome da classe padrao)
#include "caminhao.hpp"
#include "veiculo.hpp"
#include "pessoa.hpp"
using namespace std;

class Caminhao
{
	private:
		
		double carga;	//toneladas
		int tracao; 	//libras
		
	public:	
		
		//funcao construtor padrao
		Caminhao::Caminhao(){}
		
		//função set(construtora e set)
		Caminhao::Caminhao(Pessoa p, string f,double c, int t, double c, int cl, double c)
		{	
			proprietario = p;
			cilindros = cl;
			fabrica = f
			carga = c;
			tracao = t;
		}
		// funcao get carga
		double getCarga()
		{
			return carga;
		}
		// funcao get tração
		int getTracao()
		{
			return tracao;
		}
		// funcao get proprietario
		Pessoa getProprietario()
		{
			return proprietario
		}
		// funcao get cilindros
		int getCilindros()
		{
			return cilindros
		}
		// funcao get fabrica
		string getFabrica()
		{
			return fabrica;
		}
};


