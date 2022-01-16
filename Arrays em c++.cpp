#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {

int v1[] = {1,2,3,4,5,6,7,8,9};
int v2[] = {3,8,9,6,8,5};
int v3[] = {4,8,6,1,3,7};

int alvo1, controle=0; 
int alvo2, controle1=0; 
int alvo3, controle2=0; 

int par1[9], par2[9];
int par3[6], par4[6];
int par5[6], par6[6];



printf("Digite o valor alvo para o Array {1,2,3,4,5,6,7,8,9}: ");
scanf("%d",&alvo1);
for(int i = 0; i < sizeof(v1)/sizeof(int); i++){
	for(int j = 0; j < sizeof(v1)/sizeof(int); j++){
		if(v1[i] + v1[j] == alvo1 && v1[i] != v1[j]){
			par1[controle] = v1[i];
            par2[controle] = v1[j];
            controle++;
		}
    }
}
for(int i = 0; i < controle; i++){ 
    printf("Pares: %d %d \n", par1[i], par2[i]);
}


printf("Digite o valor alvo para o Array {3,8,9,6,8,5}: ");
scanf("%d",&alvo2);
for(int i = 0; i < sizeof(v2)/sizeof(int); i++){
	for(int j = 0; j < sizeof(v2)/sizeof(int); j++){
		if(v2[i] + v2[j] == alvo2 && v2[i] != v2[j]){
			par3[controle1] = v2[i];
            par4[controle1] = v2[j];
            controle1++;
		}
    }
}
for(int i = 0; i < controle1; i++){ 
    printf("Pares: %d %d \n", par3[i], par4[i]);
}

printf("Digite o valor alvo para o Array {4,8,6,1,3,7}: ");
scanf("%d",&alvo3);
for(int i = 0; i < sizeof(v3)/sizeof(int); i++){
	for(int j = 0; j < sizeof(v3)/sizeof(int); j++){
		if(v3[i] + v3[j] == alvo3 && v3[i] != v3[j]){
			par5[controle2] = v3[i];
            par6[controle2] = v3[j];
            controle2++;
		}
    }
}
for(int i = 0; i < controle2; i++){ 
    printf("Pares: %d %d \n", par5[i], par6[i]);
}

}