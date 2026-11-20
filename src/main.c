#include <stdbool.h>
#include <stm8s.h>
#include "main.h"
#include "milis.h"



void init(void)
{
    CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);      // taktovani MCU na 16MHz
    init_milis();
    //init_uart1();

    

}


int main(void)
{
  
    uint32_t time = 0;

    init();

    while (1) {
       
    }
}

/*-------------------------------  Assert -----------------------------------*/
#include "__assert__.h"
