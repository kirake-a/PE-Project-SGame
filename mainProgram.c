/*En este archivo mainProgram es donde se va a unir todo el codigo para verificar la funcionalidad del mismo */
#include <stdio.h>

// Funciones de la presentacion del juego
void presentacionInicial();
int introContexto();
int introPostContexto(int vida);

int main(){
    int vida;

    presentacionInicial();
    vida = intro();
    vida = introPostContexto(vida);

    return 0;
}

void presentacionInicial()
{
    printf("Bienvenido a este minijuego. \n\nCaperucita Roja. The game...");
    printf("\n\nRecuerda que cada una de las decisiones que tomes influirá en como terminarás el juego... intenta no morir c:\n");
}

int intro()
{
    int vida;
    vida = 0;
    printf("\n\nEs de noche y te acercas a la chimenea para calentarte. Tu madre se encuentra a tu lado.");
    printf("\n-Ponte tu caperucita roka -te dice tu madre-. Hace mucho frio y tienes un largo camino por");
    printf("\ndelante.");

    printf("\n\nTe pones tu hermosa caperucita roja y te alistas para salir.");
    printf("\n\n**Caperucita roja +3 de vida...**");

    vida = 3;

    return vida;
}

int introPostContexto(int vida)
{
    printf("\n\n-¡La abuela se encuentra enferma y no se puede levantar de su cama! -dice con tristeza tu");
    printf("\nmadre-. ¿Crees que puedas entregarle esta canasta a tu abuela?");

    printf("\n\nPor un momento piensas en no entregarle la canasta a tu abuela debido al frío que hace");
    printf("\nafuera, pero al pensar en tu querida abuela decides emprender la aventura con tal de ayudarla");
    printf("\ny le dices que sí a tu madre.");

    printf("\n\n**Canasta +2 de vida**");

    vida += 2;

    return vida;
}