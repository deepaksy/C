#include<stdio.h>

int main(){
    FILE *fp;
    fp=fopen("notes.txt","r");
    char ch[900];
    if(fp==NULL){
        printf("Error Opening file");
    }
    else{
        while(fgets(ch,900,fp)!=NULL){
            printf("%s",ch);
        }
    }
    fclose(fp);
    return 0;
}