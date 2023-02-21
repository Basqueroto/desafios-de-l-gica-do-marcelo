#include<iostream>
#include <Windows.h>
#include <algorithm>
#define size 200
using namespace std;

//criação da base de dados
char nome[size] [50];
int ap[size];

//variável de operação
string op, pe; 

//controle de inicio e fim do programa
bool fim = false;
bool pass = false;
bool conti = false;


void cadastrar();
void elevador();

bool number(std::string const &str)
{
    return !str.empty() && str.find_first_not_of("0123456789") == std::string::npos;
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	while (fim == false){
		cout << " seja bem vindo ao controle do elevador do condomínio 2 dev's, selecione uma das opções" << endl;
		cout << " cadastrar ou elevador ";
		cin >> op;
		
		if (op == "cadastrar"){
			cout << " por favor informe a senha: " << endl;
			cin >> op;
			if (op == "adm"){
				cadastrar();
			}
			else {
				cout << " você errou" << endl << endl;
			}
		}
		else if (op == "elevador"){
			elevador();
		}
		else{
			cout << "selecione uma opção válida" << endl << endl;
		}
		
	}
}

void cadastrar(){
	setlocale(LC_ALL, "Portuguese");
	pass = false;
	static int line;
	while (pass == false){
		cout << " bem vindo ao cadastro, você quer cadastrar,listar ou voltar? ";
		cin >> op;
		
		if (op == "cadastrar"){
			conti = false;
			do {
				cout << " informe o nome " << endl;
				cin >> nome[line];
				cout << " informe o número do apartamento "<< endl;
				cin >> ap[line];
				cout << " quer fazer mais um cadastro? digite sim para continuar e nao para sair" << endl;
				cin >> op;
				line++;
				if (op == "sim"){
					conti = true;
				}
				else if (op == "nao"){
					conti = false;
				}
				else {
					cout << " digite uma opção válida" << endl << endl;
				}
			}while(conti == true);	
		}
		else if (op == "listar"){
			int i;
			cout << " vamos criar uma lista, um instante" << endl;
			Sleep(1500);
			for(i=0; i<size; i++){
				if (ap[i] > 0){
					cout << nome[i] << endl;
					cout << "número do ap " << ap[i] << endl;
				}
				else {
					break;
				}
			}
		}
		else if (op == "voltar"){
			pass = true;
		}
		else {
			cout << " por favor informe uma opção válida " << endl << endl;
		}	
	}
}

// andares 2, 4, 6, 8 e 10.
void elevador (){
	pass = false;
	int i;
	while (pass == false){
		cout << " por favor informe o nome e o número do apartamento que deseja:" << endl;
		cout << " informe seu nome: ";
		cin >> pe;
		
		cout << " informe o andar desejado: ";
		cin >> op;
		
		if (op == "2" || op == "4" || op == "6" || op == "8" || op == "10"){
			for (i=0; i<size; i++){
				if (nome[i] == pe){
					break;
				}
			}	
			if (ap[i] == 2 || ap[i] == 4 || ap[i] == 6 || ap[i] == 8 || ap[i] == 10){
				cout << " autorizado, pode entrar no andar " << op << endl << endl;
				pass = true;
			}
			else {
				cout << "acesso negado, você não pode acessar o andar " << op << endl << endl;
				pass = true;
			}
		}
		else if (number(op) == false){
			cout << "informe um número por favor" << endl << endl;
		}
		else {
			cout << " acesso permitido, pode entrar no andar " << op << endl << endl;
			pass = true;
		}
	}
}
