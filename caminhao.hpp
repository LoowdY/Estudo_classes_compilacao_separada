#include <iostream>
#include <cmath>
#include <string>
//incluindo arquivo .hpp (com nome da classe padrao)
#include "veiculo.hpp"

using namespace std;

class Caminhao : public Veiculo
{
	private:
		
		double carga;	
		int tracao; 
		
	public:
		
		Caminhao();
		Caminhao(Pessoa p, string f,double c, int t, double c, int cl, double c)
		int getTracao();
		double getCarga();
		Pessoa getProprietario();
		int getCilindros();
		string getFabrica();
			
};
