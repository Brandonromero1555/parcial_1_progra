/******************************************************************************

1. Realizar una funci�n que  reciba como par�metro el importe de un producto y un porcentaje de descuento.
La funci�n retornar� el  importe con el descuento aplicado. Probar en el main.

3. Crear una funci�n que permita invertir el orden de una cadena de caracteres,
La funci�n recibir� dos cadenas, una con el texto a invertir, y otra para el texto invertido. Probar desde el main.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


float calculaDescuento(float importe, float porceDescuento);

int main()
{
	setbuf(stdout, NULL);

    float importe = 100;
    float descuento = 10;
    float importeFinal;

    importeFinal = calculaDescuento(importe, descuento);

    printf("importe final: %.2f", importeFinal);

    return 0;
}

float calculaDescuento(float importe, float porceDescuento)
{
    float retorno = -1;
    float descuento;
    float importeD;

        descuento = (importe * porceDescuento) / 100;
        importeD = importe - descuento;

        retorno = importeD;

    return retorno;
}
