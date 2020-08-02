#include <stdio.h>
#include <stdlib.h>

//precisa melhorar sistema de if's para quando o programa entar em um 'lop' do "if" os outros continuarem funcionando //

//a = ano atual |an = ano de nascimenrto |id = idade da pessoa |Y = esta guardando id para o 1° "IF" |X = esta guardando "a" para o 2° "IF"
int a, an, id, X, Y;

int main() 
{
	printf ("Em que ano estamos? ");
	scanf("%d", &a);
	printf("Em que ano voce nasceu? ");
	scanf("%d", &an);   
	
	id = a - an; 	 
	X= a;
	Y= id;
	 // Esse 1°"IF" é para a configuração do ano de nascimento//
	if (an >= 2015)
		{
			printf("Voce eH muito novo!!! \n ");
			printf(" RECOLOQUE OS DADOS \n");
			printf("----------------------- \n");
			
			printf ("Em que ano estamos? ");
			scanf("%d", &a);
			printf("Em que ano voce nasceu? ");
			scanf("%d", &an); 
			id = a - an; 
		}else if(an < 1920){
			printf(" Se num tem %d anos!!!Num eh possivel!!! \n ", Y);
			printf(" RECOLOQUE OS DADOS \n");
			printf("----------------------- \n");
			
			printf ("Em que ano estamos? ");
			scanf("%d", &a);
			printf("Em que ano voce nasceu? ");
			scanf("%d", &an); 
			id = a - an;
		}
	
	// Esse 2°"IF é para a configuração do ano atual //
	if (a > 2020 || a < 1920)
		{
			a = 2020;
			id = a - an; 
			printf (" nos nao estamos em %d \n", X);
			printf (" Por isso o ano foi reajustado para 2020 \n");
			// Exit(1);  << Para finalizar o codigo //
		}
 	// Esse 3°"IF" and "Else" é para a configuração de autorização de idade
	if(id > 18 )
	{ 
	 	 	printf("voce tem %d", id );
	 	 	printf(" anos e tem apermissao para acessar o conteudo");
	}else{
			printf(" Voce tem %d", id);
			printf(" anos e eh de menor por isso seu acesso foi negado");
	}	
		
}
