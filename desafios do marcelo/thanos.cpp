#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	unsigned seed = time(0);
	srand(seed);
	
	
	int thanos, tentativas, position, rest;
	string nivel;
	bool derrota = true;
	
	cout << "selecione a dificuldade, entre f, m ou d:  ";
	cin >> nivel;
	
	//escolha no nível
	if (nivel == "f"){
		tentativas = 15;
		//cout << tentativas << endl;
	}
	else if (nivel == "m"){
		tentativas = 10;
		//cout << tentativas << endl;
	}
	else if (nivel == "d"){
		tentativas = 4;
		//cout << tentativas << endl;
	}
	
	cout << "Era uma vez, em um mundo antigo, um jovem visionário com o sonho de equilibrar o universo, Thanos então precisava reunir as 6 joias do infinito." << endl;
	Sleep(1500);
	cout << "thanos batalhou arduamente até encontrar 5 das seis joias, a última estava em posse do landerna verde, thanos então o desafiou, porém ele era muito forte." << endl;
	Sleep(1500);
	cout << "sua única alternativa foi se esconder em uma planeta antigo sem qualquer resquício de vida, thanos então cria, por meio da joia da realidade, 50 arvores ilusórias." << endl;
	Sleep(1500);
	cout << "ele então se esconde em uma das árvores, agora o lanterna verde deve acha-lo e salvar o universo, entretanto, suas chances são limitadas, caso ele erre todas as vezes a joia entrará em posse de thanos. " << endl; 
	Sleep(1500);
	cout << "o feitiço de thanos permite que o lanterna tenha "<< tentativas << " chances, por isso ele deve escolher sabiamente" << endl;
	Sleep(1500);
	
	position = rand()%49;
	
	for (int x = 0; x < tentativas; x++){
		rest = tentativas - x;
		cout << "você ainda tem " << rest << " tentativas" << endl << endl;
		
		cout << "onde está o thanos ? ";
		cin >> thanos;
		thanos--;
		
		if (thanos > 49 || thanos < 0){
			cout << "o thanos está entre as árvores 1 e 50, tente novamente" << endl;
			x--;
		}
		else {
			if (thanos == position){
				cout << "você encontrou o thanos!" << endl << endl;
				derrota = false;
				break;
			}
			else if (thanos > position){
				cout << "thanos está mais para a esquerda" <<endl << endl;
			}
			else {
				cout << "thanos está mais para a direita" << endl << endl;
			}
		}
		thanos = 0;
	}
	
	if (derrota == true){
		cout << "você perdeu, metade dos seres vivos foram eliminados, até uma outra vida amigo..." << endl;
		cout << "ele estava na árvore " << position;
		Sleep(10000);
	}
	else{
		cout << "parabéns você salvou a vida!" ;
		Sleep(10000);
	}
	
}
