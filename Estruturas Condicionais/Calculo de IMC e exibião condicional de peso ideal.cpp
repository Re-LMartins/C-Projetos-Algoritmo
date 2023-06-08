/*programa em linguagem C que leia o peso e a altura de uma pessoa,
calcule o seu IMC (Índice de Massa Corpórea) e verifique se ela está na faixa de peso
ideal (conforme IMC). Caso a pessoa esteja acima do peso, o algoritmo deve informar
quantos quilos ela deve perder. Ou, caso a pessoa esteja abaixo do peso, o algoritmo
deve informar quantos quilos ela deve ganhar; a fim de que a pessoa possa ficar na
faixa limite do seu peso ideal. Considerando que as faixas podem ser classificadas: IMC
abaixo de 18, está abaixo do peso; IMC entre 18 e 25, está com o peso ideal; IMC
acima 25, está acima do peso.*/

#include<stdio.h>
int main(){
float peso = 0.0;
float altura = 0.0;
float imc = 0.0;
float pesonec= 0.0;

printf("Digite seu peso: ");
scanf("%f" ,&peso);
printf("Agora digite sua altura: ");
scanf("%f" ,&altura);

imc = peso/(altura*altura);

if (imc >= 25)
{
pesonec=24.9*(altura*altura);
pesonec=peso-pesonec;
printf("voce esta acima do peso e precisa perder %.1f kg",pesonec);

}
else if (imc < 25 && imc > 18)
{
printf("voce esta no peso ideal");

}
if (imc <= 18)
{
pesonec=18.1*(altura*altura);
pesonec=pesonec-peso;
printf("voce esta abaixo do peso e precisa ganhar %.1f kg",pesonec);

}

    return 0;
}
