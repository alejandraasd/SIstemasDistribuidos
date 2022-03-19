/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"
#include <stdio.h>
#include <stdlib.h>


void
calculadora_prog_1(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	struct datos  suma_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, CALCULADORA_PROG, UNO, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
    printf("Inserte dos nùmeros: ");
    scanf("%d %d", &suma_1_arg.a, &suma_1_arg.b);
    result_1 = suma_1(&suma_1_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
printf("EL resultado de la SUMA es: %d\n", *result_1);
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


void
calculadora_prog_2(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	struct datos  resta_2_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, CALCULADORA_PROG, DOS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
    printf("Inserte dos nùmeros: ");
    scanf("%d %d", &resta_2_arg.a, &resta_2_arg.b);
	result_1 = resta_2(&resta_2_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
printf("EL resultado de la RESTA es: %d\n", *result_1);
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


void
calculadora_prog_3(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	struct datos  multiplicacion_3_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, CALCULADORA_PROG, TRES, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
    printf("Inserte dos numeros: \n");
    scanf("%d %d", &multiplicacion_3_arg.a, &multiplicacion_3_arg.b);
	result_1 = multiplicacion_3(&multiplicacion_3_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
printf("EL resultado de la MULTIPLICACION es: %d\n", *result_1);
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


void
calculadora_prog_4(char *host)
{
	CLIENT *clnt;
	int  *result_1;
	struct datos  division_4_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, CALCULADORA_PROG, CUATRO, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
    printf("Inserte dos numeros: \n");
    scanf("%d %d", &division_4_arg.a, &division_4_arg.b);

	result_1 = division_4(&division_4_arg, clnt);
	if (result_1 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
printf("EL resultado de la DIVISION es: %d\n", *result_1);
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	calculadora_prog_1 (host);
	calculadora_prog_2 (host);
	calculadora_prog_3 (host);
	calculadora_prog_4 (host);
exit (0);
}