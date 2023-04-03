#include <stdio.h>

int main(){
unsigned v[4];
unsigned int i;
v[0]=0;
v[1]=1;
v[2]=0;
v[3]=0;

printf("Informe o numero a ser procurado:");
scanf("%u", &v[3]);
for (i=0;i<v[3];i++){
    v[2] = v[0] + v[1];
    if(v[2] == v[3]){
        printf("\nValor:%u , composto por:%u + %u\n", v[3], v[0], v[1]);
        return 0;
    }
    v[0] = v[1];
    v[1] = v[2];
}
printf("O valor nao corresponde a sequencia fibonacci.\n");
return 0;
}
