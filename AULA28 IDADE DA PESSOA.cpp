#include <stdio.h>
#include <stdlib.h>

//precisa melhorar sistema de nascimento pra dar a opção do passado e do futuro de acorodo com a data que o individuo colocar//

// a = ano atual | an = ano de nascimenrto | id = idade da pessoa
int a, an, id, X;

int main() 
{
	printf ("Em que ano estamos? ");
	scanf("%d", &a);
	printf("Em que ano voce nasceu? ");
	scanf("%d", &an);   
	
	id = a - an; 	 
	X= a;
	 // Esse "IF" é para a configuração do ano de nascimento//
	if (an > 2020 || an < 1920)
		{
			printf("Por um acaso o senhor veio do futuro?? \n ");
			printf(" RECOLOQUE OS DADOS \n");
			printf("----------------------- \n");
			
			printf ("Em que ano estamos? ");
			scanf("%d", &a);
			printf("Em que ano voce nasceu? ");
			scanf("%d", &an); 
		}
	// Esse "IF é para a configuração do anoa tual //
	if (a > 2020 || a < 1920)
		{
			a = 2020;
			id = a - an; 
			printf (" nos nao estamos em %d \n", X);
			printf (" Por isso o ano foi reajustado para 2020 \n");
			// Exit(1);  << Para finalizar o codigo //
		}
 	// Esse "IF" and "Else" é para a configuração de autorização de idade
	if(id > 18 )
	{ 
	 	 	printf("voce tem %d", id );
	 	 	printf(" anos e tem apermissao para acessar o conteudo");
	}else{
			printf(" Voce tem %d", id);
			printf(" anos e eh de menor por isso seu acesso foi negado");
	}	
		
}
