#include <stdio.h>
#include <math.h>


void funcAgua(){
  float peso, consumo; 
  int idade;
  
  printf("Digite o seu peso atual em quilogramas(KG) e sua idade respectivamente:\n");
    scanf("%f %d", &peso, &idade);

    if(idade <=17){
      consumo = peso * 40;
      printf("Opa Jovem! Você deve consumir %d L de água!\nObs:Adicione 500ml a 1L de água se você pratica atividades físicas!!", consumo);
}   if(idade >= 18 && idade <=55){
      consumo = peso * 35;
      printf("Opa Jovem Senhor(a)! Você deve consumir %d L de água!\nObs:Adicione 500ml a 1L de água se você pratica atividades físicas!!", consumo);
    }if(idade >55 && idade <=65){
      consumo = peso * 30;
      printf("Opa Senhor(a)!Você deve consumir %d L de água!\nObs:Adicione 500ml a 1L de água se você pratica atividades físicas!!", consumo);
    }if(idade >= 66){
      consumo = peso * 25;
      printf("Opa Senhor(a)! Você deve consumir %d L de água!\nObs:Adicione 500ml a 1L de água se você pratica atividades físicas!!", consumo);
    }
    else{
      printf("A idade que você digitou não existe!!!");
    }

  }

int main(){
float escolha;
  
  printf("Seja bem-vindo(a)! Digite o número do que deseja e te ajudaremos a construir uma vida mais saudável:\n");

  printf("1- Quero apenas saber quanto de água devo tomar durante o dia.\n");
    
  printf("2- Quero apenas saber quantas proteinas devo ingerir no dia.\n");

  printf("3- Quero apenas saber o meu indíce de massa corporal(IMC).\n");

  printf("4- Quero apenas dicas/sujestões para montar um treino para perca de peso.\n");

  printf("5- Quero apenas dicas/sujestões para montar um treino para ganho de massa muscular.\n");

  printf("6- Quero dicas/sujestões para montar um treino para perca de peso e ganho de massa muscular.\n");

  printf("7- Quero tudo que foi ofertado(1,2,3,4,6)\n");

  printf("\n!!Observação: Caso queira mais de um(sem ser a opção 7) você deve escolher um de cada vez!!!");
  scanf("%f", &escolha);
  
switch(escolha <= 7){
  case 1:
       funcAgua();
    break;
  case 2:
       funcProtein();
    break;
  case 3:
      funcIMC();
    break;
  case 4:
      funcPercaP();
      break;
  case 5:
      funcGanhoMS();
      break;
  case 6:
      funcPPeMM();
  
  case 7:
      funcALL();
      break;

  default:
  printf("Essa opção é invalida!!!\n");
}
}
