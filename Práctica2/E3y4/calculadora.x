struct numeros{ 				  /* structure of the parametersof the functions */
	int a;
	int b;
};

program CALCULADORA_PROG{
	version CALCULADORA_VERS{
		int SUMA(numeros) = 1;		  /* procedure number = 1 */
	}=1;					  /* version number = 1 */
}=0x20000001;					  /* proram number = 0x20000001 */
						  /* 0x20000000 - 0x3ffffffffor users */
