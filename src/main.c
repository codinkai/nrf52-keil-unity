
#include "nrf_gpio.h"

#define LED1_PIN    13
#define LED2_PIN    14
#define LED3_PIN    15
#define LED4_PIN    16

int main(void) {
  nrf_gpio_cfg_output(LED1_PIN);
  nrf_gpio_cfg_output(LED2_PIN);
  nrf_gpio_cfg_output(LED3_PIN);
  nrf_gpio_cfg_output(LED4_PIN);
  
  
  while(1) {
    nrf_gpio_pin_set(LED1_PIN);
    nrf_gpio_pin_set(LED2_PIN);
    nrf_gpio_pin_set(LED3_PIN);
    nrf_gpio_pin_set(LED4_PIN);
  }
}
