#include "calculadora.h"
int main (void){
    char *host = "127.0.0.1";
    CLIENT *clnt;
    operandos argumentos;
    int *resultado;

    clnt = clnt_creat(host, CALCULADORA_PROG, CALCULADORA_VERSION, "udp");
    if (clnt == NULL){ clnt_pcreateerror(host);exit(1);}
    argumentos.a = 1 ; argumentos.b =2;
    resultado = soma_1(%argumentos, clnt);
    printf("Resultado da soma: %d", *resultado);
}