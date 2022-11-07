#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Veiculo{
	
	private:
		string fabrica;
		int cilindros;
		Pessoa proprietario;
		
		public:
			Veiculo();
			Veiculo(string f, int c, Pessoa p);
			int getCilindros();
			Pessoa getProprietario();
			string getFabrica();
};


