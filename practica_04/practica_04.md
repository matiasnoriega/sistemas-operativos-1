# Capitulo 6
## Actividad 1
### 1. Crear el archivo directorios con la salida del comando ls –la, ejecutado en su directorio de login.
### 2. Verificar que el archivo se haya creado.
```
matias@debian:~$ ls -la > directorios
matias@debian:~$ ls | grep directorios
directorios
```
### 3. Mostrar todas las líneas del archivo directorios que comienzan con el carácter “-“, es decir las líneas que correspondan a archivos comunes.

```
matias@debian:~$ grep '^-' directorios
-rw-r--r--  1 matias matias       0 sep  9 03:34 A
-rw-r--r--  1 matias matias     438 sep  9 02:56 AA
-rw-r--r--  1 matias matias   30720 sep  9 17:28 backup2.tar
-rw-r--r--  1 matias matias 9007549 sep  9 16:55 backup.tgz
-rw-------  1 matias matias   22470 sep  9 18:22 .bash_history
-rw-r--r--  1 matias matias     220 ago 18 18:08 .bash_logout
-rw-r--r--  1 matias matias    3526 ago 18 18:08 .bashrc
-rw-r--r--  1 matias matias   12169 sep  9 17:13 coman_dos
-rw-r--r--  1 matias matias   12170 sep  9 17:15 coman_tres
-rw-r--r--  1 matias matias   12170 sep  9 17:23 copia3
-rw-r--r--  1 matias matias   81920 sep  9 16:49 copia.tar
-rw-r--r--  1 matias matias    8821 sep  9 17:26 device-aa
-rw-r--r--  1 matias matias     825 sep  9 17:26 device-ab
-rw-r--r--  1 matias matias       0 sep 15 13:28 directorios
-rw-r--r--  1 matias matias    9646 sep  9 17:26 dispositivos
-rw-r--r--  1 matias matias      23 ago 18 18:32 .dmrc
-rw-------  1 matias matias    2532 sep 15 13:14 .ICEauthority
-rw-r--r--  1 matias matias   74266 sep  9 16:22 lista_com
-rw-r--r--  1 matias matias      44 sep  9 16:44 lista_usu
-rw-r--r--  1 matias matias     807 ago 18 18:08 .profile
-rw-r-----  1 matias matias       5 sep 15 13:14 .vboxclient-clipboard.pid
-rw-r-----  1 matias matias       5 sep 15 13:14 .vboxclient-display-svga-x11.pid
-rw-r-----  1 matias matias       5 sep 15 13:14 .vboxclient-draganddrop.pid
-rw-r-----  1 matias matias       5 sep 15 13:14 .vboxclient-seamless.pid
-rw-r--r--  1 matias matias     799 sep  9 17:11 xaa
-rw-r--r--  1 matias matias     898 sep  9 17:11 xac
...
-rw-r--r--  1 matias matias     823 sep  9 17:11 xdd
-rw-r--r--  1 matias matias     105 sep  9 17:11 xde
-rw-r--r--  1 matias matias   17958 sep 15 13:27 .xfce4-session.verbose-log
-rw-r--r--  1 matias matias   19032 sep  9 16:20 .xfce4-session.verbose-log.last
-rw-------  1 matias matias    2751 sep 15 13:14 .xsession-errors
-rw-------  1 matias matias    3531 sep  9 18:22 .xsession-errors.old
```

### 4. Mostrar los permisos de los archivos de su directorio en cuyo nombre tengan la cadena nome.

```
matias@debian:~$ ls -la | grep 'nome$'
matias@debian:~$
```

### 5. Mostrar todos los archivos cuyos permisos para el dueño sean rw− .
```
matias@debian:~$ ls -la | grep '^.rw-'
-rw-r--r--  1 matias matias       0 sep  9 03:34 A
-rw-r--r--  1 matias matias     438 sep  9 02:56 AA
-rw-r--r--  1 matias matias   30720 sep  9 17:28 backup2.tar
-rw-r--r--  1 matias matias 9007549 sep  9 16:55 backup.tgz
-rw-------  1 matias matias   22470 sep  9 18:22 .bash_history
-rw-r--r--  1 matias matias     220 ago 18 18:08 .bash_logout
-rw-r--r--  1 matias matias    3526 ago 18 18:08 .bashrc
-rw-r--r--  1 matias matias   12169 sep  9 17:13 coman_dos
-rw-r--r--  1 matias matias   12170 sep  9 17:15 coman_tres
-rw-r--r--  1 matias matias   12170 sep  9 17:23 copia3
-rw-r--r--  1 matias matias   81920 sep  9 16:49 copia.tar
-rw-r--r--  1 matias matias    8821 sep  9 17:26 device-aa
-rw-r--r--  1 matias matias     825 sep  9 17:26 device-ab
-rw-r--r--  1 matias matias    7817 sep 15 13:28 directorios
-rw-r--r--  1 matias matias    9646 sep  9 17:26 dispositivos
-rw-r--r--  1 matias matias      23 ago 18 18:32 .dmrc
-rw-------  1 matias matias    2532 sep 15 13:14 .ICEauthority
-rw-r--r--  1 matias matias   74266 sep  9 16:22 lista_com
-rw-r--r--  1 matias matias      44 sep  9 16:44 lista_usu
-rw-r--r--  1 matias matias     807 ago 18 18:08 .profile
-rw-r-----  1 matias matias       5 sep 15 13:14 .vboxclient-clipboard.pid
-rw-r-----  1 matias matias       5 sep 15 13:14 .vboxclient-display-svga-x11.pid
-rw-r-----  1 matias matias       5 sep 15 13:14 .vboxclient-draganddrop.pid
-rw-r-----  1 matias matias       5 sep 15 13:14 .vboxclient-seamless.pid
-rw-r--r--  1 matias matias     799 sep  9 17:11 xaa
-rw-r--r--  1 matias matias     867 sep  9 17:11 xab
...
-rw-r--r--  1 matias matias     823 sep  9 17:11 xdd
-rw-r--r--  1 matias matias     105 sep  9 17:11 xde
-rw-r--r--  1 matias matias   17958 sep 15 13:27 .xfce4-session.verbose-log
-rw-r--r--  1 matias matias   19032 sep  9 16:20 .xfce4-session.verbose-log.last
-rw-------  1 matias matias    2751 sep 15 13:14 .xsession-errors
-rw-------  1 matias matias    3531 sep  9 18:22 .xsession-errors.old
```
## Actividad 2
### 1. Ordenar el archivo directorios según el 2° campo, el contador de enlaces, y guardar la salida del comando en el archivo dir1.
```
matias@debian:~$ sort -k2n directorios > dir1
matias@debian:~$ cat dir1 
lrwxrwxrwx  1 matias matias       1 sep  9 03:31 AAA -> A
lrwxrwxrwx  1 matias matias       6 sep  9 03:27 clave-link-carpeta -> clave/
lrwxrwxrwx  1 matias matias      11 sep  9 03:45 passwd-link -> /etc/passwd
lrwxrwxrwx  1 matias matias      11 sep  9 03:47 shadow-link -> /etc/shadow
lrwxrwxrwx  1 matias matias      19 sep  9 02:38 link-apache -> /etc/init.d/apache2
-rw-------  1 matias matias      51 sep 15 13:14 .Xauthority
-rw-------  1 matias matias    2532 sep 15 13:14 .ICEauthority
-rw-------  1 matias matias    2751 sep 15 13:14 .xsession-errors
-rw-------  1 matias matias    3531 sep  9 18:22 .xsession-errors.old
-rw-------  1 matias matias   22470 sep  9 18:22 .bash_history
-rw-r--r--  1 matias matias     807 ago 18 18:08 .profile
...
-rw-r--r--  1 matias matias    1161 sep  9 17:11 xcs
-rw-r--r--  1 matias matias    3526 ago 18 18:08 .bashrc
-rw-r--r--  1 matias matias    8821 sep  9 17:26 device-aa
-rw-r--r--  1 matias matias    9646 sep  9 17:26 dispositivos
-rw-r--r--  1 matias matias   12169 sep  9 17:13 coman_dos
-rw-r--r--  1 matias matias   12170 sep  9 17:15 coman_tres
-rw-r--r--  1 matias matias   12170 sep  9 17:23 copia3
-rw-r--r--  1 matias matias   17958 sep 15 13:27 .xfce4-session.verbose-log
-rw-r--r--  1 matias matias   19032 sep  9 16:20 .xfce4-session.verbose-log.last
-rw-r--r--  1 matias matias   30720 sep  9 17:28 backup2.tar
-rw-r--r--  1 matias matias   74266 sep  9 16:22 lista_com
-rw-r--r--  1 matias matias   81920 sep  9 16:49 copia.tar
-rw-r--r--  1 matias matias 9007549 sep  9 16:55 backup.tgz
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Descargas
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Documentos
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Escritorio
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Imágenes
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Música
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Plantillas
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Público
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Vídeos
drwxr-xr-x  2 matias matias    4096 sep  7 22:23 nuevo
drwxr-xr-x  2 matias matias    4096 sep  9 03:12 clave
drwxr-xr-x  2 matias matias    4096 sep  9 16:53 backup
drwxr-xr-x  2 matias matias    4096 sep  9 17:33 recupero
drwxr-xr-x  2 matias matias    4096 sep  9 17:54 actividad_03
drwx------  3 matias matias    4096 ago 18 18:16 .gnupg
drwxr-xr-x  3 matias matias    4096 ago 18 18:16 .local
drwx------  5 matias matias    4096 ago 18 18:24 .mozilla
drwxr-xr-x  6 matias matias    4096 ago 18 18:24 .cache
drwxr-xr-x  6 root   root      4096 sep  1 19:02 ..
drwxr-xr-x 10 matias matias    4096 sep  1 02:36 .config
drwxr-xr-x 18 matias matias    4096 sep  9 16:53 COPIAS
drwxr-xr-x 21 matias matias    4096 sep 15 13:28 .
total 9588
```
### 2. Ejecutar el comando del punto anterior, pero el orden de clasificación debe ser el inverso. Guardar
```
matias@debian:~$ sort -k2nr directorios > dir2
matias@debian:~$ more dir2
total 9588
drwxr-xr-x 21 matias matias    4096 sep 15 13:28 .
drwxr-xr-x 18 matias matias    4096 sep  9 16:53 COPIAS
drwxr-xr-x 10 matias matias    4096 sep  1 02:36 .config
drwxr-xr-x  6 matias matias    4096 ago 18 18:24 .cache
drwxr-xr-x  6 root   root      4096 sep  1 19:02 ..
drwx------  5 matias matias    4096 ago 18 18:24 .mozilla
drwx------  3 matias matias    4096 ago 18 18:16 .gnupg
drwxr-xr-x  3 matias matias    4096 ago 18 18:16 .local
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Descargas
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Documentos
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Escritorio
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Imágenes
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Música
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Plantillas
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Público
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Vídeos
drwxr-xr-x  2 matias matias    4096 sep  7 22:23 nuevo
drwxr-xr-x  2 matias matias    4096 sep  9 03:12 clave
drwxr-xr-x  2 matias matias    4096 sep  9 16:53 backup
drwxr-xr-x  2 matias matias    4096 sep  9 17:33 recupero
drwxr-xr-x  2 matias matias    4096 sep  9 17:54 actividad_03
lrwxrwxrwx  1 matias matias       1 sep  9 03:31 AAA -> A
lrwxrwxrwx  1 matias matias       6 sep  9 03:27 clave-link-carpeta -> clave/
...
```
### 3. Ordenar el archivo directorios según el nombre de los archivos. Redireccionar la salida del
```
matias@debian:~$ sort -k9 directorios > dir3
matias@debian:~$ more dir3
total 9588
drwxr-xr-x 21 matias matias    4096 sep 15 13:28 .
drwxr-xr-x  6 root   root      4096 sep  1 19:02 ..
-rw-r--r--  1 matias matias       0 sep  9 03:34 A
-rw-r--r--  1 matias matias     438 sep  9 02:56 AA
lrwxrwxrwx  1 matias matias       1 sep  9 03:31 AAA -> A
drwxr-xr-x  2 matias matias    4096 sep  9 17:54 actividad_03
drwxr-xr-x  2 matias matias    4096 sep  9 16:53 backup
-rw-r--r--  1 matias matias   30720 sep  9 17:28 backup2.tar
-rw-r--r--  1 matias matias 9007549 sep  9 16:55 backup.tgz
-rw-------  1 matias matias   22470 sep  9 18:22 .bash_history
-rw-r--r--  1 matias matias     220 ago 18 18:08 .bash_logout
-rw-r--r--  1 matias matias    3526 ago 18 18:08 .bashrc
drwxr-xr-x  6 matias matias    4096 ago 18 18:24 .cache
drwxr-xr-x  2 matias matias    4096 sep  9 03:12 clave
lrwxrwxrwx  1 matias matias       6 sep  9 03:27 clave-link-carpeta -> clave/
-rw-r--r--  1 matias matias   12169 sep  9 17:13 coman_dos
-rw-r--r--  1 matias matias   12170 sep  9 17:15 coman_tres
...
```
### 4. Idem al anterior, pero ordene en orden inverso de clasificación. Guarde la salida en el archivo dir4.
```
matias@debian:~$ sort -k9r directorios > dir4
matias@debian:~$ more dir4
-rw-------  1 matias matias    3531 sep  9 18:22 .xsession-errors.old
-rw-------  1 matias matias    2751 sep 15 13:14 .xsession-errors
-rw-r--r--  1 matias matias   19032 sep  9 16:20 .xfce4-session.verbose-log.last
-rw-r--r--  1 matias matias   17958 sep 15 13:27 .xfce4-session.verbose-log
-rw-r--r--  1 matias matias     105 sep  9 17:11 xde
-rw-r--r--  1 matias matias     823 sep  9 17:11 xdd
-rw-r--r--  1 matias matias     926 sep  9 17:11 xdc
-rw-r--r--  1 matias matias     925 sep  9 17:11 xdb
```
### 5. Contar las líneas del archivo directorios.
```
matias@debian:~$ wc -l directorios
139 directorios
```
### 6. Indicar la cantidad de archivos tipo enlace que existen en su directorio activo
```
matias@debian:~$ ls -la | grep '^l' | wc -l
5
matias@debian:~$ ls -la | grep '^l'
lrwxrwxrwx  1 matias matias       1 sep  9 03:31 AAA -> A
lrwxrwxrwx  1 matias matias       6 sep  9 03:27 clave-link-carpeta -> clave/
lrwxrwxrwx  1 matias matias      19 sep  9 02:38 link-apache -> /etc/init.d/apache2
lrwxrwxrwx  1 matias matias      11 sep  9 03:45 passwd-link -> /etc/passwd
lrwxrwxrwx  1 matias matias      11 sep  9 03:47 shadow-link -> /etc/shadow
```

## Actividad 3

### 1. En su directorio de conexión crear los subdirectorios tareas y practico.
```
matias@debian:~$ cd
matias@debian:~$ mkdir tareas practico
```
### 2. Copiar los archivos dir1 y dir2 al subdirectorio tareas.
```
matias@debian:~$ cp dir1 dir2 tareas/
matias@debian:~$ ls tareas/
dir1  dir2
```
### 3. Copiar los archivos dir3 y dir4 al subdirectorio practico.
```
matias@debian:~$ cp dir3 dir4 practico/
matias@debian:~$ ls  practico/
dir3  dir4
```
### 5. Buscar desde su directorio de login, el archivo dir1.
```
matias@debian:~$ find ~/ -name dir1
/home/matias/dir1
/home/matias/tareas/dir1
```
### 6. Buscar desde su directorio de login, todos los archivos cuyo nombre comience con la cadena dir.
```
matias@debian:~$ find ~/ -name 'dir*'
/home/matias/dir3
/home/matias/practico/dir3
/home/matias/practico/dir4
/home/matias/dir4
/home/matias/dir1
/home/matias/directorios
/home/matias/tareas/dir1
/home/matias/tareas/dir2
/home/matias/dir2
```
### 7. Buscar en su árbol de directorios, todos los archivos creados el día de hoy.
Los archivos encontrados corresponden a los *modificados* el día de hoy. La guía sugiere usar el flag `-atime` pero esto traería los que fueron **leidos**, más bien *accedidos* el día de hoy. Pero es más acotado el grupo de los modificados (incluye los creados) el día de hoy que los accedidos.
```
matias@debian:~$ find ~/ -mtime 0
/home/matias/
/home/matias/dir3
/home/matias/.xsession-errors.old
/home/matias/.vboxclient-seamless.pid
/home/matias/.xfce4-session.verbose-log
/home/matias/.xfce4-session.verbose-log.last
/home/matias/practico
/home/matias/practico/dir3
/home/matias/practico/dir4
/home/matias/.vboxclient-display-svga-x11.pid
/home/matias/dir4
/home/matias/.ICEauthority
/home/matias/.vboxclient-clipboard.pid
/home/matias/dir1
/home/matias/.config/xfce4/xfconf/xfce-perchannel-xml
/home/matias/.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-panel.xml
/home/matias/.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-notifyd.xml
/home/matias/.config/xfce4/desktop
/home/matias/.config/xfce4/desktop/icons.screen0-1904x914.rc
/home/matias/.config/xfce4/desktop/icons.screen0-1350x602.rc
/home/matias/.config/dconf
/home/matias/.config/dconf/user
/home/matias/.config/pulse/cd44de520bd642e69488d5d8ef40864c-default-sink
/home/matias/.config/pulse/cd44de520bd642e69488d5d8ef40864c-default-source
/home/matias/.Xauthority
/home/matias/.xsession-errors
/home/matias/directorios
/home/matias/tareas
/home/matias/tareas/dir1
/home/matias/tareas/dir2
/home/matias/dir2
/home/matias/.vboxclient-draganddrop.pid
```
### 8. Buscar y mostrar en su árbol de directorios, todos los archivos directorios.
```
matias@debian:~/tareas$ find ~/ -type d
/home/matias/
/home/matias/Escritorio
/home/matias/Música
/home/matias/Plantillas
/home/matias/Público
/home/matias/practico
/home/matias/actividad_03
/home/matias/COPIAS
/home/matias/COPIAS/Escritorio
/home/matias/COPIAS/Música
/home/matias/COPIAS/Plantillas
/home/matias/COPIAS/Público
/home/matias/COPIAS/.gnupg
/home/matias/COPIAS/.gnupg/private-keys-v1.d
/home/matias/COPIAS/Descargas
/home/matias/COPIAS/nuevo
/home/matias/COPIAS/.local
/home/matias/COPIAS/.local/share
/home/matias/COPIAS/.local/share/notes
/home/matias/COPIAS/.local/share/notes/Notas
/home/matias/COPIAS/.local/share/nano
/home/matias/COPIAS/.mozilla
...
/home/matias/COPIAS/.mozilla/systemextensionsdev
/home/matias/COPIAS/Vídeos
/home/matias/COPIAS/backup
/home/matias/COPIAS/Documentos
/home/matias/COPIAS/clave
...
/home/matias/.gnupg
/home/matias/.gnupg/private-keys-v1.d
/home/matias/Descargas
/home/matias/nuevo
/home/matias/.local
/home/matias/.local/share
/home/matias/.local/share/notes
/home/matias/.local/share/notes/Notas
/home/matias/.local/share/nano
/home/matias/.mozilla
/home/matias/.mozilla/firefox
...
/home/matias/.mozilla/systemextensionsdev
/home/matias/Vídeos
/home/matias/backup
/home/matias/recupero
/home/matias/Documentos
/home/matias/clave
/home/matias/.config
/home/matias/.config/xfce4-session
...
/home/matias/.config/gtk-3.0
/home/matias/.cache
/home/matias/.cache/sessions
/home/matias/.cache/mozilla
/home/matias/.cache/mozilla/firefox
...
/home/matias/.cache/fontconfig
/home/matias/tareas
/home/matias/Imágenes
```
## Actividad 4

### 1. Generar un archivo con información sobre los usuarios conectados al sistema, pero no se incluya en el informe.
```
matias@debian:~/tareas$ who
matias_002 tty1         2020-09-15 21:06
matias   tty7         2020-09-15 18:12 (:0)
matias_001 tty2         2020-09-15 21:07
matias@debian:~/tareas$ who | grep -vw $LOGNAME > usuarios
matias@debian:~/tareas$ cat usuarios
matias_002 tty1         2020-09-15 21:06
matias_001 tty2         2020-09-15 21:07
```
### 2. Mostrar el contenido del archivo ordenado según el nombre de usuario, y si éste tiene más de una terminal abierta, ordenar de acuerdo a éste otro campo.
```
matias@debian:~/tareas$ sort -k1,2 usuarios
matias_001 tty2         2020-09-15 21:07
matias_002 tty1         2020-09-15 21:06
```
### 3.Generar un listado de los archivos cuyo número de enlaces sea superior a 3, considere todos los archivo de /home.

### 4. Generar un listado ordenado de menor a mayor del campo tamaño de archivo y nombre de archivo. Trabaje sobre el contenido del directorio de conexión.


