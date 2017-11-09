#include <stdio.h>
#include <stdlib.h>

void decode(char *srce) {
    char chr;
    int  len;
    int  encl=0;
    for(;;) {
        chr = *srce++;
        if(chr == '\n') {
            fputc(chr, stdout);
            break;
        }
        if(!encl && chr == '1') {
            encl = 1;
            chr = *srce++;
        }
        if(encl) {
            if(chr == '1') {
                if(*srce == '1') {
                    fputc(chr, stdout);
                    srce++;
                } else {
                    encl = 0;
                }
            } else 
                fputc(chr,stdout);
        } else {
            len = chr - '0';
            chr = *srce++;
            for(int i=0; i<len; i++)
                fputc(chr, stdout);
        }
    }
}

void process() {
    char *srce = NULL;
    size_t len = 0;
    size_t read = 0;
    size_t lines = 0;
    fscanf(stdin,"%ld\n", &lines);
    for(size_t i=0; i<lines; i++) { 
        read = getline(&srce, &len, stdin);
        if (read == -1)
            break;
        decode(srce);
    }   
}

int main(int argc, char **argv) {
    process();
    return 0;
}
