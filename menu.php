<?php

const NUMERO_SALIDA = 0; // Definimos el número de salida

do {
    echo "Ingrese el número de día (o " . NUMERO_SALIDA . " para salir): ";
    $dia = trim(fgets(STDIN)); // Leer la entrada del usuario y limpiar espacios/saltos de línea

    // Convertimos la entrada a entero
    $numeroDia = (int)$dia;

    if ($numeroDia === NUMERO_SALIDA && $dia === (string)NUMERO_SALIDA) { // Verificamos estrictamente la entrada
        echo "Saliendo del programa. ¡Hasta luego!\n";
        break; // Salir del bucle si el usuario ingresa el número de salida
    }

    switch ($numeroDia) {
        case 1:
            echo "Día 1: Lunes\n";
            break;
        case 2:
            echo "Día 2: Martes\n";
            break;
        case 3:
            echo "Día 3: Miércoles\n";
            break;
        case 4:

echo "Día 4: Jueves\n";
            break;
        case 5:
            echo "Día 5: Viernes\n";
            break;
        case 6:
            echo "Día 6: Sábado\n";
            break;
        case 7:
            echo "Día 7: Domingo\n";
            break;
        default:
            // Verificamos si la entrada original no era un número
            if (!is_numeric($dia)) {
                echo "Entrada no válida. Por favor, ingrese un número.\n";
            } else {
                echo "Ingrese un número de día válido (1-7).\n";
            }
            break;
    }
    echo "---\n"; // Separador para cada iteración
} while (true); // El bucle se ejecutará indefinidamente hasta que se use 'break'

?>
