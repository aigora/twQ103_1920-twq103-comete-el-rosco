#include <stdio.h>

int main() {
	int opcion1, opcion2;
	char usuario[50], contrasena[50];
	char N_usuario[50], N_contrasena[50];
	
	printf(" INICIO SESION ('1')\n REGISTRARSE ('2')\n SALIR ('3')\n");
	scanf("%d", &opcion1);
	
	switch(opcion1) {
		case 1:
			printf("Usuario: \n");
			scanf("%s", &usuario);
			printf("Contrasena: \n");
			scanf("%s", &contrasena);
			break;
			
		case 2:
			printf("Nuevo Usuario: \n");
			scanf("%s", &N_usuario);
			printf("Nueva Contrasena: \n");
			scanf("%s", &N_contrasena);
			
			break;
		case 3:
			return 0;
	}
	
	printf(" COMENZAR (1) \n SALIR (2) \n");
	scanf("%d", &opcion2);
	
	switch(opcion2) {
		case 1:
			printf("VAMOS A EMPEZAR");
			break;
		case 2:
			return 0;
			
	}
}
