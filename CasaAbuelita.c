#include <stdio.h>

int final1(int vida);

int casaAbuelita(int vida, int poder, int amigo) {
	int opcion;
	//historia
	printf("Caminas hasta llegar a la casa de tu abuela. Te percatas que el lobo está recostado en la cama \n");
	printf("de tu abuela.\n\n");
	//seleccionar opciones
	printf("Para entrar sigilosamente por la ventana y agarrar al lobo desprevenido escribe  '1'.\n");
	printf("Si prefieres entrar por la puerta escribe  '2'.\n\n\n");
	
	scanf("%d", &opcion);
	
	while (opcion < 1 || opcion > 2){
		printf("Esa opción no existe ¡¿Qué tan difícil es presionar una tecla?!\n");
		printf("Para entrar sigilosamente por la ventana y agarrar al lobo desprevenido escribe  '1'.\n");
		printf("Si prefieres entrar por la puerta escribe  '2'.\n\n\n");
		
		scanf("%d", &opcion);
	}
	//por la ventana
	if (opcion == 1){
		printf("Entras por la ventana y le metes un golpe al lobo. Entonces el lobo se levanta de la cama de\n ");
		printf("tu abuela, puedes ver que es más grande que un lobo normal. Y de repente... te muerde el brazo\n\n");
		vida = vida - 3;
		// si vives y derrotaste al cazador
		if(vida > 0 && poder == 1){
			printf("El combate contra el cazador te preparó para enfrentar al lobo.Con tu brazo bueno le lanzas un\n");
			printf("gancho al lobo. El lobo se retuerce de dolor y después se abalanza sobre ti con las fauces\n");
			printf("abiertas y de en eso le das una patada tan fuerte que rompe el techo de la casa de tu abuela.\n\n");
			printf("Arrancas un trozo de  tu caperucita para vendarte la mordida del lobo. Finalmente le abres la\n");
			printf("panza al lobo y sacas a tu abuela. Aprovechas la piel de lobo y te haces un saco como el del\n");
			printf("cazador.\n\n");
			
			printf("HAS ENCONTRADO EL FINAL ÉPICO\nGANASTE\n");
			printf("FIN DEL JUEGO");
		}
		//si mueres o no derrotaste al cazador
		else{
			printf("No te has recuperado de la mordida, cuando un colosal lobo... te lanza una lluvia de mordidas\n");
			printf("tan fuertes que ningún humano soportaría semejante ataque. Al parecer no fue una buena idea\n");
			printf("pelearse con un lobo tan grande ¿Sigues ahí? ¡No sigas la luz! No sigas la...\n\n");
			
			printf("TE HA COMIDO EL LOBO\n");
			printf("FIN DEL JUEGO");
		}
	}
	//por la puerta
	if (opcion == 2){
		printf("Decides entrar por la puerta. Abres la puerta y ves al lobo acostado en la cama de tu abuela\n");
		printf("—¿Por qué tienes unos dientes tan grandes abuelita? — Le preguntas al lobo que se encuentra\n");
		printf("disfrazado de tu abuela.\n");
		printf("—¡Para comerte mejor! — Esto te hubiera respondido el lobo si los lobos hablaran.\n");
		printf("Entonces...\n\n\n");
		
		//pedir ayuda y amigo cazador
		if(amigo == 1){
			printf("Gritars para pedir ayuda a tu amigo el cazador. Entonces llega el cazador y llena de plomo al\n");
			printf("lobo. Te acercas al lobo para ver si está muerto, pero en eso... te lanza un zarpazo con sus\n");
			printf("últimas fuerzas.\n\n\n");
			vida = vida - 2;
			final1(vida);
		}
		else{
			printf("Pediste auxilio pero no hay nadie que te ayude. Entonces el lobo te ataca ¡No puedes morir así!\n");
			printf("Este es un final muy malo para la historia.\n\n");
			
			printf("TE HA COMIDO EL LOBO\n"); 
			printf("FIN DEL JUEGO"); 
			
		}
		
	}
	
	return 0;
}

int final1(int vida){
	if(vida > 0){
		printf("Bueno... qué final más aburrido. Mejor me voy a narrar otra historia\n\n");
		printf("GANASTE DE UNA FORMA SÚPER ABURRIDA\n");
		printf("FIN DEL JUEGO");
	}
	else{
		printf("Moriste ya que no pudiste aguantar un pequeño rasguño del lobo.\n\n");
		printf("TE HA MATADO EL LOBO\n");
		printf("FIN DEL JUEGO");
		
	}
}
	
	int main() {
		
		int vida, poder, amigo;
		vida = 2;
		poder = 1;
		amigo = 0;
		
		vida = casaAbuelita(vida, poder, amigo);
	}
