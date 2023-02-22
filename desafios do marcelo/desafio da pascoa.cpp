#include <iostream>
#include <Windows.h>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

	string ovo1[7] = "nada";
	string op;
	float preco, precoM, preto, branco, leite;
	bool pass, retorno, fim, volta = false;
	int num;  
	
	
bool number(std::string const &str)
{
    return !str.empty() && str.find_first_not_of("0123456789") == std::string::npos;
}

void montar(){
	cout << " você está na seção de montagem de ovos" << endl;
	Sleep(1500);
	
	while (volta == false){
		pass = false;
		op = "";
		
		cout << " para onde vamos? tamanho, recheio, complemento, quantidade ou voltar? ";
		cin >> op;
		
		if (op == "adm"){
			volta = true;
		}
		
		if (op == "tamanho"){
			while (pass == false){
				cout << " selecione o tamanho do ovo, grande, medio ou pequeno: ";
				cin >> op;
				if (op == "grande" || op == "medio" | op == "pequeno"){
					ovo1[0] = op;
					pass = true;	
				}
				else if (op == "voltar"){
					pass = true;
				}
				else{
					cout << " digite uma opção válida" << endl << endl;
				}
			}
			cout << " tamanho definido para " << ovo1[0] << endl << endl;
		}
		else if (op == "recheio"){
			while (pass == false){
				cout << " selecione o recheio do ovo, choco preto, branco ou leite: ";
				cin >> op;
				if (op == "preto" || op == "branco" | op == "leite"){
					ovo1[2] = op;
					while (pass == false){
						cout << " mais algum recheio ou nao? ";
						cin >> op;
						if (op == "preto" && op != ovo1[2] || op == "branco" && op != ovo1[2] || op == "leite" && op != ovo1[2]){
							ovo1[1] = "2";
							ovo1[3] = op;
							pass = true;	
						}
						else if (op == "nao"){
							ovo1[1] = "1";
							ovo1[3] = "nada";
							pass = true;
						}
						else {
							cout << "selecione uma opção válida" << endl << endl;
						}
					}
				}
				else if (op == "voltar"){
					pass = true;
				}
				else{
					cout << " digite uma opção válida" << endl << endl;
				}
			}
			cout << "recheio 1 foi definido para " << ovo1[2] << " e recheio 2 para " << ovo1[3] << endl << endl;
		}
		else if (op == "complemento"){
			while (pass == false){
				cout << " selecione o complemento, kitkat e/ou mm: ";
				cin >> op;
				if (op == "kitkat" || op == "mm"){
					ovo1[4] = op;
					while (pass == false){
						cout << " mais algum complemento ou nao? ";
						cin >> op;
						if (op == "kitkat" && op != ovo1[4] || op == "mm" && op != ovo1[4]){
							ovo1[1] = "2";
							ovo1[5] = op;
							pass = true;	
						}
						else if (op == "nao"){
							ovo1[5] = "nada";
							pass = true;
						}
						else {
							cout << "selecione uma opção válida" << endl << endl;
						}
					}
				}
				else if (op == "voltar"){
					pass = true;
				}
				else{
					cout << " digite uma opção válida" << endl << endl;
				}
			}
			cout << "complemento 1 foi definido para " << ovo1[4] << " e complemento 2 para " << ovo1[5] << endl << endl;
		}
		else if (op == "quantidade"){
			while (pass == false){
				cout << " selecione a quantidade de ovos: ";
				cin >> op;
				if (number(op) == true){
					ovo1[6] = op;
					pass = true;	
				}
				else if (op == "voltar"){
					pass = true;
				}
				else{
					cout << " digite um número" << endl << endl;
				}
			}
			cout << " quantidade definida para" << ovo1[6] << endl << endl;
		}
		else if (op == "voltar"){
			if (ovo1[0] == "nada"){
				cout << "parece que você esqueceu de definir o tamanho" << endl;
			}
			if (ovo1[2] == "nada"){
				cout << "parece que você esqueceu de definir o recheio" << endl;
			}
			if (ovo1[5] == "nada"){
				cout << "parece que você esqueceu de definir a quantidade" << endl;
			}
			if(ovo1[0] != "nada" && ovo1[2] != "nada" && ovo1[5] != "nada"){
				volta = true;
			}
		}
		else {
			cout << " digite uma opção válida" << endl << endl;
		}		
	}
	cout << " seu ovo é então: " << endl;
	cout << " um ovo " << ovo1[0] << " com recheio 1 " << ovo1[2] << " e recheio 2 " << ovo1[3] << " com complemento" << ovo1[4] << " complemento 2 " << ovo1[5] << " quantidade " << ovo1[6] << endl << endl;
	volta = false;	
}

void finalizar(){
	preco = 0;
	precoM = 0;
	op = "";
	
	volta = false;
	cout << " vamos começar a finalização do pedido, para cancelar basta usar o comando voltar"<< endl << endl;
	cout << " vamos computar o preço do ovo, um instante" << endl;
	
	if(ovo1[0] == "grande"){
		preco = preco + 23.95;
	}
	else if (ovo1[0] == "medio"){
		preco = preco + 12.9;
	}
	else if  (ovo1[0] == "pequeno"){
		preco  = preco + 7.8;
	}
	
	if (ovo1[2] == "preto" || ovo1[3] == "preto"){
		if (ovo1[1] == "2"){
			preco = preco + preto /2;
		}
		else {
			preco = preco + preto;
		}
	}
	if (ovo1[2] == "branco" || ovo1[3] == "branco"){
		if (ovo1[1] == "2"){
			preco = preco + branco /2;
		}
		else {
			preco = preco + branco;
		}
	}
	if (ovo1[2] == "leite" || ovo1[3] == "leite"){
		if (ovo1[1] == "2"){
			preco = preco + leite /2;
		}
		else {
			preco = preco + leite;
		}
	}
	
	if (ovo1[4] == "kitkat" || ovo1[5] == "kitkat"){
		preco = preco + 4.67;
	}
	if (ovo1[4] == "mm" || ovo1[5] == "mm"){
		preco = preco + 5.43;
	}
	
	istringstream(ovo1[6]) >> num;
	precoM = preco * num;
	
	cout << " pronto! o preço unitário foi de: " << preco <<"R$" << endl;
	cout << " com " << ovo1[6] << " unidades fica: " << precoM << "R$" << endl << endl;
	
	//vai ser presente?
	while (pass == false && retorno == false){
		cout << " vai ser para presente? responta com sim ou nao ";
		cin >> op;
		
		if(op == "sim"){
			cout << " então será para presente" << endl << endl;
			preco = preco + 2.5;
			pass = true;
		}
		else if (op == "nao"){
			cout << " então não será para presente" << endl << endl;
			pass = true;
		}
		else if (op == "voltar"){
			retorno = true;
		}
		else {
			cout << " utilize uma expressão válidade" << endl;
		}
	}
	pass = false;
	//entrega
	while (pass == false && retorno == false){
		cout << " vai ser para entregar? responta com sim ou nao ";
		cin >> op;
		
		if(op == "sim"){
			cout << " então será para entrega" << endl << endl;
			preco = preco + 5;
			pass = true;
		}
		else if (op == "nao"){
			cout << " então não será para entrega" << endl << endl;
			pass = true;
		}
		else if (op == "voltar"){
			retorno = true;
		}
		else {
			cout << " utilize uma expressão válida" << endl;
		}
	}
	pass = false;
	precoM = preco * num;

	//pagamento
	while (pass == false && retorno == false){
		cout << " o valor total deu " << precoM << endl;
		cout << " como será o pagamento? cartao (+3,30r$) ou pix (-10%)" << endl;
		cin >> op;
		
		if (op == "cartao"){
			precoM = precoM + 3.30;
			cout << " ótimo! no total deu " << precoM << "R$" << endl;
			pass = true;
			fim = true;
			break;
		}
		else if (op == "pix"){
			precoM = precoM * 0.9;
			cout << " ótimo! no total deu " << precoM << "R$" << endl;
			pass == true;
			fim = true;
			break;
		}
		else if (op == "voltar"){
			retorno = true;
		}
		else {
			cout << " informe uma opção válida" << endl;
		}
	}	
}


main(){
	setlocale(LC_ALL, "Portuguese");
	
	preto = 9.67;
	branco = 4.5;
	leite = 9.32;
	
	cout << " a pascoa está chegando, por que não levar um ovo de chocolate então?"<< endl;
	cout << " a dona maria oferece os melhores do mercado, faça um orçamento!" << endl << endl;
	Sleep(1500);
	fim = false;
	while (fim == false){
		retorno = false;
		cout << " para onde quer seguir? montar ou finalizar? ";
		cin >> op;
		
		if (op == "adm"){
			ovo1[0] = "grande";
			ovo1[1] = "2";
			ovo1[2] = "preto";
			ovo1[3] = "branco";
			ovo1[4] = "kitkat";
			ovo1[5] = "mm";
			ovo1[6] = "10";
		}
		
		if (op == "montar"){
			montar();
		}
		else if (op == "finalizar"){
			finalizar();
		}
		else {
			cout << " selecione uma opção válida" << endl << endl;
		}
		op = "";
	}
}
