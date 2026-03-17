#include <iostream>
#include <locale.h>

using namespace std;

	
int main(){
	
	setlocale(LC_ALL,""); 
	
	int opcao;
	float numero1, numero2, resultado;
	
	do{
		
		cout << "----- Escolha uma operação -----\n\n";
		cout << "1 Soma: \n";
		cout << "2 Subtração: \n";
		cout << "3 Multiplicação: \n";
		cout << "4 Divisão: \n";
		cout << "0 Finalizar: \n";
		cin >> opcao;
		
		if(opcao >= 1 && opcao <= 4){
		
		cout << "Inserir o primeiro numero: \n";
		cin >> numero1;
		
		cout << "Inserir o segundo numero: \n";
		cin >> numero2;
		
		
		switch(opcao){
			
			case 1:
				
				resultado = numero1 + numero2;
					cout << "O resultado da operação solicitada é " << resultado << "\n";
			
			break;	
				
			case 2:
				
				resultado = numero1 - numero2;
				cout << "O resultado da operação solicitada é " << resultado << "\n";
			
			break;
					
			case 3:
				
				resultado = numero1 * numero2;
					cout << "O resultado da operação solicitada é " << resultado << "\n";
			
			break;
					
			case 4:
				
				if(numero2 == 0){
					
					cout << "Insira um numero valido: ";
						
					
				}else
				{
					
					resultado = numero1 / numero2;
					cout << "O resultado da operação solicitada é " << resultado << "\n";
					
				}
			
			break;
		}
		}else if(opcao != 0){
			
			cout << "Escolha uma operação valida: ";
		}
	
	}while(opcao != 0);
		
		cout << "Encerrado";
			
	
		

	system("pause");
	return 0;
}
