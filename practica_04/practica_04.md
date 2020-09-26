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
```
matias@debian:~$ find /home -links +3 > listado_archivos
matias@debian:~$ cat listado_archivos
/home
/home/matias
/home/matias/COPIAS
/home/matias/COPIAS/.local/share
/home/matias/COPIAS/.mozilla
/home/matias/COPIAS/.mozilla/firefox
/home/matias/COPIAS/.mozilla/firefox/njcs43kl.default-esr
/home/matias/COPIAS/.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb
/home/matias/COPIAS/.config
/home/matias/COPIAS/.config/xfce4
/home/matias/COPIAS/.config/xfce4/panel
/home/matias/COPIAS/.cache
/home/matias/COPIAS/.cache/mozilla/firefox
/home/matias/COPIAS/.cache/mozilla/firefox/njcs43kl.default-esr
/home/matias/COPIAS/.cache/mozilla/firefox/njcs43kl.default-esr/cache2
/home/matias/.local/share
/home/matias/.mozilla
/home/matias/.mozilla/firefox
/home/matias/.mozilla/firefox/njcs43kl.default-esr
/home/matias/.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb
/home/matias/.config
/home/matias/.config/xfce4
/home/matias/.config/xfce4/panel
/home/matias/.cache
/home/matias/.cache/mozilla/firefox
/home/matias/.cache/mozilla/firefox/njcs43kl.default-esr
/home/matias/.cache/mozilla/firefox/njcs43kl.default-esr/cache2
```
### 4. Generar un listado ordenado de menor a mayor del campo tamaño de archivo y nombre de archivo. Trabaje sobre el contenido del directorio de conexión.

```
matias@debian:~/tareas$ ls -l $HOME | tr -s ' ' '|' | cut -d '|' -f5,9 | sort -n > listado_ordenado
matias@debian:~/tareas$ more listado_ordenado

0|A
1|AAA
6|clave-link-carpeta
11|passwd-link
11|shadow-link
19|link-apache
44|lista_usu
105|xde
438|AA
799|xaa
802|xah
808|xda
818|xbh
818|xbl
819|xbi
823|xdd
824|xae
825|device-ab
825|xcf
825|xcq
827|xba
827|xbo
828|xbg
829|xcm
831|xbu
837|xar
840|xcd
844|xaw
844|xbv
...
```
# Capitulo 7
## Actividad 1
### 1. El comando login verifica el username y la clave de acceso. ¿En qué archivo hace esta verificación?
El username lo verifica en el archivo `/etc/passwd`, y la clave de acceso la verifica en el archivo `/etc/shadow`.

### 2. ¿Un usuario puede cambiar su clave de acceso? ¿Qué comando usaría?
Si, puede hacerlo usando el comando `passwd`.

### 3. ¿Qué tamaño mínimo debe tener una clave?
Por defecto en la mayoría de los sistemas GNU/Linux las claves deben tener un mínimo de 6 caracteres.

### 4. ¿Qué usuario puede cambiar la clave de otros usuarios? ¿Con qué comando?
El usuario administrador (root) tiene el poder para cambiar la clave de otros usuarios, usando el comando `passwd` seguido del username del usuario que quieren modificar.

### 5. ¿Cuáles son las operaciones que puede realizar un usuario sobre un archivo si los permisos de este son: –r-x-w---x?
El dueño del archivo puede leer y ejecutar el mismo, los usuarios pertenecientes al mismo grupo pueden escribirlo, y el resto de los usuarios solo pueden ejecutarlos.

### 6. ¿Qué usuarios tienen autorización para modificar los permisos de un determinado archivo?
Solo el propietario tiene el poder de modificar los permisos de un archivo. El usuario administrador (root) solo puede hacerlo con sus archivos o los del sistema.

### 7. ¿Qué operación/es podemos realizar sobre un directorio si éste tiene el permiso de ejecución asignado?
Permite al usuario explorar el directorio.

## Actividad 2
### 2.Cambie su clave de acceso actual y coloque una clave autorizada
```
matias@debian:~$ passwd
Cambiando la contraseña de matias.
Current password:
Nueva contraseña:
Vuelva a escribir la nueva contraseña:
passwd: contraseña actualizada correctamente
```
### 3.Luego abra una sesión en otra consola virtual en modo texto
```
Debian GNU/Linux 10 debian tty2

debian login: matias
Password:
Last Login: Mon Aug 31 22:31:32 -03 2020 on tty2
Linux debian 4.19.0-10-amd64 #1 SMP Debian 4.19.132-1 (2020-07-24) x86_64

The programs included with the Debian GNU/Linux system are free software:
the exact distribution terms for each program are described in the
individual files in /usr/share/doc/*/copyright.

Debian GNU/Linux comes with ABSOLUTELY NO WARRANTY, to the extent
permitted by applicable law.
matias@debian:~$
```
### 4.Visualice los permisos otorgados a los siguientes archivos y explíquelos.

- **/etc/passwd :** El usuario root (el propietario del archivo) solo tiene permiso de lectura y escritura, los usuarios en el grupo root y el resto de los usuarios del sistema tienen permisos de lectura solanmente.
- **/etc/shadow :** El usuario root solo tiene permisos de lectura y escritura, mientras que los usuarios dentro del grupo shadow tienen permisos de lectura y el resto de los usuarios del sistema no tienen ningún tipo de acceso a este archivo.
- **/bin/login :** El usuario root puede leer, escribir y ejecutar este archivo, mientras que el resto de los usuarios pueden leerlo y ejecutarlo
- **/bin/ls :** Idem `/bin/login`
- **/etc/hosts :** El usuario root puede leer y escribir el archivo, mientras que el resto de los usuarios solamente pueden leerlo. 

### 5. Cree un archivo llamado copiaclave que contenga el archivo /etc/shadow y verifique los permisos que posee y compare.
```
matias@debian:~$ su -
Contraseña:
root@debian:~# cat /etc/shadow > /home/matias/copiaclave
root@debian:~# ls -l /home/matias/copiaclave
-rw-r--r-- 1 root root 1534 sep 16 18:04 /home/matias/copiaclave
root@debian:~# ls -l /etc/shadow
-rw-r----- 1 root shadow 1534 sep 16 18:00 /etc/shadow
```
Un usuario común no puede realizar esta operación, así que se tuvo que utilizar el usuario `root`. El nuevo archivo, a diferencia del original, agrega permisos de lectura para los demas usuarios (los que no son `root` ni pertenecen al grupo `shadow`) y pertenece al grupo `root` en lugar de `shadow`.

### 6. Cambie los permisos del archivo creado (copiaclave) usando el modo simbólico, otorgándole permisos de lectura solamente al propietario, al grupo y a los demás usuarios. Verifique los cambios realizados.
``` 
root@debian:/home/matias# chmod a-wx+r copiaclave
root@debian:/home/matias# ls -l copiaclave
-r--r--r-- 1 root root 1534 sep 16 18:04 copiaclave
```
### 7.Haga una copia del archivo copiaclave llamado copiaclave2 y usando el modo absoluto modifique los permisos del nuevo archivo otorgándole derechos de lectura y ejecución al propietario, solamente de lectura al grupo y ningún derecho al resto. Muestre los permisos modificados.
```
root@debian:/home/matias# cp copiaclave copiaclave2
root@debian:/home/matias# chmod u=rx,g=r,o=- copiaclave2
root@debian:/home/matias# ls -l copiaclave2
-r-xr----- 1 root root 1534 sep 16 18:14 copiaclave2
```
### 8. Otorgue los mismos derechos del punto anterior al archivo copiaclave, pero utilice el modo numérico (octal).
```
root@debian:/home/matias# chmod 540 copiaclave
root@debian:/home/matias# ls -l copiaclave
-r-xr----- 1 root root 1534 sep 16 18:04 copiaclave
```
### 9.Cree un subdirectorio llamado "prueba". Compruebe los derechos que se le otorgaron.
```
matias@debian:~$ mkdir prueba
matias@debian:~$ ls -l prueba
total 0
matias@debian:~$ ls -l | grep prueba
drwxr-xr-x  2 matias matias    4096 sep 16 18:19 prueba
```
Por defecto el usuario dueño tiene todos los permisos, mientras que el resto de los usuario (grupo y demas) pueden leer y navegar el directorio.

### 10. Modifique los permisos del directorio prueba de manera que se vean como: r- - r - - - - -, utilice cualquier método. Luego verifique los cambios con: ls -l
```
matias@debian:~$ chmod 440 prueba/
matias@debian:~$ ls -l | grep prueba
dr--r-----  2 matias matias    4096 sep 16 18:19 prueba
```
### 11. Cree un archivo llamado nuevo y otorgue permiso de ejecución con sus permisos como propietario a los demás usuarios, además de permisos de lectura para todos los usuarios (setuid). Verifique el cambio.
```
matias@debian:~$ vi nuevo
matias@debian:~$ chmod 4444 nuevo 
matias@debian:~$ ls -l | grep nuevo 
-r-Sr--r--  1 matias matias       0 sep 16 18:34 nuevo
```
### 12. Otorgue al archivo nuevo derecho de lectura y modificación para todos los usuarios y privilegios de ejecución del grupo al que pertenece el archivo (segid).
```
matias@debian:~$ chmod 2666 nuevo
matias@debian:~$ ls -l nuevo
-rw-rwSrw- 1 matias matias 0 sep 16 18:34 nuevo
```
### 13. Modifique los atributos del archivo nuevo para que sólo se pueda abrir en modo escritura para añadir datos. ¿Qué usuario deberá realizar la operación? Verifique los cambios realizados.
Usuario: root
```
matias@debian:~$ su -
Contraseña:
root@debian:~# chattr +a /home/matias/nuevo
root@debian:~# lsattr /home/matias/nuevo
-----a--------e---- /home/matias/nuevo
```
### 14. Cambie los atributos del archivo nuevo para que no se pueda modificar de ninguna forma. Visualice los cambios.
```
root@debian:~# chattr +i /home/matias/nuevo
root@debian:~# lsattr /home/matias/nuevo
----ia--------e---- /home/matias/nuevo
```
## Actividad 3
### 3.Visualice los permisos otorgados a los siguientes archivos y explíquelos.
- **/etc/crontab:** El usuario administrador (propietario) tiene permisos de lectoescritura, pero no de ejecución. El resto de los usuarios tiene solo permito de lectura.

- **/bin/cat:** El usuario administrador tiene todos los permisos, mientras que el resto de los usuarios solamente de lectura y ejecución

- **/usr/bin/yes:** idem el item anterior

### 4.Copie el archivo /etc/crontab en copia y verifique los permisos de ambos. Explique.
```
matias@debian:~$ cp /etc/crontab copia
matias@debian:~$ ls -l copia /etc/crontab
-rw-r--r-- 1 matias matias 1042 sep 16 19:11 copia
-rw-r--r-- 1 root   root   1042 oct 11  2019 /etc/crontab
```
Los permisos se mantienen 'iguales', teniendo en cuenta el cambio de propietario y grupo del archivo. Esto quiere decir que el archivo original solo tiene permisos de lectura para el grupo (root) y los demas usuarios, donde mi usuario (matias) podría solo leerlo; y permisos de lectoescritura para el propietario (root). Mientras que el archivo `copia` también tiene permisos de lectoescritura para el propietario (matias) y solo de lectura para el grupo y los demas usuarios, donde entraría el usuario `root`.

### 5.Cambie los permisos del archivo copia usando el modo simbólico, otorgándole todos los permisos al propietario, permiso de lectura y ejecución al grupo y demás usuarios. Verifique los cambios realizados.
```
matias@debian:~$ chmod u+rwx,go+rx copia
matias@debian:~$ ls -l copia
-rwxr-xr-x 1 matias matias 1042 sep 16 19:11 copia
```

### 6. Cree un archivo llamado comandos que contenga los archivos de /bin, y verifique el contenido del archivo y los permisos que posee.
```
matias@debian:~$ ls /bin/ > comandos
matias@debian:~$ more comandos 
[
2to3-2.7
7z
7za
7zr
aa-enabled
aa-exec
ab
aconnect
addpart
addr2line
alsabat
alsaloop
alsamixer
alsatplg
...
matias@debian:~$ ls -l comandos 
-rw-r--r-- 1 matias matias 12537 sep 16 19:17 comandos
```

### 7.Utilizando el modo absoluto modifique los permisos del archivo comandos otorgándole derechos de lectura y ejecución al propietario, solamente de lectura al grupo y al resto de los usuarios. Muestre los permisos modificados. Deberá obtener los siguientes permisos: r - x r - - r - - 
```
matias@debian:~$ chmod u=rx,g=r,o=r comandos
matias@debian:~$ ls -l comandos
-r-xr--r-- 1 matias matias 12537 sep 16 19:17 comandos
```

### 8. Otorgue los mismos derechos del punto 5 al archivo comandos, pero utilice el modo numérico (octal). Deberá obtener los siguientes permisos: r w x r - x r – x 
```
matias@debian:~$ chmod 0755 comandos
matias@debian:~$ ls -l comandos
-rwxr-xr-x 1 matias matias 12537 sep 16 19:17 comandos
```

### 9. Realice un enlace duro del archivo comandos como comandosln y verifique los permisos de ambos.
```
matias@debian:~$ ln comandos comandosln
matias@debian:~$ ls -li comandos comandosln
17956 -rwxr-xr-x 2 matias matias 12537 sep 16 19:17 comandos
17956 -rwxr-xr-x 2 matias matias 12537 sep 16 19:17 comandosln
```
### 10. Modifique los permisos del archivo comandosln de manera que se vean como: r—r-----, utilice cualquier método. Luego verifique los cambio con: ls -l ¿Qué sucedió con los permisos de los archivos comandos y comandosln? ¿Por qué?
```
matias@debian:~$ chmod u=r,g=u,o=- comandosln
matias@debian:~$ ls -li comandos comandosln
17956 -r--r----- 2 matias matias 12537 sep 16 19:17 comandos
17956 -r--r----- 2 matias matias 12537 sep 16 19:17 comandosln
```
### 11. Realice un enlace simbólico del archivo /etc/crontab como crono, verifique los permisos de ambos y otorgue a crono permiso de lectura, modificación y ejecución al propietario, lectura y ejecución para el grupo y de lectura para los demás usuarios. Utilice modo numérico. ¿Qué sucedió con los permisos de /etc/crontab y crono? ¿Por qué?
```
matias@debian:~$ ln -s /etc/crontab crono
matias@debian:~$ ls -l /etc/crontab crono
lrwxrwxrwx 1 matias matias   12 sep 16 19:29 crono -> /etc/crontab
-rw-r--r-- 1 root   root   1042 oct 11  2019 /etc/crontab
matias@debian:~$ chmod 0754 crono
chmod: cambiando los permisos de 'crono': Operación no permitida
matias@debian:~$ su -
Contraseña:
root@debian:~# cd /home/matias
root@debian:/home/matias# chmod 0754 crono
root@debian:/home/matias# ls -l /etc/crontab crono
lrwxrwxrwx 1 matias matias   12 sep 16 19:29 crono -> /etc/crontab
-rwxr-xr-- 1 root   root   1042 oct 11  2019 /etc/crontab
```
Para poder realizar el enlace lo tuve que hacer cómo `root` ya que es el dueño del archivo original. Al ser un enlace simbólico, los bits de permisos no se usan, sino que son predeterminados por el archivo a donde apunta, en este caso  `/etc/crontab`. Al aplicar el cambio de permisos, se aplicaron sobre este último archivo.

### 12. Otorgue al archivo comandos derechos de lectura para todos los usuarios y privilegios de ejecución del grupo al que pertenece el archivo (segid).
```
matias@debian:~$ chmod 2444 comandos
matias@debian:~$ ls -l comandos
-r--r-Sr-- 2 matias matias 12537 sep 16 19:17 comandos
```

### 13. Modifique los atributos del archivo crono para que sólo se pueda abrir en modo escritura para añadir datos. Verifique los cambios realizados.
El comando para lograr que solo pueda abrirse en modo escritura para añadir datos es `chattr +a crono`. Pero al ser un enlace simbólico, el sistema no permite realizar esta acción sobre symlinks

### 14. Cambie los atributos del archivo crono para que no se pueda modificar de ninguna forma.Visualice los cambios.
Idem punto anterior, pero el comando sería `chattr +i crono`
 

