/*En este archivo mainProgram es donde se va a unir todo el codigo para verificar la funcionalidad del mismo */
#include <stdio.h>

// Funciones de la presentacion del juego
void presentacionInicial();
int introContexto();
int introPostContexto(int vida);
// EscenarioCamino funcion
int escenarioCamino(int vida);
// ElLenador funcion
int escenarioCazador(int vida);

int main(){
    int vida;

    // Funciones para la presentacion del juego -- llamadas
    presentacionInicial();
    vida = introContexto();

    if(vida > 0){
        vida = introPostContexto(vida);

        if(vida > 0){
            // EscenarioCamino funcion -- llamadas
            vida = escenarioCamino(vida);

            if(vida > 0){
                vida = escenarioCazador(vida); /* Falta leer el guion y comparar con el
                el codigo y verificar la unidad entre code */

                if(vida > 0){
                    // Falta agregar el modulo de David... no se ha leido
                }
            }
        }

    }

    return 0;
}

/* ---------------------------- Bloque de codigo escrito por RUBEN ---------------------------- */
void presentacionInicial()
{
    printf("Bienvenido a este minijuego. \n\nCaperucita Roja. The game...");
    printf("\n\nRecuerda que cada una de las decisiones que tomes influirá en como terminarás el juego... intenta no morir c:\n");
}

int introContexto()
{
    int vida, opcion;
    vida = 0;
    printf("\n\nEs de noche y te acercas a la chimenea para calentarte. Tu madre se encuentra a tu lado.");
    printf("\n-Ponte tu caperucita roka -te dice tu madre-. Hace mucho frio y tienes un largo camino por");
    printf("\ndelante.");

    printf("\n\nTe pones tu hermosa caperucita roja y te alistas para salir.");
    printf("\n\n**Caperucita roja +3 de vida...**");

    vida = 3;

    //Sentencia de control para poder finalizar el programa hasta este punto...
    printf("\n\nSi desea continuar presione 1, sino presione 0: ");
    scanf("%d", &opcion);

    /* Si la opcion es > 0 entonces se devuelven 0 puntos de vida y se sale de la estructura if de main
    lo que termina el programa... */
    if(opcion > 0){
        vida = vida;
    }
    else if (opcion <= 0){
        vida = 0;
    }

    return vida;
}

int introPostContexto(int vida)
{
    int opcion;

    printf("\n\n-¡La abuela se encuentra enferma y no se puede levantar de su cama! -dice con tristeza tu");
    printf("\nmadre-. ¿Crees que puedas entregarle esta canasta a tu abuela?");

    printf("\n\nPor un momento piensas en no entregarle la canasta a tu abuela debido al frío que hace");
    printf("\nafuera, pero al pensar en tu querida abuela decides emprender la aventura con tal de ayudarla");
    printf("\ny le dices que sí a tu madre.");

    printf("\n\n**Canasta +2 de vida**");

    vida += 2;

    // Sentencia de control para continuar o finalizar el programa...
    printf("\n\nSi desea continuar presione 1, sino presione 0: ");
    scanf("%d", &opcion);

    if (opcion > 0)
    {
        vida = vida;
    }
    else if (opcion <= 0)
    {
        vida = 0;
    }

    return vida;
}

/* ---------------------------- Comienza el modulo escrito por CARO ---------------------------- */

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

    // ACCIONES DEL CAMINO 1, 2 Y 3
    switch (camino1){
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

        if(continuar > 0){
            vida = vida;
        }
        else if(continuar <= 0){
            vida = 0;
        }
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

        if (continuar > 0)
        {
            vida = vida;
        }
        else if (continuar <= 0)
        {
            vida = 0;
        }
        break;

    case 3: // CAMINO DEL DESIERTO de hielo
        printf("\nPor valiente, quizá también porque te faltan algunos tornillos, decides ir por el desierto de hielo ");
        printf("\ndonde te quema el frío... -1 de vida");
        vida = vida - 1;
        printf("\nValiente, escriba '1' para continuar ");

        scanf("%d", &continuar);

        if (continuar > 0)
        {
            vida = vida;
        }
        else if (continuar <= 0)
        {
            vida = 0;
        }
        break;
    }
    return vida;
}

/* ---------------------------- Bloque de codigo escrito por Erick ---------------------------- */

int escenarioCazador(int vida){

    int opcion, continuar;

    // Para elegir que opicón quieres hacer con el viejillo
    printf("\n\nSigues caminando hasta que a la izquierda del camino te topas con una antigua cabaña de madera.");
    printf("\nDecides tocar la puerta, entonces sale un hombre viejo.");
    printf("\nEl misterioso señor lleva puesto un abrigo de piel de lobo y tiene la cara llena de cicatrices.");
    printf("\n-¿Qué es lo que quieres?- Te pregunta viejo y frunce el ceño, luego le cambia el tabaco a su pipa y la prende. ");

    printf("\n\nEscribe '1' para regalarle un delicioso pan de tu canasta al viejo.");
    printf("\nSi deseas retar a un pobre viejito a un combate escribe '2'.");
    printf("\nSi deseas hacer enojar al viejo escribe '3'.");
    printf("\nEscribe tu opción: ");
    scanf("%d", &opcion);

    while (opcion < 1 || opcion > 3){
        printf("\n\n¡Esa opción no existe! Inténtalo de nuevo.");
        printf("\nEscribe '1' para regalarle un delicioso pan de tu canasta al viejo.");
        printf("\nSi deseas retar a un pobre viejito a un combate escribe '2'.");
        printf("\nSi deseas hacer enojar al viejo escribe '3'.");
        printf("\nEscribe tu opción: ");
        scanf("%d", &opcion);
    }

    switch (opcion){
    case 1: // Amistad con el cazador
        printf("\n\nLe regalas al viejo el pan.");
        printf("\n-¡Está buenísimo!- Exclama el señor y bocado a bocado su expresión fría e ");
        printf("\nintimidante se va transformado en una sonrisa. ");
        printf("\nTe despides del viejo. No cabe duda que haz hecho un amigo y sin lugar a duda");
        printf("\nesta es la historia más empalagosa que he narrado !Me rehúso a narrar si sigues así¡");

        printf("\n\n¡Haz hecho un amigo, ahora tienes el poder de la amistad! Uy que cursi.");
        printf("\nEscribe '1' para continuar haciendo amistades a lo largo de esta historia.");
        scanf("%d", &continuar);

        if(continuar > 0){
            vida = vida;
        }
        else if(continuar <= 0){
            vida = 0;
        }

        break;

    case 2: // Combate con el cazador
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
        vida = vida - 1;
        printf("\nSi quieres seguir demostrando tu fuerza a lo largo de esta historia escribe '1': .");
        scanf("%d", &continuar);

        if (continuar > 0){
            vida = vida;
        }
        else if (continuar <= 0){
            vida = 0;
        }

        break;

    case 3: // Viejo enojado
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