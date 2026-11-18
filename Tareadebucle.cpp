#include <iostream> // para la entrada y salida de datos (cout, cin)
#include <string>  //  para guardar los nombre de estudiante y mejor promedio
#include <iomanip> //  para controlar los decimales en los promedios
using namespace std;

int main() {
    cout << "Calificaciones de los estudiantes del Centro Educativo La Nueva Escuela\n\n"; 
        int cantidadEstudiantes;
        string nombreEstudiante;
        double calificacion1, calificacion2, calificacion3, calificacion4; 
        char repetir;


           // Use do-while para que el programa pueda correr al menos una vez y se repita si el usuario quiere evaluar otro grupo
        do { 
            int aprobados = 0;
            int reprobados = 0;
            double sumaPromediosGrupo = 0;
            double mayorPromedio = -1;
            string mejorEstudiante = "";

            cout<< "\n"; 
            cout << "Ingrese la cantidad de estudiantes:";
            cin >> cantidadEstudiantes;

        
          // Use While para validar que la cantidad sea mayor a 0; si el usuario ingresa un número negativo o cero, el programa no lo deja avanzar
        while (cantidadEstudiantes <= 0) {
            cout << "Error> La cantidad debe ser mayor que 0: ";
            cin >> cantidadEstudiantes;
            }
  
           // Use For para repetir el proceso con cada estudiante, dependiendo de la cantidad que indicó el usuario
        for (int i = 1; i <= cantidadEstudiantes; i++) {
        
            cout << "\n--- Estudiante " << i << " ---\n";
            cout << "Nombre: ";
            cin >> nombreEstudiante; 

            double sumaNotasEstudiantes = 0;
            double calificacion;

             // Uso el for para pedir exactamente las 4 calificaciones de cada estudiante uno por uno
        for (int j = 1; j <= 4; j++) {
             cout << "Calificacion " << j << " (0-100): ";
             cin >> calificacion;


         // Aqui uso el While para validar que la calificacion esté entre 0 y 100; si ingresan un numero negativo o mayor a 100
             while (calificacion < 0 || calificacion > 100) {
                 cout << "Calificacion fuera de rango. Ingrese un valor entre 0 y 100: ";
                 cin >> calificacion;
             }

             sumaNotasEstudiantes += calificacion; // Acumula las notas notas validas que va ingresando el usuario
        }
               
        
        double promedioEstudiante = sumaNotasEstudiantes / 4.0;  // Lo uso para sumar las notas y dividirlas entre 4.0 para sacar el promedio exacto del estudiante

        cout << fixed << setprecision(2); // Los uso para que el resultado se vea ordenado con solo dos decimales
        cout << "Promedio de " << nombreEstudiante << ": " << promedioEstudiante;

        if (promedioEstudiante >= 70) {
            cout << " - Aprobado\n";
            aprobados++;
        }

        else {
            cout << " - Reprobado\n";
            reprobados++;

        }
        sumaPromediosGrupo += promedioEstudiante; 

        if (promedioEstudiante > mayorPromedio) {
            mayorPromedio = promedioEstudiante;
            mejorEstudiante = nombreEstudiante; 
        
           }

        }

            // Para mostrar en pantalla el resumen final con la estadistica del grupo
             cout << "\n==== RESUMEN ====\n";
             cout << "Aprobados: " << aprobados << " | Reprobados: " << reprobados << endl; 

           double promedioGrupo = sumaPromediosGrupo / cantidadEstudiantes; // Calcula el promedio general dividiendo la suma total entre la cantidad de alumnos
         cout << "Promedio del grupo: " << promedioGrupo << endl;
         cout << "Mejor promedio: " << mejorEstudiante << " (" << mayorPromedio << ")\n\n";


          // Para preguntar si el usuario desea procesar otro grupo de estudiantes
          cout <<"Desea procesar otro grupo? (s/n): ";
          cin >> repetir;


          // Lo uso para que el bucle se repita si el usuario presiona 's' o 'S'
        } while (repetir == 's' || repetir == 'S');

        return 0;
}



