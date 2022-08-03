
#include <string.h>
void openfile(FILE *f, char path[30],char mode){
	char ch;
	char buffer[255];
	f=fopen(path,&mode);
	if(f==NULL){
		printf("Error file Opening!");
	}
	else{
		while(1){
		ch=fgetc(f);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}
	fclose(f);
	}
}
