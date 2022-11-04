#include <iostream>

using namespace std;

int main() {
	// trabalhando as variavies
	string userList[5] = {"sh4rk", "mark"};
	string passwdList[5] = {"123", "321"};
	string user;
	string password;

	// entrada de dados
	cout << "User: ";
	cin >> user;
	cout << "Senha: ";
	cin >> password;
	

	// bloco de validação
	if (user == userList[0] && password == passwdList[0]) {
		cout << "valido";
	}
	else if (user == userList[1] && password == passwdList[1]) {
		cout << "valido";
	}
	else if (user != userList[0] || user != userList[1]) {
		string newUser;
		string newPassword;

		// criar new user
		cout << "Usuario ou senha invalidos" << endl;
		cout << "Registre-se" << endl;
		cout << "user: ";
		cin >> user;
		cout << "Senha: ";
		cin >> password;

		userList[2] = user;
		passwdList[2] = password;
		system("cls");

		// checkagem newuser part 2
		cout << "user: ";
		cin >> user;
		cout << "Senha: ";
		cin >> password;

		if (user == userList[2] && password == passwdList[2]) {
			cout << "valido";
		} 
		else {
			cout << "Login Invalido. Volte ao inicio...";
		}
	}
	return 0;
}