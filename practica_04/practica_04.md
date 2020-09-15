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
