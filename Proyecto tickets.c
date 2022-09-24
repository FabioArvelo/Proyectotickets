#include <stdio.h>
#include <stdlib.h>

//Fabio Arvelo A00109376

int cod[10] = { }, op, x=1, y, cont=1, codigo, existe=0;
char nombre[15][10] = { }, apellido[15][10] = { }, sexo[15][10] = { }, departamento[15][10] = { };

int codi[10] = { }, op1, x1=1, y1, cont1=1, codigo1, existe1=0;
char nombre2[15][10] = { }, apellido2[15][10] = { }, sexo2[15][10] = { }, departamento2[15][10] = { };

int numtick[10] = { }, codigoempleado[10] = { }, op2, x2=1, y2, cont2=1, codigo2, existe2=0;
char descrip[15][10] = { }, fecha[15][10] = { }, comentario[15][10] = { }, estado[15][10] = { }; 

int captura() {
	system("cls");
	printf("Registro de empleados \n \n");
	do {
		printf("Introduzca el codigo del empleado: ");
		scanf("%d",&cod[x]);
		fflush(stdin);
		printf("Introduzca el nombre del empleado: ");
		scanf("%s", &nombre[x]);
		fflush(stdin);
		printf("Introduzca el apellido del empleado: ");
		scanf("%s", &apellido[x]);
		fflush(stdin);
		printf("Introduzca el sexo del empleado: ");
		scanf("%s", &sexo[x]);
		fflush(stdin);
		printf("Introduzca el departamento del empleado: ");
		scanf("%s", &departamento[x]);
		fflush(stdin);
		printf("\n Presione -1- para continuar -0- Retornar...\n");	
		scanf("%d",&cont);
		x++;
	} while(cont == 1);
	menu();
	system("pause");
return(0);
}	

void reporte(){
	printf("Reporte de empleados \n \n");	
	printf("Codigo                Nombre                  Apellido 	  		Sexo 		Departamento\n");
	for(y=1;y<x;y++){
		printf("   %d                  %s                    %s               		 %s 		%s\n ", cod[y], nombre[y], apellido[y], sexo[y], departamento[y]);
	}
	
	system("pause");
	menu();
	return(0);
}



int captura2() {
	system("cls");
	printf("Registro de tecnicos \n \n");
	do {
		printf("Introduzca el codigo del tecnico: ");
		scanf("%d",&codi[x1]);
		fflush(stdin);
		printf("Introduzca el nombre del tecnico: ");
		scanf("%s", &nombre2[x1]);
		fflush(stdin);
		printf("Introduzca el apellido del tecnico: ");
		scanf("%s", &apellido2[x1]);
		fflush(stdin);
		printf("Introduzca el sexo del tecnico: ");
		scanf("%s", &sexo2[x1]);
		fflush(stdin);
		printf("Introduzca la especialidad departamento del tecnico: ");
		scanf("%s", &departamento2[x1]);
		fflush(stdin);
		printf("\n Presione -1- para continuar -0- Retornar...\n");	
		scanf("%d",&cont1);
		x1++;
	} while(cont1 == 1);
	menu();
	system("pause");
return(0);
}	

void reporte2(){
	printf("Reporte de tecnico \n \n");	
	printf("Codigo                Nombre                  Apellido 	  		Sexo 		Especialidad departamento\n");
	for(y1=1;y1<x1;y1++){
		printf("   %d                  %s                    %s               	 %s 			%s\n ", codi[y1], nombre2[y1], apellido2[y1], sexo2[y1], departamento2[y1]);
	}
	
	system("pause");
	menu();
	return(0);
}

int captura3() {
	system("cls");
	printf("Registro de tickets \n \n");
	do {
		printf("Introduzca el numero de ticket: ");
		scanf("%d",&numtick[x2]);
		fflush(stdin);
		printf("Introduzca el codigo del empleado: ");
		scanf("%s", &codigoempleado[x2]);
		fflush(stdin);
		printf("Introduzca la descripcion del problema: ");
		scanf("%s", &descrip[x2]);
		fflush(stdin);
		printf("Introduzca la fecha del reporte: ");
		scanf("%s", &fecha[x2]);
		fflush(stdin);
		printf("Introduzca un comentario: ");
		scanf("%s", &comentario[x2]);
		fflush(stdin);
		printf("Introduzca el estado del ticket: ");
		scanf("%s", &estado[x2]);
		fflush(stdin);
		printf("\n Presione -1- para continuar -0- Retornar...\n");	
		scanf("%d",&cont2);
		x2++;
	} while(cont2 == 1);
	menu();
	system("pause");
return(0);
}	

void reporte3(){
	printf("Reporte de tickets \n \n");	
	printf("Numero de ticket           Codigo empleado          Descripcion 	  	Fecha 		 Comentario 			Estado");
	for(y2=1;y2<x2;y2++){
		printf("  %d                  	%d                  %s               %s 		 %s	   %s				\n ", numtick[y2], codigoempleado[y2], descrip[y2], fecha[y2], comentario[y2], estado[y2]);
	}
	
	system("pause");
	menu();
	return(0);
}

void reporte4(){
	if (estado == "Abierto")
	{
	
	printf("Reporte de tickets \n \n");	
	printf("Numero de ticket           Codigo empleado          Descripcion 	  	Fecha 		 Comentario 			Estado");
	for(y2=1;y2<x2;y2++){
		printf("  %d                  	%d                  %s               %s 		 %s	   %s				\n ", numtick[y2], codigoempleado[y2], descrip[y2], fecha[y2], comentario[y2], estado[y2]);
}
}
else {
	printf("Su ticket se encuentra cerrado, favor consultar reporte de tickets cerrados \n");
}

}


void reporte5(){
	if (estado == "Cerrado")
{
	printf("Reporte de tickets \n \n");	
	printf("Numero de ticket           Codigo empleado          Descripcion 	  	Fecha 		 Comentario 			Estado");
	for(y2=1;y2<x2;y2++){
		printf("  %d                  	%d                  %s               %s 		 %s	   %s				\n ", numtick[y2], codigoempleado[y2], descrip[y2], fecha[y2], comentario[y2], estado[y2]);
}
}
else {
	printf("Su ticket se encuentra abierto, favor consultar reporte de tickets abiertos \n");	
}
}
void buscar(){
	printf("Consultar un tecnico \n \n");	
	printf("Introduzca el codigo del tecnico a consultar: ");
	scanf("%d",&codigo);
	
	for (y=1;y<x;y++) {
		if (cod[y] == codigo) {
			printf("codigo encontrado, posicion:  %d", y);
			existe = 1;
		}
	}
	system("pause");
	menu();
	return(0);
}

void menu(){
	system("cls");
	printf("MENU DE OPCIONES \n");


	printf("1-Registro de empleados \n");	
	printf("2-Busqueda de empleados \n");
	printf("3-Reporte de empleados \n");
	printf("4-Registro de tecnicos \n");	
	printf("5-Reporte de tecnicos \n");
	printf("6-Registro de tickets \n");
	printf("7-Reporte de tickets \n");
	printf("8-Reporte de tickets abiertos \n");
	printf("8-Reporte de tickets cerrados \n");
	printf("9-Salir \n");	
	
	printf("Escoja la opcion deseada \n");	
	scanf("%d",&op);
	
	

	switch(op) {
	
	case 1:
	    captura();
		break;

	case 2:
		buscar();
		printf("Busqueda de tecnicos:");	
		break;

	case 3:
		reporte();	
		break;
		
	case 4:
		captura2();
		break; 
	
	case 5:
		reporte2();
		break; 	
	
	case 6:
		captura3();
		break; 	
		
	case 7:
		reporte3();
		break; 			
		
	case 8:
		reporte4();
		break; 		
		
	case 9:
		reporte5();
		break; 		
			
	case 10:
		printf("Gracias por utilizar nuestro programa");	
		system("exit");
		break;
		
	}

}

int main(void) {
  menu();
  return(0);
  
}

