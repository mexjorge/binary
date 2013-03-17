
/* Programa: newton.c Descripci�n: Muestra un men� para calcular la aceleraci�n, fuerza o masa, conforme a la segunda ley de Newton */
/* Jorge Gonzalez  Tapia */
/* MIT.EDU  */
 /*directivas de preprocesador*/
#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 

/*Funci�n Principal

DENTRO DE ESTA FUNCION SE TIENE QUE CONTEMPLAR TODAS LAS SUBRUTINAS DE CADA UNO DE LOS PROCESOS QUE INTEGRRAN EL  PROYECTO

*/ 
main ()

 { 
 /*Declaraci�n de variables*/ 
 char opc; float f,m,a;
  /*Ciclo para repetir el men� mientras que la opci�n no sea salir*/
   do {
       /*Impresi�n del men�*/
	    system ("cls");/*Instrucci�n para borrar la pantalla*/ 
		printf ("\n Realiza Calculos trabajando la 2a. Ley de Newton"); 
		printf ("\n ------------------------------------------------"); 
		printf ("\n a. Fuerza. \n b. Aceleracion \n c. Masa \n d. Salir"); 
		printf ("\n Elige una opcion: "); 
		/*Instrucci�n que lee una variable de tipo car�cter*/ 
		opc=getche(); /*Estructura de Selecci�n M�ltiple*/ 
		switch (opc) { 
		 				case 'a': printf ("\n\nIngresa la masa: "); 
							scanf("%f",&m); printf ("\nIngresa la aceleracion: ");
							scanf("%f",&a);
					    	f=m*a;
					  	    printf("\nLa fuerza es %.2f\n\n\t",f);
					   	    system ("pause");
					    	break; 
						case 'b': printf ("\n\nIngresa la fuerza: "); 
						          scanf("%f",&f); printf ("\nIngresa la masa: ");
								  scanf("%f",&m);
								  a=f/m; 
								  printf("\nLaaceleracion es %.2f\n\n\t",f);
								  system ("pause"); 
								  break;
						case 'c': printf ("\n\nIngresa la fuerza: ");
						          scanf("%f",&f);
								  printf ("\nIngresa la aceleraci�n: "); 
								  scanf("%f",&m); 
								  m=f/a; 
								  printf("\nLa masa es %.2f\n\n\t",f); 
								  system ("pause");
								  break; 
						case 'd': printf ("\n\nAdios\n");
						          system ("pause");
								   break; 
								   default: printf ("\n\n Opcion Invalida");
		}/*Fin dela Selecci�n M�ltiple*/
	}while (opc!='d');
}/*Fin*/



