#include <stdio.h>
#include <string.h>
struct Tusuario {
	char nombre[50];
	char contrasena[50];
	int puntuacion;
};

void Banner();
void Cfichero(struct Tusuario vectorUsuario[], int contador, int puntuacion, int i);
void Instrucciones();
int Menu();
int Preguntas();

int main() {
	
	struct Tusuario vectorUsuario[150];
	struct Tusuario UsuarioNuevo;
	struct Tusuario Usuario;
	
	int contador=0, opcionMenu; 
    int puntuacion=0, i, j=0, max, correcto=0;
    FILE * pfichero;
    
	pfichero = fopen("usuarios.txt", "r");
	
    while(fscanf(pfichero, "%s %s %d", vectorUsuario[contador].nombre, vectorUsuario[contador].contrasena, &vectorUsuario[contador].puntuacion) != EOF){
    	printf("%s %s %d\n", vectorUsuario[contador].nombre, vectorUsuario[contador].contrasena, vectorUsuario[contador].puntuacion);
		contador++;
	}
    fclose(pfichero);


    Banner();
    
    printf("\n");
    printf("\n");
    

	opcionMenu = Menu();
	
	printf("____________________________________________________________________________________________________________________________________________________________________________\n");
	switch (opcionMenu) {
		case 1: 
			printf("        INICIAR SESION:\n");
			printf("   Usuario: \n");
			scanf("%s", Usuario.nombre);
			printf("   Contrasena: \n");
			scanf("%s", Usuario.contrasena);
			printf("\n");
			
			for(i=0; i<contador; i++){
			
				if(strcmp(Usuario.nombre, vectorUsuario[i].nombre) == 0 && strcmp(Usuario.contrasena, vectorUsuario[i].contrasena) == 0){
		            printf("   -Bienvenid@ %s -\n", Usuario.nombre);
		            correcto = 1;
		            break;
			    }
			}
			if(correcto == 0) {
				printf("   -Usuario incorrecto-\n");
				return 0;
			}
                
		        break;
		case 2:
			printf("        REGISTRARSE:\n");
			printf("   Nuevo Usuario: \n");
			scanf("%s", UsuarioNuevo.nombre);
				
			strcpy(vectorUsuario[contador].nombre, UsuarioNuevo.nombre);
				
			printf("   Nueva Contrasena: \n");
			scanf("%s", UsuarioNuevo.contrasena);
				
			strcpy(vectorUsuario[contador].contrasena, UsuarioNuevo.contrasena);
			
			break;
				
		case 3:
		    return 0;	
	}

    printf("____________________________________________________________________________________________________________________________________________________________________________\n");
	Instrucciones();
	printf("____________________________________________________________________________________________________________________________________________________________________________\n");
	//Estructura del juego.
	
    puntuacion = Preguntas();
	
    //Maxima puntuacion.
    printf("\n");
    printf("\n");

	max=vectorUsuario[j].puntuacion;
		for (j=1; j<contador; j++) {
	 		if(vectorUsuario[j].puntuacion>max){
	 			max=vectorUsuario[j].puntuacion;
			}
	 	}
	printf("     Hasta ahora la puntuacion mas alta es: %d\n", max);
	 
	//Imprimimos los datos en el fichero.
    Cfichero(vectorUsuario, contador, puntuacion, i);

	return 0;
}
int Menu() {
	int opcion;
	
	do{
		printf("  ELIGE UNA OPCION:\n");
		printf("  ----------------\n");
		printf("     INICIO SESION    ('1')\n");
		printf("     REGISTRARSE      ('2')\n");
		printf("     SALIR            ('3')\n");
		scanf("%d", &opcion);
		
	}while(opcion != 1&&opcion != 2&&opcion != 3);
	
	return opcion;	
}
int Preguntas() {
	int puntuacion = 0;
	char resultadoA[100]={"arbol"}, resultadoB[100]={"barco"}, resultadoC[100]={"circo"}, resultadoD[100]={"dracula"}, resultadoE[100]={"esternocleidomastoideo"}, resultadoF[100]={"farmacia"}, resultadoG[100]={"geografia"};
	char resultadoH[100]={"horoscopo"}, resultadoI[100]={"ingenieria"}, resultadoJ[100]={"jirafa"}, resultadoK[100]={"kiwi"}, resultadoL[100]={"lupa"}, resultadoM[100]={"macedonia"}, resultadoN[100]={"nectar"};
	char resultadoO[100]={"onza"}, resultadoP[100]={"pitufo"}, resultadoQ[100]={"quiebra"}, resultadoR[100]={"recta"}, resultadoS[100]={"sembrar"}, resultadoT[100]={"tractor"}, resultadoU[100]={"unicornio"};
	char resultadoV[100]={"vinoteca"}, resultadoW[100]={"walkietalkie"}, resultadoX[100]={"xilofono"}, resultadoY[100]={"yoyo"}, resultadoZ[100]={"zalamero"};
	
	char respuesta[50];
	char pasa[50]= {"pasa"};
	
	
// Pregunta1.
printf("\n");
printf("\n");

printf("        -CON LA 'A': \n");
printf("   Planta de tronco lenoso, grueso y elevado que se ramifica a cierta altura del suelo formando la copa.\n");
scanf("%s", respuesta);

if(strcmp(resultadoA, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}

printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("\n");


//Pregunta2.
printf("        -CON LA 'B': \n");
printf("   Embarcacion con el fondo concavo y con cubierta, en especial la de gran o medio tonelaje.\n");
scanf("%s", respuesta);

if(strcmp(resultadoB, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("\n");

//Pregunta3.
printf("        -CON LA 'C': \n");
printf("   Espectaculo formado por actuaciones muy variadas en que intervienen payasos, acrobatas, fieras amaestradas, ejercicios de magia, etc.\n");
scanf("%s", respuesta);

if(strcmp(resultadoC, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("\n");


//Pregunta4.
printf("        -CON LA 'D': \n");
printf("   Novela publicada en 1897 por el irlandes Bram Stoker, quien ha convertido a su protagonista en el vampiro mas famoso.\n");
scanf("%s", respuesta);

if(strcmp(resultadoD, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta5.
printf("        -CON LA 'E': \n");
printf("   Comunmente abreviado ECM, es un musculo robusto situado a los lados del cuello.\n");
scanf("%s", respuesta);

if(strcmp(resultadoE, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta6.
printf("        -CON LA 'F': \n");
printf("   Establecimiento en el que se preparan y venden medicamentos.\n");
scanf("%s", respuesta);

if(strcmp(resultadoF, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta7.
printf("        -CON LA 'G': \n");
printf("   Ciencia que estudia y describe la superficie de la Tierra en su aspecto fisico, actual y natural, o como lugar habitado por la humanidad.\n");
scanf("%s", respuesta);

if(strcmp(resultadoG, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta8.
printf("        -CON LA 'H': \n");
printf("   Signo del zodiaco al que pertenece una persona en funcion de su fecha de nacimiento.\n");
scanf("%s", respuesta);

if(strcmp(resultadoH, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta9.
printf("        -CON LA 'I': \n");
printf("   Arte y tecnica de aplicar los conocimientos cientificos a la invencion, diseno, perfeccionamiento y manejo de nuevos procedimientos en la industria y otros campos de aplicacion cientificos.\n");
scanf("%s", respuesta);

if(strcmp(resultadoI, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta10.
printf("        -CON LA 'J': \n");
printf("   Mamifero rumiante de unos 5 m de alto, pelaje amarillento repleto de manchas leonadas con cuello muy largo y esbelto.\n");
scanf("%s", respuesta);

if(strcmp(resultadoJ, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta11.
printf("        -CON LA 'K': \n");
printf("   Ave corredora nocturna de unos 50 cm de longitud, con plumas largas y lacias a manera de pelos, de color pardo, alas muy poco desarrolladas, patas gruesas y pico largo y curvado; habita en Nueva Zelanda.\n");
scanf("%s", respuesta);

if(strcmp(resultadoK, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta12.
printf("        -CON LA 'L': \n");
printf("   Instrumento optico para ampliar la imagen de los objetos que consiste en una lente de aumento provista de un mango.\n");
scanf("%s", respuesta);

if(strcmp(resultadoL, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta13.
printf("        -CON LA 'M': \n");
printf("   Preparacion en la que se mezclan trozos de distintas frutas con su propio jugo, suele consumirse como postre.\n");
scanf("%s", respuesta);

if(strcmp(resultadoM, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta14.
printf("        -CON LA 'N': \n");
printf("   Sustancia liquida dulce que se encuentra en el interior de algunas flores y sirve de alimento a los insectos.\n");
scanf("%s", respuesta);

if(strcmp(resultadoN, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("\n");


//Pregunta15.
printf("        -CON LA 'O': \n");
printf("   Porcion de chocolate en que se divide una tableta.\n");
scanf("%s", respuesta);

if(strcmp(resultadoO, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta16.
printf("        -CON LA 'P': \n");
printf("   Personaje animado de cuerpo azul, y de medida diminuta.\n");
scanf("%s", respuesta);

if(strcmp(resultadoP, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta17.
printf("        -CON LA 'Q': \n");
printf("   Cese de una actividad comercial al no poder hacer frente a las obligaciones de pago y no alcanzar el activo a cubrir el pasivo.\n");
scanf("%s", respuesta);

if(strcmp(resultadoQ, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta18.
printf("        -CON LA 'R': \n");
printf("   Linea formada por una serie continua de puntos en una misma direccion que no tiene curvas ni angulos y cubre la menor distancia posible entre dos puntos.\n");
scanf("%s", respuesta);

if(strcmp(resultadoR, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta19.
printf("        -CON LA 'S': \n");
printf("   Esparcir semillas en un terreno preparado para que germinen y den plantas o frutos.\n");
scanf("%s", respuesta);

if(strcmp(resultadoS, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta20.
printf("        -CON LA 'T': \n");
printf("   Vehiculo automovil con motor de mucha potencia y con grandes ruedas que se adhieren fuertemente al terreno, que se utiliza para el trabajo agricola o para remolcar algo.\n");
scanf("%s", respuesta);

if(strcmp(resultadoT, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta21.
printf("        -CON LA 'U': \n");
printf("   Animal fabuloso con figura de caballo y con un cuerno recto en mitad de la frente.\n");
scanf("%s", respuesta);

if(strcmp(resultadoU, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta22.
printf("        -CON LA 'V': \n");
printf("   lugar en el que se exponen y venden vinos, realizando en la mayoria de los casos acciones orientadas a la promocion de la cultura del vino.\n");
scanf("%s", respuesta);

if(strcmp(resultadoV, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta23.
printf("        -CON LA 'W': \n");
printf("   Aparato portatil para comunicarse una persona con otra que se encuentra a corta distancia; consiste en un sistema emisor y receptor de ondas de radiofrecuencia.\n");
scanf("%s", respuesta);

if(strcmp(resultadoW, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta24.
printf("        -CON LA 'X': \n");
printf("   Instrumento musical de percusion formado por una serie de laminas de madera dispuestas horizontalmente y ordenadas segun su tamano.\n");
scanf("%s", respuesta);

if(strcmp(resultadoV, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta25.
printf("        -CON LA 'Y': \n");
printf("   Juguete formado por dos pequenos discos unidos en su centro por una barrita con un cordon atado y enrollado a esta.\n");
scanf("%s", respuesta);

if(strcmp(resultadoY, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){
	printf("        Vas a la siguiente pregunta\n");
}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

printf("\n");


//Pregunta26.
printf("        -CON LA 'Z': \n");
printf("   Que demuestra carino de una forma exagerada y a veces empalagosa, generalmente para conseguir algo.\n");
scanf("%s", respuesta);

if(strcmp(resultadoZ, respuesta)==0) {
	printf("        Respuesta Correcta\n");
	puntuacion++;
}else if(strcmp(respuesta, pasa)==0){

}else{
    printf("        Respuesta incorrecta\n");
}
printf("\n");
printf("\n");
printf("----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("\n");
printf("\n");

printf("                               HAS LLEGADO AL FINAL DEL JUEGO\n");
printf("\n");
printf("                               TU PUNTUACION FINAL ES: %d\n", puntuacion);
   
   return puntuacion;
}
void Instrucciones(){
	//Instrucciones del juego.
    printf("\n");
    printf("\n");
    printf("\n");

    printf("        INSTRUCCIONES DEL JUEGO:\n");
    printf("   1.Para pasar la pregunta introduce 'pasa'.\n");
    printf("   2.Las respuestas deben de estar en minuscula.\n");
    printf("   3.En el caso de que la palabra contenga tildes, estas se omitiran.\n");
    printf("\n");
    printf("        DISFRUTA DEL JUEGO\n");

}
void Banner() {
	printf("                                                                       _____________________________\n");
	printf("**********************************************************************|                             |***********************************************************************\n");
	printf("**********************************************************************|       COMETE EL ROSCO       |***********************************************************************\n");
	printf("**********************************************************************|_____________________________|***********************************************************************\n");

}
void Cfichero(struct Tusuario vectorUsuario[], int contador, int puntuacion, int i) {
	FILE * pfichero;
	int j;
	
	pfichero = fopen ("usuarios.txt", "w");


    if(i<=contador) {
    	
		vectorUsuario[i].puntuacion = puntuacion;
		
		for(j=0; j<contador; j++){
    
	        if(strcmp(vectorUsuario[i].nombre, vectorUsuario[j].nombre)==0 && strcmp(vectorUsuario[i].contrasena, vectorUsuario[j].contrasena)==0){
                vectorUsuario[j].puntuacion = vectorUsuario[i].puntuacion;      
	        }
	    fprintf(pfichero, "%s %s %d\n", vectorUsuario[j].nombre, vectorUsuario[j].contrasena, vectorUsuario[j].puntuacion);
	    }
	}else{
		
		vectorUsuario[contador].puntuacion = puntuacion;
		
		for(j=0; j<contador; j++){
    
		    fprintf(pfichero, "%s %s %d\n", vectorUsuario[j].nombre, vectorUsuario[j].contrasena, vectorUsuario[j].puntuacion);
	    }
		fprintf(pfichero, "%s %s %d", vectorUsuario[contador].nombre, vectorUsuario[contador].contrasena, vectorUsuario[contador].puntuacion);
	}
	
    fclose(pfichero);
}
