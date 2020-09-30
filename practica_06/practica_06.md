# Capitulo 11
## Actividad 1
### 2. Muestre el archivo /etc/passwd y analice su información.
```
root@debian:~# cat /etc/passwd
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/var/run/ircd:/usr/sbin/nologin
gnats:x:41:41:Gnats Bug-Reporting System (admin):/var/lib/gnats:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
_apt:x:100:65534::/nonexistent:/usr/sbin/nologin
systemd-timesync:x:101:102:systemd Time Synchronization,,,:/run/systemd:/usr/sbin/nologin
systemd-network:x:102:103:systemd Network Management,,,:/run/systemd:/usr/sbin/nologin
systemd-resolve:x:103:104:systemd Resolver,,,:/run/systemd:/usr/sbin/nologin
messagebus:x:104:110::/nonexistent:/usr/sbin/nologin
dnsmasq:x:105:65534:dnsmasq,,,:/var/lib/misc:/usr/sbin/nologin
usbmux:x:106:46:usbmux daemon,,,:/var/lib/usbmux:/usr/sbin/nologin
rtkit:x:107:112:RealtimeKit,,,:/proc:/usr/sbin/nologin
sshd:x:108:65534::/run/sshd:/usr/sbin/nologin
pulse:x:109:115:PulseAudio daemon,,,:/var/run/pulse:/usr/sbin/nologin
speech-dispatcher:x:110:29:Speech Dispatcher,,,:/var/run/speech-dispatcher:/bin/false
avahi:x:111:118:Avahi mDNS daemon,,,:/var/run/avahi-daemon:/usr/sbin/nologin
saned:x:112:119::/var/lib/saned:/usr/sbin/nologin
lightdm:x:113:120:Light Display Manager:/var/lib/lightdm:/bin/false
matias:x:1000:1000:matias,,,:/home/matias:/bin/bash
systemd-coredump:x:999:999:systemd Core Dumper:/:/usr/sbin/nologin
matias_001:x:1001:1002:Matias 001,,,:/home/matias_001:/bin/bash
matias_002:x:1002:1003:Matias 002,,,:/home/matias_002:/bin/bash
vboxadd:x:998:1::/var/run/vboxadd:/bin/false
matias_003:x:1003:1004::/home/matias_003:/bin/sh
matias_004:x:1004:1005:,,,:/home/matias_004:/bin/bash
Debian-exim:x:114:121::/var/spool/exim4:/usr/sbin/nologin
```

### 3. Muestre el archivo /etc/shadow y analice su información.
```
root@debian:~# cat /etc/passwd
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
sys:x:3:3:sys:/dev:/usr/sbin/nologin
sync:x:4:65534:sync:/bin:/bin/sync
games:x:5:60:games:/usr/games:/usr/sbin/nologin
man:x:6:12:man:/var/cache/man:/usr/sbin/nologin
lp:x:7:7:lp:/var/spool/lpd:/usr/sbin/nologin
mail:x:8:8:mail:/var/mail:/usr/sbin/nologin
news:x:9:9:news:/var/spool/news:/usr/sbin/nologin
uucp:x:10:10:uucp:/var/spool/uucp:/usr/sbin/nologin
proxy:x:13:13:proxy:/bin:/usr/sbin/nologin
www-data:x:33:33:www-data:/var/www:/usr/sbin/nologin
backup:x:34:34:backup:/var/backups:/usr/sbin/nologin
list:x:38:38:Mailing List Manager:/var/list:/usr/sbin/nologin
irc:x:39:39:ircd:/var/run/ircd:/usr/sbin/nologin
gnats:x:41:41:Gnats Bug-Reporting System (admin):/var/lib/gnats:/usr/sbin/nologin
nobody:x:65534:65534:nobody:/nonexistent:/usr/sbin/nologin
_apt:x:100:65534::/nonexistent:/usr/sbin/nologin
systemd-timesync:x:101:102:systemd Time Synchronization,,,:/run/systemd:/usr/sbin/nologin
systemd-network:x:102:103:systemd Network Management,,,:/run/systemd:/usr/sbin/nologin
systemd-resolve:x:103:104:systemd Resolver,,,:/run/systemd:/usr/sbin/nologin
messagebus:x:104:110::/nonexistent:/usr/sbin/nologin
dnsmasq:x:105:65534:dnsmasq,,,:/var/lib/misc:/usr/sbin/nologin
usbmux:x:106:46:usbmux daemon,,,:/var/lib/usbmux:/usr/sbin/nologin
rtkit:x:107:112:RealtimeKit,,,:/proc:/usr/sbin/nologin
sshd:x:108:65534::/run/sshd:/usr/sbin/nologin
pulse:x:109:115:PulseAudio daemon,,,:/var/run/pulse:/usr/sbin/nologin
speech-dispatcher:x:110:29:Speech Dispatcher,,,:/var/run/speech-dispatcher:/bin/false
avahi:x:111:118:Avahi mDNS daemon,,,:/var/run/avahi-daemon:/usr/sbin/nologin
saned:x:112:119::/var/lib/saned:/usr/sbin/nologin
lightdm:x:113:120:Light Display Manager:/var/lib/lightdm:/bin/false
matias:x:1000:1000:matias,,,:/home/matias:/bin/bash
systemd-coredump:x:999:999:systemd Core Dumper:/:/usr/sbin/nologin
matias_001:x:1001:1002:Matias 001,,,:/home/matias_001:/bin/bash
matias_002:x:1002:1003:Matias 002,,,:/home/matias_002:/bin/bash
vboxadd:x:998:1::/var/run/vboxadd:/bin/false
matias_003:x:1003:1004::/home/matias_003:/bin/sh
matias_004:x:1004:1005:,,,:/home/matias_004:/bin/bash
Debian-exim:x:114:121::/var/spool/exim4:/usr/sbin/nologin
root@debian:~# cat /etc/shadow
root:$6$qqqy.Czs9dkpUoeD$lmNu9zERUhpoRlGYTOzv9YeRjK0u9KJGKQWh7fSk6mhbeqsNu8EfFEoNrZ4f4Gt6d8KnWU7HbZ2es/lS0dlp//:18535:0:99999:7:::
daemon:*:18492:0:99999:7:::
bin:*:18492:0:99999:7:::
sys:*:18492:0:99999:7:::
sync:*:18492:0:99999:7:::
games:*:18492:0:99999:7:::
man:*:18492:0:99999:7:::
lp:*:18492:0:99999:7:::
mail:*:18492:0:99999:7:::
news:*:18492:0:99999:7:::
uucp:*:18492:0:99999:7:::
proxy:*:18492:0:99999:7:::
www-data:*:18492:0:99999:7:::
backup:*:18492:0:99999:7:::
list:*:18492:0:99999:7:::
irc:*:18492:0:99999:7:::
gnats:*:18492:0:99999:7:::
nobody:*:18492:0:99999:7:::
_apt:*:18492:0:99999:7:::
systemd-timesync:*:18492:0:99999:7:::
systemd-network:*:18492:0:99999:7:::
systemd-resolve:*:18492:0:99999:7:::
messagebus:*:18492:0:99999:7:::
dnsmasq:*:18492:0:99999:7:::
usbmux:*:18492:0:99999:7:::
rtkit:*:18492:0:99999:7:::
sshd:*:18492:0:99999:7:::
pulse:*:18492:0:99999:7:::
speech-dispatcher:!:18492:0:99999:7:::
avahi:*:18492:0:99999:7:::
saned:*:18492:0:99999:7:::
lightdm:*:18492:0:99999:7:::
matias:$6$WG50EMRZHJ8lxG4.$vNsJYqcwZ.Ywy5/HLBJrN52TgjEmxf26QaxN2FdrlWTDz.1TL/GWeUx8.J6RxsqT9BwRph6nNmWi18T79I3U3.:18521:0:99999:7:::
systemd-coredump:!!:18492::::::
matias_001:$6$MZrYqL4Us1AS53Ho$eeT0d7bTvVeGia/uk4Q/oDc9Fz.cR6SljRq6HSONwyiX1noD7KvvhnU37J8u9ePxH9iqQXKZBsV4nWoTRjaGT1:18506:0:99999:7:::
matias_002:$6$v0jMBL1xOtVWdDJs$CzHJ3u6i12b4HBXkiflxkuCkSa5MB1/3Km8jnkvxtK/k3xUTfwjh4awv0mQvZJaOP8SZymz2UxUCRoNNpNOPW.:18521:0:99999:7:::
vboxadd:!:18506::::::
matias_003:!:18506:0:99999:7:::
matias_004:!:18506:0:99999:7:::
Debian-exim:!:18531:0:99999:7:::
```

### 4. Cree el grupo Alumnos y los usuarios alumnoA, alumnoB y AlumnoC que pertenezcan al grupo creado. Verifique en el archivo que corresponda que los nuevos usuarios y grupos existan.
```
root@debian:~# groupadd Alumnos
root@debian:~# useradd -G Alumnos alumnoA
root@debian:~# useradd -G Alumnos alumnoB
root@debian:~# useradd -G Alumnos alumnoC
root@debian:~# cat /etc/group
root:x:0:
daemon:x:1:
bin:x:2:
sys:x:3:
adm:x:4:
tty:x:5:
...
matias:x:1000:
systemd-coredump:x:999:
matias_01:x:1001:
matias_001:x:1002:
matias_002:x:1003:
vboxsf:x:998:
matias_003:x:1004:
matias_004:x:1005:
Debian-exim:x:121:
Alumnos:x:1006:alumnoA,alumnoB,alumnoC
alumnoA:x:1007:
alumnoB:x:1008:
alumnoC:x:1009:
root@debian:~# cat /etc/passwd
root:x:0:0:root:/root:/bin/bash
daemon:x:1:1:daemon:/usr/sbin:/usr/sbin/nologin
bin:x:2:2:bin:/bin:/usr/sbin/nologin
...
matias:x:1000:1000:matias,,,:/home/matias:/bin/bash
systemd-coredump:x:999:999:systemd Core Dumper:/:/usr/sbin/nologin
matias_001:x:1001:1002:Matias 001,,,:/home/matias_001:/bin/bash
matias_002:x:1002:1003:Matias 002,,,:/home/matias_002:/bin/bash
vboxadd:x:998:1::/var/run/vboxadd:/bin/false
matias_003:x:1003:1004::/home/matias_003:/bin/sh
matias_004:x:1004:1005:,,,:/home/matias_004:/bin/bash
Debian-exim:x:114:121::/var/spool/exim4:/usr/sbin/nologin
alumnoA:x:1005:1007::/home/alumnoA:/bin/sh
alumnoB:x:1006:1008::/home/alumnoB:/bin/sh
alumnoC:x:1007:1009::/home/alumnoC:/bin/sh

```

### 5. Modifique el shell que utilizará el usuario alumnoB.
```
root@debian:~# usermod -s /bin/csh alumnoB
```

### 6. Si quisiera cambiar el shell del usuario que está activo en este momento ¿qué comando usaría?
```
root@debian:~# chsh /bin/csh
```

### 7. Cambie el grupo al que pertenece el subdirectorio copia y todos los archivos que contiene. Cambiarlo al grupo Alumnos.
```
root@debian:~# chgrp -R Alumnos ../home/matias/copia
root@debian:~# ls -l ../home/matias/copia
-rwxr-xr-x 1 matias Alumnos 1042 sep 16 19:11 ../home/matias/copia
```

### 8. Muestre por pantalla los grupos a los que pertenece el usuarioA.
```
root@debian:~# groups alumnoA
alumnoA : alumnoA Alumnos
```

### 9. Borre el usuario alumnoB y alumnoC
```
root@debian:~# deluser alumnoB
Eliminando al usuario `alumnoB' ...
Aviso: el grupo `alumnoB' no tiene más miembros.
Hecho.
root@debian:~# userdel alumnoC
```

### 10. Abra una sesión de trabajo como un usuario común.
```
root@debian:~# login matias
Contraseña:
Último inicio de sesión:mié sep 30 14:25:20 -03 2020en pts/0
Linux debian 4.19.0-10-amd64 #1 SMP Debian 4.19.132-1 (2020-07-24) x86_64

The programs included with the Debian GNU/Linux system are free software;
the exact distribution terms for each program are described in the
individual files in /usr/share/doc/*/copyright.

Debian GNU/Linux comes with ABSOLUTELY NO WARRANTY, to the extent
permitted by applicable law.
Tiene correo nuevo.
matias@debian:~$
```

### 11. ¿Quién es el propietario del archivo /etc/passwd? ¿Y el grupo? ¿Cuál es la lista de permisos?
```
matias@debian:~$ ls -l /etc/passwd
-rw-r--r-- 1 root root 2311 sep 30 14:44 /etc/passwd
```
Es el usuario root, del grupo root. Los permisos son de lectoescritura solo para root, y lectura para el resto de los usuarios del sistema y el grupo root.

### 12. Cree en su directorio de login un subdirectorio llamado "copia" y copie dentro de éste el archivo
```
matias@debian:~$ cp /etc/passwd copia/
matias@debian:~$ ls -l copia
total 4
-rw-r--r-- 1 matias matias 2311 sep 30 14:46 passwd
```
Los permisos son los mismos, solo que el propietario y el grupo ahora son el usuario común.

### 13. Cambie el propietario del archivo passwd (que como ya vio, usted es el dueño y está en el subdirectorio copia) para que pertenezca al usuario alumnoC. Verificar el cambio.
```
matias@debian:~/copia$ cp /etc/passwd .
matias@debian:~/copia$ ls -l
total 4
-rw-r--r-- 1 matias matias 2311 sep 30 15:05 passwd
matias@debian:~/copia$ chown alumnoA passwd
chown: cambiando el propietario de 'passwd': Operación no permitida
matias@debian:~/copia$ cat /etc/group | grep alumnoA
Alumnos:x:1006:alumnoA
alumnoA:x:1007:
matias@debian:~/copia$ cat /etc/passwd | grep alumnoA
alumnoA:x:1005:1007::/home/alumnoA:/bin/sh
matias@debian:~/copia$ chown alumnoA:alumnoA passwd
chown: cambiando el propietario de 'passwd': Operación no permitida
matias@debian:~/copia$ lsattr passwd
--------------e---- passwd
```
Por algun motivo no me deja cambiar el propietario estando logueado como el usuario que creó la copia. Me fije que el usuario alumnoA y su grupo existiesen, y que el archivo no tuviese el atributo de *inmutable* activado.

### 14. Vuelva a cambiar el propietario del archivo anterior para dejarlo como antes, es decir que el propietario sea usted.
Efectivamente no se puede cambiar el propietario de un archivo sin ser el dueño del mismo.

##Actividad 2
1. Inicie su sesión como supervisor o administrador.
Login: root
Password:
2. Muestre el archivo /etc/group y analice su información.
cat /etc/group
3. ¿Quién es el propietario del archivo /dev/hda1? ¿A qué grupo pertenece?
_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _
ls –l
4. Muestre los permisos que posee el archivo y explique.
ls –l
5. Copie el archivo anterior (/dev/hda1) en su directorio de login. ¿Quién es el propietario ahora? ¿Los
permisos son los mismos? ¿Por qué?
cp /dev/hda1 .
ls –l hda1
6. Cree el grupo Docentes y los usuarios docente1, docente2 y docente3 que pertenezcan al grupo
creado. Verifique en el archivo que corresponda que los nuevos usuarios y grupos existan.
addgroup Docentes
adduser -G Docentes docente1
adduser -G Docentes docente2
adduser -G Docentes docente3
cat /etc/passwd
cat /etc/group
7. Abrir en otra terminal una sesión del docente1 y crear el archivo datos con sus datos personales.
Login: docente1
Password:
cat > datos
nombre, apellido, domicilio, etc
Ctrl. d
8. Cambiar el propietario del archivo /home/docente1/datos, de tal manera que el dueño sea el
docente2. Verificar el cambio.
chown docente2 /home/docente1/datos
ls –l
9. Como supervisor modifique el shell que utilizará el usuario alumnoB.
usermod –s /bin/ash alumnoB
10. Muestre por pantalla los grupos a los que pertenece el docente2.
groups docente2
11. Borrar el usuario docente1 y docente2
userdel docente1
userdel docente2
12. Ejecute el comando who seguido de su nombre de usuario: ¿Cómo se visualiza la salida de
dicho comando?

