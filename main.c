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
//Variables globales.
long resultadoPrimerConversion = 0;
long resultadoSegundaConversion = 0;
short primerConversion = 0;
short segundaConversion = 0;
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
   //puertos.
   set_tris_a(0x03);
   set_tris_b(0x00);
   set_tris_c(0x00);
   set_tris_d(0x00);
   set_tris_e(0x00);
   while(1)
   { 
     
   }
}