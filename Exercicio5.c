#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 60

int main(){
char frase[tam], fraseInv[tam];
int j = 0;
printf("Forneca a frase a ser invertida: ");
setbuf(stdin,NULL);
fgets(frase,tam,stdin);

for(int i = (strlen(frase)-1); i >= 0; i--){
    fraseInv[j] = frase[i];
    j++;
}
printf("resultado: %s",fraseInv);

}
