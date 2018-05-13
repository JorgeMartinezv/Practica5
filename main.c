#include <18F4620.h>
#device adc=10 
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, NOMCLR, STVREN, NOLVP, NODEBUG
#use delay(clock=16000000)
#use fast_io(a)
#use fast_io(b)
#use fast_io(c)
#use fast_io(d)
#use fast_io(e)
//interrupcion del ADC
#int_AD
void ISR_ADC(void)
{
    if(primerConversion == 1)
       resultadoPrimerConversion = read_adc(ADC_READ_ONLY);
    if(segundaConversion == 1)
        resultadoSegundaConversion = read_adc(ADC_READ_ONLY);
   read_adc(ADC_START_ONLY);
}

//Funcion principal
void main (void)
{
   setup_oscillator(OSC_16MHZ);
   //Configuracion del ADC
   setup_adc(ADC_CLOCK_DIV_32);
   setup_adc_ports(AN0_TO_AN1);
   //Interrupciones.
   enable_interrupts(INT_AD);
   enable_interrupts(GLOBAL); 
   
}
