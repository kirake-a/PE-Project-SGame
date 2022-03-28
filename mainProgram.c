/*En este archivo mainProgram es donde se va a unir todo el codigo para verificar la funcionalidad del mismo */
#include <stdio.h>

// Funciones de la presentacion del juego
void presentacionInicial();
int introContexto();
int introPostContexto(int vida);
// EscenarioCamino funcion
int escenarioCamino(int vida);

int main(){
    int vida;

    // Funciones para la presentacion del juego -- llamadas
    presentacionInicial();
    vida = intro();
    vida = introPostContexto(vida);

    // EscenarioCamino funcion -- llamadas
    vida = escenarioCamino(vida);

    return 0;
}

/* ---------------------------- Bloque de codigo escrito por Ruben ---------------------------- */
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

/* ---------------------------- Comienza el modulo escrito por Caro ---------------------------- */

// Función camino
int escenarioCamino(int vida)
{

    int camino1, pueblo, continuar, bosque;
    pueblo = 0;
    bosque = 0;

    // PARA ELEGIR UN CAMINO DE LOS 3
    printf("\n\nSales de tu casa y caminas por la vereda mientras que el viento sacude tus cabellos y la");
    printf("\ncaperucita. Sigues hasta encontrarte con que la vereda por la que andabas se divide en tres");
    printf("\nangostos caminos. El primer camino tiene escrito en un hermoso letrero que va al pueblo, el ");
    printf("\nsegundo tiene un letrero desgastado y dice que lleva al bosque, mientras que el tercero cuenta");
    printf("\ncon un letrero tan viejo que apenas se mantiene en pie y dice que se dirige al desierto de hielo.");

    printf("\n\nPara tomar el camino al pueblo escribe '1'");
    printf("\nEscribe '2' si decides tomar el camino al bosque y te gustan las aventuras");
    printf("\nSolo si eres valiente escribe '3' para dirigirte al desierto");
    printf("\nEscribe tu opción: ");
    scanf("%d", &camino1);

    while (camino1 < 1 || camino1 > 3)
    {
        printf("\n\n¡Esa opción no existe! Intentalo de nuevo.");
        printf("\n\nPara tomar el camino al pueblo escribe '1'");
        printf("\nEscribe '2' si decides tomar el camino al bosque y te gustan las aventuras");
        printf("\nSolo si eres valiente escribe '3' para dirigirte al desierto de hielo");
        printf("\nEscribe tu opción: ");
        scanf("%d", &camino1);
    }

    // ACCIONES DEL CAMINO 1,2 Y 3
    switch (camino1)
    {
    case 1: // CAMINO DEL PRUEBLO
        printf("\nDecides tomar el ancho camino que lleva al pueblo. En el pueblo toda la gente te mira raro ");
        printf("\ndebido a que no está acostumbrada a ver rostros nuevos. Estando ahí ves un pequeño puesto");
        printf("\nde madera donde un señor viejo y de cara horrenda vende manzanas. Tienes hambre y se te");
        printf("\nantojan esas jugosas manzanas, pero no tienes dinero...");

        printf("\n\nSi eres una horrible persona y quieres robarle unas manzanas a un pobre viejo escribe '1':");
        printf("\nSi decides ser amable y pedir una manzana escribe '2'");
        printf("\nEscribe tu opción: ");
        scanf("%d", &pueblo);

        while (pueblo < 1 || pueblo > 2)
        {
            printf("\n\n¡Esa opción no existe! Intentalo de nuevo.");
            printf("\n\nSi eres una horrible persona y quieres robarle unas manzanas a un pobre viejo escribe '1':");
            printf("\nSi decides ser amable y pedir una manzana escribe '2'");
            printf("\nEscribe tu opción: ");
            scanf("%d", &pueblo);
        }

        if (pueblo == 1)
        {
            printf("\nDEFINITIVAMENTE ERES UNA PERSONA MALA QUE NUNCA QUERRIA CONOCER");
            printf("\nasí que le robas no una manzana, ni dos manzanas, sino tres manzanas al");
            printf("\npobre viejo de la cara horrible.");
            printf("\n-¡Devuelveme mis manzanas! Grita el viejo.");
            printf("\nPero logras escaparte porque eres una rata escurridiza.");
            printf("\nGanas 3 manzanas +1 de vida");
            vida = vida + 1;
            printf("\nPor favor HORRIBLE PERSONA escriba '1' para continuar causando el caos en su aventura ");
        }
        else
        {
            printf("\nLe preguntas amablemente al viejo si te podría regalar una manzana.");
            printf("\n-¡No! -Grita el viejo.");
            printf("\nNo me digas que creíste que en serio te darían una manzana gratis. Te recomiendo que para la");
            printf("\npróxima no andes por ahí sin dinero.");
            printf("\nPersona que anda por ahí sin dinero escriba '1' para continuar. ");
        }

        scanf("%d", &continuar);
        break;

    case 2: // CAMINO DEL BOSQUE
        printf("\nAhora se que te gustan las aventuras porque elegiste esta opción, pero... ¿Apoco creíste que");
        printf("\nir por el bosque sería una aventura? Digo, así es la historia original, aunque tenía la esperanza");
        printf("\nde que decidieras algo más interesante.");
        printf("\n\nEn el bosque decides cortar 6 manzanas porque eres la persona mas tragona que he conocido.");
        printf("\nDespués de devorar las manzanas vorazmente puedes seguir por el camino o tomar un atajo por el rio");
        printf("\nGanas 6 manzanas +2 de vida.");

        printf("\n\nPara tomar un atajo por el río escribe '1'");
        printf("\nSi te gusta tardarte y caminar mucho aunque te duelan los píes escribe '2' para seguir el camino");
        printf("\nEscribe tu opción: ");
        scanf("%d", &bosque);

        while (bosque < 1 || bosque > 2)
        {
            printf("\n\n¡Esa opción no existe! Intentalo de nuevo.");
            printf("\n\nPara tomar un atajo por el río escribe '1'");
            printf("\nSi te gusta tardarte y caminar mucho aunque te duelan los píes escribe '2' para seguir el camino");
            printf("\nEscribe tu opción: ");
            scanf("%d", &bosque);
        }

        if (bosque == 1)
        {
            printf("\nSolo a ti se te ocurre cruzar por el río con tanto frío, así que te da un resfriado.");
            printf("\nCruzaste por el río -1 de vida.");
            vida = vida - 1;
            printf("\nEscribe '1' para continuar tu travesía con todo y resfriado. ");
        }
        else
        {
            printf("\nNo puedo creer que quieras seguir la historia al pié de la letra.");
            printf("\nSigues por el camino y caminas, caminas, caminas, caminas y caminas. Aburrido ¿No?");
            printf("\nNo puedes decir que no te lo advertí.");
            printf("\nPara seguir caminando escriba '1' ");
        }

        scanf("%d", &continuar); // Ok no evalue aquí si se pone otro número, porque solo es para poder abajo la función que sigue
        break;

    case 3: // CAMINO DEL DESIERTO de hielo
        printf("\nPor valiente, quizá también porque te faltan algunos tornillos, decides ir por el desierto de hielo ");
        printf("\ndonde te quema el frío... -1 de vida");
        vida = vida - 1;
        printf("\nValiente, escriba '1' para continuar ");

        scanf("%d", &continuar);
        break;
    }
    return vida;
}