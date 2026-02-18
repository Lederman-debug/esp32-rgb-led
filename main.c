#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

//Alias para LED0,LED1
#define LED_GPIO_RED GPIO_NUM_13
#define LED_GPIO_GREEN GPIO_NUM_14
#define LED_GPIO_BLUE  GPIO_NUM_12


void app_main() {
  //CONFIGURANDO PARA SALIDA 
  gpio_set_direction(LED_GPIO_RED , GPIO_MODE_OUTPUT);
  gpio_set_direction(LED_GPIO_GREEN , GPIO_MODE_OUTPUT);
  gpio_set_direction(LED_GPIO_BLUE , GPIO_MODE_OUTPUT);

      //APAGADOS TODOS AL INICIO
    gpio_set_level(LED_GPIO_RED,0);
    gpio_set_level(LED_GPIO_GREEN,0);
    gpio_set_level(LED_GPIO_BLUE,0); 

  while(1){
    //PROBANDO EL COLOR ROJO
    gpio_set_level(LED_GPIO_RED,1);
    vTaskDelay(1000/portTICK_PERIOD_MS); //ESPERO 1 SEGUNDO
    gpio_set_level(LED_GPIO_RED,0); //APAGAGAR LED

    //ENCENDEMOS EL LED VERDE
    gpio_set_level(LED_GPIO_GREEN,1);
    vTaskDelay(1000/portTICK_PERIOD_MS); //ESPERO 1 SEGUNDO
    gpio_set_level(LED_GPIO_GREEN,0); //APAGAMOS LED

    //ENCENDIDO EL LED AZUL
    gpio_set_level(LED_GPIO_BLUE,1);
    vTaskDelay(1000/portTICK_PERIOD_MS); //ESPERO 1 SEGUNDO
    gpio_set_level(LED_GPIO_BLUE,0); //APAGADO DE LED


  }

}
