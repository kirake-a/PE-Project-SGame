#include <stdio.h>

//Para que funcione la función en main escribe:
//vida = escenarioCazador(vida);
//En este caso utilicé 5 como los puntos de vida, pero la vida ya estará definida por la parte anterior, asó que la puedes quitar
//Igual el printf(vida) ya que solo era para comprobar que todo salga bien

int escenarioCazador(int vida){
	
	int opcion, continuar;
	
	//Para elegir que opicón quieres hacer con el viejillo
	printf("\n\nSigues caminando hasta que a la izquierda del camino te topas con una antigua cabaña de madera.");
	printf("\nDecides tocar la puerta, entonces sale un hombre viejo.");
	printf("\nEl misterioso señor lleva puesto un abrigo de piel de lobo y tiene la cara llena de cicatrices.");
	printf("\n-¿Qué es lo que quieres?- Te pregunta viejo y frunce el ceño, luego le cambia el tabaco a su pipa y la prende. ");
	
	printf("\n\nEscribe '1' para regalarle un delicioso pan de tu canasta al viejo.");
	printf("\nSi deseas retar a un pobre viejito a un combate escribe '2'.");
	printf("\nSi deseas hacer enojar al viejo escribe '3'.");
	printf("\nEscribe tu opción: ");
	scanf("%d", &opcion);
	
	while(opcion<1 || opcion>3){
		printf("\n\n¡Esa opción no existe! Inténtalo de nuevo.");
		printf("\nEscribe '1' para regalarle un delicioso pan de tu canasta al viejo.");
		printf("\nSi deseas retar a un pobre viejito a un combate escribe '2'.");
		printf("\nSi deseas hacer enojar al viejo escribe '3'.");
		printf("\nEscribe tu opción: ");
		scanf("%d", &opcion);
	}
	switch(opcion){
	case 1: //Amistad con el cazador 
		printf("\n\nLe regalas al viejo el pan.");
		printf("\n-¡Está buenísimo!- Exclama el señor y bocado a bocado su expresión fría e ");
		printf("\nintimidante se va transformado en una sonrisa. ");
		printf("\nTe despides del viejo. No cabe duda que haz hecho un amigo y sin lugar a duda");
		printf("\nesta es la historia más empalagosa que he narrado !Me rehúso a narrar si sigues así¡");
		
		printf("\n\n¡Haz hecho un amigo, ahora tienes el poder de la amistad! Uy que cursi.");
		printf("\nEscribe '1' para continuar haciendo amistades a lo largo de esta historia.");
		scanf("%d", &continuar);
		
		break;
		
	case 2: //Combate con el cazador
		printf("\n\nLe dices al viejo que lo que quieres es un oponente digno para pelear, entonce...");
		printf("\nEl señor se quita su abrigo de piel de lobo y deja al descubierto su torso repleto de cicatrices.");
		printf("\nEl viejo es robusto y parece que tiene la fuerza de un oso. ");
		
		printf("\n\n-¡Qué insensatez acaba de decir, yo no caso lobos con un arma de fuego! Yo los caso con...");
		printf("\n¡MIS MANOS!- Exclama el viejo mientras te mira de una forma macabra.");
		printf("\n¡No narraré algo tan violento como esto! El anciano te va a hacer añicos");
		printf("\nPor favor! No hagas esto, espera... ¿QUE? ¿Quieres enfrentarlo? Luego no digas que no te lo advertí.");
		
		printf("\n\nEn un abrir y cerrar de ojos el cazador te da un tremendo golpe que te lanza por los aires.");
		printf("\nCaes en un árbol y por el impacto se parte su tronco ¡¿Cómo es posible?!");
		printf("\n¡Nadie sobrevive a semejante golpe! Entonces te levantas, te cubres el rostro con tu caperucita, ");
		printf("\ncorres hacia el viejo y le lanzas una patada voladora tan fuerte que atraviesa su cabaña y ");
		printf("\nse queda ahí tirado el viejo y cazador inconsciente. Te truenas los dedos y limpias la sangre de tu boca.");
		
		printf("\n\n¡No tenía idea de que sabías pelear! Mejor sigo narrando que se está poniendo buena esta historia.");
		
		printf("\n\nAhora eres más fuerte que el cazador. No creo que un lobo quiera toparse contigo. ");
		printf("\nEl primer golpe te lastimó. Vida -1.");
		vida = vida-1;
		printf("\nSi quieres seguir demostrando tu fuerza a lo largo de esta historia escribe '1': .");
		scanf("%d", &continuar);
		
		break;
		
	case 3: //Viejo enojado
		printf("\n\nLe dices al anciano que es un viejo raro y te largas. El viejo cierra la puerta con fuerza,");
		printf("\nde repente... sale el lobo y lo siguiente es demasiado explícito para describir.");
		printf("\nEso te pasa por molestar a un vejete ¿Sigues ahí? ¡No sigas la luz! No sigas la...");
		
		printf("\n\nTE HA COMIDO EL LOBO");
		printf("\nFIN DEL JUEGO ");
		vida = 0;
		
		break;
	}
	
	return vida;
}

int main(int argc, char *argv[]) {
	
	int vida;
	vida = 5;
	
	vida = escenarioCazador(vida);
	
	printf("\n%d", vida);
	return 0;
}
