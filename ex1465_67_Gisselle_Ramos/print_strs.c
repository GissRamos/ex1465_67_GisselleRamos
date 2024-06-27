#include <stdio.h>
#include <unistd.h> //libreria función write
#include <stdlib.h>

int main(int argc, char **argv){
  
    char *p;
    int j;
    int i= 0;
    int m = (argc-1) % 2;

  
    if(m != 0){
        j=1;
        while(j < argc){
            p = argv[j];
            while(p[i] != '\0'){
                 write(1,&p[i],1);
                i++;
            }
            write(1,"\n",1);
            i=0;
            j++; 
       }
    }else{
     for (j =1; j <= argc-1; j++){
        p =  argv[j];
        i=0;
           while(p[i] != '\0'){
              i++;       
            }
            write(1,"\n",1);
        if(j % 2 == 0){
            for (int k = i; k >= 0;k--){
               write(1, &p[k],1);
            }
        }else{
            i=0;
            p =  argv[j];
             while(p[i] != '\0'){
                write(1, &p[i],1);
              i++;       
            }
        }   
    }
        i=0;

}
}

       


 
    

        
