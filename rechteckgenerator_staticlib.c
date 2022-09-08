#include<stdio.h>

void generator(int amp, int frequenz, int zp, FILE *output_stream) {

    while(zp<(frequenz/2)) {
        fprintf(output_stream, "%ds:%dV \n",zp,amp);
        zp++;
    }
    while(zp<frequenz) {
        fprintf(output_stream, "%ds: -%dV \n",zp,amp);
        zp++;
    }
}

