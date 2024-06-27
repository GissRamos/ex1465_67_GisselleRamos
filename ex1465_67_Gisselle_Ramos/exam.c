#include <stdio.h>
#include <unistd.h> //libreria función write
#include <stdlib.h>

int main(int argc, char **argv){

    char *p;
    int j =;
    int i= 0;
    int k=0;
    char *m = "exam";   
 
    while(j != argc){
        p = argv[j];
        while(p[i] != '\0'){
            i++;
        }
        i=0;
        j++; 
        
    }
   
        while(m[k] != '\0'){
            write(1,&m[k],1);
            k++;
        }
        write(1,"\n",1);
    
}