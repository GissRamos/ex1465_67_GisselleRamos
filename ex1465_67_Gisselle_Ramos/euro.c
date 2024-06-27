#include <stdio.h>
#include <unistd.h> //libreria función write
#include <stdlib.h>

int main(int argc, char **argv){
    char *m = "Arguments Error"; 
    char e[ ] = "Spain";
    char c[ ] = "Croatia";
    char i[ ] = "Italy";
    char A[ ] = "Albania";
    char *p;
    int k;
    int t;
    int r;
    int h;
    int d;
    int n;
    int g;
    int b;

    if(argc > 1 && argc < 6){
        if(argc == 2){
            p = argv[1];
            t=0;
            //r=0;
            while(p[t] != '\0' ){
                if(p[t] == e[t]){
                    r = 0;
                }else{
                    r = 1;
                    printf("%s ", "Arguments Error");
                    break;  
                }
                t++;
            }
            //printf("%d ", r);        
        }if((argc ==3) && (r == 0)){
            p = argv[2];
             n=0;
            while((p[n] != '\0') ){
                if(p[n] == c[n]){
                    h = 0;
                }else{
                    h = 1;
                    printf("%s ", "Arguments Error"); 
                    break;
                }
            n++;
            }
             
            if(h == 0){
                printf( "1");
            }
                        
        } if((argc == 4) && (h == 0)){
            p = argv[3];
            g=0;
            while(p[g] != '\0'){
                if(p[g] == i[g]){
                    d = 0;
                }else{
                    d = 1; 
                    printf("%s ", "Arguments Error"); 
                    break;   
                }
            g++;
            }
            printf("%i ", d);  
            /*if(s==0){
                //printf( "1");
            }*/
        } if((argc ==5) && (d==0)){
            p = argv[4];
            t=0;
            while(p[t] != '\0'){
                if(p[t] == A[t]){
                     b = 0;
                }else{
                     b = 1; 
                    printf("%s ", "Arguments Error"); 
                    break;
                }
                t++;
            }
            printf("%i ", b);  
        }
 
    } else{
        k=0;
        while(m[k] != '\0'){
            write(1,&m[k],1);
            k++;
        }
        write(1,"\n",1);

    }
}    