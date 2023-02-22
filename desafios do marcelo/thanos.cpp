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
	
	//escolha no n�vel
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
	
	cout << "Era uma vez, em um mundo antigo, um jovem vision�rio com o sonho de equilibrar o universo, Thanos ent�o precisava reunir as 6 joias do infinito." << endl;
	Sleep(1500);
	cout << "thanos batalhou arduamente at� encontrar 5 das seis joias, a �ltima estava em posse do landerna verde, thanos ent�o o desafiou, por�m ele era muito forte." << endl;
	Sleep(1500);
	cout << "sua �nica alternativa foi se esconder em uma planeta antigo sem qualquer resqu�cio de vida, thanos ent�o cria, por meio da joia da realidade, 50 arvores ilus�rias." << endl;
	Sleep(1500);
	cout << "ele ent�o se esconde em uma das �rvores, agora o lanterna verde deve acha-lo e salvar o universo, entretanto, suas chances s�o limitadas, caso ele erre todas as vezes a joia entrar� em posse de thanos. " << endl; 
	Sleep(1500);
	cout << "o feiti�o de thanos permite que o lanterna tenha "<< tentativas << " chances, por isso ele deve escolher sabiamente" << endl;
	Sleep(1500);
	
	position = rand()%49;
	
	for (int x = 0; x < tentativas; x++){
		rest = tentativas - x;
		cout << "voc� ainda tem " << rest << " tentativas" << endl << endl;
		
		cout << "onde est� o thanos ? ";
		cin >> thanos;
		thanos--;
		
		if (thanos > 49 || thanos < 0){
			cout << "o thanos est� entre as �rvores 1 e 50, tente novamente" << endl;
			x--;
		}
		else {
			if (thanos == position){
				cout << "voc� encontrou o thanos!" << endl << endl;
				derrota = false;
				break;
			}
			else if (thanos > position){
				cout << "thanos est� mais para a esquerda" <<endl << endl;
			}
			else {
				cout << "thanos est� mais para a direita" << endl << endl;
			}
		}
		thanos = 0;
	}
	
	if (derrota == true){
		cout << "voc� perdeu, metade dos seres vivos foram eliminados, at� uma outra vida amigo..." << endl;
		cout << "ele estava na �rvore " << position;
		Sleep(10000);
	}
	else{
		cout << "parab�ns voc� salvou a vida!" ;
		Sleep(10000);
	}
	
}
