# LED RGB con ESP32 (simulado en Wokwi)

## ¿Qué hay en este repo?
- `main.c`: código en C que enciende los colores rojo, verde y azul uno tras otro.
- `diagram.json`: esquema de conexiones para importar directo en Wokwi.

## ¿Cómo funciona?
- Configuro los pines GPIO12, GPIO13 y GPIO14 como salida.
- El LED es de **cátodo común** (el pin más largo va a GND).
- En un ciclo infinito:
  - Enciendo el rojo (GPIO13 HIGH), espero 1 segundo, lo apago.
  - Enciendo el verde (GPIO14 HIGH), espero 1 segundo, lo apago.
  - Enciendo el azul (GPIO12 HIGH), espero 1 segundo, lo apago.
  - Y vuelta a empezar.

## Conexiones
| Color | Pin ESP32 |
|-------|-----------|
| Rojo  | GPIO13    |
| Verde | GPIO14    |
| Azul  | GPIO12    |
| Común (GND) | GND |

## Resistencias usadas (valores calculados)
Para proteger los pines y que el brillo sea parejo:
- Rojo: 68 Ω
- Verde: 22 Ω
- Azul: 22 Ω

Todas son resistencias de 1/4 W, las más comunes.
