#include <cstdio>
#include <cstring>
#define Abs(x) (((x)>(0))?(x):(-x))
#define TAM 200

using namespace std;

int main() {
   int i,j,casos,tam1,tam2,iguais,maior,dif,aux,prox;
   char s1[TAM],s2[TAM],tmp[TAM],sa[TAM],sb[TAM],saida[TAM],extra[2];
   strcpy(tmp,"00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");

   while (scanf("%s %s",s1, s2)){
        if ((s1[0]=='0')&&(s2[0]=='0')) break;
        tam1=strlen(s1);
        tam2=strlen(s2);
        dif = Abs((tam1-tam2));
        sa[0]='\0';
        strncat(sa,tmp,dif);

        if (tam1 > tam2) {
            maior = tam1;
            strcat(sa,s2);
            strcpy(sb,s1);
        }else{
            maior = tam2;
            strcat(sa,s1);
            strcpy(sb,s2);
        }

        prox=0;
        saida[maior]='\0';
        for (j=maior-1;j>-1; j--){
              aux=sa[j]-48 + sb[j]-48 +prox;
              saida[j]=(aux%10)+'0';
              if ( aux >= 10 ) {
                 prox=1;
              } else {
                 prox=0;
              }
        }
        extra[0]='\0';
        if (prox==1) {
            extra[0]='1';
            extra[1]='\0';
        }

        strcat(extra,saida);
        printf("%s\n",extra);
   }
   return 0;
}
