#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
void escolherChave(int *chave){
        int viz;
  printf("escolha sua Chave de criptografia");
  scanf("%d",&viz);     
    *chave=viz;    
}





int main()
{
  char alfabeto[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char palavra[200];
  char criptografado[200];
  char pronto[]= {"criptografia.txt"};
   int tam=0;
   int i,j;
   int opcao;
   int sobra=0;
   int chave=0;
    
  printf("deseja criptografar '1', decifrar '2'");
   scanf("%d", &opcao);
    escolherChave(&chave);
     fflush(stdin); 

if(opcao==1){ 
         
  printf("entre com a frase/palavra\n");
   fgets(palavra,200,stdin);  
     tam = strlen(palavra);
  for(i=0;i<tam;i++){
   for(j=0;j<26;j++){
    if(palavra[i]==' '){
      criptografado[i]=' ';      
                       }       
    else if(palavra[i]==alfabeto[j]){
          if(j+chave >= 26){
           sobra=(j+chave)-26;     
            criptografado[i]=alfabeto[sobra];     
        }else{      
           criptografado[i]=alfabeto[j+chave];
             }
                                    }                            
                   }       
          
          
                   }
printf("%s \n",criptografado);

 FILE *file = fopen(pronto, "w");
 if(file){
         for(i = 0; i < tam; i++){         
            fprintf(file, "%c",criptografado[i]);
        }
        }
        fclose(file);
          }


if(opcao==2){ 
        
  char cripto[200];
   int tamanho;
    FILE *file;
     file =fopen("criptografia.txt","r");
  
  while(fgets(cripto, 200, file) != NULL)  
  tamanho = strlen(cripto);
 for(i=0;i<tamanho;i++){
   for(j=0;j<26;j++){
    if(cripto[i]==' '){
      criptografado[i]=' ';      
      }else if(cripto[i]==alfabeto[j]){
      if(j-chave < 0){
        sobra=(j-chave)+26;     
        criptografado[i]=alfabeto[sobra];     
      }else{      
      criptografado[i]=alfabeto[j-chave];
           }}}}
  
  for(i=0;i<criptografado[i]!='\0';i++){
    printf("%c",criptografado[i]);      
          
  }
}
return 1993;
}

