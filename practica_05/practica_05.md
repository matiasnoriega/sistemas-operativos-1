# Capitulo 8
## Actividad 1
### 1. ¿Para qué se utiliza el PID de un proceso?
Se utiliza para identificar unívocamente a un proceso y puede ser representado por un número entero entre 0 y 65564, comenzando en 0 al iniciarse el sistema y volviendo a 0 cuando se llega el máximo.
### 2. ¿Pueden existir dos PID iguales en un instante dado? ¿Por qué?
No, porque es la manera en que el sistema identifica de manera única a cada proceso. También cada proceso es representado por un subdirectorio en la carpeta `/proc/` que lleva el nombre de su **PID** y no pueden existir dos archivos/directorios con el mismo nombre dentro de un espacio en común. 
### 3. ¿Puede un usuario modificar la prioridad de un proceso perteneciente a otro usuario? ¿Por qué? ¿En qué casos podría realizarlo?
No, solamente puede modificar los procesos de los cuales sea dueños, salvo el superusuario que puede modificar la prioridad de sus procesos como los de los demás usuarios. El que solo el superusuario tenga el poder de hacer estas modificaciones para procesos que no le pertencen es otro escalón más en el sistema de seguridad y permisos de GNU/Linux. Podría darse el caso de que el usuario *X* le de al proceso *Y* más prioridad de la que necesite, de manera malintencionada o no, demorando el resto de las tareas, entonces el administrador de sistema puede cambiar la prioridad del mismo para traer balance al uso del CPU.
### 4. ¿Qué interpretación le da Ud. al caracter ‘?’ de la columna TTY en la salida del comando ps?
Quiere decir que ese proceso en particular no está asociado a ninguna terminal (TTY) en particular.
### 5. Investigue qué información podemos visualizar sobre el proceso 1.
Con el comando `top` podemos ver el usuario propietario (root), la prioridad que tiene asignada, la cantidad de memoria virtual utilizada, la cantidad de memoria física utilizada, la memoria compartida, el estado del mismo, los porcentajes de uso de CPU y Memoria, el tiemp ototal de CPU que utilizó desde que fue iniciado y el comando que se usó para iniciar el proceso (systemd).
Chequeando el subdirectorio `/proc/1/` podemos encontrar más información en los archivos que allí se encuentran, como `status`.
### 6. ¿Cuál es el tamaño (size) de los archivos del subdirectorio /proc? ¿Por qué?
El tamaño de la mayoría de los archivos dentro del directorio `/proc` es de ***0 bytes*** ya que son archivos virtuales, a pesar de que pueden contener mucha información.
## Actividad 2
### 2. Listar sus procesos activos.
```
matias@debian:/proc/1$ ps
  PID TTY          TIME CMD
 1210 pts/0    00:00:00 bash
 1347 pts/0    00:00:00 ps
```
### 3. Realizar un informe de TODOS los procesos activos en el sistema. Analice su salida.
```
matias@debian:/proc/1$ ps -aux | more
USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root         1  0.0  1.0 103932 10160 ?        Ss   19:03   0:00 /sbin/init
root         2  0.0  0.0      0     0 ?        S    19:03   0:00 [kthreadd]
root         3  0.0  0.0      0     0 ?        I<   19:03   0:00 [rcu_gp]
root         4  0.0  0.0      0     0 ?        I<   19:03   0:00 [rcu_par_gp]
root         6  0.0  0.0      0     0 ?        I<   19:03   0:00 [kworker/0:0H-kblockd]
root         8  0.0  0.0      0     0 ?        I<   19:03   0:00 [mm_percpu_wq]
...
```
### 5. Eliminar el proceso access_log. Verificar la eliminación.
Dado que en la instancia de Debian que usamos el access_log no se le está dando uso, se usa el comando `sleep` para resolver este punto.
```
matias@debian:/proc/1$ sleep 400&
[1] 1759
matias@debian:/proc/1$ ps
  PID TTY          TIME CMD
 1210 pts/0    00:00:00 bash
 1759 pts/0    00:00:00 sleep
 1760 pts/0    00:00:00 ps
matias@debian:/proc/1$ kill -9 1759
matias@debian:/proc/1$ ps
  PID TTY          TIME CMD
 1210 pts/0    00:00:00 bash
 1761 pts/0    00:00:00 ps
[1]+  Terminado (killed)      sleep 400
matias@debian:/proc/1$
```
### 6. Ejecutar el comando uptime y comentar su resultado.
```
matias@debian:/proc/1$ uptime
 20:54:03 up  1:50,  1 user,  load average: 0,01, 0,01, 0,00
```
### 7. Realizar la búsqueda del archivo at.allow en todo el sistema de archivos
El archivo at.allow no existe, pero si existe el archivo at.deny
```
root@debian:/etc# find / -name at.allow
root@debian:/etc# find / -name at.deny
/etc/at.deny
```
### 8. Detener el comando anterior y enviarlo a 2° plano.
```
root@debian:/etc# find / -name at.deny
/etc/at.deny
^Z
[1]+  Detenido                find / -name at.deny
root@debian:/etc# bg 1
[1]+ find / -name at.deny &
root@debian:/etc#
```
### 9. Volver a poner en primer plano el proceso de búsqueda anterior.
```
root@debian:/etc# fg 1
bash: fg: el trabajo ha terminado
[1]+  Hecho                   find / -name at.deny
```
### 10. Usted es el Administrador del Sistema, y a las 2000 horas comenzarán tareas de mantenimiento del Sistema, se pide programar 20 minutos antes, un listado de los procesos activos en ese momento y un listado de los usuarios conectados al Sistema:
Se cambia el horario de la consigna para que se adapte a los próximos puntos
```
matias@debian:/etc$ uptime
 22:11:06 up  3:07,  1 user,  load average: 0,00, 0,00, 0,00
matias@debian:/etc$ at 22:15
warning: commands will be executed using /bin/sh
at> ps -a
at> who
at> <EOT>
job 3 at Sat Sep 26 22:15:00 2020

```
### 11. Mostrar por pantalla las tareas planificadas en el punto anterior.
```
matias@debian:/etc$ atq
3	Sat Sep 26 22:15:00 2020 a matias
```
### 12. Verificar la salida de punto 10.
```
matias@debian:~$ mail
"/var/mail/matias": 2 mensajes 2 nuevos
>N   1 matias             sáb sep 26 22:1  17/558   Output from your job        3
?
Return-path: <matias@debian>
Envelope-to: matias@debian
Delivery-date: Sat, 26 Sep 2020 22:15:00 -0300
Received: from matias by debian with local (Exim 4.92)
	(envelope-from <matias@debian>)
	id 1kMLHI-0000tp-PX
	for matias@debian; Sat, 26 Sep 2020 22:15:00 -0300
Subject: Output from your job        3
To: matias@debian
Message-Id: <E1kMLHI-0000tp-PX@debian>
From: matias <matias@debian>
Date: Sat, 26 Sep 2020 22:15:00 -0300

  PID TTY          TIME CMD
 3292 pts/0    00:00:00 find
 3293 pts/0    00:00:00 find
matias   tty7         2020-09-26 19:03 (:0)
?
```
### 13. Buscar el texto “cron” en todos los archivos de su directorio de login cuya extensión sean txt y crear un archivo salidacron con el resultado de la búsqueda. Realizar esta tarea en segundo plano y cuando el sistema esté menos ocupado o la carga del mismo así lo permita (batch).
```
matias@debian:~$ batch
warning: commands will be executed using /bin/sh
at> grep cron ~/*.txt > salidacron&
at> <EOT>
job 5 at Sat Sep 26 22:26:00 2020

```
### 14. Verificar la realización del comando anterior.
```
matias@debian:~$ more salidacron
matias@debian:~$
```

