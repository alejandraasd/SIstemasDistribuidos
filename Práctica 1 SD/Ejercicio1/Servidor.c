
#include <Socket_Servidor.h>
#include <Socket.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <unistd.h>

int main ()
{
	int Socket_Servidor;
	int Socket_Cliente;
   int Aux;
   int Longitud_Cadena;
	char Cadena[100];

	Socket_Servidor = Abre_Socket_Inet ("cpp_java");
	if (Socket_Servidor == -1)
	{
		printf ("No se puede abrir socket servidor\n");
		exit (-1);
	}
	Socket_Cliente = Acepta_Conexion_Cliente (Socket_Servidor);
	if (Socket_Servidor == -1)
	{
		printf ("No se puede abrir socket de cliente\n");
		exit (-1);
	}


   Longitud_Cadena = 5;
   strcpy (Cadena, "Hola");

   Aux = htonl (Longitud_Cadena);

   Escribe_Socket (Socket_Cliente, (char *)&Aux, sizeof(Longitud_Cadena));
   printf ("Servidor C: Enviado %d\n", Longitud_Cadena-1);

   Escribe_Socket (Socket_Cliente, Cadena, Longitud_Cadena);
   printf ("Servidor C: Enviado %s\n", Cadena);
   
   Lee_Socket (Socket_Cliente, (char *)&Aux, sizeof(Longitud_Cadena));


   Longitud_Cadena = ntohl(Aux);
   printf ("Servidor C: Recibido %d\n", Longitud_Cadena-1);

	Lee_Socket (Socket_Cliente, Cadena, Longitud_Cadena);
   printf ("Servidor C: Recibido %s\n", Cadena);

	close (Socket_Cliente);
	close (Socket_Servidor);
}

