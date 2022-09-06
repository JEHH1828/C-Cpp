//
# include <stdio.h>
main ()
{
int edad,mesescotizacion,mes;
float interesnominal, // interes que las afores ofrecen sobre el saldo,
interesreal,// interes que se obtiene una vez descontada la inflacion
ahorro, // cantidad que se agrega a lo ahorrado cada mes
ahorrado, //total de dinero en la cuenta de la afore
inflacion=0.05, // aumento en el costo de la vida estimado y puede variar
sueldo=20000, //cantidad total percibida por el trabajador el 2.5% es para el afore, empresa y gobierno cooperan con el resto
cotizacion=0.15; //porcentaje del sueldo que dirigen a la afore trabajador, gobierno y patron
char respuesta;
do
{printf("de su edad: ");
    scanf("%d",&edad);
    mesescotizacion=(65-edad)*12;// considerando jubilarse a los 65 años

    printf("mesescotizacion %d \n",mesescotizacion);
    ahorro=sueldo*cotizacion;
    ahorrado=0;
    interesnominal=0.05;// promediado a partir de la pagina https://www.consar.gob.mx/gobmx/aplicativo/siset/Series.aspx?cd=146&cdAlt=False
    inflacion=0.04; // tomado considerando valores pico no extraordinarios de la página https://www.proyectosmexico.gob.mx/por-que-invertir-en-mexico/economia-solida/politica-monetaria/sd_tasas-de-inflacion-historicas/

    interesreal=interesnominal-inflacion;
    for(mes=1;mes<=mesescotizacion;mes++)
    {

        ahorrado=ahorro+ahorrado*(1+interesreal/12);
        printf("mes %10d  ",mes);
        printf("ahorrado %10.2f   ",ahorrado);

        printf("ahorro %10.2f \n",ahorro);

    }
    printf("una vez jubilado a los 65 años recibira \n");
    printf("pago mensual de: %10.2f \n",ahorrado/((85-65)*12));
    printf("equivale al %10.2f porciento del sueldo ",ahorrado/((85-65)*12)/sueldo*100);
    printf("\n Quiere otro calculo? 'n' para terminar \n");
    scanf("  %c",&respuesta);
    printf("respuesta %c \n",respuesta);

}
while((respuesta!='n') && (respuesta!='N'));
    return 0;
}