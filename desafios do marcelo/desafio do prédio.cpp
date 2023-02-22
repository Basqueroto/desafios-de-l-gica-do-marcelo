#include<iostream>
#include <Windows.h>
#include <algorithm>
#define size 200
using namespace std;

//cria��o da base de dados
char nome[size] [50];
int ap[size];
int n;

//vari�vel de opera��o
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
		cout << " seja bem vindo ao controle do elevador do condom�nio 2 dev's, selecione uma das op��es" << endl;
		cout << " cadastrar ou elevador ";
		cin >> op;
		
		if (op == "cadastrar"){
			cout << " por favor informe a senha: " << endl;
			cin >> op;
			if (op == "adm"){
				cadastrar();
			}
			else {
				cout << " voc� errou" << endl << endl;
			}
		}
		else if (op == "elevador"){
			elevador();
		}
		else{
			cout << "selecione uma op��o v�lida" << endl << endl;
		}
		
	}
}

void cadastrar(){
	setlocale(LC_ALL, "Portuguese");
	pass = false;
	static int line;
	while (pass == false){
		cout << " bem vindo ao cadastro, voc� quer cadastrar,listar ou voltar? ";
		cin >> op;
		
		if (op == "cadastrar"){
			conti = false;
			do {
				cout << " informe o nome " << endl;
				cin >> nome[line];
				cout << " informe o n�mero do apartamento "<< endl;
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
					cout << " digite uma op��o v�lida" << endl << endl;
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
					cout << "n�mero do ap " << ap[i] << endl;
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
			cout << " por favor informe uma op��o v�lida " << endl << endl;
		}	
	}
}

// andares 2, 4, 6, 8 e 10.
void elevador (){
	pass = false;
	int i;
	while (pass == false){
		cout << " por favor informe o nome e o n�mero do apartamento que deseja:" << endl;
		cout << " informe seu nome: ";
		cin >> pe;
		
		cout << " informe o andar desejado: ";
		cin >> n;
		
		if (n == 2 || n == 4 || n == 6 || n == 8 || n == 10){
			for (i=0; i<size; i++){
				if (nome[i] == pe){
					break;
				}
			}	
			if (ap[i] == n){
				cout << " autorizado, pode entrar no andar " << n << endl << endl;
				pass = true;
			}
			else {
				cout << "acesso negado, voc� n�o pode acessar o andar " << op << endl << endl;
				pass = true;
			}
		}
		else if (number(op) == false){
			cout << "informe um n�mero por favor" << endl << endl;
		}
		else {
			cout << " acesso permitido, pode entrar no andar " << op << endl << endl;
			pass = true;
		}
	}
}
