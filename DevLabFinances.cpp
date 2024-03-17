
#include <iostream>

using namespace std;

int main() {

	string nome;
	string email;
	string senha;
	char condition;

	cout << "DevLab Corporation\n";

	cout << "Ja possui uma conta?\n";
	cout << "Digite s para sim ou n para nao. \n";
	cin >> condition;

	if (condition == 's') {

		cout << "Criar Conta:\n";

		cout << "Digite um nome de usuario: ";
		cin >> nome;

		cout << "Digite seu email: ";
		cin >> email;

		cout << "Crie uma senha: ";
		cin >> senha;
	}

	if (condition == 'n') {

		cout << "Insira seu usuario e senha\n";

		cout << "Usuario: ";
		cin >> nome;

		cout << "Senha: ";
		cin >> senha;

	}

	return 0;
}

