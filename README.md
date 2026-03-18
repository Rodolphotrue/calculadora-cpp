#incluir <iostream>
#incluir <locale.h>
usando namespace padrão;
	
inteiro principal(){
	
	definirlocal(LC_ALL,"");
	
	inteiroopcao;
	flutuadornumero1, numero2, resultado;
	
	fazer{
		
		cout <<"----- Escolha uma operação -----\n\n";
		cout <<"1 Soma:\n";
		cout <<"2 Subtítulo:\n";
		cout <<"3 Multiplicação:\n";
		cout <<"4ª Divisão:\n";
		cout <<"0 Finalizar:\n";
		cin >> opcao;
		
		se(opcao >=1&& opcao <=4){
		
		cout <<"Inserir o primeiro número:\n";
		cin >> numero1;
		
		cout <<"Inserir o segundo número:\n";
		cin >> numero2;
		
		
		trocar(opcao){
			
			caso 1:
				
				resultado = numero1 + numero2;
					cout <<"O resultado da operação solicitada é"<< resultado <<"\n";
			
			quebrar;	
				
			caso 2:
				
				resultado = numero1 - numero2;
				cout <<"O resultado da operação solicitada é"<< resultado <<"\n";
			
			quebrar;
					
			caso 3:
				
				resultado = numero1 * numero2;
					cout <<"O resultado da operação solicitada é"<< resultado <<"\n";
			
			quebrar;
					
			caso 4:
				
				se(número2 ==0){
					
					cout <<"um número válido:";
						
					
				}outro
				{
					
					resultado = numero1 / numero2;
					cout <<"O resultado da operação solicitada é"<< resultado <<"\n";
					
				}
			
			quebrar;
		}
		}outro se(opcao !=0){
			
			cout <<"Escolha uma operação válida:";
		}
	
	}enquanto(opcao !=0);
		
		cout <<"Encerrado";
			
	
		
	sistema("pausa");
	retornar 0;
}
