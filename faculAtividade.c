#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, i, tempo, menorTempo;
	
	printf("Digite o núemro de corredores: ");
	scanf("%d", &n);
	
	menorTempo = 10000000;
	
		for (i = 0; i < n; i++) {
        printf("Digite o tempo do corredor %d em segundos: ", i + 1);
        scanf("%d", &tempo);

        if (tempo < menorTempo) {
            menorTempo = tempo;
        }
    }

    printf("O recorde da prova foi de %d segundos\n", menorTempo);



	return 0;
}