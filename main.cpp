#include <iostream>
using namespace std;
#define A 4
int main() {
 
 float notas[A];
 float soma = 0, media = 0;

 //Entrada
 for(int i = 0; i < A; i++){
   cout<<"Informe a "<<i+1<<" nota: ";
   cin>>notas[i];cout<<endl;
 }
 //Processamento
 for(int i = 0; i < A; i++){
   soma += notas[i]; 
 }
 media = soma / A;

 //Cond. de saida
 if(media >= 7){
   cout<<"\tAluno Aprovado"<<endl;
 }else if(media >= 5){
   cout<<"\tAluno de Exame Final"<<endl;
 }else{
   cout<<"\tAluno Reprovado";
 }
 return 0;
}