#include<stdio.h>
#include<math.h>
#include<getopt.h>
#include"rechteckgenerator_staticlib.h"

void help() {
    printf("Bitte nutzen Sie folgende Argumente \n");
    printf("-h: Hilfe \n");
    printf("-e: Angabe des Erwartungswerts (ganzzahlig) \n");
    printf("-s: Angabe der Standardabweichung (ganzzahlig) \n");
    printf("-a: Angabe der Anzahl an Werten die generiert werden sollen (ganzzahlig) \n");
}

int main(int argc, char* argv[]) {

	int opt;
	int amp;
	int frequenz;
	int ap;

	while((opt=getopt(argc, argv, "h:e:"))!=-1) {
		switch(opt) {
			case 'h':
				help();
				return 0;
				break;
			case 'e':
				printf("Amplitude (Ganzzahl):");
				scanf("%i",&amp);
				printf("Frequenz (in Hz, Ganzzahl):");
				scanf("%i",&frequenz);
				printf("Amplitude (Ganzzahl):");
				printf("Periodenanzahl (Ganzzahl):");
				scanf("%i",&ap);
				break;
		}
	}

	FILE *output_stream;
	output_stream = fopen("output_stream.txt","w");
	for(int zp=0;i<ap;i++) {
		generator(amp,frequenz,zp,output_stream.txt);
	}
	fclose(output_stream);
	return 0;
}
