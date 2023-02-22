#include<iostream>
#include <Windows.h>

using namespace std;
int pc[10];
int pp[10];
int to[10];
int so[3];

int i, op, e, h1, h2, h3;

bool pass = false;


main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << " thanos voltou a atacar o planeta terra, a liga da justiça precisa selecionar os 3 melhores heróis" << endl;
	cout << " o Batman elaborou um sistema capaz de os selecionar entre os 10 heróis da liga." << endl;
	cout << " ele precisa que você liste alguns heróis e depois informe sua pontuação em combate e em poderes, em escala de 0 a 100" << endl << endl;
	Sleep(1500);
	
	while (pass == false){
		cout << " por favor informe quantos heróis serão ";
		cin >> op;
		if (op > 10 || op < 1){
			cout << " informe um número de 1 a 10 " << endl << endl;
		}
		else {
			pass = true;
		}
	}
	pass = false;
	Sleep(1500);
	
	cout << "ótimo, agora informe os pontos de combate e de poder para cada herói " << endl;
	
	for (i=1; i<=op; i++){
		e = i;
		pass = false;
		
		while (pass == false){
			cout << " Digite a pontuação de habilidades de combate do herói " << e << " ";
			cin >> pc[i];
			if (pc[i] > 100 || pc[i] < 0){
				cout << "digite um número entre 0 e 100" << endl << endl;
			}
			else {
				pass = true;
			}
	    }
	    pass = false;
	    while (pass == false){
			cout << " Digite a pontuação de poderes especiais do herói " << e << " ";
			cin >> pp[i];
			if (pp[i] > 100 || pc[i] < 0){
				cout << "digite um número entre 0 e 100" << endl << endl;
			}
			else {
				pass = true;
			}
		}
	}
	
	for (i=0; i<=op; i++){
		to[i] = pc[i] + pp[i];
	}
	e = 0;
	i = 0;
	pass = false;	
	while (pass == false){
		
		if (to[i] > so[0]){
			so[0] = to[i];
			h1 = i;
			i = i - 1;
		}
		 if (to[i] > so[1] && so[1] < so[0]){
			so[1] = to[i];
			h2 = i;
			i = i - 1;
		}
		 if (to[i] > so[2] && to[i] < so[1] && to[i] < so[0]){
			so[2] = to[i];
			h3 = i;
		}
		if (e >= op){
			pass = true;
		}
		e++;
		i = e;	
	}
	
	cout << " esses são os 3 heróis mais poderosos" << endl << endl;
	Sleep(1500);
	
	cout << " Héroi " << h1 << " pontuação de: " << so[0] << endl;
	cout << " Héroi " << h2 << " pontuação de: " << so[1] << endl;
	cout << " Héroi " << h3 << " pontuação de: " << so[2] << endl;
	
	
	
	
	
	
	
}
