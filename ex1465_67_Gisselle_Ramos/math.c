#include <stdio.h>
#include <unistd.h> //libreria función write
#include <stdlib.h>


int main(int argc, char **argv){
    
    char *m = "error"; 
    int k;
    int l;
    char *c = argv[1];
    int x;
    int p;
    int valores[10];

        if(argc == 2){
            x = atoi(c); 
            for(int i = 1; i < 11; i++){
                p = x*i;

                if(p % 2 == 0){
                    printf("%i",i); printf("%s", " "); printf("%s", "x"); printf("%s", " ");printf("%d",x); printf("%s", "="); printf("%s", " ");
                    printf("%i",p); printf("%s", "  <Par>");
                    
                }else{
                    printf("%i",i); printf("%s", " "); printf("%s", "x"); printf("%s", " ");printf("%d",x); printf("%s", "="); printf("%s", " ");
                    printf("%i",p); printf("%s", "  <Impar>");
                    
                }
                write(1,"\n",1);



            }
        }else{
            k=0;
            while(m[k] != '\0'){
                write(1,&m[k],1);
                k++;
            }
            write(1,"\n",1);

        }

        l=0;
        while(valores[l] != '\0'){
                printf("%i ",valores[l]);
                l++;
            }
            write(1,"\n",1);



}    