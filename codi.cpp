//Funcion mostrar resultado de conversiones.
void mostrarConversiones(void)
{
    
    if(primerConversion == 1)
       {
          if(resultadoPrimerConversion < 100)
             {
                output_b(0x01);
                output_c(0x00);
             }
          else
             if(resultadoPrimerConversion < 200)
                output_b(0x02);
             else
                if(resultadoPrimerConversion < 300)
                   output_b(0x04);
                else
                   if(resultadoPrimerConversion < 400)
                      output_b(0x08);
                   else
                      if(resultadoPrimerConversion < 500)
                         output_b(0x10);
                     else
                        if(resultadoPrimerConversion < 600)
                           output_b(0x20);
                        else
                           if(resultadoPrimerConversion < 700)
                              output_b(0x40);
                           else
                              if(resultadoPrimerConversion < 800)
                                 {
                                    output_b(0x80);
                                    output_c(0x00);
                                 }
                              else
                                 if(resultadoPrimerConversion < 900)
                                    {
                                       output_b(0x00);
                                       output_c(0x01);
                                    }
                                 else
                                    if(resultadoPrimerConversion < 1023)
                                       output_c(0x02);
       }
    if(segundaConversion == 1)
       {
          if(resultadoSegundaConversion < 100)
              {
                output_d(0x01);
                output_e(0x00);
             }
          else
             if(resultadoSegundaConversion < 200)
                output_d(0x02);
             else
                if(resultadoSegundaConversion < 300)
                   output_d(0x04);
                else
                   if(resultadoSegundaConversion < 400)
                      output_d(0x08);
                   else
                      if(resultadoSegundaConversion < 500)
                         output_d(0x10);
                     else
                        if(resultadoSegundaConversion < 600)
                           output_d(0x20);
                        else
                           if(resultadoSegundaConversion < 700)
                              output_d(0x40);
                           else
                              if(resultadoSegundaConversion < 800)
                                 {
                                    output_d(0x80);
                                    output_e(0x00);
                                 }
                              else
                                 if(resultadoSegundaConversion < 900)
                                   {
                                       output_d(0x00);
                                       output_e(0x01);
                                    }
                                 else
                                    if(resultadoSegundaConversion < 1023)
                                       output_e(0x02);
       }
    read_adc(ADC_START_ONLY);
}
