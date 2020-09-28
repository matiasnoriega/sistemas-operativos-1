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
## Actividad 3
### 2. Hacer un listado recursivo y paginado de su directorio de login.
```
matias@debian:~$ ls -lR | more
.:
total 9552
-rw-r--r--  1 matias matias       0 sep  9 03:34 A
-rw-r--r--  1 matias matias     438 sep  9 02:56 AA
lrwxrwxrwx  1 matias matias       1 sep  9 03:31 AAA -> A
drwxr-xr-x  2 matias matias    4096 sep  9 17:54 actividad_03
drwxr-xr-x  2 matias matias    4096 sep  9 16:53 backup
-rw-r--r--  1 matias matias   30720 sep  9 17:28 backup2.tar
-rw-r--r--  1 matias matias 9007549 sep  9 16:55 backup.tgz
...
./tareas:
total 24
-rw-r--r-- 1 matias matias 7817 sep 15 18:56 dir1
-rw-r--r-- 1 matias matias 7817 sep 15 18:56 dir2
-rw-r--r-- 1 matias matias 1232 sep 16 14:44 listado_ordenado
-rw-r--r-- 1 matias matias   82 sep 15 21:37 usuarios

./Vídeos:
total 0
matias@debian:~$
```
### 3. Buscar los archivos cuyo nombre comience con lin, en todo el file system y redireccionar la salida al archivo listalin. Ejecutar en segundo plano.
```
root@debian:/home/matias# find / -name lin* > listalin&
[1] 3598
```
### 4. Verificar en qué estado se encuentra el proceso anterior. ¿Está en ejecución? ¿Qué PID tiene asignado?
```
root@debian:/home/matias# jobs
[1]+  Hecho                   find / -name lin* > listalin
```
### 5. Determinar si el proceso 1456 se está ejecutando en:
#### a) Su sesión de trabajo: ps | grep 1456
```
matias@debian:~$ ps | grep 1456
matias@debian:~$ 
```
#### b) En todo el sistema:
```
matias@debian:~$ ps -aux | grep 1456
matias    3612  0.0  0.0   6088   884 pts/1    S+   22:54   0:00 grep 1456
```
En realidad no encuentra el proceso del PID 1465 sino que muestra el proceso de PID 3612 cuyo comando de lanzamiento fue `grep 1465`

### 6. Lanzar en background un proceso que clasifique por número de i-nodo en orden ascendente los archivos.
```
matias@debian:~$ ls -i $HOME | sort -n&
[1] 3616
matias@debian:~$  3140 tareas
 3143 Escritorio
 3144 Descargas
 3145 Plantillas
 3146 Público
 3147 Documentos
 3148 Música
 3149 Imágenes
 3150 Vídeos
 3160 lista_usu
 3163 practico
 3207 listado_archivos
 3342 nuevo
 3390 link-apache
 3392 dir1
 3395 directorios
```
### 7. Usted es un encargado de área de una organización, ha ingresado al sistema como usuario10 y a las 20:00 horas termina su jornada de trabajo. Entonces decide programar 30 minutos después:
#### a) Realizar una copia de los archivos que hay en su directorio de trabajo a un directorio de respaldo /home/”nombre_usuario”/respaldo
#### b) Conocer los usuarios que estén conectados al Sistema en ese momento.
```
matias@debian:~$ at 20:30
warning: commands will be executed using /bin/sh
at> cp $HOME/* ~/respaldo
at> who
at> <EOT>
job 6 at Mon Sep 28 20:30:00 2020
```
### 8.Mostrar por pantalla las tareas planificadas en el punto anterior.
```
matias@debian:~$ atq
6	Mon Sep 28 20:30:00 2020 a matias
```
### 9.Buscar en el File System el archivo at.deny. Realizar esta tarea en segundo plano y cuando la carga del sistema así lo permita (modo batch).
```
matias@debian:~$ batch
warning: commands will be executed using /bin/sh
at> find / -name at.deny&
at> <EOT>
job 7 at Sun Sep 27 21:41:00 2020
```
### 10. Verificar la realización del comando anterior. ¿Qué comando utilizó?
```
matias@debian:/var/mail$ mail
"/var/mail/matias": 2 mensajes 2 nuevos
>N   1 Mail Delivery Syst dom sep 27 21:42  52/1523  Mail delivery failed: ret
 N   2 matias             dom sep 27 21:53 881/44252 Output from your job 
```
ó
```
matias@debian:/var/mail$ cat /var/mail/matias
From matias@debian Sun Sep 27 21:53:53 2020
Return-path: <matias@debian>
Envelope-to: matias@debian
Delivery-date: Sun, 27 Sep 2020 21:53:53 -0300
Received: from matias by debian with local (Exim 4.92)
	(envelope-from <matias@debian>)
	id 1kMhQP-0000PN-BC
	for matias@debian; Sun, 27 Sep 2020 21:53:53 -0300
Subject: Output from your job        8
To: matias@debian
Message-Id: <E1kMhQP-0000PN-BC@debian>
From: matias <matias@debian>
Date: Sun, 27 Sep 2020 21:53:53 -0300
X-IMAPbase: 1601254449 3
Status: O
X-UID: 2

find: ‘/sys/kernel/debug’: Permiso denegado
find: ‘/sys/fs/pstore’: Permiso denegado
find: ‘/sys/fs/bpf’: Permiso denegado
find: ‘/var/lib/private’: Permiso denegado
find: ‘/var/lib/lightdm’: Permiso denegado
...
```
### 11. A causa de un factor externo, la tarea de copia del ejercicio 7-a se debe completar en forma urgente. Usted es supervisor. Asigarle la máxima prioridad de ejecución y tener en cuenta que el proceso ya se está ejecutando. ¿Qué pasos realizará?
```
matias@debian:/var/mail$ ps -l
F S   UID   PID  PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
0 S  1000  1385  1381  0  80   0 -  2128 -      pts/0    00:00:00 bash
0 R  1000  1613  1385  0  80   0 -  2637 -      pts/0    00:00:00 ps
matias@debian:/var/mail$ renice -20 [PID del proceso si estuviese en ejecución] 
```
## Actividad 4
### 1. Generar un archivo con información sobre los usuarios conectados al sistema pero no se incluya usted en ese informe.
```
matias@debian:~$ who | grep -v $LOGNAME > usuarios_conectados
```
### 2. Programar la siguiente tarea: generar un archivo con un informe sobre el desempeño del sistema cada 60 minutos (tiempo en el que el sistema lleva funcionando, usuarios conectados, etc).
```
matias@debian:~$ vi tareas_crontab
matias@debian:~$ crontab tareas_crontab
matias@debian:~$ crontab -l
0 * * * * uptime >> reporte_$(date +"%y%m%d%H%M%S")
```
### 3. Realizar un informe de todos los procesos activos del usuario alumno90 y analizar su salida.
```
matias@debian:~$ ps -l -ualumno90
F S   UID   PID  PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
4 S  1000  1137     1  0  80   0 -  5320 do_epo ?        00:00:00 systemd
5 S  1000  1138  1137  0  80   0 - 26344 -      ?        00:00:00 (sd-pam)
4 S  1000  1153  1132  0  80   0 -   597 -      ?        00:00:00 sh
...
```
### 4. Indicar cuál es la función comando del renice.
El comando permite modificar la prioridad (subir o bajar) de un proceso que se encuentra en ejecución. Mientras que un usuario común solo puede modificar la prioridad de los procesos de los que sea dueño, el superusuario podrá modificar las prioridades tanto de sus procesos como los de los demás.

