/*

 */

#include "suma.h"

int *
suma_1_svc(dupla_int *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
    printf("El procedimiento ha sido invocado remotamente\n");
    printf("Server is working\n");
    printf("parameters: %d, %d\n", argp->a, argp->b);
    result = argp->a+argp->b;
    printf("Result = %d\n", result);

	return &result;
}
