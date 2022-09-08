#include<stdio.h>
#include<rechteckgenerator_staticlib.h>

void generator(int amp, int frequenz){
	int i;
	while(i<(frequenz/2)){
		printf("%s",amp);
	}
	while(i<frequenz){
		printf("- %s",amp);
	}
}

