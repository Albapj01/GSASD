/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"

int *
suma_1_svc(numeros *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	 
	 result = argp->a + argp->b;

	return &result;
}

int *
resta_1_svc(numeros *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	 
	 result = argp->a - argp->b;

	return &result;
}

int *
multiplicacion_1_svc(numeros *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	 
	 result = argp->a * argp->b;

	return &result;
}

int *
division_1_svc(numeros *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	 
	 if(argp->b != 0){
	 	result = argp->a / argp->b;
	 }

	return &result;
}
