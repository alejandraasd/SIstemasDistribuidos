struct datos
{
int a;
int b;
};
program CALCULADORA_PROG{
    version UNO{
        int suma(struct datos)=1;
        }=1;

    version DOS{
        int resta(struct datos)=2;
        }=2;
    version TRES{
        int multiplicacion(struct datos)=3;
        }=3;

    version CUATRO{
        int division(struct datos)=4;
        }=4;

}=0x20000003;
