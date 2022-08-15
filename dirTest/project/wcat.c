#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

<<<<<<< HEAD
    FILE *fin = fopen(argv[1],"r");

    if(fin == NULL){
        perror("fopen-fin fails: ");
        exit(EXIT_FAILURE);
    }

    char buffer[64];
    char *status = NULL;
    do{
        status = fgets(buffer, sizeof(buffer),fin);
        if(status != NULL){
            printf("%s",buffer);
        }
    }while(status !=NULL);
    fclose(fin);
=======
int main(int argc, char *argv[]){
>>>>>>> parent of c7da2aa (Updated wcat.c)
    exit(EXIT_SUCCESS);
}