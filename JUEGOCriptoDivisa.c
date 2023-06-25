//se definen los framework
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PROCESSES 10
#define MEMORY_SIZE 100

typedef struct {
    int process_id;
    int memory_required;
} Process;

//Se definen las funciones a utilizar
void MenuPrincipal(int* count);
void Panel_Control();

int Cantidad_Usuario();


//Funcion main
int main(){
    Panel_Control();
    return 0;
}

//se establecen las funciones 
void MenuPrincipal(int* count){
    printf("\n\t Bienvenid@ al Panel de Control \n\n");
    printf("  Que Maquina desea Ver \n");
    printf(" 1) Maquina 1. \n 2) Maquina 2. \n");
    printf(" 3) Salida \n");
    scanf("%d", count);
};

int Cantidad_Usuario(){
    srand(time(NULL));
    int cant_UH = rand() % 1000000 + 1;
    int cant_US = (rand() % 1000000 + 1)*2;
    printf("La cantidad total de usuarios es: %d\n", cant_UH + cant_US);
    printf("La cantidad de usuarios humanos es: %d\n", cant_UH);
    printf("La cantidad de usuarios de sistema es: %d\n", cant_US);
};
void Panel_Control(){
    int count=0;
    do{
        MenuPrincipal(&count);
        switch (count){
        case 1:
            printf(" Maquina 1 \n\n");
            Cantidad_Usuario();
            break;
        case 2:
            printf("  Maquina 2. \n\n");
            break;
        default:
            break;
        }
    } while (count!=3 );

    printf("  Gracias por usar este programa \n\n");
}
/*
// DEBO cumplir con los siguientes cambios de ESTADO:
Un inicio o final de un proceso. Fallas de comunicación de E/S de otro hardware.
falta de espacio de almacenamiento, Superación de umbral de uso de procesador o memoria (definir), Espera si algun recurso no esta disponible.

Definir un void Panel_de_control() donde se puedan ver los sistemas y su respectivo uso de recursos.
mostrara uso de procesos, recursos harware, y usuarios activos. Debe permitir detencion y reinicio de procesos, asi como respaldos de info.

El juego finaliza cuando ocurre una falla sitematica, perdida irreversible de info de algun sistema base, definir umbral.
Estas fallas se deben definir al iniciar el juego.
*/

/*
void Entidad(){ //maquina

}
*/
/*
void Sistema(){
    //debe existir almenos 1, disponibilidad permanente
    S_Banca{                    //sistema para ver cuenta personal
        int pagos_recibidos
        int pagos_efectuados
        int montos
        int fechas
        int horas
        char Estado_Cuentas
        S_Credenciales
    }

    //El sistema registrara la situación tributaria de todas las personas naturales y jurídicas. Su funcionamiento debe ser permanente. Eventualmente, se podría admitir discontinuidades breves.
    S_Impuesto{                 //sistema para ver cuenta personal
        int Registra_Pagos(S_Banca)
        int deudas_personasnatural
        int deudas_personasjuridica
    }

    //Estará integrado a las diferentes entidades bancarias,se deberá otorgar acceso a los usuarios según las credenciales configuradas en los respectivos bancos.
    //Su disponibilidad debe ser tan alta como SB
    S_Pago{
        int interface(S_Banca, personas){
            int realizapago
            int realizatransferencia
        }
        int transacciones_efectudas
        int transacciones_fallidas
        int alerta_fraude
    }

    // El minado de criptodivisas corresponde a pruebas de trabajo(minar o certificar transacción)
    S_Criptodivisa{
        int billeteravirtual
        int minado
        void blockchain
    }

    //Un sistema de pruebas de fuerza bruta debe probar todas las combinaciones posibles, para detectar claves. 
    //Es intensivo en cómputo.
    S_FuerzaBruta{                //sistema de ataque
        int obtener credenciales

    }
    S_Credenciales()
    S_Competencia()

}
*/
/*
Explotacion_Ajena(){
    adquisicion_credenciales
    ingreso al Sistema_Credenciales
    adquisicion_Privilegios
    Ejecucion de procesos que recarguen el sistema
    1) Crear nuevo usuario/credenciales para ataques futuros
    2) Recargar el sistema Obligando a requerir más hardware
    3) Programar eventos que se traduzcan en un colapso del sistema involucrado
    4) Todas las posibilidades que ofrece el SO sobre produccion
}
*/
/*
    Cantidad_Usuarios(){
        int Usuarios_Humanos;
        int Usuarios_Sistema;
    }
    Tiempo_atencion{
        //verificar solicitudes y recursos
    }
*/
/*
void Hardware(){
    int H_procesadores          //velocidad MHz
    int H_memoria               //Capacidades(bytes: KiB, GiB, TiB, etc.) y velocidad (MHz).
    int H_almacenamiento        //Capacidad (bytes: KB, GB, TB, etc.) y velocidad L/E (bytes/s).
    int H_dispositivo_comunicaciones        //Velocidades de carga y descarga (bits/s)
    int H_dispositivo_entrada_y_salida      //Tiempo de inicialización para el SO (s) y Tamaño de buffer (bytes); Prioridad
    //Hes conciderar ciclos de vida expresado en constantes años, meses

    //cada dispositivo , estos se expresan en criptodivisas
    int costo_compra
    int costo
    int periodo_arriendo
}
*/
