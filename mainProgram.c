/*En este archivo mainProgram es donde se va a unir todo el codigo para verificar la funcionalidad del mismo */
#include <stdio.h>
// Datos que se utilizarán más adelante
struct datos
{
    int poder;
    int amigo;
} partida;

// Funciones de la presentacion del juego
void presentacionInicial();
int introContexto();
int introPostContexto(int vida);
// EscenarioCamino funcion
int escenarioCamino(int vida);
// ElLenador funcion
int escenarioCazador(int vida);
// CasaAbuelita funcion
int casaAbuelita(int vida);
void final1(int vida);

/* ---------------------------- Bloque de codigo escrito por RUBEN ALVARADO---------------------------- */

/* FUNCION main(): Con esta funcion manejamos todo lo que ocurre con el resto de las funciones, se
puede decir que esta funcion es la que controla todo el programa segun las decisiones y los datos
que reciban las funciones especializadas. */
/* FECHA: 26 de marzo 2022 */
int main()
{
    int vida;

    // Funciones para la presentacion del juego -- llamadas
    presentacionInicial();
    vida = introContexto();

    if (vida > 0)
    {
        vida = introPostContexto(vida);

        if (vida > 0)
        {
            // EscenarioCamino funcion -- llamadas
            vida = escenarioCamino(vida);

            if (vida > 0)
            {
                vida = escenarioCazador(vida); /* Falta leer el guion y comparar con el
                el codigo y verificar la unidad entre code */

                if (vida > 0)
                {
                    vida = casaAbuelita(vida);
                }
            }
        }
    }

    return 0;
}

/* FECHA: 26 de marzo 2022 */
void presentacionInicial()
{
    printf("Bienvenido a este minijuego. \n\nCaperucita Roja. The game...");
    printf("\n\nRecuerda que cada una de las decisiones que tomes influirá en como terminarás el juego... intenta no morir c:\n");
}

/* FUNCION introContexto(): Nos da contexto del inicio de la historia sobre la que se va a trabajar, en este punto conectamos con main(), para
poder acabar con el programa en puntos determinados, y esto con ayuda de los puntos de vida*/
/* FECHA: 26 de marzo 2022 */
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

    // Sentencia de control para poder finalizar el programa hasta este punto...
    printf("\n\nSi desea continuar presione 1, sino presione 0: ");
    scanf("%d", &opcion);

    /* Si la opcion es > 0 entonces se devuelven 0 puntos de vida y se sale de la estructura if de main
    lo que termina el programa... */
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

/* FUNCION introPostContexto(): De manera formal ya se inicia el juego como tal, mediante main() tambien
se mantine el poder acabar con el programa dados los puntos de control establecidos, mediante la modificacion
de los puntos de vida del usuario. */
/* FECHA: 26 de marzo 2022 */
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

/* ---------------------------- Comienza el modulo escrito por CARO VAZQUEZ ---------------------------- */

/* FUNCION escenarioCamino(): Segun el mapa diagrama de como funciona el programa de manera general esta es la primera seccion
con diferentes caminos que se tiene, aqui se describen y tambien mediante estructuras de control se van sumando puntos de vida
y tambien es que de manera personal por el usuario independientemente de como se desarolle el juego mediante main() se puede terminar*/
/* FECHA: 25 de marzo 2022 */
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

        if (continuar > 0)
        {
            vida = vida;
        }
        else if (continuar <= 0)
        {
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

/* ---------------------------- Bloque de codigo escrito por ERICK ARZAT ---------------------------- */

/* Segunda parte de la historia a la que se llega con puntos de vida distintos dependiendo de las decisiones tomadas por
el usuario previamente en la funcion anterior y justificada en el mapa guia de la hisotoria... como las funciones anteriores
esta tabien puede se cortada de golpe si se quisiera... */
/* FECHA: 25 de marzo 2022 */
int escenarioCazador(int vida)
{

    int opcion, continuar;

    // Para elegir que opción quieres hacer con el viejillo
    printf("\n\nSigues caminando hasta que a la izquierda del camino te topas con una antigua cabaña de madera.");
    printf("\nDecides tocar la puerta, entonces sale un hombre viejo.");
    printf("\nEl misterioso señor lleva puesto un abrigo de piel de lobo y tiene la cara llena de cicatrices.");
    printf("\n-¿Qué es lo que quieres?- Te pregunta viejo y frunce el ceño, luego le cambia el tabaco a su pipa y la prende. ");

    printf("\n\nEscribe '1' para regalarle un delicioso pan de tu canasta al viejo.");
    printf("\nSi deseas retar a un pobre viejito a un combate escribe '2'.");
    printf("\nSi deseas hacer enojar al viejo escribe '3'.");
    printf("\nEscribe tu opción: ");
    scanf("%d", &opcion);

    while (opcion < 1 || opcion > 3)
    {
        printf("\n\n¡Esa opción no existe! Inténtalo de nuevo.");
        printf("\nEscribe '1' para regalarle un delicioso pan de tu canasta al viejo.");
        printf("\nSi deseas retar a un pobre viejito a un combate escribe '2'.");
        printf("\nSi deseas hacer enojar al viejo escribe '3'.");
        printf("\nEscribe tu opción: ");
        scanf("%d", &opcion);
    }

    switch (opcion)
    {
    case 1: // Amistad con el cazador
        printf("\n\nLe regalas al viejo el pan.");
        printf("\n-¡Está buenísimo!- Exclama el señor y bocado a bocado su expresión fría e ");
        printf("\nintimidante se va transformado en una sonrisa. ");
        printf("\nTe despides del viejo. No cabe duda que haz hecho un amigo y sin lugar a duda");
        printf("\nesta es la historia más empalagosa que he narrado !Me rehúso a narrar si sigues así¡");

        printf("\n\n¡Haz hecho un amigo, ahora tienes el poder de la amistad! Uy que cursi.");
        printf("\nEscribe '1' para continuar haciendo amistades a lo largo de esta historia.");
        scanf("%d", &continuar);

        partida.amigo = 1;

        if (continuar > 0)
        {
            vida = vida;
        }
        else if (continuar <= 0)
        {
            vida = 0;
        }

        break;

    case 2: // Combate con el cazador
        printf("\n\nLe dices al viejo que lo que quieres es un oponente digno para pelear, entonces...");
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
        partida.poder = 1;

        printf("\nSi quieres seguir demostrando tu fuerza a lo largo de esta historia escribe '1': .");
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

/* ---------------------------- Comienza el modulo escrito por DAVID MUÑOZ ---------------------------- */

/* FUNCION casaAbuelita(): Aqui su descripcion plox */
/* FECHA: 24 de abril de 2022 */
int casaAbuelita(int vida)
{

    int opcion;
    // historia
    printf("Caminas hasta llegar a la casa de tu abuela. Te percatas que el lobo está recostado en la cama \n");
    printf("de tu abuela.\n\n");
    // seleccionar opciones
    printf("Para entrar sigilosamente por la ventana y agarrar al lobo desprevenido escribe  '1'.\n");
    printf("Si prefieres entrar por la puerta escribe  '2'.\n\n\n");

    scanf("%d", &opcion);

    while (opcion < 1 || opcion > 2)
    {
        printf("Esa opción no existe ¡¿Qué tan difícil es presionar una tecla?!\n");
        printf("Para entrar sigilosamente por la ventana y agarrar al lobo desprevenido escribe  '1'.\n");
        printf("Si prefieres entrar por la puerta escribe  '2'.\n\n\n");

        scanf("%d", &opcion);
    }
    // por la ventana
    if (opcion == 1)
    {
        printf("Entras por la ventana y le metes un golpe al lobo. Entonces el lobo se levanta de la cama de\n ");
        printf("tu abuela, puedes ver que es m?s grande que un lobo normal. Y de repente... te muerde el brazo\n\n");
        vida = vida - 3;
        // si vives y derrotaste al cazador
        if (vida > 0 && partida.poder == 1)
        {
            printf("El combate contra el cazador te preparó para enfrentar al lobo. Con tu brazo bueno le lanzas un\n");
            printf("gancho al lobo. El lobo se retuerce de dolor y después se abalanza sobre ti con las fauces\n");
            printf("abiertas y de en eso le das una patada tan fuerte que rompe el techo de la casa de tu abuela.\n\n");
            printf("Arrancas un trozo de  tu caperucita para vendarte la mordida del lobo. Finalmente le abres la\n");
            printf("panza al lobo y sacas a tu abuela. Aprovechas la piel de lobo y te haces un saco como el del\n");
            printf("cazador.\n\n");

            printf("HAS ENCONTRADO EL FINAL ÉPICO\nGANASTE\n");
            printf("FIN DEL JUEGO");
        }
        // si mueres o no derrotaste al cazador
        else
        {
            printf("No te has recuperado de la mordida, cuando un colosal lobo... te lanza una lluvia de mordidas\n");
            printf("tan fuertes que ning?n humano soportar?a semejante ataque. Al parecer no fue una buena idea\n");
            printf("pelearse con un lobo tan grande ?Sigues ah?? ?No sigas la luz! No sigas la...\n\n");

            printf("TE HA COMIDO EL LOBO\n");
            printf("FIN DEL JUEGO");
        }
    }
    // por la puerta
    if (opcion == 2)
    {
        printf("Decides entrar por la puerta. Abres la puerta y ves al lobo acostado en la cama de tu abuela\n");
        printf("??Por qu? tienes unos dientes tan grandes abuelita? ? Le preguntas al lobo que se encuentra\n");
        printf("disfrazado de tu abuela.\n");
        printf("??Para comerte mejor! ? Esto te hubiera respondido el lobo si los lobos hablaran.\n");
        printf("Entonces...\n\n\n");

        // pedir ayuda y amigo cazador
        if (partida.amigo == 1)
        {
            printf("Gritars para pedir ayuda a tu amigo el cazador. Entonces llega el cazador y llena de plomo al\n");
            printf("lobo. Te acercas al lobo para ver si est? muerto, pero en eso... te lanza un zarpazo con sus\n");
            printf("?ltimas fuerzas.\n\n\n");
            vida = vida - 2;
            final1(vida);
        }
        else
        {
            printf("Pediste auxilio pero no hay nadie que te ayude. Entonces el lobo te ataca ?No puedes morir as?!\n");
            printf("Este es un final muy malo para la historia.\n\n");

            printf("TE HA COMIDO EL LOBO\n");
            printf("FIN DEL JUEGO");
        }
    }

    return vida;
}

// funcion que describe el tipo de final
void final1(int vida)
{
    if (vida > 0)
    {
        printf("Bueno... que? final m?s aburrido. Mejor me voy a narrar otra historia\n\n");
        printf("GANASTE DE UNA FORMA S?PER ABURRIDA\n");
        printf("FIN DEL JUEGO");
    }
    else
    {
        printf("Moriste ya que no pudiste aguantar un pequeño rasgu?o del lobo.\n\n");
        printf("TE HA MATADO EL LOBO\n");
        printf("FIN DEL JUEGO");
    }
}