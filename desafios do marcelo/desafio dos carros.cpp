#include <iostream>
#include <Windows.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string carro, op;
	float decaiPo, decaiPe, decaiB, gasolina, etanol;
	bool po, pe, b, pass = false;
	
	decaiPo = 0.5;
	decaiPe = 1.2;
	decaiB = 0.2;
	
	cout << " seja bem vindo a 2 dev's consecion�ria!" << endl;
	Sleep(1500);
	cout << " esse sistema foi criado para avaliar a m�dia de quil�metros rodados, individualizado para cada cliente" << endl << endl;
	Sleep(1500);
	
	while (pass == false){
		cout << " vamos come�ar, por favor informe o modelo do seu carro, bmw, audi, ferrari ou fiat: ";
		cin >> carro;
		
		if (carro == "bmw"){
			gasolina = 9.8;
			etanol = 8.9;
			pass = true;
		}
		else if (carro == "audi"){
			gasolina = 12.8;
			etanol = 10.9;
			pass = true;
		}
		else if (carro == "ferrari"){
			gasolina = 13.8;
			etanol = 12.9;
			pass = true;
		}
		else if (carro == "fiat") {
			gasolina = 26.8;
			etanol = 24.9;
			pass = true; 
		}
		else {
			cout << " por favor informe um modelo v�lido" << endl << endl;
			carro = "";
		}
	}
	pass = false;
	
	cout << " tudo bem, o seu carro modelo " << carro << " tem como m�dia inicial: " << endl;
	Sleep(1500);
	cout << " gasolina: " << gasolina << endl;
	cout << " etanol: " << etanol << endl << endl;
	Sleep(1500); 
	cout << " ent�o vamos come�ar! preciso que responda algumas perguntas, assim posso lhe oferecer um valor mais preciso" << endl;
	cout << " preciso que responda com sim ou n�o de acordo com a op��o." << endl << endl;
	
	while (pass == false){
		cout << " vamos l�! o seu carro ter� mais de 4 portas? ele perder� " << decaiPo << " de efici�ncia ";
		cin >> op;
		
		if (op == "sim"){
			po = true;
			gasolina = gasolina - decaiPo;
			etanol = etanol - decaiPo;
			pass = true;
		}
		else if (op == "nao"){
			pass = true;
		}
		else {
			cout << " informe uma op��o v�liada" << endl << endl;
		}
		op = "";
	}
	pass = false;
	
	while (pass == false){
		cout << " �timo, agora, seu carro viajar� com mais de 2 pessoas? ele perder� " << decaiPe << " de efici�ncia ";
		cin >> op;
		
		if (op == "sim"){
			pe = true;
			gasolina = gasolina - decaiPe;
			etanol = etanol - decaiPe;
			pass = true;
		}
		else if (op == "nao"){
			pass = true;
		}
		else {
			cout << " informe uma op��o v�liada" << endl << endl;
		}
		op = "";
	}
	pass = false;
	
	while (pass == false){
		cout << " entendi, por fim, o seu carro ter� um bagageiro? ele perder� " << decaiB << " de efici�ncia ";
		cin >> op;
		 
		if (op == "sim"){
			b = true;
			gasolina = gasolina - decaiB;
			etanol = etanol - decaiB;
			pass = true;
		}
		else if (op == "nao"){
			pass = true;
		}
		else {
			cout << " informe uma op��o v�liada" << endl << endl;
		}
		op = "";
	}
	pass = false;
	
	cout << " perfeito, obrigado pela ajuda! j� complilamos os resultados, observe" << endl << endl;
	Sleep(1500);
	
	if (po == true){
		cout << " seu carro ter� mais de 4 portas" << endl;
	}
	else {
		cout << " seu carro n�o ter� de 4 portas" << endl;
	}
	
	Sleep(1500);
	
	if (pe == true){
		cout << " seu carro viajar� com mais de 2 pessoas" << endl;
	}
	else {
		cout << " seu carro n�o viajar� com mais de 2 pesoas" << endl;
	}
	
	Sleep(1500);
	
	if (b == true){
		cout << " seu carro contar� com um bagageiro" << endl << endl;
	}
	else {
		cout << " seu carro n�o conter� com um bagageiro" << endl << endl;
	}
	Sleep(1500);
	
	while (pass == false){
		cout << " voc� quer ver o valor de qual combust�vel? gasolina, etanol ou ambos: ";
		cin >> op;
		
		if (op == "gasolina"){
			cout << " ok, a m�dia para a gasolina foi de: " << gasolina << endl << endl;
			pass = true;
		}
		else if (op == "etanol"){
			cout << " ok, a m�dia para o etanol foi de: " << etanol << endl << endl;
			pass = true;
		}
		else if (op == "ambos") {
			cout << " ok, a m�dia de ambos foi de: " << endl;
			cout << " gasolina: " << gasolina << endl;
			cout << " etanol: " << etanol << endl << endl;
			pass = true;
		}
		else {
			cout << " informe uma op��o v�ilida" << endl << endl;
		}
	}
	pass = false;
	
	cout << " obrigado por confiar na 2 dev's carros e programas" << endl;
	cout << " macerlo e igor agradecem muito, volte sempre!" << endl;
}
