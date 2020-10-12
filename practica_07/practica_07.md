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

