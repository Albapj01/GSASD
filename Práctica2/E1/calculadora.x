struct numeros{ 				  /* structure of the parametersof the functions */
	int a;
	int b;
};

program CALCULADORA_PROG{
	version CALCULADORA_VERS{
		int SUMA(numeros) = 1;		  /* procedure number = 1 */
		int RESTA(numeros) = 2;	  /* procedure number = 2 */
		int MULTIPLICACION(numeros) = 3; /* procedure number = 3 */
		int DIVISION(numeros) = 4;       /* procedure number = 4 */
	}=1;					  /* version number = 1 */
}=0x20000001;					  /* proram number = 0x20000001 */
						  /* 0x20000000 - 0x3ffffffffor users */
