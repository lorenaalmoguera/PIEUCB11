#include <iostream>

int main() {
    // Define las temperaturas aquí
    float celsius = 25.0;      // Ejemplo: 25 grados Celsius
    float fahrenheit = 77.0;   // Ejemplo: 77 grados Fahrenheit
    float convert_to_fahrenheit, convert_to_celsius;

    // Selecciona la opción de conversión (1 para Celsius a Fahrenheit, 2 para Fahrenheit a Celsius)
    int opcion = 1;  // Cambia a 2 para convertir de Fahrenheit a Celsius

    if (opcion == 1) {
        convert_to_fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        std::cout << celsius << "°C es equivalente a " << convert_to_fahrenheit << "°F\n";
    } else if (opcion == 2) {
        convert_to_celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
        std::cout << fahrenheit << "°F es equivalente a " << convert_to_celsius << "°C\n";
    } else {
        std::cout << "Opción no válida.\n";
    }

    return 0; // Indicamos que el programa terminó correctamente
}
