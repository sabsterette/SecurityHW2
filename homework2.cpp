#include <iostream>
#include <stdlib.h> 
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void checkForFile() {
	FILE *fp = fopen("PE-1.txt", "a+");
	char *buff = new char[200];
	if (fp == NULL) {
		fputs("I want to learn PE file formats!", fp);
	}
	else {
		fgets(buff, 200, fp);
		if (strstr(buff, "I want to learn PE file formats!")) {
			printf("%s\n", buff);
		}
		else {
			fputs("I want to learn PE file formats!", fp);
		}
	}
}


int main(int argc, char** argv) {
	checkForFile();
	return 0;
}
