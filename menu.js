let dia;
const NUMERO_SALIDA = 0; // Definimos el número de salida

do {
    dia = prompt(`Ingrese el número de día (o ${NUMERO_SALIDA} para salir):`);

    // Convertimos la entrada a número. Si no es un número válido, parseInt devuelve NaN.
    let numeroDia = parseInt(dia);

    if (numeroDia === NUMERO_SALIDA) {
        console.log("Saliendo del programa. ¡Hasta luego!");
        break; // Salir del bucle si el usuario ingresa el número de salida
    }

    switch (numeroDia) {
        case 1:
            console.log("Día 1: Lunes");
            break;
        case 2:
            console.log("Día 2: Martes");
            break;
        case 3:
            console.log("Día 3: Miércoles");
            break;
        case 4:
            console.log("Día 4: Jueves");
            break;
        case 5:
            console.log("Día 5: Viernes");
            break;
        case 6:
            console.log("Día 6: Sábado");
            break;
        case 7:
            console.log("Día 7: Domingo");
            break;
        default:
            // Verificamos si la entrada no fue un número válido o si fue diferente de 0 y no un día
            if (isNaN(numeroDia)) {
                console.log("Entrada no válida. Por favor, ingrese un número.");
            } else {
                console.log("Ingrese un número de día válido (1-7).");
            }
            break;
    }
    console.log("---"); // Separador para cada iteración
} while (true); // El bucle se ejecutará indefinidamente hasta que se use 'break'
