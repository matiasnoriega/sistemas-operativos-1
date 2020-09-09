&nbsp;&nbsp;&nbsp;![Universidad Nacional del Oeste](https://www.wuidy.com/assets/images/schools/logos/thumb/626811f8ed2ce4925ffc9409257eac2c.jpg "Universidad Nacional del Oeste")

# **Sistemas Operativos I**
### **Profesores:** 

- Barrientos, Daniel. 
- Vaquero, Walter. 

### Autor:

- Noriega, Matías Nicolás

&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  
&nbsp;  

# Capitulo 2
## Actividad 1

```
matias@debian:~$ who -H
NOMBRE   LÍNEA       TIEMPO           COMENTARIO
matias_001 tty1         2020-09-01 00:02
matias   tty7         2020-09-01 00:00 (:0)

```
El sistema nos informa que hay 2 usuarios conectados: **matias** y **matias_001**. Los mismos están trabajando en las terminales ***tty7*** y ***tty1*** respectivamente.

El termino **terminal** hace alusión a las viejas terminales que se usaban para interactuar con los mainframes y no realizaban ningún tipo de procesamiento o cálculo, sino que servían de interfaz entre el usuario y el mainframe, las mismas constaban de un monitor y un teclado. Actualmente los sistemas GNU/Linux vienen con terminales **virtuales** integradas que sirven para interactuar con el interprete de comandos del sistema (**shell, bash, csh, zsh etc**).

## Actividad 2

```
matias@debian:~$ who -H
NOMBRE   LÍNEA       TIEMPO           COMENTARIO
matias_001 tty1         2020-09-01 00:02
matias   tty7         2020-09-01 00:00 (:0)
matias   pts/1        2020-09-01 00:44 (:0.0)
matias   pts/0        2020-09-01 00:44 (:0.0)
```
El usuario **matias** se encuentra activo en 2 consolas virtuales: **pts/0** y **pts/1**.

## Actividad 3
### 1. ¿Qué función cumple el proceso getty?
    **a) Inicializa la terminal <---**
    b) Inicializa los drivers
    c) Determina el runlevel
### 2. El Runlevel por defecto es:
    a) Monousuario
    **b) Multiusuario con red y Xwindow <---**
    c) Multiusuario sin red
### 3. El proceso shutdown efectúa:
    a) Cierre de sesión
    **b) Termina los procesos y cierra archivos <---**
    c) Cierra archivos solamente
### 4. ¿Cuál es la función del comando login?
```login``` es el programa que realiza la autenticación del usuario y establece una sesión con el sistema.
### 5. Explique la diferencia entre los comandos shutdown y logout.
```logout``` lo que hace es cerrar la sesión de trabajo del usuario que ejecuta el comando, cerrando sus archivos y finalizando los procesos activos que pertenezcan al mismo. En cambio ```shutdown``` envia una señal de cierre del sistema a todos los usuarios conectados en el mismo, cómo también a los procesos activos. Pasado determinado tiempo, si hubo procesos que aún no respondieron a la señal de cierra, los mata con la señal *kill*. Este tiempo de espera es vital, ya que el kernel debe poder guardar en disco toda la información que está en memoria, sino esta puede sufrir daños irreparables y traer problemas de ejecución luego. Este último comando es siempre ejecutado por el usuario administrador o usuarios que pertenezcan al grupo '*sudo*', ya que por cuestiones de seguridad/practicidad, no cualquier usuario deberia tener el poder de apagar el sistema para todos.
### 6. Explique cuál es la estructura de la línea de comandos.
En la mayoría de los casos la estructura de los comandos se configura de la siguiente manera:
```comando [-opciones] argumento1 argumento2```
Donde *comando* es el nombre del comando a ejecutar (siempre en minúsculas), las *opciones* o *flags* normalmente son letras precedidas por un guión (-), ó palabras precedidas por dos guiones (--); habitualmente una misma opción tiene un formato de una sola letra (por fines prácticos) y también una palabra para que sea más humanamente entendible, por ejemplo:
```
ls -ah
```
Y
```
ls --all --human-readable
```
Producen la misma salida.

Los *argumentos* son los datos que vamos a 'pasarle' a nuestro comando en el caso de que sea necesario. Los mismos pueden usar metacaracteres como *** y *?*, y se usan espacios como separadores de campos (comandos, opciones y argumentos) por defecto.
### 7. Al realizar un cambio de Runlevel no es necesario dar de baja a los procesos que se están ejecutando. V ó F
**Falso:** Al realizarse el cambio de runlevel (con el comando ```init```) se ejecutan los programas de detención del runlevel actual, por lo que estos procesos en ejecución se finalizan. Una vez finalizados, se inicializan los programs de arranque del nuevo runlevel.
### 8. Al iniciarse una sesión de trabajo, qué datos requiere el comando login, y qué archivos utiliza para validar los mismos?
El comando ```login``` solicita el nombre del usuario (*username*) que es usado por el sistema operativo para identificar la cuenta del usuario. Y luego pide la contraseña, la cual no se visualiza en la pantalla. ```login``` valida el username con el archivo ```/etc/password``` mientras que la contraseña es validada contra el archivo ```/etc/shadow```. Mientras que el primero es un archivo de texto plano que contiene informacion relevante sobre las cuentas de los usuarios (username, user ID [**uid**], group ID [**gid**], interprete de comandos por defecto, etc), el segundo es un archivo que contiene información más sensible, como la contraseña encriptada y el tipo de encriptación.
# Capitulo 3
## Actividad 1
### 1. ¿Cuál es el tipo de Sistema de Archivo en Linux, y cuál es la estructura que utiliza?
GNU/Linux usa un sistema de archivos transaccional llamado **Ext4**, publicado en el kernel Linux 2.6.28 en Diciembre del 2008. Este sistema es compatible (hacia atrás y hacia adelante), soporta grandes archivos y volúmenes, mejora la velocidad de lectoescritura, usa el CPU de manera mas eficiente y tiene una asignación persistente de espacio en el disco entre otras caracteristicas. La estructura de directorios que utilizan la mayoría de distribuciones GNU/Linux se llama **FHS** (*Filesystem Hierarchy Standard), y lo que busca es normalizar o estandarizar los directorios principales y sus contenidos para todas estas distribuciones, de una manera jerárquica. El directorio raiz se representa por una barra vertical **/** y (al menos) todos los sistemas Debian y basados en Debian incluyen los siguientes directorios partiendo del directorio raiz:

- bin/
- boot/
- dev/
- etc/
- home/
- lib/
- media/
- mnt/
- opt/
- proc/
- root/
- sbin/
- srv/
- sys/
- tmp/
- usr/
- var/

### 2. En cuál de los siguientes directorios se encuentran los comandos los comandos básicos de ejecución del sistema:
    **a. /bin <---**
    b. /dev
    c. /etc
    d. /lib
    e. Ninguna
### 3. En Linux, los periféricos se manejan a través de archivos especiales ubicados en:
    a. /bin
    **b. /dev <---**
    c. /etc
    d. /lib
    e. Ninguna
### 4. Analice la diferencia entre el directorio de trabajo y el directorio de conexión. ¿Deben ser siempre diferentes? Justifique su respuesta.
El **directorio de conexión** es el punto donde se encontrarán los usuarios al momento de iniciar sesión; generalmente suele ser la carpeta del usuario dentro de la carpeta ```/home/```, pero el administrador del sistema puede asignar una carpeta distinta si asi lo desea, y es un dato guardado en una variable de entorno llamada HOME:

```
matias@debian:~$ echo $HOME
/home/matias
```
Mientras que el **directorio de trabajo** es el directorio que tiene activo un proceso en un momento determinado, siendo un atributo de un proceso y no de una persona ni un programa, que puede ser visualizado con el comando ```pwd``` (print working directory).
El **directorio de conexión** y el **directorio de trabajo** no necesariamente siempre son diferentes, pueden coincidir. Por ejemplo en una terminal virtual puedo ejecutar ubicado en el home del usuario (*directorio de conexión*) el comando ```ls -la | less``` y si búsco la información del proceso ```less``` me indicará que su corriente *directorio de trabajo* es precisamente el home del usuario.
## Actividad 2
### 1. Mostrar el contenido del directorio raíz. Identifique algunos de sus directorios.
```
matias@debian:~$ ls /
bin   home            lib32       media  root  sys  vmlinuz
boot  initrd.img      lib64       mnt    run   tmp  vmlinuz.old
dev   initrd.img.old  libx32      opt    sbin  usr
etc   lib             lost+found  proc   srv   var

```
### 2. Igual al anterior pero acceder con camino relativo.
```
matias@debian:~$ ls ../..
bin   home            lib32       media  root  sys  vmlinuz
boot  initrd.img      lib64       mnt    run   tmp  vmlinuz.old
dev   initrd.img.old  libx32      opt    sbin  usr
etc   lib             lost+found  proc   srv   var

```
### 3. Mostrar el contenido del directorio /dev
```
matias@debian:~$ ls /dev
autofs           memory_bandwidth    tty    tty33  tty59      vcsa1
block            mqueue              tty0   tty34  tty6       vcsa2
bsg              net                 tty1   tty35  tty60      vcsa3
btrfs-control    network_latency     tty10  tty36  tty61      vcsa4
bus              network_throughput  tty11  tty37  tty62      vcsa5
cdrom            null                tty12  tty38  tty63      vcsa6
char             port                tty13  tty39  tty7       vcsa7
console          ppp                 tty14  tty4   tty8       vcsa8
core             psaux               tty15  tty40  tty9       vcsu
cpu_dma_latency  ptmx                tty16  tty41  ttyS0      vcsu1
cuse             pts                 tty17  tty42  ttyS1      vcsu2
disk             random              tty18  tty43  ttyS2      vcsu3
dri              rfkill              tty19  tty44  ttyS3      vcsu4
dvd              rtc                 tty2   tty45  uhid       vcsu5
fb0              rtc0                tty20  tty46  uinput     vcsu6
fd               sda                 tty21  tty47  urandom    vcsu7
full             sda1                tty22  tty48  vboxguest  vcsu8
fuse             sda2                tty23  tty49  vboxuser   vfio
hidraw0          sda5                tty24  tty5   vcs        vga_arbiter
hpet             sg0                 tty25  tty50  vcs1       vhci
hugepages        sg1                 tty26  tty51  vcs2       vhost-net
initctl          shm                 tty27  tty52  vcs3       vhost-vsock
input            snapshot            tty28  tty53  vcs4       zero
kmsg             snd                 tty29  tty54  vcs5
log              sr0                 tty3   tty55  vcs6
loop-control     stderr              tty30  tty56  vcs7
mapper           stdin               tty31  tty57  vcs8
mem              stdout              tty32  tty58  vcsa

```
### 4. Muestre nuevamente el contenido de /dev, pero utilice la trayectoria relativa desde su directorio de trabajo.
```
matias@debian:~$ ls ../../dev
autofs           memory_bandwidth    tty    tty33  tty59      vcsa1
block            mqueue              tty0   tty34  tty6       vcsa2
bsg              net                 tty1   tty35  tty60      vcsa3
btrfs-control    network_latency     tty10  tty36  tty61      vcsa4
bus              network_throughput  tty11  tty37  tty62      vcsa5
cdrom            null                tty12  tty38  tty63      vcsa6
char             port                tty13  tty39  tty7       vcsa7
console          ppp                 tty14  tty4   tty8       vcsa8
core             psaux               tty15  tty40  tty9       vcsu
cpu_dma_latency  ptmx                tty16  tty41  ttyS0      vcsu1
cuse             pts                 tty17  tty42  ttyS1      vcsu2
disk             random              tty18  tty43  ttyS2      vcsu3
dri              rfkill              tty19  tty44  ttyS3      vcsu4
dvd              rtc                 tty2   tty45  uhid       vcsu5
fb0              rtc0                tty20  tty46  uinput     vcsu6
fd               sda                 tty21  tty47  urandom    vcsu7
full             sda1                tty22  tty48  vboxguest  vcsu8
fuse             sda2                tty23  tty49  vboxuser   vfio
hidraw0          sda5                tty24  tty5   vcs        vga_arbiter
hpet             sg0                 tty25  tty50  vcs1       vhci
hugepages        sg1                 tty26  tty51  vcs2       vhost-net
initctl          shm                 tty27  tty52  vcs3       vhost-vsock
input            snapshot            tty28  tty53  vcs4       zero
kmsg             snd                 tty29  tty54  vcs5
log              sr0                 tty3   tty55  vcs6
loop-control     stderr              tty30  tty56  vcs7
mapper           stdin               tty31  tty57  vcs8
mem              stdout              tty32  tty58  vcsa

```
### 5. Investigue los tipos de dispositivos que posee su sistema actualmente, ubicados en el directorio /dev.
Se pueden encontrar los dispositivos de discos físicos como también sus particiones lógicas, perifericos como el mouse y la lectora de CDROM, como también archivos de uso especial como ```/dev/null``` y  ```/dev/zero```.
### 6. Cambiar al directorio /etc y mostrar su contenido en forma extendida
```
matias@debian:~$ cd /etc/
matias@debian:/etc$ ls -l
total 968
-rw-r--r--  1 root root    2981 ago 18 17:53 adduser.conf
-rw-r--r--  1 root root      44 ago 18 18:08 adjtime
drwxr-xr-x  3 root root    4096 ago 18 18:01 alsa
drwxr-xr-x  2 root root    4096 sep  1 00:51 alternatives
-rw-r--r--  1 root root     401 may 19  2019 anacrontab
-rw-r--r--  1 root root    4185 nov 10  2016 analog.cfg
drwxr-xr-x  8 root root    4096 ago 18 18:06 apache2
drwxr-xr-x  3 root root    4096 ago 18 17:58 apm
drwxr-xr-x  2 root root    4096 ago 18 17:55 apparmor
drwxr-xr-x  7 root root    4096 ago 18 18:07 apparmor.d
drwxr-xr-x  7 root root    4096 ago 18 18:08 apt
drwxr-xr-x  3 root root    4096 ago 18 18:06 avahi
-rw-r--r--  1 root root    1994 abr 18  2019 bash.bashrc
-rw-r--r--  1 root root      45 feb 11  2019 bash_completion
-rw-r--r--  1 root root     367 mar  2  2018 bindresvport.blacklist
drwxr-xr-x  2 root root    4096 abr 27 14:02 binfmt.d
drwxr-xr-x  3 root root    4096 ago 18 17:58 ca-certificates
-rw-r--r--  1 root root    5434 ago 18 18:05 ca-certificates.conf
drwxr-xr-x  2 root root    4096 ago 18 17:54 calendar
drwxr-s---  2 root dip     4096 ago 18 18:04 chatscripts
drwxr-xr-x  2 root root    4096 sep  1 02:24 console-setup
drwxr-xr-x  2 root root    4096 ago 18 18:04 cron.d
drwxr-xr-x  2 root root    4096 ago 18 18:06 cron.daily
drwxr-xr-x  2 root root    4096 ago 18 17:54 cron.hourly
drwxr-xr-x  2 root root    4096 ago 18 18:04 cron.monthly
-rw-r--r--  1 root root    1042 oct 11  2019 crontab
drwxr-xr-x  2 root root    4096 ago 18 18:05 cron.weekly
drwxr-xr-x  2 root root    4096 ago 18 18:06 cupshelpers
drwxr-xr-x  4 root root    4096 ago 18 17:58 dbus-1
-rw-r--r--  1 root root    2969 feb 26  2019 debconf.conf
-rw-r--r--  1 root root       5 jul 10 18:04 debian_version
drwxr-xr-x  3 root root    4096 ago 18 18:07 default
-rw-r--r--  1 root root     604 jun 26  2016 deluser.conf
drwxr-xr-x  2 root root    4096 ago 31 23:57 depmod.d
drwxr-xr-x  4 root root    4096 ago 18 17:54 dhcp
drwxr-xr-x  2 root root    4096 ago 18 18:07 dictionaries-common
drwxr-xr-x  2 root root    4096 ago 18 17:56 discover.conf.d
-rw-r--r--  1 root root     346 ene 14  2018 discover-modprobe.conf
drwxr-xr-x  4 root root    4096 ago 31 23:54 dkms
drwxr-xr-x  4 root root    4096 ago 31 23:54 dpkg
drwxr-xr-x  3 root root    4096 ago 18 17:59 emacs
-rw-r--r--  1 root root       0 ago 18 17:53 environment
drwxr-xr-x  2 root root    4096 ago 18 18:06 environment.d
drwxr-xr-x  3 root root    4096 ago 18 18:00 firebird
drwxr-xr-x  2 root root    4096 ago 18 18:07 firefox-esr
drwxr-xr-x  4 root root    4096 ago 18 18:05 fonts
-rw-r--r--  1 root root     664 ago 18 17:52 fstab
-rw-r--r--  1 root root     280 jun 20  2014 fuse.conf
-rw-r--r--  1 root root    2584 ago  1  2018 gai.conf
drwxr-xr-x  3 root root    4096 ago 18 17:58 ghostscript
drwxr-xr-x  3 root root    4096 ago 18 18:00 gimp
drwxr-xr-x  3 root root    4096 ago 18 17:59 glvnd
drwxr-xr-x  2 root root    4096 ago 18 18:05 groff
-rw-r--r--  1 root root     943 ago 31 23:58 group
-rw-r--r--  1 root root     929 ago 31 22:47 group-
drwxr-xr-x  2 root root    4096 ago 18 18:07 grub.d
-rw-r-----  1 root shadow   790 ago 31 23:58 gshadow
-rw-r-----  1 root shadow   779 ago 31 22:47 gshadow-
drwxr-xr-x  3 root root    4096 ago 18 17:58 gss
drwxr-xr-x  2 root root    4096 ago 18 18:04 gtk-2.0
drwxr-xr-x  2 root root    4096 ago 18 18:06 gtk-3.0
-rw-r--r--  1 root root    6748 ene 21  2018 hddtemp.db
-rw-r--r--  1 root root    5060 oct 26  2018 hdparm.conf
-rw-r--r--  1 root root       9 ago  7  2006 host.conf
-rw-r--r--  1 root root       7 ago 18 17:54 hostname
-rw-r--r--  1 root root     186 ago 18 17:54 hosts
-rw-r--r--  1 root root     411 ago 18 18:04 hosts.allow
-rw-r--r--  1 root root     711 ago 18 18:04 hosts.deny
drwxr-xr-x  3 root root    4096 ago 18 17:58 ifplugd
drwxr-xr-x  2 root root    4096 ago 18 18:07 init.d
drwxr-xr-x  5 root root    4096 ago 18 17:54 initramfs-tools
-rw-r--r--  1 root root    1748 may  5  2018 inputrc
drwxr-xr-x  4 root root    4096 ago 18 17:54 iproute2
-rw-r--r--  1 root root      27 jul 10 18:04 issue
-rw-r--r--  1 root root      20 jul 10 18:04 issue.net
drwxr-xr-x  3 root root    4096 ago 18 18:01 java
drwxr-xr-x  5 root root    4096 ago 18 18:07 java-11-openjdk
drwxr-xr-x  7 root root    4096 ago 31 23:52 kernel
-rw-r--r--  1 root root     144 ago 18 18:08 kernel-img.conf
drwxr-xr-x  2 root root    4096 ago 18 18:04 ldap
-rw-r--r--  1 root root   76839 ago 31 23:57 ld.so.cache
-rw-r--r--  1 root root      34 mar  2  2018 ld.so.conf
drwxr-xr-x  2 root root    4096 ago 31 23:54 ld.so.conf.d
-rw-r--r--  1 root root      26 ene 13  2018 libao.conf
-rw-r--r--  1 root root     191 abr 25  2019 libaudit.conf
drwxr-xr-x  3 root root    4096 ago 18 18:01 libblockdev
drwxr-xr-x  2 root root    4096 ago 18 18:04 libnl-3
drwxr-xr-x  2 root root    4096 jun 25  2019 libpaper.d
drwxr-xr-x  2 root root    4096 ago 18 18:07 libreoffice
drwxr-xr-x  2 root root    4096 ago 18 18:07 lightdm
drwxr-xr-x  4 root root    4096 ago 18 18:04 lighttpd
-rw-r--r--  1 root root    2995 may  1  2019 locale.alias
-rw-r--r--  1 root root    9376 ago 18 17:54 locale.gen
lrwxrwxrwx  1 root root      40 ago 18 17:54 localtime -> /usr/share/zoneinfo/America/Buenos_Aires
drwxr-xr-x  3 root root    4096 ago 18 17:54 logcheck
-rw-r--r--  1 root root   10477 jul 27  2018 login.defs
-rw-r--r--  1 root root     435 ago 22  2018 logrotate.conf
drwxr-xr-x  2 root root    4096 ago 18 18:06 logrotate.d
-r--r--r--  1 root root      33 ago 18 17:54 machine-id
-rw-r--r--  1 root root     111 oct 22  2019 magic
-rw-r--r--  1 root root     111 oct 22  2019 magic.mime
-rw-r--r--  1 root root   31195 ago 18 18:07 mailcap
-rw-r--r--  1 root root     449 feb  9  2019 mailcap.order
-rw-r--r--  1 root root    5174 feb 10  2019 manpath.config
-rw-r--r--  1 root root   24512 feb  9  2019 mime.types
-rw-r--r--  1 root root     812 ene  9  2020 mke2fs.conf
drwxr-xr-x  2 root root    4096 ago 31 23:54 modprobe.d
-rw-r--r--  1 root root     195 ago 18 17:54 modules
drwxr-xr-x  2 root root    4096 ago 18 17:54 modules-load.d
-rw-r--r--  1 root root     286 jul 10 18:04 motd
lrwxrwxrwx  1 root root      19 ago 18 18:15 mtab -> ../proc/self/mounts
drwxr-xr-x  4 root root    4096 ago 18 18:04 mysql
-rw-r--r--  1 root root    9278 jun 11  2019 nanorc
drwxr-xr-x  7 root root    4096 ago 18 17:54 network
drwxr-xr-x  7 root root    4096 ago 18 18:06 NetworkManager
-rw-r--r--  1 root root      60 ago 18 17:54 networks
-rw-r--r--  1 root root     542 ago 18 18:06 nsswitch.conf
drwxr-xr-x  2 root root    4096 ago 18 18:04 openal
drwxr-xr-x  2 root root    4096 ago 18 17:52 opt
lrwxrwxrwx  1 root root      21 jul 10 18:04 os-release -> ../usr/lib/os-release
drwxr-xr-x  2 root root    4096 ago 18 18:06 PackageKit
-rw-r--r--  1 root root     552 feb 14  2019 pam.conf
drwxr-xr-x  2 root root    4096 ago 18 18:07 pam.d
-rw-r--r--  1 root root       3 ago 18 18:05 papersize
-rw-r--r--  1 root root    2107 ago 31 23:58 passwd
-rw-r--r--  1 root root    2062 ago 31 22:47 passwd-
drwxr-xr-x  4 root root    4096 ago 18 17:58 perl
drwxr-xr-x  2 root root    4096 ago 18 18:05 plymouth
drwxr-xr-x  5 root root    4096 ago 18 17:58 polkit-1
drwxr-xr-x  7 root dip     4096 ago 18 18:04 ppp
-rw-r--r--  1 root root     767 mar  4  2016 profile
drwxr-xr-x  2 root root    4096 ago 18 18:04 profile.d
-rw-r--r--  1 root root    2932 feb  9  2019 protocols
drwxr-xr-x  3 root root    4096 ago 18 18:06 pulse
drwxr-xr-x  2 root root    4096 ago 18 18:05 python
drwxr-xr-x  2 root root    4096 ago 18 17:58 python2.7
drwxr-xr-x  2 root root    4096 ago 18 17:55 python3
drwxr-xr-x  2 root root    4096 ago 18 17:54 python3.7
drwxr-xr-x  2 root root    4096 ago 18 18:07 rc0.d
drwxr-xr-x  2 root root    4096 ago 18 18:07 rc1.d
drwxr-xr-x  2 root root    4096 ago 18 18:07 rc2.d
drwxr-xr-x  2 root root    4096 ago 18 18:07 rc3.d
drwxr-xr-x  2 root root    4096 ago 18 18:07 rc4.d
drwxr-xr-x  2 root root    4096 ago 18 18:07 rc5.d
drwxr-xr-x  2 root root    4096 ago 18 18:07 rc6.d
drwxr-xr-x  2 root root    4096 ago 18 18:06 rcS.d
-rw-r--r--  1 root root    3267 ago 28  2019 reportbug.conf
-rw-r--r--  1 root root     366 sep  1 02:24 resolv.conf
drwxr-xr-x  3 root root    4096 ago 18 17:59 resolvconf
lrwxrwxrwx  1 root root      13 abr 23  2019 rmt -> /usr/sbin/rmt
-rw-r--r--  1 root root     887 feb  9  2019 rpc
-rw-r--r--  1 root root    1988 feb 26  2019 rsyslog.conf
drwxr-xr-x  2 root root    4096 feb 26  2019 rsyslog.d
drwxr-xr-x  3 root root    4096 ago 18 18:06 sane.d
-rw-r--r--  1 root root    4141 jul 27  2018 securetty
drwxr-xr-x  4 root root    4096 ago 18 17:53 security
drwxr-xr-x  2 root root    4096 ago 18 17:53 selinux
-rw-r--r--  1 root root   10593 dic 19  2018 sensors3.conf
drwxr-xr-x  2 root root    4096 ago 18 18:04 sensors.d
-rw-r--r--  1 root root   18774 feb  9  2019 services
-rw-r-----  1 root shadow  1470 ago 31 23:58 shadow
-rw-r-----  1 root shadow  1448 ago 31 22:47 shadow-
-rw-r--r--  1 root root     138 sep  1 00:51 shells
drwxr-xr-x  2 root root    4096 ago 18 17:53 skel
drwxr-xr-x  2 root root    4096 ago 18 18:04 snmp
drwxr-xr-x  4 root root    4096 ago 18 18:06 speech-dispatcher
drwxr-xr-x  2 root root    4096 ago 18 18:06 ssh
drwxr-xr-x  4 root root    4096 ago 18 18:04 ssl
-rw-r--r--  1 root root      91 ago 31 22:47 subgid
-rw-r--r--  1 root root      67 ago 31 22:46 subgid-
-rw-r--r--  1 root root      91 ago 31 22:47 subuid
-rw-r--r--  1 root root      67 ago 31 22:46 subuid-
-r--r-----  1 root root     669 feb  2  2020 sudoers
drwxr-xr-x  2 root root    4096 ago 18 18:04 sudoers.d
-rw-r--r--  1 root root    2351 may 31  2018 sysctl.conf
drwxr-xr-x  2 root root    4096 ago 18 17:54 sysctl.d
drwxr-xr-x  5 root root    4096 ago 18 17:54 systemd
drwxr-xr-x  2 root root    4096 ago 18 17:53 terminfo
-rw-r--r--  1 root root      21 ago 18 17:54 timezone
drwxr-xr-x  2 root root    4096 abr 27 14:02 tmpfiles.d
-rw-r--r--  1 root root    1260 dic 14  2018 ucf.conf
drwxr-xr-x  4 root root    4096 ago 18 17:54 udev
drwxr-xr-x  2 root root    4096 ago 18 18:05 udisks2
drwxr-xr-x  3 root root    4096 ago 18 18:03 ufw
drwxr-xr-x  2 root root    4096 ago 18 17:53 update-motd.d
drwxr-xr-x  2 root root    4096 ago 18 18:05 UPower
-rw-r--r--  1 root root    1523 feb 23  2018 usb_modeswitch.conf
drwxr-xr-x  2 root root    4096 feb 23  2018 usb_modeswitch.d
-rw-r--r--  1 root root      51 ene 20  2019 vdpau_wrapper.cfg
drwxr-xr-x  2 root root    4096 ago 18 17:54 vim
drwxr-xr-x  5 root root    4096 ago 18 18:01 vulkan
-rw-r--r--  1 root root    4942 abr  5  2019 wgetrc
drwxr-xr-x  2 root root    4096 ago 18 18:06 wpa_supplicant
drwxr-xr-x 10 root root    4096 ago 18 18:07 X11
-rw-r--r--  1 root root     642 mar  1  2019 xattr.conf
drwxr-xr-x  8 root root    4096 ago 18 18:04 xdg
drwxr-xr-x  2 root root    4096 ago 18 18:07 xfce4
drwxr-xr-x  3 root root    4096 ago 18 18:01 xml
```
### 7. Teclear en su terminal el comando necesario para determinar cuál es su directorio de trabajo y escriba la respuesta.
```
/etc
```
### 8. ¿Es el directorio de inicio de sesión?
No, son distintos.
### 9. El archivo cat (manual del comando de igual nombre) se encuentra en el subdirectorio man1 dentro del directorio man que a su vez depende /usr, cual es la trayectoria absoluta para llegar a éste archivo?
Según lo que plantea el ejercicio, el archivo ```cat``` se encontraría en la siguiente trayectoria absoluta:
```
/usr/man/man1/cat
```
En Debian 10 el archivo del manual de cat se encuentra en:
```
/usr/share/man/man1/cat.1.gz
```
### 10. Cuál es la ruta relativa si su directorio de trabajo es /usr/bin?
La ruta relativa, según la plantea el ejercicio, sería:
```
../man/man1/cat
```
## Actividad 3
### 1. Dar 4 trayectorias distintas al archivo /etc/group. Indique en cada caso el directorio de trabajo.
* Desde ```/``` la trayectoria es ```etc/group```
* Desde ```/home/matias``` la trayectoria es```../../etc/group```
* Desde ```/etc/vim``` la trayectoria es ```../group```
* Desde ```/etc``` la trayectoria es ```group```
### 2. Mencionar qué archivos contienen los directorios /bin y /sbin. Explique las diferencias.
El directorio ```/bin``` contiene los binarios de los comandos que utilizarán los usuarios comunes, mientras que ```/sbin``` contiene los binarios exclusivos del usuario **administrador/root**, aunque un usuario con suficientes permisos o la contraseña del root también pueden ejecutar algunos de estos comandos o programas.
### 3. Mostrar el contenido del directorio donde Linux archiva los drivers.
```
matias@debian:/lib/modules/4.19.0-10-amd64/kernel/drivers$ ls
acpi       dax       hid         media     parport   ssb          video
android    dca       hv          memstick  pci       staging      virt
ata        devfreq   hwmon       message   pcmcia    target       virtio
atm        dma       hwtracing   mfd       platform  thermal      w1
bcma       edac      i2c         misc      power     thunderbolt  watchdog
block      extcon    iio         mmc       powercap  tty          xen
bluetooth  firewire  infiniband  mtd       pps       uio
cdrom      firmware  input       net       ptp       usb
char       gnss      isdn        nfc       pwm       uwb
cpufreq    gpio      leds        nvdimm    scsi      vfio
crypto     gpu       md          nvme      spi       vhost
```
### 4. Acceder al directorio /boot y analizar su contenido.
En el directorio ```/boot``` podemos encontrar archivos y ejecutables relacionados con el arranque del sistema cómo ***initrd*** que es una imagen del sistema de archivos, ***vmlinuz*** que contiene el kernel propiamente dicho y el directorio ```/grub``` que contiene el gestor de arranque.
```
matias@debian:/boot$ ls -l
total 43956
-rw-r--r-- 1 root root   206192 jul 24 15:46 config-4.19.0-10-amd64
drwxr-xr-x 5 root root     4096 ago 18 18:08 grub
-rw-r--r-- 1 root root 36103411 ago 31 23:58 initrd.img-4.19.0-10-amd64
-rw-r--r-- 1 root root  3412749 jul 24 15:46 System.map-4.19.0-10-amd64
-rw-r--r-- 1 root root  5274864 jul 24 15:46 vmlinuz-4.19.0-10-amd64

```
### 5. La posibilidad que brinda el sistema de archivo de nombrar a más de un archivo con el mismo nombre simbólico (por ejemplo proc-linux) esta dada por:
    a) la tabla de asignación de archivos
    **b) la estructura jerárquica de archivos <---**
    c) los archivos . y ..
    d) los Runlevel

