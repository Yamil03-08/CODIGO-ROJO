#incluye <stdio.h>

int Main (){

 int descuento = 10;
 int descuentocliente = 20;
 int cliente = 0; 
 int z = 0;
     
     z = (cliente) ? descuentocliente : descuento;
   
    printf ("El descuento es de %d \% \ n", z);
    printf ("fin del programa\n");
   
    system ("pause");
    


return 0;
 }