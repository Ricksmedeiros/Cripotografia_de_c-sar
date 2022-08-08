# Cripotografia_de_césar

Trabalho realizado para a matéria de Teoria da Computação ministrada por wellington Della Mura.

 **#historico** 

 Criptografia de César ou cifra de cesar, tem o nome como uma homenagem a Julio César que utilizava a tecnica para enviar mensagem de modo que os inimigos não pudessem identificar o conteudo da mensagem.A tecnica original consistia num sistema circular onde geralmente era utilizado três letras a frente da verdadeira que teria que estar no local,exemplo:

```
Normal:  ABCDEFGHIJKLMNOPQRSTUVWXYZ
Cifrado: DEFGHIJKLMNOPQRSTUVWXYZABC
```

**#introdução do codigo/trabalho.**

Para o trabalho foi realizado a linguagem C , e utilizando um sistema de criptografia onde o usuario define o numero da chave que ira fazer as trocas das letras. Utilizando representação por regEx *[a-z] ([a-z]* ε)* \\'\0'* sendo o \0 o estado final, pois toda frase/palavra/string tem sua terminologia em C ;

#explicação do codigo 

**1-->CRIPTOGRAFAR**

**1.1 -->usuario define as opcões de criptografar ou descriptografar o arquivo ,e a chave(numero de casas a frente que a letra ira tomar) que ira utilizar .**

`prin`tf("deseja criptografar '1', decifrar '2'");

scanf("%d", &opcao);escolherChave(&chave);`
     fflush(stdin);` 

   **1.2-->usuario define a palavra ou texto que ira ser decifrado** 

`pr`intf("entre com a frase/palavra\n");`
   fgets(palavra,200,stdin);  
     tam = strlen(palavra);`

**1.3-->sistema de criptografia: é dividido em três possibilidades**

**1º se a o estado/letra for "  "/vazio  ela sera representa por "  ''/vazio;*

**2º se a chave ultrapassar a letra Z, sera somado a posição do alfabeto+ a chave e feito uma subtração pelo numero total de letras do alfabeto (26)*

*o resultado dessa operação resultara na posição atual;*

**3ºse nenhuma das condições ja citadas forem satisfeitas é introduzido a palavra do alfabeto mais o numero da chave;*

  `f`or(i=0;i<tam;i++){

`
   for(j=0;j<26;j++){`

*1º    `if(pa`lavra[i]==' '){`
      criptografado[i]=' ';      
                       }`      

*2º  `else if(pa`lavra[i]==alfabeto[j]){`
          `if(j+chave >= 26){`
           sobra=(j+chave)-26;     
            criptografado[i]=alfabeto[sobra];`     

*3º    `}else{      `
           criptografado[i]=alfabeto[j+chave];`
             }  }   }  }`

**1.4-->Salvar o texto criptografado em um arquivo.texto.**

`FILE *fil`e = fopen(pronto, "w");

if(file){

for(i = 0; i < tam; i++){         
            fprintf(file, "%c",criptografado[i]);}}fclose(file);`
          }`

**2-->DESCRIPTOGRAFAR**

**2.1 O usuario definira a chave que ira utilizar**.

escolherChave(&chave);
     fflush(stdin); 

**2.2  Escolhendo o arquivo.**

O programa abri o arquivo criptofado e copia em uma String.

`FILE *file;`
     `file =fopen("criptografia.txt","r");`

  `while(fgets(cripto, 200, file) != NULL)  
  tamanho = strlen(cripto);`

**2.3 O sistema para descriptografar**

**1º se a o estado/letra for "  "/vazio  ela sera representa por "  ''/vazio;*

**2º se a chave ser inferior  a letra A, sera subtraido a posição do alfabeto com a chave chave e feito uma soma pelo numero total de letras do alfabeto (26) o resultado dessa operação resultara na posição atual;*

**3ºse nenhuma das condições ja citadas forem satisfeitas é introduzido a palavra do alfabeto menos o numero da chave;*

*1º`if(cr`ipto[i]=='  '){

​      criptografado[i]='  ';`   

  *2º    `}else i`f(cripto[i]==alfabeto[j]){

if(j-chave < 0){

`
        sobra=(j-chave)+26;     
        criptografado[i]=alfabeto[sobra];`   

  

*3º

`}else{    `  
      criptografado[i]=alfabeto[j-chave];`
           }}}}`

**2.4 impresão do texto na tela.**

`for`(i=0;i<criptografado[i]!='\0';i++){

`
    printf("%c",criptografado[i]);             
  }`

**3 Casos te texte.**

texte 1:

henrique medeiros  (utilizado a chave 3)

após critografia:khqultxh phghlurv 

teste 2: mortal kombat eh um jogo foda(utilizando a chave quatro)

qsvxep osqfex il yq nsks jshe 

teste 3:Descritografando a frase com o programa:

texto colado do terminal.

deseja criptografar '1', decifrar '2'

2
escolha sua Chave de criptografia

4

mortal kombat eh um jogo foda
--------------------------------
Process exited after 1.515 seconds with return value 1993
Pressione qualquer tecla para continuar. . .