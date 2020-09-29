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

# Capitulo 9
## Actividad 1
### 1- Utilice el comando free para dar un informe sobre la memoria usada y libre, en Mbytes y cada 75 segundos.
```
matias@debian:~$ free -m --seconds=75
              total        used        free      shared  buff/cache   available
Mem:            987         260         198           4         528         576
Swap:          1021           0        1021
```
### 2- Sin suspender el proceso anterior y con el objetivo de ejecutar procesos lo suficientemente grandes como para reflejar cambios en los datos del archivo meminfo, desde el entorno gráfico ejecute alguna aplicación (ej. Editor). Regrese a modo texto y analice los nuevos informes de free. Observe que los valores en Free y en Shared han cambiado. ¿Por qué? 
aaa
### 3- Genere con el comando utilizado en el punto 1, un archivo de informes y llámelo monitor. Luego de unos mitutos podemos ver su contenido y obtener un informe completo de cómo han ido cambiando los distintos espacios de memoria.
```
matias@debian:~$ free -m --seconds=75 > monitor
^C
matias@debian:~$ cat monitor
              total        used        free      shared  buff/cache   available
Mem:            987         474          69          30         443         339
Swap:          1021           2        1019

              total        used        free      shared  buff/cache   available
Mem:            987         474          68          30         443         338
Swap:          1021           2        1019

              total        used        free      shared  buff/cache   available
Mem:            987         474          68          30         443         338
Swap:          1021           2        1019

              total        used        free      shared  buff/cache   available
Mem:            987         474          68          30         443         338
Swap:          1021           2        1019
matias@debian:~$
```
### 4- De un informe de los procesos que se están ejecutando en el sistema. ¿vmstat figura como proceso? ¿Por qué?
```
matias@debian:~$ vmstat 10 2
procs -----------memory---------- ---swap-- -----io---- -system-- ------cpu-----
 r  b   swpd   free   buff  cache   si   so    bi    bo   in   cs us sy id wa st
 0  0   2828 304236  27492 406888    0    2   371    28   93  540  0  0 98  1  0
 0  0   2828 303976  27492 406888    0    0     0     0  166  667  0  0 99  0  0
```
mientras corre chequeo en otra terminal:
```
matias@debian:~$ ps -le | grep vmstat
0 S  1000  1828  1459  0  80   0 -  2472 hrtime pts/0    00:00:00 vmstat
```
Se verifica que figura como un proceso corriendo. En el apunte aclara que vmstat no se toma como un proceso así mismo, pero mientras corre si se considera cómo un proceso para el resto del sistema (`ps`, por ejemplo).
### 5- Muestre por pantalla la salida del comando top y compare con el comando free.
```
matias@debian:~$ top

top - 20:52:47 up 33 min,  1 user,  load average: 0,02, 0,02, 0,00
Tasks: 120 total,   1 running, 119 sleeping,   0 stopped,   0 zombie
%Cpu(s):  1,1 us,  1,1 sy,  0,0 ni, 97,8 id,  0,0 wa,  0,0 hi,  0,0 si,  0,0 st
MiB Mem :    987,4 total,    294,8 free,    268,1 used,    424,5 buff/cache
MiB Swap:   1022,0 total,   1019,2 free,      2,8 used.    570,9 avail Mem

  PID USER      PR  NI    VIRT    RES    SHR S  %CPU  %MEM     TIME+ COMMAND
 1143 root      20   0  239684  67296  32128 S   4,7   6,7   0:09.83 Xorg
 1455 matias    20   0  497860  39260  29640 S   3,0   3,9   0:04.85 xfce4-ter+
 1321 matias    20   0   68776  23980  19680 S   0,3   2,4   0:00.70 xfwm4
 1322 matias    20   0  366928  22768  17644 S   0,3   2,3   0:00.07 Thunar
    1 root      20   0  104128  10288   7916 S   0,0   1,0   0:00.90 systemd  
...
```
```
matias@debian:~$ free
              total        used        free      shared  buff/cache   available
Mem:        1011060      272732      303652        5268      434676      586340
Swap:       1046524        2828     1043696
```

## Actividad 2
### 1 - Muestre por pantalla un informe sobre las particiones de swap, memoria swap utilizada y prioridades. Analice la información.
```
matias@debian:~$ cat /proc/swaps
Filename				Type		Size	Used	Priority
/dev/sda5                               partition	1046524	2828	-2
```
### 2 - Genere un archivo de control que contenga un informe completo sobre los procesos (listos, inactivos, etc), memoria utilizada y paginada. Realice la tarea cada 30 seg. y por el lapso de 5 minutos. Realice esta tarea en background.
### 3- Luego de este lapso analice la información del archivo control.
```
matias@debian:~$ vmstat 30 10 > control&
[1] 1855
matias@debian:~$ more control
procs -----------memory---------- ---swap-- -----io---- -system-- ------cpu-----
 r  b   swpd   free   buff  cache   si   so    bi    bo   in   cs us sy id wa st
 0  0   2828 296696  27560 407172    0    1   255    19   89  449  0  0 99  1  0
matias@debian:~$ more control
procs -----------memory---------- ---swap-- -----io---- -system-- ------cpu-----
 r  b   swpd   free   buff  cache   si   so    bi    bo   in   cs us sy id wa st
 0  0   2828 296696  27560 407172    0    1   255    19   89  449  0  0 99  1  0
 0  0   2828 296436  27584 407224    0    0     2     2  123  488  0  0 100  0  0
 0  0   2828 296436  27592 407224    0    0     0     2   56  106  0  0 100  0  0
 0  0   2828 296436  27600 407224    0    0     0     0   53   98  0  0 100  0  0
 0  0   2828 296436  27608 407224    0    0     0     1   54   97  0  0 100  0  0
 0  0   2828 296436  27616 407224    0    0     0     0   53   96  0  0 100  0  0
 0  0   2828 296436  27624 407224    0    0     0     1   54   96  0  0 100  0  0
 0  0   2828 296436  27632 407224    0    0     0     0   53   96  0  0 100  0  0
 0  0   2828 296436  27640 407224    0    0     0     1   54   97  0  0 100  0  0
 0  0   2828 296436  27648 407224    0    0     0     0   53   96  0  0 100  0  0
[1]+  Hecho                   vmstat 30 10 > control
```
### 4- Genere un archivo en su directorio con el nombre intercambio, de tamaño 2Mbytes para swap que intercambie bloques de 2kB.
```
root@debian:/home/matias# dd if=/dev/zero of=intercambio bs=2048 count=1024
1024+0 registros leídos
1024+0 registros escritos
2097152 bytes (2,1 MB, 2,0 MiB) copied, 0,00285558 s, 734 MB/s
root@debian:/home/matias# sudo mkswap intercambio 1024
mkswap: intercambio: permisos 0644 no seguros; se sugiere 0600.
Configurando espacio de intercambio versión 1, tamaño = 1020 KiB (1044480 bytes)
sin etiqueta, UUID=69b2ede4-04ea-47d5-862e-b0a6f01c009e
root@debian:/home/matias# sync
root@debian:/home/matias# sudo swapon intercambio
swapon: /home/matias/intercambio: permisos 0644 no seguros; se sugiere 0600.
```
### 5- Repita el punto 1.
```
root@debian:/home/matias# more /proc/swaps
Filename				Type		Size	Used	Priority
/dev/sda5                               partition	1046524	2828	-2
/home/matias/intercambio                file		1020	0	-3
```
### 6- Indique una nueva prioridad para el archivo de intercambio para que sea la última área en ser utilizada, por ejemplo si las prioridades de las áreas en uso, están entre -1 y -3 podría utilizar el valor 1.
```
root@debian:/home/matias# sudo swapoff intercambio
root@debian:/home/matias# sudo swapon intercambio -p 1
swapon: /home/matias/intercambio: permisos 0644 no seguros; se sugiere 0600.
```

