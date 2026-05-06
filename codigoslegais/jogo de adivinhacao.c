#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(NULL));
int num = (rand() % 100) + 1;
int chut;
printf("******************************vamos jogar um jogo de adivinhação******************************\n");
while(1){
printf("digite um numero:\n");
scanf("%d",&chut);
if(chut==num) {
printf("voce acertou o numero!\n");
break;
}else if(chut<num){
printf("muito baixo, digite outro numero:\n");
}else if(chut>num){
printf("muito alto, digite outro nu\n");
}
}
printf("ola so testando");
return 0;
}