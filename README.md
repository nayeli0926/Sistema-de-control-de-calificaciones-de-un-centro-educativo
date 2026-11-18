# Sistema de control de calificaciones de un centro educativo
Programa en C++ para procesar calificaciones de estudiantes y generar promedios.
### Presentacion:
- **Estudiante:** Nayelis Frías Previris.
- **Matrícula:** 2024-3453.
- **Maestro**: Gamalier Reyes del Carmen.
## Descripción del Programa
Este programa desarrollado en C++ permite procesar las calificaciones de grupos de estudiantes de manera automatizada. El sistema solicita la cantidad de alumnos, pide el nombre y 4 calificaciones de cada uno (validando que estén en el rango de 0 a 100), calcula sus promedios individuales con dos decimales precisos, determina si están aprobados o reprobados, y al finalizar genera un resumen grupal que incluye la cantidad de aprobados, reprobados, el promedio general del grupo y el estudiante con el mejor promedio. Además, ofrece la opción de repetir el proceso para evaluar múltiples grupos.

### Datos de entrada

El programa pide que ingrese los siguientes datos:

* Cantidad de estudiantes, que debe ser mayor que cero.
* Nombre de cada estudiante.
* Cuatro calificaciones por estudiante, cada una dentro del rango de 0 a 100.
* Confirmación para procesar otro grupo (s/n).
  
 ### Proceso
-  Pide la cantidad de estudiantes y valida que sea mayor que cero.
- Registra el nombre y las cuatro calificaciones de cada estudiante.
- Verifica que cada calificación se encuentre entre 0 y 100.
- Calcula el promedio individual de cada estudiante y determina si está aprobado (promedio >=70) o reprobado.
- Acumula los promedios, cuenta los aprobados y reprobados e identifica al estudiante con el mejor promedio.
- Calcula el promedio general del grupo y pregunta si se desea procesar otro grupo.

 ### Datos de salida

Al finalizar, el programa muestra en pantalla:
* El promedio individual y el estado (Aprobado / Reprobado) de cada estudiante.
* Un resumen con la cantidad de aprobados y reprobados.
* El promedio general del grupo.
* El nombre y la calificación del estudiante con el mejor promedio.

### Uso de bucles

Durante el proceso utilicé tres tipos de bucles:

1. **Bucle do-while:** Lo utilicé para que el programa pueda correr al menos una vez y se repita si el usuario quiere evaluar otro grupo, evaluando al final la condición (repetir == 's' || repetir == 'S').

2. **Bucle for:** Lo utilicé en primer lugar, para repetir el proceso con cada estudiante, dependiendo de la cantidad que indica el usuario; y en segundo lugar para pedir exactamente las 4 calificaciones de cada estudiante uno por uno.

3. **Bucle while:** Lo utilicé para la validación de datos, en primer lugar para validar que la cantidad de estudiantes sea mayor a 0 (si el usuario ingresa un número negativo o cero, el programa no lo deja avanzar), en segundo lugar dentro de las calificaciones para validar que estén entre 0 y 100, obligando a reingresar el valor si se salen de ese rango.

## Capturas de la ejecución del programa

Se muestran las capturas: 

#### Escenario 1: Registro y resumen de un grupo
En este escenario ingresé la cantidad de estudiantes, el nombre y las cuatro calificaciones de cada uno. El programa calcula el promedio individual indicando si aprobó o reprobó, y al final muestra el resumen con la cantidad de aprobados, reprobados, el promedio general del grupo y el estudiante con el mejor promedio.
<img width="1504" height="659" alt="image" src="https://github.com/user-attachments/assets/941230bd-df60-4807-8572-cc2c25cb42d9" />
<img width="833" height="590" alt="image" src="https://github.com/user-attachments/assets/72a92b84-1801-4857-abf6-2b56491e377f" />

#### Escenario 2: Repetición del programa y validación de errores
En este escenario respondí con 'S' para procesar otro grupo de estudiantes. Como se observa en la ejecución, el programa se repitió desde el inicio pidiendo la cantidad de alumnos, y además utilicé la validación de errores al ingresar una calificación negativa (-100) y una mayor a 100 (105), obligando al sistema a rechazar los datos y pedir valores correctos entre 0 y 100.
<img width="1008" height="403" alt="WhatsApp Image 2026-11-18 at 00 47 26" src="https://github.com/user-attachments/assets/722b046a-5509-4302-9871-d8f0f0993950" />

#### Escenario 3: Resumen del segundo grupo y Validación del límite inferior de calificación (0)
En este escenario quise validar el comportamiento del programa con el límite mínimo permitido. Al ingresar una calificación de exactamente 0 para uno de los estudiantes, el sistema la aceptó de manera correcta dentro del rango válido (0-100), calculó su promedio correspondiente y generó el resumen grupal sin ningún inconveniente
<img width="974" height="763" alt="image" src="https://github.com/user-attachments/assets/57774e99-bcbe-49ea-9c1c-108d127b7d78" />

#### Escenario 4: Validación de la cantidad de estudiantes y cierre del programa
En este escenario probé la validación de entrada inicial: al intentar ingresar '0' como cantidad de estudiantes, el programa detectó el error, mostró el mensaje de advertencia y obligó a ingresar una cantidad válida (en este caso, 1 estudiante) para poder avanzar con el registro. Finalmente, al responder 'n' a la opción de repetir, el programa concluyó su ciclo de ejecución y cerró la consola correctamente.
<img width="1600" height="774" alt="image" src="https://github.com/user-attachments/assets/b0c633e9-2390-423f-9f4b-a550f5a43762" />




