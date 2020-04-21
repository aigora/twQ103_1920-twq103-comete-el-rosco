#include <stdio.h>
#include <string.h>


// Cuando imprimimos los usuarios en el fichero nos aparecen '0' que no
// corresponden con la puntuación, con lo demás no tenemos ningún problema,
// todo solucionado.

struct Tusuario {
	char nombre[50];
	char contrasena[50];
	int puntuacion;
};

int main() {
	
	struct Tusuario vectorUsuario[150];
	struct Tusuario inicioUsuario;
	struct Tusuario usuarioNuevo;
	FILE * pfichero;
	int contador=0, opcion1, bien=0; 
    int puntuacion=0, i;
    
pfichero = fopen("usuarios1.txt", "r");
	
	if (pfichero == NULL) {
		printf("No se encuentra el fichero\n");
		return 0;
	}
	
    while(fscanf(pfichero, "%s %s %d", vectorUsuario[contador].nombre, vectorUsuario[contador].contrasena, &vectorUsuario[contador].puntuacion) != EOF){
    	printf("%s %s %d\n", vectorUsuario[contador].nombre, vectorUsuario[contador].contrasena, vectorUsuario[contador].puntuacion);
		contador++;
	}
fclose(pfichero);
	
	do{
	
		printf(" INICIO SESION ('1')\n REGISTRARSE ('2')\n SALIR ('3')\n");
		scanf("%d", &opcion1);
		switch (opcion1) {
			case 1: 
			printf("Usuario: \n");
			scanf("%s", inicioUsuario.nombre);
			printf("Contrasena: \n");
			scanf("%s", inicioUsuario.contrasena);
			
			for(i=0; i<=contador; i++){
			
			    if(strcmp(inicioUsuario.nombre, vectorUsuario[i].nombre) == 0 && strcmp(inicioUsuario.contrasena, vectorUsuario[i].contrasena) == 0){
		        printf("Bienvenido %s\n", inicioUsuario.nombre);
		        bien = 1;
		        break;
			    }else{
				printf("Usuario incorrecto\n");
				return 0;
                }
			}
		       break;
			case 2:
				
			printf("Nuevo Usuario: \n");
			scanf("%s", usuarioNuevo.nombre);
		
			printf("Nueva Contrasena: \n");
			scanf("%s", usuarioNuevo.contrasena);
			
			bien = 1;
				break;
				
			case 3:
			return 0;	
		}
	}while(bien == 0);



pfichero = fopen ("usuarios1.txt", "w");
for(i=0; i<=contador; i++){
	fprintf(pfichero, "%s %s %d\n", vectorUsuario[i].nombre, vectorUsuario[i].contrasena, vectorUsuario[i].puntuacion);
}


strcpy(vectorUsuario[contador].nombre, usuarioNuevo.nombre);
strcpy(vectorUsuario[contador].contrasena, usuarioNuevo.contrasena);

fprintf(pfichero, "%s %s %d\n", vectorUsuario[contador].nombre, vectorUsuario[contador].contrasena, vectorUsuario[contador].puntuacion);
fclose(pfichero);
	return 0;
}
