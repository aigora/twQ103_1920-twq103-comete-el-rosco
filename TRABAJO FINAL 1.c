#include <stdio.h>
#include <string.h>

struct Tusuario {
	char nombre[50];
	char contrasena[50];
	int puntuacion=0;
};

int main() {
	
	struct Tusuario vectorUsuario[150];
	struct Tusuario usuarioNuevo;
	FILE * pfichero;
	int contador=0, opcion1, bien=0; 

	pfichero = fopen("usuarios1.txt", "r");
	
	if (pfichero == NULL) {
		printf("No se encuentra el fichero\n");
		return 0;
	}
	
    while(fscanf(pfichero, "%s %s %d", &vectorUsuario[contador].nombre, &vectorUsuario[contador].contrasena, &vectorUsuario[contador].puntuacion) != EOF){
    	//printf("%s %s %d\n", vectorUsuario[contador].nombre, vectorUsuario[contador].contrasena, vectorUsuario[contador].puntuacion);
		contador++;
	}

	
	do{
	
		printf(" INICIO SESION ('1')\n REGISTRARSE ('2')\n SALIR ('3')\n");
		scanf("%d", &opcion1);
		switch (opcion1) {
			case 1: 
			printf("Usuario: \n");
			scanf("%s", &usuarioNuevo.nombre);
			printf("Contrasena: \n");
			scanf("%s", &usuarioNuevo.contrasena);
			
			while(fscanf(pfichero, "%s %s", &vectorUsuario[contador].nombre, &vectorUsuario[contador].contrasena) != EOF){
			    if(strcmp(usuarioNuevo.nombre, vectorUsuario[contador].nombre) == 0 && strcmp(usuarioNuevo.contrasena, vectorUsuario[contador].contrasena) == 0){
		        printf("Bienvenido %s\n", usuarioNuevo.nombre);
		        bien = 1;
			    } else {
				printf("Usuario incorrecto\n");
				bien = 0;
                
			}
			fclose(pfichero);
		       break;
			case 2:
				
			pfichero = fopen("usuarios1.txt", "w");
				
			printf("Nuevo Usuario: \n");
			scanf("%s", &usuarioNuevo.nombre);
			
			
			printf("Nueva Contrasena: \n");
			scanf("%s", &usuarioNuevo.contrasena);
			
			strcpy(vectorUsuario[contador].nombre, usuarioNuevo.nombre);
			strcpy(vectorUsuario[contador].contrasena, usuarioNuevo.contrasena);
			
			fprintf(pfichero, "%s %s", vectorUsuario[contador].nombre, vectorUsuario[contador].contrasena);
			fclose(pfichero);
			bien = 1;
				break;
				
			case 3:
			return 0;	
				
		}}
	}while(bien == 0);

	return 0;
}
