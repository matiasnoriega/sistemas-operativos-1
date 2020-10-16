# Prácticas de Programación

## Ejercicios

### 1. Procesos. Dado el siguiente programa, determine.
#### a. Cuál sería el resultado de este programa si quitamos cada uno de los comentarios de la llamada a fork de a uno por vez. Es decir, que aparecerá por la consola y en qué orden (si es que se puede predecir)?

Lo que sucederá es que comenzarán a aparecer en pantalla más secuencias de las salidas "Uno", "Dos" y "Tres" respectivamente, correspondientes al padre y al nuevo proceso hijo. En el primer caso tanto padre como hijo ejecutaran los 3 `printf()`, si solo descomentamos el segundo `fork` el padre ejecutará los 3 `printf()` mientras que el hijo solamente ejecutará los últimos 2, comenzando por `printf("Dos\n")`para que finalmente si descomentamos solamente el último `fork` el proceso hijo solo ejecute `printf("Tres\n")` mientras que el padre ejecute todos.

Para
```
fork();
printf("Uno\n");
//fork();
printf("Dos\n");
//fork();
printf("Tres\n");
```
Tenemos
```
Uno
Dos
Tres
Uno
Dos
Tres
```
Para
```
//fork();
printf("Uno\n");
fork();
printf("Dos\n");
//fork();
printf("Tres\n");
```
Tenemos
```
Uno
Dos
Tres
Dos
Tres
```
Y Para
```
//fork();
printf("Uno\n");
//fork();
printf("Dos\n");
fork();
printf("Tres\n");
```
Tenemos
```
Uno
Dos
Tres
Tres
```

No se puede predecir el orden en el que se ejecutaran, si el padre o el hijo irá primero. La naturaleza asíncrona de `fork` dice que no se debería ejecutar código perteneciente al proceso hijo que dependa de la ejecución del código del proceso padre, ni viceversa, ya que esto podría crear potenciales *race conditions*.

#### b. Y si quitamos los comentarios de todas las llamadas a fork a la vez? 

Lo mismo que en el punto anterior, la salida en pantalla sería la secuencia de "Uno", "Dos" y "Tres" con la diferencia de que al ser exponencial la cantidad de procesos hijos creados, es imposible predecir el orden de aparición de las salidas en pantalla. Podríamos decir que la primer línea siempre sería "Uno" y la última "Tres", pero no hay manera de predecir a que proceso correspondería cada una.

```
Uno
Dos
Uno
Tres
Dos
Dos
Tres
Dos
Tres
Tres
Tres
Tres
Tres
Tres
```
### 2. Dado el siguiente programa, determine
#### a. Sin ejecutar el proceso, cuántas líneas con la palabra “Proceso” aparecen al final de la ejecución de este programa? El número de líneas es el número de procesos que han estado en ejecución.

Por la cantidad de veces que se ejecuta la instrucción `fork()`, o sea 3 iteraciones, que crearían procesos de manera exponencial, intuyo que la cantidad de proesos creados es de 8.

#### b. Ejecute el programa y compruebe si su respuesta es correcta, Modifique el valor del bucle for y compruebe los nuevos resultados.

Efectivamente, la cantidad de procesos creados para 3 iteraciones fueron 8:
```
Comienzo.:
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
```
Agregando una iteración más (4) podemos ver como la cantidad de procesos se duplica:
```
Comienzo.:
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
Proceso
```
### 3. Padres e hijos.
#### a. Escriba un programa que lance tres nuevos procesos hijos. Estos procesos mostrarán su identificador de proceso (PID) y el identificador de proceso de su padre (PPID) y, después, terminarán. El proceso padre debe esperar a que los procesos hijos terminen antes de finalizar.

#### b. Qué pasaría si el proceso padre no esperará a los hijos?. Pruebe esto varias veces, aumentando el número de hijos y compruebe los resultados. Asegúrese que todos los PID y PPID mostrados son correctos.

Lo que sucede es que algunos de los procesos hijos terminan luego de que termina el proceso padre, entonces en lugar de mostrar el pid del proceso padre cómo no existen procesos huerfanos en GNU/Linux se asignan como hijos de `init` o `systemd` (este último en Ubuntu 20.04), y retornan este PID en lugar de el del proceso que los creó.

### 4. El siguiente programa recibe como parámetro de entrada un número entero y muestra como resultado su factorial.
#### a. Escríbelo, compílalo y ejecútalo para comprobar su funcionamiento.
#### b. Escribe un nuevo programa que reciba dos números enteros como parámetros de entrada y cree dos procesos de manera que cada uno calcule el factorial de uno de los números, de forma concurrente, y utilizando el programa ejecutable obtenido en el apartado anterior.
#### c. Haz que el proceso padre sea el último en terminar, es decir, que espere a la terminación de sus procesos hijos.

Ver ejercicio_4.c adjunto. Ejemplo de salida:

```
 🇹🇭   ~/Documentos/Facultad/Sistemas Operativos I/sistemas-operativos-1/practica_07/ejercicio_4   master ●  ./ejercicio_4 9 8
Factorial de 9, resultado parcial 2
Factorial de 8, resultado parcial 2
Factorial de 9, resultado parcial 6
Factorial de 8, resultado parcial 6
Factorial de 8, resultado parcial 24
Factorial de 9, resultado parcial 24
Factorial de 8, resultado parcial 120
Factorial de 9, resultado parcial 120
Factorial de 8, resultado parcial 720
Factorial de 9, resultado parcial 720
Factorial de 8, resultado parcial 5040
Factorial de 9, resultado parcial 5040
Factorial de 8, resultado parcial 40320
Factorial de 9, resultado parcial 40320
El factorial de 8 es 40320
Factorial de 9, resultado parcial 362880
El factorial de 9 es 362880
Proceso Padre PID: 148724 Terminado
```

### 5. Contar señales.
#### a. Escriba un programa que cuente las señales USR1 y USR2 que recibe. Cuando este programa reciba la señal TERM, mostrará el número de señales USR1 y USR2 recibidas y terminará.

#### b. Una variante de este ejercicio, si ha utilizado un manejador distinto para cada señal, es escribir una nueva versión utilizando una única función como manejador para ambas señales.

Ejemplo de salida, se manejó las señales desde un principio con un solo handler:

```
Proceso 173298 esperando señales... 

Señal 10(USR1) recibida. Contador: 1
Señal 10(USR1) recibida. Contador: 2
Señal 10(USR1) recibida. Contador: 3
Señal 10(USR1) recibida. Contador: 4
Señal 10(USR1) recibida. Contador: 5
Señal 12(USR2) recibida. Contador: 1
Señal 12(USR2) recibida. Contador: 2
Señal 12(USR2) recibida. Contador: 3
Señal 12(USR2) recibida. Contador: 4
Señal 12(USR2) recibida. Contador: 5
Señal 12(USR2) recibida. Contador: 6
Se recibieron 5 Señales USR1 y 6 Señales USR2
Se procede a finalizar el programa.
 🔥   ~/Documentos/Facultad/Sistemas Operativos I/sistemas-operativos-1/practica_07/ejercicio_5   master  
```
### 6. Pipes
#### a. Escribe un programa que genere tres procesos en paralelo que colaboran para realizar las siguientes tareas:
##### El primer proceso, utilizando la orden grep, encontrará las líneas de un fichero (fich1) que contienen una palabra (ambos dados como parámetros en la línea de comandos) y las escribirá en una tubería.
##### El segundo proceso, utilizando la orden grep, encontrará las líneas de un fichero (fich2) que contienen la misma palabra (ambos dados como parámetros en la línea de comandos) y las escribirá en la misma tubería.
##### El tercer proceso, utilizando la orden wc, leerá de la tubería las líneas producidas por los otros dos, las contará(-l) y escribirá el resultado en un nuevo fichero (fich3) pasado como parámetro en la línea de comandos. Así, el programa se utilizará en la línea de comandos de la siguiente forma: `$ programa palabra arch1 arch2 arch3`
Ejemplo de salida:
```
 🇹🇭   ~/Documentos/Facultad/Sistemas Operativos I/sistemas-operativos-1/practica_07/ejercicio_6   master ●  ./ejercicio_6 algo a1 a2 a3
 🇹🇭   ~/Documentos/Facultad/Sistemas Operativos I/sistemas-operativos-1/practica_07/ejercicio_6   master ●  cat a3
3
 🇹🇭   ~/Documentos/Facultad/Sistemas Operativos I/sistemas-operativos-1/practica_07/ejercicio_6   master ● 

```
Efectivamente en los archivos a1 y a2 hay 3 líneas que contienen la palabra `algo`

#### b. Re-programar el ejemplo de “ls|sort” de la practica con named pipes.

Ejemplo de salida del nuevo programa usando **FIFO/named pipes**:
```
 🔥   ~/Documentos/Facultad/Sistemas Operativos I/sistemas-operativos-1/practica_07/ejercicio_6   master  ./nuevo_lssort
nuevo_lssort.c
nuevo_lssort
fifo
ejercicio_6.c
ejercicio_6
a3
a2
a1
```

