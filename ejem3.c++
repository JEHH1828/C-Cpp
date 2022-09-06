//finalmente un ejemplo de break
#include <stdio.h>

int main() {
   int i,malas=0;
      char nota;

   for (i = 1; i <= 10; ++i) {
        printf("Iteracion %d \n",i);
      printf("Mete una nota musical en cifrado americano en letra minúscula\n:");
      scanf(" %c", &nota);

      printf("Metiste %c \n", nota);

      if (nota<'a' || nota >'g')
      {
          printf("No sabes musica \n");
        malas=malas+1;

        break;}
        else
           if (nota =='a') {printf("la nota es la \n");}
           else
            if (nota=='b') {printf("la nota es si \n");}
           else
            if (nota=='c') {printf("la nota es do \n");}
           else
            if (nota=='d') {printf("la nota es re \n");}
           else
            if (nota=='e') {printf("la nota es mi \n");}
           else
            if (nota=='f') {printf("la nota es fa \n");}
           else
            if (nota=='g') {printf("la nota es sol \n");}
   }
printf("numero de malas %d",malas);
   return 0;
}