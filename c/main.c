#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//LINGUAGEM C / DEV
int main(int argc, char *argv[]) {
	
	int mes1, mes2, mes3, mes4, mes5, TempoRepos, LoteRepos, Estoquemin, Estoquemax, Estoqueatual,VendaMediaDiaria;
	char produto[10];
	
	printf("INFORME O NOME DO PRODUTO:");
	scanf("%s", produto);
	
	printf("INFORME O VALOR DE VENDA DO MES 1:");
	scanf("%i", &mes1);
	
	printf("INFORME O VALOR DE VENDA DO MES 2:");
	scanf("%i", &mes2);
	
	printf("INFORME O VALOR DE VENDA DO MES 3:");
	scanf("%i", &mes3);
	
	printf("INFORME O VALOR DE VENDA DO MES 4:");
	scanf("%i", &mes4);
	
	printf("INFORME O VALOR DE VENDA DO MES 5:");
	scanf("%i", &mes5);
	
	VendaMediaDiaria = ((mes1+mes2+mes3+mes4+mes5)/3)/25; 
	
	printf("SUA VENDA MEDIA DIARIA E: %i \n", VendaMediaDiaria);
	
	printf("INFORME O ESTOQUE ATUAL:");
	scanf("%i",&Estoqueatual);
	
	printf("INFORME O TEMPO DE REPOSITACAO:");
	scanf("%i",&TempoRepos);
	
	printf("INFORME O LOTE DE REPOSICAO:");
	scanf("%i",&LoteRepos);
	
	Estoquemin = VendaMediaDiaria * TempoRepos;
	Estoquemax = Estoquemin + LoteRepos; 
	
	printf("ESTOQUE ATUAL DO PRODUTO %s e: %i \n", produto, Estoqueatual);
	printf("ESTOQUE MINIMO DO PRODUTO %s e: %i \n", produto, Estoquemin);
	printf("ESTOQUE MAXIMO DO PRODUTO %s e : %i \n", produto, Estoquemax);
	
	Estoquemin = Estoquemin - Estoqueatual; 
	
	if(Estoqueatual < Estoquemin){
		printf("REABASTECER ESTOQUE MINIMO COM: %i\n", Estoqueatual);
	}else 
		if(Estoqueatual < Estoquemax){
		printf("ESTOQUE OK COM: %i\n", Estoquemax);
	}else
		if(Estoqueatual >= Estoquemax ){
			printf("ESTOQUE CHEIO COM: %i\n", Estoquemax);
		}
	
	
	return 0;
}
