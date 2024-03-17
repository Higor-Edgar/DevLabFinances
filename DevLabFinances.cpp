#include <iostream>

using namespace std;

int main() {
	string name;
	string email;
	string password;
	char condition;

	cout << "DevLab Corporation\n";

	cout << "Ja possui uma conta?\n";
	cout << "Digite s para sim ou n para nao: ";
	cin >> condition;

	if (condition == 's') {
		cout << "Criar Conta:\n";

		cout << "Digite um nome de usuario: ";
		cin >> name;

		cout << "Digite seu email: ";
		cin >> email;

		cout << "Crie uma senha: ";
		cin >> password;
	}

	if (condition == 'n') {
		cout << "Insira seu usuario e senha\n";

		cout << "Usuario: ";
		cin >> name;

		cout << "Senha: ";
		cin >> password;
	}

	return 0;
}

