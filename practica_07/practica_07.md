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

#### b. Ejecute el programa y compruebe si su respuesta es correcta, Modifique el valor del bucle for y compruebe los nuevos resultados.

