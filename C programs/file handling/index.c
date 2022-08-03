#include <stdio.h>
#include "openfile.h"

int main(){
	FILE *fp;
	char path[100];
	printf("Enter the path of the file to open: - ");
	gets(path);
	openfile(fp,path,'r');
//	getch();
	return 0;
	
}



