#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/apidisk.h"
#include "../include/t2fs.h"

#define TAM_MAX 400

int main(int argc, char *argv[]){

	unsigned char bufferRead[TAM_MAX]; 
	unsigned char bufferWrite[TAM_MAX];
	
	printf("ola\n");

	int i = read_sector(0, bufferRead); 
	
	if (i != 0)
		printf("erro ao ler setor\n");

	printf("ola2\n");

	printf("buffer = %d\n", *bufferRead);
	
	//if (write_sector (unsigned int sector, bufferWrite) != 0)
		//printf("erro ao escrever setor\n");
	

	
	return 0;
}
