# Capitulo 4
## Activudad 1
### 1. Muestre un listado extendido del directorio /dev, y analice la información.
```
matias@debian:~$ ls -l /dev/
total 0
crw-r--r--  1 root    root     10, 235 sep  7 19:58 autofs
drwxr-xr-x  2 root    root         140 sep  7 19:58 block
drwxr-xr-x  2 root    root          80 sep  7 19:58 bsg
crw-------  1 root    root     10, 234 sep  7 19:58 btrfs-control
drwxr-xr-x  3 root    root          60 sep  7 19:58 bus
lrwxrwxrwx  1 root    root           3 sep  7 19:58 cdrom -> sr0
drwxr-xr-x  2 root    root        2980 sep  7 20:19 char
crw-------  1 root    root      5,   1 sep  7 19:58 console
lrwxrwxrwx  1 root    root          11 sep  7 19:58 core -> /proc/kcore
crw-------  1 root    root     10,  62 sep  7 19:58 cpu_dma_latency
crw-------  1 root    root     10, 203 sep  7 19:58 cuse
drwxr-xr-x  7 root    root         140 sep  7 19:58 disk
drwxr-xr-x  3 root    root         100 sep  7 19:58 dri
lrwxrwxrwx  1 root    root           3 sep  7 19:58 dvd -> sr0
crw-rw----  1 root    video    29,   0 sep  7 19:58 fb0
lrwxrwxrwx  1 root    root          13 sep  7 19:58 fd -> /proc/self/fd
crw-rw-rw-  1 root    root      1,   7 sep  7 19:58 full
crw-rw-rw-  1 root    root     10, 229 sep  7 19:58 fuse
crw-------  1 root    root    245,   0 sep  7 19:58 hidraw0
crw-------  1 root    root     10, 228 sep  7 19:58 hpet
drwxr-xr-x  2 root    root           0 sep  7 19:58 hugepages
lrwxrwxrwx  1 root    root          12 sep  7 19:58 initctl -> /run/initctl
drwxr-xr-x  4 root    root         340 sep  7 19:58 input
crw-r--r--  1 root    root      1,  11 sep  7 19:58 kmsg
lrwxrwxrwx  1 root    root          28 sep  7 19:58 log -> /run/systemd/journal/dev-log
crw-rw----  1 root    disk     10, 237 sep  7 19:58 loop-control
drwxr-xr-x  2 root    root          60 sep  7 19:58 mapper
crw-r-----  1 root    kmem      1,   1 sep  7 19:58 mem
crw-------  1 root    root     10,  59 sep  7 19:58 memory_bandwidth
drwxrwxrwt  2 root    root          40 sep  7 19:58 mqueue
drwxr-xr-x  2 root    root          60 sep  7 19:58 net
crw-------  1 root    root     10,  61 sep  7 19:58 network_latency
crw-------  1 root    root     10,  60 sep  7 19:58 network_throughput
crw-rw-rw-  1 root    root      1,   3 sep  7 19:58 null
crw-r-----  1 root    kmem      1,   4 sep  7 19:58 port
crw-------  1 root    root    108,   0 sep  7 19:58 ppp
crw-------  1 root    root     10,   1 sep  7 19:58 psaux
crw-rw-rw-  1 root    tty       5,   2 sep  7 20:38 ptmx
drwxr-xr-x  2 root    root           0 sep  7 19:58 pts
crw-rw-rw-  1 root    root      1,   8 sep  7 19:58 random
crw-rw-r--  1 root    netdev   10, 242 sep  7 19:58 rfkill
lrwxrwxrwx  1 root    root           4 sep  7 19:58 rtc -> rtc0
crw-------  1 root    root    252,   0 sep  7 19:58 rtc0
brw-rw----  1 root    disk      8,   0 sep  7 19:58 sda
brw-rw----  1 root    disk      8,   1 sep  7 19:58 sda1
brw-rw----  1 root    disk      8,   2 sep  7 19:58 sda2
brw-rw----  1 root    disk      8,   5 sep  7 19:58 sda5
crw-rw----  1 root    disk     21,   0 sep  7 19:58 sg0
crw-rw----+ 1 root    cdrom    21,   1 sep  7 19:58 sg1
drwxrwxrwt  2 root    root          40 sep  7 19:58 shm
crw-------  1 root    root     10, 231 sep  7 19:58 snapshot
drwxr-xr-x  3 root    root         180 sep  7 19:58 snd
brw-rw----+ 1 root    cdrom    11,   0 sep  7 19:58 sr0
lrwxrwxrwx  1 root    root          15 sep  7 19:58 stderr -> /proc/self/fd/2
lrwxrwxrwx  1 root    root          15 sep  7 19:58 stdin -> /proc/self/fd/0
lrwxrwxrwx  1 root    root          15 sep  7 19:58 stdout -> /proc/self/fd/1
crw-rw-rw-  1 root    tty       5,   0 sep  7 19:58 tty
crw--w----  1 root    tty       4,   0 sep  7 19:58 tty0
crw--w----  1 root    tty       4,   1 sep  7 19:58 tty1
crw--w----  1 root    tty       4,  10 sep  7 19:58 tty10
crw--w----  1 root    tty       4,  11 sep  7 19:58 tty11
crw--w----  1 root    tty       4,  12 sep  7 19:58 tty12
crw--w----  1 root    tty       4,  13 sep  7 19:58 tty13
crw--w----  1 root    tty       4,  14 sep  7 19:58 tty14
crw--w----  1 root    tty       4,  15 sep  7 19:58 tty15
crw--w----  1 root    tty       4,  16 sep  7 19:58 tty16
crw--w----  1 root    tty       4,  17 sep  7 19:58 tty17
crw--w----  1 root    tty       4,  18 sep  7 19:58 tty18
crw--w----  1 root    tty       4,  19 sep  7 19:58 tty19
crw--w----  1 root    tty       4,   2 sep  7 19:58 tty2
crw--w----  1 root    tty       4,  20 sep  7 19:58 tty20
crw--w----  1 root    tty       4,  21 sep  7 19:58 tty21
crw--w----  1 root    tty       4,  22 sep  7 19:58 tty22
crw--w----  1 root    tty       4,  23 sep  7 19:58 tty23
crw--w----  1 root    tty       4,  24 sep  7 19:58 tty24
crw--w----  1 root    tty       4,  25 sep  7 19:58 tty25
crw--w----  1 root    tty       4,  26 sep  7 19:58 tty26
crw--w----  1 root    tty       4,  27 sep  7 19:58 tty27
crw--w----  1 root    tty       4,  28 sep  7 19:58 tty28
crw--w----  1 root    tty       4,  29 sep  7 19:58 tty29
crw--w----  1 root    tty       4,   3 sep  7 19:58 tty3
crw--w----  1 root    tty       4,  30 sep  7 19:58 tty30
crw--w----  1 root    tty       4,  31 sep  7 19:58 tty31
crw--w----  1 root    tty       4,  32 sep  7 19:58 tty32
crw--w----  1 root    tty       4,  33 sep  7 19:58 tty33
crw--w----  1 root    tty       4,  34 sep  7 19:58 tty34
crw--w----  1 root    tty       4,  35 sep  7 19:58 tty35
crw--w----  1 root    tty       4,  36 sep  7 19:58 tty36
crw--w----  1 root    tty       4,  37 sep  7 19:58 tty37
crw--w----  1 root    tty       4,  38 sep  7 19:58 tty38
crw--w----  1 root    tty       4,  39 sep  7 19:58 tty39
crw--w----  1 root    tty       4,   4 sep  7 19:58 tty4
crw--w----  1 root    tty       4,  40 sep  7 19:58 tty40
crw--w----  1 root    tty       4,  41 sep  7 19:58 tty41
crw--w----  1 root    tty       4,  42 sep  7 19:58 tty42
crw--w----  1 root    tty       4,  43 sep  7 19:58 tty43
crw--w----  1 root    tty       4,  44 sep  7 19:58 tty44
crw--w----  1 root    tty       4,  45 sep  7 19:58 tty45
crw--w----  1 root    tty       4,  46 sep  7 19:58 tty46
crw--w----  1 root    tty       4,  47 sep  7 19:58 tty47
crw--w----  1 root    tty       4,  48 sep  7 19:58 tty48
crw--w----  1 root    tty       4,  49 sep  7 19:58 tty49
crw--w----  1 root    tty       4,   5 sep  7 19:58 tty5
crw--w----  1 root    tty       4,  50 sep  7 19:58 tty50
crw--w----  1 root    tty       4,  51 sep  7 19:58 tty51
crw--w----  1 root    tty       4,  52 sep  7 19:58 tty52
crw--w----  1 root    tty       4,  53 sep  7 19:58 tty53
crw--w----  1 root    tty       4,  54 sep  7 19:58 tty54
crw--w----  1 root    tty       4,  55 sep  7 19:58 tty55
crw--w----  1 root    tty       4,  56 sep  7 19:58 tty56
crw--w----  1 root    tty       4,  57 sep  7 19:58 tty57
crw--w----  1 root    tty       4,  58 sep  7 19:58 tty58
crw--w----  1 root    tty       4,  59 sep  7 19:58 tty59
crw--w----  1 root    tty       4,   6 sep  7 19:58 tty6
crw--w----  1 root    tty       4,  60 sep  7 19:58 tty60
crw--w----  1 root    tty       4,  61 sep  7 19:58 tty61
crw--w----  1 root    tty       4,  62 sep  7 19:58 tty62
crw--w----  1 root    tty       4,  63 sep  7 19:58 tty63
crw--w----  1 root    tty       4,   7 sep  7 19:58 tty7
crw--w----  1 root    tty       4,   8 sep  7 20:19 tty8
crw--w----  1 root    tty       4,   9 sep  7 19:58 tty9
crw-rw----  1 root    dialout   4,  64 sep  7 19:58 ttyS0
crw-rw----  1 root    dialout   4,  65 sep  7 19:58 ttyS1
crw-rw----  1 root    dialout   4,  66 sep  7 19:58 ttyS2
crw-rw----  1 root    dialout   4,  67 sep  7 19:58 ttyS3
crw-------  1 root    root     10, 239 sep  7 19:58 uhid
crw-------  1 root    root     10, 223 sep  7 19:58 uinput
crw-rw-rw-  1 root    root      1,   9 sep  7 19:58 urandom
crw-rw----  1 vboxadd root     10,  58 sep  7 19:58 vboxguest
crw-rw-rw-  1 vboxadd root     10,  57 sep  7 19:58 vboxuser
crw-rw----  1 root    tty       7,   0 sep  7 19:58 vcs
crw-rw----  1 root    tty       7,   1 sep  7 19:58 vcs1
crw-rw----  1 root    tty       7,   2 sep  7 19:58 vcs2
crw-rw----  1 root    tty       7,   3 sep  7 19:58 vcs3
crw-rw----  1 root    tty       7,   4 sep  7 19:58 vcs4
crw-rw----  1 root    tty       7,   5 sep  7 19:58 vcs5
crw-rw----  1 root    tty       7,   6 sep  7 19:58 vcs6
crw-rw----  1 root    tty       7,   7 sep  7 19:58 vcs7
crw-rw----  1 root    tty       7,   8 sep  7 20:19 vcs8
crw-rw----  1 root    tty       7, 128 sep  7 19:58 vcsa
crw-rw----  1 root    tty       7, 129 sep  7 19:58 vcsa1
crw-rw----  1 root    tty       7, 130 sep  7 19:58 vcsa2
crw-rw----  1 root    tty       7, 131 sep  7 19:58 vcsa3
crw-rw----  1 root    tty       7, 132 sep  7 19:58 vcsa4
crw-rw----  1 root    tty       7, 133 sep  7 19:58 vcsa5
crw-rw----  1 root    tty       7, 134 sep  7 19:58 vcsa6
crw-rw----  1 root    tty       7, 135 sep  7 19:58 vcsa7
crw-rw----  1 root    tty       7, 136 sep  7 20:19 vcsa8
crw-rw----  1 root    tty       7,  64 sep  7 19:58 vcsu
crw-rw----  1 root    tty       7,  65 sep  7 19:58 vcsu1
crw-rw----  1 root    tty       7,  66 sep  7 19:58 vcsu2
crw-rw----  1 root    tty       7,  67 sep  7 19:58 vcsu3
crw-rw----  1 root    tty       7,  68 sep  7 19:58 vcsu4
crw-rw----  1 root    tty       7,  69 sep  7 19:58 vcsu5
crw-rw----  1 root    tty       7,  70 sep  7 19:58 vcsu6
crw-rw----  1 root    tty       7,  71 sep  7 19:58 vcsu7
crw-rw----  1 root    tty       7,  72 sep  7 20:19 vcsu8
drwxr-xr-x  2 root    root          60 sep  7 19:58 vfio
crw-------  1 root    root     10,  63 sep  7 19:58 vga_arbiter
crw-------  1 root    root     10, 137 sep  7 19:58 vhci
crw-------  1 root    root     10, 238 sep  7 19:58 vhost-net
crw-------  1 root    root     10, 241 sep  7 19:58 vhost-vsock
crw-rw-rw-  1 root    root      1,   5 sep  7 19:58 zero
```
Aqui como se esperaba de este directorio, la mayoría de los archivos son del tipo "c" ó "character device", que son archivos que sirven para que el usuario y los programas se comuniquen con los periféricos (devices).
### 2. Muestre el directorio /bin, y analice la información.
```
matias@debian:~$ ls -l /bin
lrwxrwxrwx 1 root root 7 ago 18 17:52 /bin -> usr/bin
matias@debian:~$ ls -l /usr/bin/ | head -n 30
total 109268
-rwxr-xr-x 1 root root      60064 feb 28  2019 [
-rwxr-xr-x 1 root root         96 oct 10  2019 2to3-2.7
-rwxr-xr-x 1 root root         39 feb  5  2018 7z
-rwxr-xr-x 1 root root         40 feb  5  2018 7za
-rwxr-xr-x 1 root root         40 feb  5  2018 7zr
-rwxr-xr-x 1 root root      30936 mar 30  2019 aa-enabled
-rwxr-xr-x 1 root root      30936 mar 30  2019 aa-exec
-rwxr-xr-x 1 root root      55480 oct 15  2019 ab
-rwxr-xr-x 1 root root      22600 mar 30  2019 aconnect
-rwxr-xr-x 1 root root      26704 ene 10  2019 addpart
lrwxrwxrwx 1 root root         26 mar 21  2019 addr2line -> x86_64-linux-gnu-addr2line
-rwxr-xr-x 1 root root      47240 mar 30  2019 alsabat
-rwxr-xr-x 1 root root      80888 mar 30  2019 alsaloop
-rwxr-xr-x 1 root root      68024 mar 30  2019 alsamixer
-rwxr-xr-x 1 root root      14408 mar 30  2019 alsatplg
-rwxr-xr-x 1 root root      18880 mar 30  2019 alsaucm
-rwxr-xr-x 1 root root      26704 mar 30  2019 amidi
-rwxr-xr-x 1 root root      59544 mar 30  2019 amixer
-rwxr-xr-x 1 root root     432480 nov 10  2016 analog
lrwxrwxrwx 1 root root         20 ago 27  2018 ant -> ../share/ant/bin/ant
-rwxr-xr-x 1 root root      79992 mar 30  2019 aplay
-rwxr-xr-x 1 root root      22608 mar 30  2019 aplaymidi
-rwxr-xr-x 1 root root      10472 mar 18  2018 appres
lrwxrwxrwx 1 root root          6 feb 10  2019 apropos -> whatis
-rwxr-xr-x 1 root root      18520 may 12 06:57 apt
-rwxr-xr-x 1 root root      84128 may 12 06:57 apt-cache
-rwxr-xr-x 1 root root      26784 may 12 06:57 apt-cdrom
-rwxr-xr-x 1 root root      26712 may 12 06:57 apt-config
-rwxr-xr-x 1 root root      22688 may 12 06:57 apt-extracttemplates
```
Se puede ver que en la carpeta ```/bin``` hay un enlace simbólico a la carpeta ```/usr/bin``` donde sí se hallan todos los binario que el usuario tiene disponibles, como el gestor de paquetes ```apt``` por ejemplo.
### 4. En estas líneas de comandos, ¿utilizó camino absoluto o relativo para nombrar los directorios?
```
matias@debian:~$ ls -R
.:
Descargas  dir-2       Escritorio  Música      Público
dir-1      Documentos  Imágenes    Plantillas  Vídeos

./Descargas:

./dir-1:

./dir-2:
grupo-A  grupo-B

./dir-2/grupo-A:

./dir-2/grupo-B:

./Documentos:

./Escritorio:

./Imágenes:

./Música:

./Plantillas:

./Público:

./Vídeos:
```
Para crear los directorios en cuestión, se usaron las rutas relativas.
### 10. Muestre el contenido del archivo comandos haciendo pausa luego de cada pantalla.
```
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
alsaucm
amidi
amixer
analog
ant
aplay
aplaymidi
appres
apropos
apt
apt-cache
apt-cdrom
apt-config
apt-extracttemplates
apt-ftparchive
apt-get
apt-key
apt-listchanges
apt-mark
apt-sortpkgs
ar
arch
arecord
arecordmidi
as
aseqdump
aseqnet
aspell
aspell-import
atobm
--Más--(3%)
```
```
atril
atril-previewer
atril-thumbnailer
awk
axfer
b2sum
base32
base64
basename
bash
bashbug
bdftopcf
bdftruncate
bitmap
bmtoa
bootctl
broadwayd
bsd-csh
bsd-from
bsd-write
buildhash
bunzip2
busctl
busybox
bwrap
bzcat
bzcmp
bzdiff
bzegrep
bzexe
bzfgrep
bzgrep
bzip2
bzip2recover
bzless
bzmore
c++
c89
c89-gcc
c99
c99-gcc
cal
calendar
cancel
captoinfo
cat
catchsegv
catman
cc
c++filt
chacl
chage
chardet3
chardetect3
chattr
chcon
checkgid
chfn
chgrp
chmod
choom
chown
chrt
chsh
chvt
ckbcomp
cksum
clear
clear_console
cmp
codepage
col
colcrt
colrm
column
comm
compose
corelist
cp
cpan
cpan5.28-x86_64-linux-gnu
cpio
cpp
cpp-8
c_rehash
crontab
csh
csplit
ctstat
cupstestdsc
--Más--(8%)
```
```
cupstestppd
cut
cvt
cvtsudoers
dash
date
dbus-cleanup-sockets
dbus-daemon
dbus-launch
dbus-monitor
dbus-run-session
dbus-send
dbus-update-activation-environment
dbus-uuidgen
dd
deallocvt
debconf
debconf-apt-progress
debconf-communicate
debconf-copydb
debconf-escape
debconf-set-selections
debconf-show
debianbts
debian-reference
deb-systemd-helper
deb-systemd-invoke
defmt-c
defmt-sh
delpart
desktop-file-edit
desktop-file-install
desktop-file-validate
df
dh_bash-completion
dh_dkms
dh_perl_openssl
dh_python2
diff
diff3
dir
dircolors
dirmngr
dirmngr-client
dirname
discover-config
dmesg
dm-tool
dnsdomainname
domainname
dotlockfile
dpkg
dpkg-architecture
dpkg-buildflags
dpkg-buildpackage
dpkg-checkbuilddeps
dpkg-deb
dpkg-distaddfile
dpkg-divert
dpkg-genbuildinfo
dpkg-genchanges
dpkg-gencontrol
dpkg-gensymbols
dpkg-maintscript-helper
dpkg-mergechangelogs
dpkg-name
dpkg-parsechangelog
dpkg-query
dpkg-scanpackages
dpkg-scansources
dpkg-shlibdeps
dpkg-source
dpkg-split
dpkg-statoverride
dpkg-trigger
dpkg-vendor
dtplite
du
dumpkeys
dwp
echo
edit
editor
editres
egrep
eject
elfedit
enc2xs
encguess
enchant
enchant-lsmod
env
envsubst
eqn
ex
exfalso
exo-csource
exo-desktop-item-edit
exo-open
exo-preferred-applications
expand
expiry
expr
factor
faillog
faked-sysv
faked-tcp
fakeroot
fakeroot-sysv
fakeroot-tcp
fallocate
false
fbstat
fbsvcmgr
fc-cache
fc-cat
fc-conflist
fcgistarter
fc-list
fc-match
fc-pattern
fc-query
fc-scan
fc-validate
fgconsole
fgrep
file
fincore
find
findaffix
findmnt
firefox
firefox-esr
flock
fmt
--Más--(21%)
``` 

```
fmt
fold
fonttosfnt
free
from
funzip
fusermount
g++
g++-8
gamma4scanimage
gapplication
gbak
gcc
gcc-8
gcc-ar
gcc-ar-8
gcc-nm
gcc-nm-8
gcc-ranlib
gcc-ranlib-8
gcov
gcov-8
gcov-dump
gcov-dump-8
gcov-tool
gcov-tool-8
gcr-viewer
gdbus
gdialog
gdk-pixbuf-csource
gdk-pixbuf-pixdata
gdk-pixbuf-thumbnailer
gencat
geqn
GET
getconf
getent
getfacl
getkeycodes
getopt
gettext
gettext.sh
gfix
gio
gio-querymodules
glib-compile-schemas
gnome-keyring
gnome-keyring-3
gnome-keyring-daemon
gnome-www-browser
gold
gpasswd
gpg
gpg-agent
gpgcompose
gpgconf
gpg-connect-agent
gpgparsemail
gpgsm
gpgsplit
gpgtar
gpgv
gpg-wks-server
gpg-zip
gpic
gpre
gprof
grep
gresource
groff
grog
grops
grotty
groups
grub-editenv
grub-file
grub-fstest
grub-glue-efi
grub-kbdcomp
grub-menulst2cfg
grub-mkfont
grub-mkimage
grub-mklayout
grub-mknetdir
grub-mkpasswd-pbkdf2
grub-mkrelpath
grub-mkrescue
grub-mkstandalone
grub-mount
grub-ntldr-img
grub-render-label
grub-script-check
grub-syslinux2cfg
gsec
gsettings
gtbl
gtf
gtk-builder-tool
gtk-launch
gtk-query-settings
gtk-update-icon-cache
gunzip
gzexe
gzip
h2ph
h2xs
hd
head
HEAD
helpztags
hexdump
host
hostid
hostname
hostnamectl
htcacheclean
htdbm
htdigest
htpasswd
hv3
i386
iceauth
ico
icombine
iconv
id
iecset
ijoin
infocmp
infotocap
install
install-printerdriver
instmodsh
intel-virtual-output
ionice
ip
ipcmk
ipcrm
ipcs
iptables-xml
ischroot
isdv4-serial-debugger
isdv4-serial-inputattach
ispell
ispell-wrapper
isql-fb
java
jexec
jfr
jjs
join
journalctl
json_pp
kbdinfo
kbd_mode
kbxutil
kernel-install
keytool
kill
kmod
koi8rxterm
laptop-detect
last
lastb
lastlog
lcf
ld
ld.bfd
ldd
ld.gold
less
lessecho
lessfile
lesskey
lesspipe
lexgrog
lft
lft.db
libnetcfg
libreoffice
libwacom-list-local-devices
light-locker
light-locker-command
link
linux32
linux64
linux-boot-prober
linux-check-removal
linux-update-symlinks
linux-version
listres
ln
lnstat
loadkeys
loadunimap
lobase
localc
locale
localectl
localedef
lodraw
loffice
lofromtemplate
logger
login
loginctl
logname
logresolve
loimpress
lomath
look
lorder
loweb
lowntfs-3g
lowriter
lp
lpoptions
lp_solve
lpstat
ls
lsattr
lsblk
lsb_release
lscpu
lsinitramfs
lsipc
lslocks
lslogins
lsmem
lsmod
lsns
lsof
lspci
lspgpot
lsusb
luit
lwp-download
lwp-dump
lwp-mirror
lwp-request
lxterm
lzcat
lzcmp
lzdiff
lzegrep
lzfgrep
lzgrep
lzless
lzma
lzmainfo
lzmore
make
make-first-existing-target
man
mandb
manpath
mapscrn
mawk
mcookie
md5sum
md5sum.textutils
mesg
migrate-pubring-from-classic-gpg
mimeopen
mimetype
mkdir
mkfifo
mkfontdir
mkfontscale
mk_modmap
mknod
mktemp
mmcli
more
mount
mountpoint
mousepad
mpexpand
mt
mt-gnu
mtrace
munchlist
mv
namei
nano
nawk
nbackup
nc
ncal
nc.traditional
neqn
netcat
networkctl
newgrp
ngettext
nice
nisdomainname
nl
nm
nm-applet
nmcli
nm-connection-editor
nm-online
nmtui
nmtui-connect
nmtui-edit
nmtui-hostname
nns
nnsd
nnslog
nohup
notify-send
nproc
nroff
nsenter
nstat
ntfs-3g
ntfs-3g.probe
ntfscat
ntfscluster
ntfscmp
ntfsdecrypt
ntfsfallocate
ntfsfix
ntfsinfo
ntfsls
ntfsmove
ntfsrecover
ntfssecaudit
ntfstruncate
ntfsusermap
ntfswipe
numfmt
objcopy
objdump
oclock
od
on_ac_power
openssl
openvt
operon
orca
orca-dm-wrapper
os-prober
p11-kit
p7zip
pacat
pack200
pacmd
pactl
padsp
page
pager
pamon
paperconf
paplay
parec
parecord
parole
partx
passwd
paste
pasuspender
patch
pathchk
pavucontrol
pax11publish
pcimodules
pdb
pdb2
pdb2.7
pdb3
pdb3.7
perf
perl
perl5.28.1
perl5.28-x86_64-linux-gnu
perlbug
perldoc
perlivp
perlthanks
pgrep
pic
pico
piconv
pidof
pinentry
pinentry-curses
pinentry-gnome3
pinentry-x11
ping
ping4
ping6
pinky
pkaction
pkcheck
pkcon
pkexec
pkill
pkmon
pkttyagent
pl2pm
pldd
plog
plymouth
pmap
pod2html
pod2man
pod2text
pod2usage
podchecker
podselect
poff
pon
POST
pr
precat
preconv
preunzip
prezip
prezip-bin
print
printenv
printerbanner
printf
prlimit
prove
ps
psfaddtable
psfgettable
psfstriptable
psfxtable
pt
ptar
ptardiff
ptargrep
ptx
pulseaudio
pwd
pwdx
py3clean
py3compile
py3versions
pyclean
pycompile
pydoc
pydoc2
pydoc2.7
pydoc3
pydoc3.7
pygettext
pygettext2
pygettext2.7
pygettext3
pygettext3.7
python
python2
python2.7
python3
python3.7
python3.7m
python3m
pyversions
querybts
quodlibet
ranlib
rbash
rcp
rdma
readelf
readlink
realpath
rename.ul
rendercheck
renice
reportbug
report-hw
reset
resize
resizecons
resizepart
resolvectl
rev
rgrep
ristretto
rlogin
rm
rmdir
rmid
rmiregistry
rnano
rotatelogs
routef
routel
rpcgen
rsh
rstart
rstartd
rtstat
runcon
run-mailcap
run-parts
run-with-aspell
rview
sane-find-scanner
savelog
scanimage
scp
scp-dbus-service
screendump
script
scriptreplay
sdiff
sed
see
select-default-iwrap
select-editor
sensible-browser
sensible-editor
sensible-pager
sensors
sensors-conf-convert
seq
sessreg
setarch
setfacl
setfont
setkeycodes
setleds
setlogcons
setmetamode
setpci
setpriv
setsid
setterm
setupcon
setvtrgb
setxkbmap
sftp
sg
sh
sha1sum
sha224sum
sha256sum
sha384sum
sha512sum
shasum
showconsolefont
showkey
showrgb
shred
shuf
size
skill
slabtop
sleep
slogin
smproxy
snice
soelim
soffice
sort
sotruss
spd-conf
spd-say
speaker-test
speech-dispatcher
splain
split
splitfont
sprof
sq
ss
ssh
ssh-add
ssh-agent
ssh-argv0
ssh-copy-id
ssh-keygen
ssh-keyscan
start-pulseaudio-x11
startx
startxfce4
stat
stdbuf
strings
strip
stty
su
sudo
sudoedit
sudoreplay
sum
symcryptrun
synaptic-pkexec
sync
system-config-printer
system-config-printer-applet
systemctl
systemd
systemd-analyze
systemd-ask-password
systemd-cat
systemd-cgls
systemd-cgtop
systemd-delta
systemd-detect-virt
systemd-escape
systemd-hwdb
systemd-id128
systemd-inhibit
systemd-machine-id-setup
systemd-mount
systemd-notify
systemd-path
systemd-resolve
systemd-run
systemd-socket-activate
systemd-stdio-bridge
systemd-sysusers
systemd-tmpfiles
systemd-tty-ask-password-agent
systemd-umount
tabs
tac
tail
tar
tasksel
taskset
tbl
tcldocstrip
tclsh
tclsh8.6
tee
telnet
telnet.netkit
tempfile
test
thunar
Thunar
thunar-settings
thunar-volman
thunar-volman-settings
tic
timedatectl
timeout
tload
toe
top
touch
tput
tr
traceproto
traceproto.db
traceroute
traceroute6
traceroute6.db
traceroute.db
traceroute-nanog
transset
troff
true
truncate
trust
tryaffix
tset
tsort
tty
tzselect
ucf
ucfq
ucfr
ucs2any
udevadm
udisksctl
ul
--Más--(72%)
```

```
ulockmgr_server
umax_pp
umount
uname
uncompress
unexpand
unicode_start
unicode_stop
uniq
unlink
unlzma
unmkinitramfs
unopkg
unpack200
unshare
unsq
unxz
unzip
unzipsfx
update-alternatives
update-desktop-database
update-mime-database
upower
uptime
usb-devices
usbhid-dump
usbreset
users
utmpdump
uxterm
VBoxClient
VBoxClient-all
VBoxControl
VBoxDRMClient
vdir
vi
view
viewres
vim.tiny
vmstat
vmwarectrl
volname
w
wall
watch
watchgnupg
wc
wdctl
wget
whatis
whereis
which
whiptail
who
whoami
wish
wish8.6
word-list-compress
wpa_passphrase
w.procps
write
X
X11
x11perf
x11perfcomp
x86_64
x86_64-linux-gnu-addr2line
x86_64-linux-gnu-ar
x86_64-linux-gnu-as
x86_64-linux-gnu-c++filt
x86_64-linux-gnu-cpp
x86_64-linux-gnu-cpp-8
x86_64-linux-gnu-dwp
x86_64-linux-gnu-elfedit
x86_64-linux-gnu-g++
x86_64-linux-gnu-g++-8
x86_64-linux-gnu-gcc
x86_64-linux-gnu-gcc-8
x86_64-linux-gnu-gcc-ar
x86_64-linux-gnu-gcc-ar-8
x86_64-linux-gnu-gcc-nm
x86_64-linux-gnu-gcc-nm-8
x86_64-linux-gnu-gcc-ranlib
x86_64-linux-gnu-gcc-ranlib-8
x86_64-linux-gnu-gcov
x86_64-linux-gnu-gcov-8
x86_64-linux-gnu-gcov-dump
x86_64-linux-gnu-gcov-dump-8
x86_64-linux-gnu-gcov-tool
x86_64-linux-gnu-gcov-tool-8
x86_64-linux-gnu-gold
x86_64-linux-gnu-gprof
x86_64-linux-gnu-ld
x86_64-linux-gnu-ld.bfd
x86_64-linux-gnu-ld.gold
x86_64-linux-gnu-nm
x86_64-linux-gnu-objcopy
x86_64-linux-gnu-objdump
x86_64-linux-gnu-ranlib
x86_64-linux-gnu-readelf
x86_64-linux-gnu-size
x86_64-linux-gnu-strings
x86_64-linux-gnu-strip
xarchiver
xargs
xauth
xbiff
xbrlapi
xcalc
xclipboard
xclock
xcmsdb
xconsole
xcursorgen
xcutsel
xdg-dbus-proxy
xdg-desktop-icon
xdg-desktop-menu
xdg-email
xdg-icon-resource
xdg-mime
xdg-open
xdg-screensaver
xdg-settings
xdg-user-dir
xdg-user-dirs-update
xditview
xdpyinfo
xdriinfo
xedit
xev
xeyes
xfburn
xfce4-about
xfce4-accessibility-settings
xfce4-appearance-settings
xfce4-appfinder
xfce4-clipman
xfce4-clipman-settings
xfce4-dict
xfce4-display-settings
xfce4-find-cursor
xfce4-keyboard-settings
xfce4-mime-settings
xfce4-mouse-settings
xfce4-notes
xfce4-notes-settings
xfce4-notifyd-config
xfce4-panel
xfce4-popup-applicationsmenu
xfce4-popup-clipman
xfce4-popup-clipman-actions
xfce4-popup-directorymenu
xfce4-popup-notes
xfce4-popup-places
xfce4-popup-whiskermenu
xfce4-popup-windowmenu
xfce4-power-manager
xfce4-power-manager-settings
xfce4-screenshooter
xfce4-sensors
xfce4-session
xfce4-session-logout
xfce4-session-settings
xfce4-settings-editor
xfce4-settings-manager
xfce4-taskmanager
xfce4-terminal
xfce4-terminal.wrapper
xfconf-query
xfd
xfdesktop
xfdesktop-settings
xfhelp4
xflock4
xfontsel
xfrun4
xfsettingsd
xfwm4
xfwm4-settings
xfwm4-tweaks-settings
xfwm4-workspace-settings
xgamma
xgc
xhost
xinit
xkbbell
xkbcomp
xkbevd
xkbprint
xkbvleds
xkbwatch
xkeystone
xkill
xload
xlogo
xlsatoms
xlsclients
xlsfonts
xmag
xman
xmessage
xmodmap
xmore
Xorg
xprop
xrandr
xrdb
xrefresh
xsane
x-session-manager
xset
xsetmode
xsetpointer
xsetroot
xsetwacom
xsm
xstdcmap
xsubpp
xterm
x-terminal-emulator
xvidtune
xvinfo
xwd
x-window-manager
xwininfo
xwud
x-www-browser
xxd
xz
xzcat
xzcmp
xzdiff
xzegrep
xzfgrep
xzgrep
xzless
xzmore
yes
ypdomainname
zcat
zcmp
zdiff
zdump
zegrep
zenity
zfgrep
zforce
zgrep
zipdetails
zipgrep
zipinfo
zless
zmore
znew
matias
matias_001
matias_002
matias_004
matias@debian:~$ 
```
### 12. Cree el archivo partescom de manera tal que contenga las 15 primeras líneas del archivo comandos. Verifique su contenido.
```
matias@debian:~$ head -15 comandos > partescom
matias@debian:~$ cat partescom 
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
```
### 14. En este momento, el árbol de directorios y archivos debe ser el siguiente:
```
matias@debian:~$ ls -R
.:
comandos  Descargas  dir-1  dir-2  Documentos  Escritorio  Imágenes  Música  partescom  personal  Plantillas  Público  Vídeos

./Descargas:

./dir-1:
union

./dir-2:
grupo-A  grupo-B

./dir-2/grupo-A:

./dir-2/grupo-B:

./Documentos:

./Escritorio:

./Imágenes:

./Música:

./Plantillas:

./Público:

./Vídeos:
``` 
## Actividadad 2
### 4. Mostrar el número de i-nodo de los archivos utilizados en el punto anterior.
```
matias@debian:~$ ls -li dato1 dato2
3248 -rw-r--r-- 1 matias matias 931 sep  7 21:50 dato1
3342 -rw-r--r-- 1 matias matias 931 sep  7 21:51 dato2
```
Tienen distinto número de i-nodo porque al ser archivos distintos se encuentran en bloques distintos del disco.

### 6. Mostrar en formato extendido, el contenido del directorio de trabajo.
```
matias@debian:~$ ls -l
total 40
-rw-r--r-- 1 matias matias  931 sep  7 21:50 dato1
-rw-r--r-- 1 matias matias  971 sep  7 21:56 dato2
drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Descargas
drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Documentos
drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Escritorio
drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Imágenes
drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Música
drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Plantillas
drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Público
drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Vídeos

```
### 7. Mostrar todos los archivos de su directorio, incluso los ocultos.
```
matias@debian:~$ ls -a
.              Documentos     .vboxclient-clipboard.pid
..             Escritorio     .vboxclient-display-svga-x11.pid
.bash_history  .gnupg         .vboxclient-draganddrop.pid
.bash_logout   .ICEauthority  .vboxclient-seamless.pid
.bashrc        Imágenes       Vídeos
.cache         .local         .Xauthority
.config        .mozilla       .xfce4-session.verbose-log
dato1          Música         .xfce4-session.verbose-log.last
dato2          Plantillas     .xsession-errors
Descargas      .profile       .xsession-errors.old
.dmrc          Público
```
### 9. ¿Los directorios tienen número de i-nodo? ¿Por qué?
Los directorios tienen número de i-nodo ya que también son un tipo de archivos.
```
matias@debian:~$ ls -li
total 44
3248 -rw-r--r-- 1 matias matias  931 sep  7 21:50 dato1
3342 -rw-r--r-- 1 matias matias  971 sep  7 21:56 dato2
3144 drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Descargas
3147 drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Documentos
3143 drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Escritorio
3149 drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Imágenes
3148 drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Música
3405 drwxr-xr-x 2 matias matias 4096 sep  7 21:58 nuevo
3145 drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Plantillas
3146 drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Público
3150 drwxr-xr-x 2 matias matias 4096 ago 18 18:16 Vídeos
```
***No i-nodo de dato1:*** 3248
***No i-nodo de dato2:*** 3342
### 10. Cambiarse al directorio nuevo
```
matias@debian:~/nuevo$ pwd
/home/matias/nuevo
```
### 12. Verifique el contenido del directorio de conexión. ¿Aparecen los archivos dato1 y dato2?
Los archivos no aparecen.
```
matias@debian:~/nuevo$ ls ..
Descargas   Escritorio  Música  Plantillas  Vídeos
Documentos  Imágenes    nuevo   Público
```
### 13. Verifique el contenido del directorio actual. Muestre los números de i-nodos.
```
matias@debian:~/nuevo$ ls -li
total 8
3248 -rw-r--r-- 1 matias matias 931 sep  7 21:50 dato1
3342 -rw-r--r-- 1 matias matias 971 sep  7 21:56 dato2
```
El número de i-nodo para ambos archivos es el mismo, ya que el lugar que ocupan en el disco es el mismo, pero al usar el comando ```mv``` lo que hacemos es cambiar el atributo de ruta en la tabla de i-nodos
### 14. Realice un enlace duro del archivo dato2 como dato2ln y verifique el contador de enlaces y N° de i-nodo. (Ud. está ubicado en el directorio nuevo)
```
matias@debian:~/nuevo$ ln dato2 dato2ln
matias@debian:~/nuevo$ ls -li
total 12
3248 -rw-r--r-- 1 matias matias 931 sep  7 21:50 dato1
3342 -rw-r--r-- 2 matias matias 971 sep  7 21:56 dato2
3342 -rw-r--r-- 2 matias matias 971 sep  7 21:56 dato2ln
```
### 15. Realice un enlace simbólico del archivo dato2 como dato2sb y verifique el contador de enlaces y N° de i-nodo.
```
matias@debian:~/nuevo$ ln -s dato2 dato2sb
matias@debian:~/nuevo$ ls -li
total 12
3248 -rw-r--r-- 1 matias matias 931 sep  7 21:50 dato1
3342 -rw-r--r-- 2 matias matias 971 sep  7 21:56 dato2
3342 -rw-r--r-- 2 matias matias 971 sep  7 21:56 dato2ln
3422 lrwxrwxrwx 1 matias matias   5 sep  7 22:17 dato2sb -> dato2
```
### 16. Borre el archivo dato2 y verifique el contador de enlaces.
```
matias@debian:~/nuevo$ ls -li
total 8
3248 -rw-r--r-- 1 matias matias 931 sep  7 21:50 dato1
3342 -rw-r--r-- 1 matias matias 971 sep  7 21:56 dato2ln
3422 lrwxrwxrwx 1 matias matias   5 sep  7 22:17 dato2sb -> dato2
```
### 17. Mostrar el contenido del archivo datos2sb.
```
matias@debian:~/nuevo$ cat dato2sb 
cat: dato2sb: No existe el fichero o el directorio
```
## Actividad 3

### 1. El enlace duro crea una nueva entrada en el directorio, con el no de i-nodo del archivo enlazado. V ó F
**Verdadero**

### 2. Al borrar un archivo, borramos un acceso o enlace al i-nodo. V ó F
**Falso**
Lo que se borra es, en la metadata que contiene el inodo, el enlace con el bloque físico del disco que tiene asignado el archivo. En sistemas de archivos como ext3 lo que se hace es poner estos punteros (directos, indirectos, doblemente indirectos y triplemente indirectos) en 0. Inmediatamente la información del disco no se borra, pero al "liberar" el inodo, estamos habilitando que se pueda sobreescribir ese bloque del disco.

##3. Mostrar el no de i-nodo de los archivos de /bin:
**a. en una columna**
```
matias@debian:/bin$ ls -li | more
total 110344
263779 -rwxr-xr-x 1 root root      60064 feb 28  2019 [
272088 -rwxr-xr-x 1 root root         96 oct 10  2019 2to3-2.7
311822 -rwxr-xr-x 1 root root         39 feb  5  2018 7z
311823 -rwxr-xr-x 1 root root         40 feb  5  2018 7za
311810 -rwxr-xr-x 1 root root         40 feb  5  2018 7zr
270080 -rwxr-xr-x 1 root root      30936 mar 30  2019 aa-enabled
270081 -rwxr-xr-x 1 root root      30936 mar 30  2019 aa-exec
272674 -rwxr-xr-x 1 root root      55480 oct 15  2019 ab
275391 -rwxr-xr-x 1 root root      22600 mar 30  2019 aconnect
265855 -rwxr-xr-x 1 root root      26704 ene 10  2019 addpart
318188 lrwxrwxrwx 1 root root         26 mar 21  2019 addr2line -> x86_64-linux-gnu-addr2line
275392 -rwxr-xr-x 1 root root      47240 mar 30  2019 alsabat
275393 -rwxr-xr-x 1 root root      80888 mar 30  2019 alsaloop
275394 -rwxr-xr-x 1 root root      68024 mar 30  2019 alsamixer
275395 -rwxr-xr-x 1 root root      14408 mar 30  2019 alsatplg
275396 -rwxr-xr-x 1 root root      18880 mar 30  2019 alsaucm
275397 -rwxr-xr-x 1 root root      26704 mar 30  2019 amidi
275398 -rwxr-xr-x 1 root root      59544 mar 30  2019 amixer
275474 -rwxr-xr-x 1 root root     432480 nov 10  2016 analog
276059 lrwxrwxrwx 1 root root         20 ago 27  2018 ant -> ../share/ant/bin/ant
275399 -rwxr-xr-x 1 root root      79992 mar 30  2019 aplay
275400 -rwxr-xr-x 1 root root      22608 mar 30  2019 aplaymidi
289163 -rwxr-xr-x 1 root root      10472 mar 18  2018 appres
270792 lrwxrwxrwx 1 root root          6 feb 10  2019 apropos -> whatis
263338 -rwxr-xr-x 1 root root      18520 may 12 06:57 apt
263341 -rwxr-xr-x 1 root root      84128 may 12 06:57 apt-cache
263342 -rwxr-xr-x 1 root root      26784 may 12 06:57 apt-cdrom
263343 -rwxr-xr-x 1 root root      26712 may 12 06:57 apt-config
267334 -rwxr-xr-x 1 root root      22688 may 12 06:57 apt-extracttemplates
267335 -rwxr-xr-x 1 root root     243872 may 12 06:57 apt-ftparchive
263344 -rwxr-xr-x 1 root root      47264 may 12 06:57 apt-get
263347 -rwxr-xr-x 1 root root      27730 may 12 06:57 apt-key
273655 -rwxr-xr-x 1 root root      10868 mar 17  2019 apt-listchanges
263348 -rwxr-xr-x 1 root root      55456 may 12 06:57 apt-mark
267336 -rwxr-xr-x 1 root root      47192 may 12 06:57 apt-sortpkgs
318189 lrwxrwxrwx 1 root root         19 mar 21  2019 ar -> x86_64-linux-gnu-ar
263780 -rwxr-xr-x 1 root root      39584 feb 28  2019 arch
275442 lrwxrwxrwx 1 root root          5 mar 30  2019 arecord -> aplay
275401 -rwxr-xr-x 1 root root      30808 mar 30  2019 arecordmidi
318190 lrwxrwxrwx 1 root root         19 mar 21  2019 as -> x86_64-linux-gnu-as
275402 -rwxr-xr-x 1 root root      26696 mar 30  2019 aseqdump
275403 -rwxr-xr-x 1 root root      26752 mar 30  2019 aseqnet
277289 -rwxr-xr-x 1 root root     153944 ene 31  2019 aspell
277290 -rwxr-xr-x 1 root root       2044 ene 31  2019 aspell-import
313274 -rwxr-xr-x 1 root root      10496 mar 18  2018 atobm
281213 -rwxr-xr-x 1 root root     485592 dic 16  2019 atril
281214 -rwxr-xr-x 1 root root      51416 dic 16  2019 atril-previewer
281215 -rwxr-xr-x 1 root root      18520 dic 16  2019 atril-thumbnailer
264821 lrwxrwxrwx 1 root root         21 ago 18 17:52 awk -> /etc/alternatives/awk
275404 -rwxr-xr-x 1 root root      88136 mar 30  2019 axfer
263781 -rwxr-xr-x 1 root root      60192 feb 28  2019 b2sum
263782 -rwxr-xr-x 1 root root      43712 feb 28  2019 base32
263783 -rwxr-xr-x 1 root root      43712 feb 28  2019 base64
263784 -rwxr-xr-x 1 root root      39520 feb 28  2019 basename
263598 -rwxr-xr-x 1 root root    1168776 abr 18  2019 bash
263604 -rwxr-xr-x 1 root root       6793 abr 18  2019 bashbug
313221 -rwxr-xr-x 1 root root      43464 mar 18  2018 bdftopcf
313222 -rwxr-xr-x 1 root root      10464 mar 18  2018 bdftruncate
313275 -rwxr-xr-x 1 root root     105280 mar 18  2018 bitmap
321270 -rwxr-xr-x 1 root root      14328 ene 22  2019 blkcalc
321271 -rwxr-xr-x 1 root root      14328 ene 22  2019 blkcat
321272 -rwxr-xr-x 1 root root      14328 ene 22  2019 blkls
321273 -rwxr-xr-x 1 root root      14328 ene 22  2019 blkstat
313276 -rwxr-xr-x 1 root root      10440 mar 18  2018 bmtoa
266885 -rwxr-xr-x 1 root root      47344 abr 27 14:02 bootctl
292986 -rwxr-xr-x 1 root root     120912 feb  5  2019 broadwayd
317809 -rwxr-xr-x 1 root root     163168 ene 13  2020 bsd-csh
268205 -rwxr-xr-x 1 root root      10488 may  4  2018 bsd-from
268207 -rwxr-sr-x 1 root tty       14736 may  4  2018 bsd-write
279734 -rwxr-xr-x 1 root root      39296 may  5  2018 buildhash
269863 -rwxr-xr-x 3 root root      38984 jul 10  2019 bunzip2
266886 -rwxr-xr-x 1 root root      80064 abr 27 14:02 busctl
269679 -rwxr-xr-x 1 root root     707288 abr  1  2019 busybox
279593 -rwsr-xr-x 1 root root      55400 mar  6  2019 bwrap
269863 -rwxr-xr-x 3 root root      38984 jul 10  2019 bzcat
269878 lrwxrwxrwx 1 root root          6 jul 10  2019 bzcmp -> bzdiff
269864 -rwxr-xr-x 1 root root       2227 jul 10  2019 bzdiff
269879 lrwxrwxrwx 1 root root          6 jul 10  2019 bzegrep -> bzgrep
269865 -rwxr-xr-x 1 root root       4877 jun 24  2019 bzexe
269880 lrwxrwxrwx 1 root root          6 jul 10  2019 bzfgrep -> bzgrep
269866 -rwxr-xr-x 1 root root       3641 jul 10  2019 bzgrep
269863 -rwxr-xr-x 3 root root      38984 jul 10  2019 bzip2
269867 -rwxr-xr-x 1 root root      14328 jul 10  2019 bzip2recover
269881 lrwxrwxrwx 1 root root          6 jul 10  2019 bzless -> bzmore
269868 -rwxr-xr-x 1 root root       1297 jul 10  2019 bzmore
321192 lrwxrwxrwx 1 root root         21 ago 31 23:54 c++ -> /etc/alternatives/c++
321184 lrwxrwxrwx 1 root root         21 ago 31 23:54 c89 -> /etc/alternatives/c89
318473 -rwxr-xr-x 1 root root        428 jun 12  2013 c89-gcc
321188 lrwxrwxrwx 1 root root         21 ago 31 23:54 c99 -> /etc/alternatives/c99
318474 -rwxr-xr-x 1 root root        454 jun 12  2013 c99-gcc
268259 lrwxrwxrwx 1 root root          4 may  4  2018 cal -> ncal
268209 -rwxr-xr-x 1 root root      31896 may  4  2018 calendar
281391 -rwxr-xr-x 1 root root      14328 abr 25 11:27 cancel
266257 lrwxrwxrwx 1 root root          3 nov  2  2019 captoinfo -> tic
263749 -rwxr-xr-x 1 root root      43744 feb 28  2019 cat
264285 -rwxr-xr-x 1 root root       3295 may  1  2019 catchsegv
270504 -rwxr-xr-x 1 root root      39384 feb 10  2019 catman
321182 lrwxrwxrwx 1 root root         20 ago 31 23:54 cc -> /etc/alternatives/cc
318191 lrwxrwxrwx 1 root root         24 mar 21  2019 c++filt -> x86_64-linux-gnu-c++filt
274991 -rwxr-xr-x 1 root root      14328 mar  1  2019 chacl
262191 -rwxr-sr-x 1 root shadow    71816 jul 27  2018 chage
274783 lrwxrwxrwx 1 root root         11 ene 21  2019 chardet3 -> chardetect3
274781 -rwxr-xr-x 1 root root        389 ene 21  2019 chardetect3
264002 -rwxr-xr-x 1 root root      14336 ene  9  2020 chattr
263785 -rwxr-xr-x 1 root root      64416 feb 28  2019 chcon
272675 -rwxr-xr-x 1 root root      14328 oct 15  2019 checkgid
262192 -rwsr-xr-x 1 root root      54096 jul 27  2018 chfn
263750 -rwxr-xr-x 1 root root      64320 feb 28  2019 chgrp
263751 -rwxr-xr-x 1 root root      64288 feb 28  2019 chmod
265856 -rwxr-xr-x 1 root root      51280 ene 10  2019 choom
263752 -rwxr-xr-x 1 root root      72512 feb 28  2019 chown
265857 -rwxr-xr-x 1 root root      34896 ene 10  2019 chrt
262193 -rwsr-xr-x 1 root root      44528 jul 27  2018 chsh
269678 -rwxr-xr-x 1 root root      14648 jul 28  2018 chvt
270361 -rwxr-xr-x 1 root root     149898 ago 15  2019 ckbcomp
263786 -rwxr-xr-x 1 root root      39552 feb 28  2019 cksum
266231 -rwxr-xr-x 1 root root      14336 nov  2  2019 clear
263605 -rwxr-xr-x 1 root root      14648 abr 18  2019 clear_console
263928 -rwxr-xr-x 1 root root      51856 abr  8  2019 cmp
270193 -rwxr-xr-x 1 root root      14552 jul 28  2018 codepage
268211 -rwxr-xr-x 1 root root      10472 may  4  2018 col
268213 -rwxr-xr-x 1 root root      10440 may  4  2018 colcrt
268215 -rwxr-xr-x 1 root root      10432 may  4  2018 colrm
268217 -rwxr-xr-x 1 root root      10584 may  4  2018 column
263787 -rwxr-xr-x 1 root root      43712 feb 28  2019 comm
269796 lrwxrwxrwx 1 root root         11 feb  9  2019 compose -> run-mailcap
271311 -rwxr-xr-x 1 root root      15088 jul 21 16:27 corelist
263753 -rwxr-xr-x 1 root root     146880 feb 28  2019 cp
271312 -rwxr-xr-x 1 root root       8156 jul 21 16:27 cpan
270808 -rwxr-xr-x 1 root root       8177 jul 21 16:27 cpan5.28-x86_64-linux-gnu
268267 -rwxr-xr-x 1 root root     158320 abr 23  2019 cpio
281344 lrwxrwxrwx 1 root root          5 feb 25  2019 cpp -> cpp-8
281338 lrwxrwxrwx 1 root root         22 abr  6  2019 cpp-8 -> x86_64-linux-gnu-cpp-8
274789 -rwxr-xr-x 1 root root       6332 abr 20 17:23 c_rehash
268337 -rwxr-sr-x 1 root crontab   43568 oct 11  2019 crontab
321213 lrwxrwxrwx 1 root root         21 sep  1 00:51 csh -> /etc/alternatives/csh
263788 -rwxr-xr-x 1 root root      56160 feb 28  2019 csplit
268609 lrwxrwxrwx 1 root root          6 ene 10  2019 ctstat -> lnstat
281392 -rwxr-xr-x 1 root root      14328 abr 25 11:27 cupstestdsc
281393 -rwxr-xr-x 1 root root      63560 abr 25 11:27 cupstestppd
263789 -rwxr-xr-x 1 root root      43776 feb 28  2019 cut
313051 -rwxr-xr-x 1 root root      18680 mar  5  2019 cvt
312551 -rwxr-xr-x 1 root root     260376 feb  2  2020 cvtsudoers
263917 -rwxr-xr-x 1 root root     121464 ene 17  2019 dash
263755 -rwxr-xr-x 1 root root     109408 feb 28  2019 date
273357 -rwxr-xr-x 1 root root      14320 jul  5 13:10 dbus-cleanup-sockets
273358 -rwxr-xr-x 1 root root     240680 jul  5 13:10 dbus-daemon
279089 -rwxr-xr-x 1 root root      30712 jul  5 13:10 dbus-launch
273359 -rwxr-xr-x 1 root root      26616 jul  5 13:10 dbus-monitor
273360 -rwxr-xr-x 1 root root      14320 jul  5 13:10 dbus-run-session
273361 -rwxr-xr-x 1 root root      30704 jul  5 13:10 dbus-send
273362 -rwxr-xr-x 1 root root      14320 jul  5 13:10 dbus-update-activation-environment
273363 -rwxr-xr-x 1 root root      14320 jul  5 13:10 dbus-uuidgen
263757 -rwxr-xr-x 1 root root      76712 feb 28  2019 dd
270194 -rwxr-xr-x 1 root root      14656 jul 28  2018 deallocvt
263702 -rwxr-xr-x 1 root root       2859 feb 26  2019 debconf
263703 -rwxr-xr-x 1 root root      11541 feb 26  2019 debconf-apt-progress
263704 -rwxr-xr-x 1 root root        608 feb 26  2019 debconf-communicate
263705 -rwxr-xr-x 1 root root       1719 feb 26  2019 debconf-copydb
263708 -rwxr-xr-x 1 root root        647 feb 26  2019 debconf-escape
263709 -rwxr-xr-x 1 root root       2935 feb 26  2019 debconf-set-selections
263710 -rwxr-xr-x 1 root root       1827 feb 26  2019 debconf-show
274917 -rwxr-xr-x 1 root root        413 dic 31  2018 debianbts
281503 -rwxr-xr-x 1 root root        243 mar 17  2019 debian-reference
264252 -rwxr-xr-x 1 root root      21328 nov 21  2018 deb-systemd-helper
264254 -rwxr-xr-x 1 root root       4430 nov 21  2018 deb-systemd-invoke
279735 -rwxr-xr-x 1 root root       6136 may  5  2018 defmt-c
279736 -rwxr-xr-x 1 root root       6136 may  5  2018 defmt-sh
265858 -rwxr-xr-x 1 root root      26704 ene 10  2019 delpart
281787 lrwxrwxrwx 1 root root         20 oct  8  2018 desktop-file-edit -> desktop-file-insta
ll
281774 -rwxr-xr-x 1 root root      94240 oct  8  2018 desktop-file-install
281775 -rwxr-xr-x 1 root root      82184 oct  8  2018 desktop-file-validate
263758 -rwxr-xr-x 1 root root      93744 feb 28  2019 df
273689 -rwxr-xr-x 1 root root       2446 feb 11  2019 dh_bash-completion
318823 -rwxr-xr-x 1 root root       4298 ene  2  2019 dh_dkms
293361 -rwxr-xr-x 1 root root       1396 ene 14  2017 dh_perl_openssl
272307 -rwxr-xr-x 1 root root       1056 mar  4  2019 dh_python2
263930 -rwxr-xr-x 1 root root     220448 abr  8  2019 diff
263931 -rwxr-xr-x 1 root root      68448 abr  8  2019 diff3
263759 -rwxr-xr-x 1 root root     138856 feb 28  2019 dir
263790 -rwxr-xr-x 1 root root      47784 feb 28  2019 dircolors
281817 -rwxr-xr-x 1 root root     566840 ago 22  2019 dirmngr
281818 -rwxr-xr-x 1 root root     117512 ago 22  2019 dirmngr-client
263791 -rwxr-xr-x 1 root root      35424 feb 28  2019 dirname
270412 -rwxr-xr-x 1 root root       2927 ene 14  2018 discover-config
265805 -rwxr-xr-x 1 root root      84288 ene 10  2019 dmesg
309512 -rwxr-xr-x 1 root root      22528 feb 22  2019 dm-tool
264250 lrwxrwxrwx 1 root root          8 sep 27  2018 dnsdomainname -> hostname
264253 lrwxrwxrwx 1 root root          8 sep 27  2018 domainname -> hostname
274475 -rwxr-sr-x 1 root mail      18944 dic  3  2017 dotlockfile
262596 -rwxr-xr-x 1 root root     305696 jun  3  2019 dpkg
318610 -rwxr-xr-x 1 root root      12852 jun  3  2019 dpkg-architecture
318611 -rwxr-xr-x 1 root root       7565 jun  3  2019 dpkg-buildflags
318612 -rwxr-xr-x 1 root root      30610 jun  3  2019 dpkg-buildpackage
318613 -rwxr-xr-x 1 root root       7624 jun  3  2019 dpkg-checkbuilddeps
262598 -rwxr-xr-x 1 root root     166280 jun  3  2019 dpkg-deb
318614 -rwxr-xr-x 1 root root       2782 jun  3  2019 dpkg-distaddfile
262600 -rwxr-xr-x 1 root root     154048 jun  3  2019 dpkg-divert
318615 -rwxr-xr-x 1 root root      16795 jun  3  2019 dpkg-genbuildinfo
318616 -rwxr-xr-x 1 root root      17492 jun  3  2019 dpkg-genchanges
318617 -rwxr-xr-x 1 root root      14155 jun  3  2019 dpkg-gencontrol
318618 -rwxr-xr-x 1 root root      10902 jun  3  2019 dpkg-gensymbols
262601 -rwxr-xr-x 1 root root      20514 jun  3  2019 dpkg-maintscript-helper
318619 -rwxr-xr-x 1 root root       8547 jun  3  2019 dpkg-mergechangelogs
318620 -rwxr-xr-x 1 root root       6789 jun  3  2019 dpkg-name
318621 -rwxr-xr-x 1 root root       4567 jun  3  2019 dpkg-parsechangelog
262602 -rwxr-xr-x 1 root root     162232 jun  3  2019 dpkg-query
318622 -rwxr-xr-x 1 root root       8698 jun  3  2019 dpkg-scanpackages
318623 -rwxr-xr-x 1 root root       9167 jun  3  2019 dpkg-scansources
318624 -rwxr-xr-x 1 root root      31416 jun  3  2019 dpkg-shlibdeps
318625 -rwxr-xr-x 1 root root      23022 jun  3  2019 dpkg-source
262603 -rwxr-xr-x 1 root root     125272 jun  3  2019 dpkg-split
262604 -rwxr-xr-x 1 root root      63608 jun  3  2019 dpkg-statoverride
262605 -rwxr-xr-x 1 root root      80216 jun  3  2019 dpkg-trigger
318626 -rwxr-xr-x 1 root root       3262 jun  3  2019 dpkg-vendor
289494 -rwxr-xr-x 1 root root        837 ago  7  2017 dtplite
263792 -rwxr-xr-x 1 root root     109664 feb 28  2019 du
270185 -rwxr-xr-x 1 root root     179104 jul 28  2018 dumpkeys
318192 lrwxrwxrwx 1 root root         20 mar 21  2019 dwp -> x86_64-linux-gnu-dwp
263760 -rwxr-xr-x 1 root root      39520 feb 28  2019 echo
269797 lrwxrwxrwx 1 root root         11 feb  9  2019 edit -> run-mailcap
269499 lrwxrwxrwx 1 root root         24 ago 18 17:54 editor -> /etc/alternatives/editor
289164 -rwxr-xr-x 1 root root      71040 mar 18  2018 editres
264147 -rwxr-xr-x 1 root root         28 ene  7  2019 egrep
270154 -rwxr-xr-x 1 root root      31424 mar 28  2017 eject
318193 lrwxrwxrwx 1 root root         24 mar 21  2019 elfedit -> x86_64-linux-gnu-elfedit
271313 -rwxr-xr-x 1 root root      42111 jul 21 16:27 enc2xs
271314 -rwxr-xr-x 1 root root       3066 jul 21 16:27 encguess
281879 -rwxr-xr-x 1 root root      18504 dic 19  2018 enchant
281880 -rwxr-xr-x 1 root root      14328 dic 19  2018 enchant-lsmod
263793 -rwxr-xr-x 1 root root      43680 feb 28  2019 env
274405 -rwxr-xr-x 1 root root      43664 nov 10  2018 envsubst
270440 -rwxr-xr-x 1 root root     206016 feb 28  2019 eqn
269565 lrwxrwxrwx 1 root root         20 ago 18 17:54 ex -> /etc/alternatives/ex
282218 -rwxr-xr-x 1 root root        425 ene 18  2019 exfalso
282634 -rwxr-xr-x 1 root root      18520 ene 24  2019 exo-csource
282635 -rwxr-xr-x 1 root root      80440 ene 24  2019 exo-desktop-item-edit
282636 -rwxr-xr-x 1 root root      26952 ene 24  2019 exo-open
282637 -rwxr-xr-x 1 root root        296 ene 24  2019 exo-preferred-applications
263794 -rwxr-xr-x 1 root root      43712 feb 28  2019 expand
262194 -rwxr-sr-x 1 root shadow    31000 jul 27  2018 expiry
263795 -rwxr-xr-x 1 root root      51936 feb 28  2019 expr
263796 -rwxr-xr-x 1 root root      76544 feb 28  2019 factor
265661 -rwxr-xr-x 1 root root      22824 jul 27  2018 faillog
318831 -rwxr-xr-x 1 root root      27200 jun 25  2018 faked-sysv
318832 -rwxr-xr-x 1 root root      31312 jun 25  2018 faked-tcp
321164 lrwxrwxrwx 1 root root         26 ago 31 23:54 fakeroot -> /etc/alternatives/fakeroot
318833 -rwxr-xr-x 1 root root       3851 jun 25  2018 fakeroot-sysv
318834 -rwxr-xr-x 1 root root       3846 jun 25  2018 fakeroot-tcp
265859 -rwxr-xr-x 1 root root      30800 ene 10  2019 fallocate
263761 -rwxr-xr-x 1 root root      35424 feb 28  2019 false
282682 -rwxr-xr-x 1 root root     309616 feb  8  2019 fbstat
282683 -rwxr-xr-x 1 root root     174784 feb  8  2019 fbsvcmgr
321274 -rwxr-xr-x 1 root root      14328 ene 22  2019 fcat
275320 -rwxr-xr-x 1 root root      18952 nov  5  2018 fc-cache
275321 -rwxr-xr-x 1 root root      18904 nov  5  2018 fc-cat
275322 -rwxr-xr-x 1 root root      14616 nov  5  2018 fc-conflist
272676 -rwxr-xr-x 1 root root      14328 oct 15  2019 fcgistarter
275323 -rwxr-xr-x 1 root root      14680 nov  5  2018 fc-list
275324 -rwxr-xr-x 1 root root      14744 nov  5  2018 fc-match
275325 -rwxr-xr-x 1 root root      14672 nov  5  2018 fc-pattern
275326 -rwxr-xr-x 1 root root      14640 nov  5  2018 fc-query
275327 -rwxr-xr-x 1 root root      14688 nov  5  2018 fc-scan
275328 -rwxr-xr-x 1 root root      14688 nov  5  2018 fc-validate
321275 -rwxr-xr-x 1 root root      14328 ene 22  2019 ffind
270186 -rwxr-xr-x 1 root root      14648 jul 28  2018  fgconsole
264148 -rwxr-xr-x 1 root root         28 ene  7  2019  fgrep
269905 -rwxr-xr-x 1 root root      26944 oct 22  2019  file
265860 -rwxr-xr-x 1 root root      30848 ene 10  2019  fincore
264092 -rwxr-xr-x 1 root root     315904 feb 16  2019  find
279737 -rwxr-xr-x 1 root root      12019 may  5  2018  findaffix
265806 -rwxr-xr-x 1 root root      68880 ene 10  2019  findmnt
282721 -rwxr-xr-x 1 root root        113 jul 28 19:23  firefox
282773 lrwxrwxrwx 1 root root         30 jul 28 19:23  firefox-esr -> ../lib/firefox-esr/firefox-esr
321276 -rwxr-xr-x 1 root root     220912 ene 22  2019  fiwalk
265861 -rwxr-xr-x 1 root root      34976 ene 10  2019  flock
321277 -rwxr-xr-x 1 root root      14328 ene 22  2019  fls
263797 -rwxr-xr-x 1 root root      43680 feb 28  2019  fmt
263798 -rwxr-xr-x 1 root root      39584 feb 28  2019  fold
313223 -rwxr-xr-x 1 root root      35240 mar 18  2018  fonttosfnt
269141 -rwxr-xr-x 1 root root      18512 may 31  2018  free
269593 lrwxrwxrwx 1 root root         22 ago 18 17:54  from -> /etc/alternatives/from
321278 -rwxr-xr-x 1 root root      14328 ene 22  2019  fsstat
314930 -rwxr-xr-x 1 root root      22792 jul 30  2019  funzip
273512 -rwsr-xr-x 1 root root      34896 abr 22 16:38  fusermount
318511 lrwxrwxrwx 1 root root          5 feb 25  2019  g++ -> g++-8
318508 lrwxrwxrwx 1 root root         22 abr  6  2019  g++-8 -> x86_64-linux-gnu-g++-8
312521 -rwxr-xr-x 1 root root      14328 mar 23  2019  gamma4scanimage
292790 -rwxr-xr-x 1 root root      22600 nov  6  2019  gapplication
282684 -rwxr-xr-x 1 root root     731560 feb  8  2019  gbak
318478 lrwxrwxrwx 1 root root          5 feb 25  2019  gcc -> gcc-8
318459 lrwxrwxrwx 1 root root         22 abr  6  2019  gcc-8 -> x86_64-linux-gnu-gcc-8
318479 lrwxrwxrwx 1 root root          8 feb 25  2019  gcc-ar -> gcc-ar-8
318460 lrwxrwxrwx 1 root root         25 abr  6  2019  gcc-ar-8 -> x86_64-linux-gnu-gcc-ar-8
318480 lrwxrwxrwx 1 root root          8 feb 25  2019  gcc-nm -> gcc-nm-8
318461 lrwxrwxrwx 1 root root         25 abr  6  2019  gcc-nm-8 -> x86_64-linux-gnu-gcc-nm-8
318481 lrwxrwxrwx 1 root root         12 feb 25  2019  gcc-ranlib -> gcc-ranlib-8
318462 lrwxrwxrwx 1 root root         29 abr  6  2019  gcc-ranlib-8 -> x86_64-linux-gnu-gcc-ranlib-8
318482 lrwxrwxrwx 1 root root          6 feb 25  2019  gcov -> gcov-8
318463 lrwxrwxrwx 1 root root         23 abr  6  2019  gcov-8 -> x86_64-linux-gnu-gcov-8
318483 lrwxrwxrwx 1 root root         11 feb 25  2019  gcov-dump -> gcov-dump-8
318464 lrwxrwxrwx 1 root root         28 abr  6  2019  gcov-dump-8 -> x86_64-linux-gnu-gcov-dump-8
318484 lrwxrwxrwx 1 root root         11 feb 25  2019  gcov-tool -> gcov-tool-8
318465 lrwxrwxrwx 1 root root         28 abr  6  2019  gcov-tool-8 -> x86_64-linux-gnu-gcov-tool-8
282885 -rwxr-xr-x 1 root root      14408 ene 22  2019  gcr-viewer
292791 -rwxr-xr-x 1 root root      51280 nov  6  2019  gdbus
312769 -rwxr-xr-x 1 root root       9228 dic 27  2018  gdialog
292405 -rwxr-xr-x 1 root root      14344 mar  4  2019  gdk-pixbuf-csource
292406 -rwxr-xr-x 1 root root      14328 mar  4  2019  gdk-pixbuf-pixdata
292407 -rwxr-xr-x 1 root root      18512 mar  4  2019  gdk-pixbuf-thumbnailer
318207 -rwxr-xr-x 1 root root      27240 may  1  2019  gencat
270481 lrwxrwxrwx 1 root root          3 feb 28  2019  geqn -> eqn
294013 lrwxrwxrwx 1 root root         11 may 14  2019  GET -> lwp-request
264286 -rwxr-xr-x 1 root root      35192 may  1  2019  getconf
264287 -rwxr-xr-x 1 root root      36192 may  1  2019  getent
274992 -rwxr-xr-x 1 root root      31352 mar  1  2019  getfacl
270195 -rwxr-xr-x 1 root root      14648 jul 28  2018  getkeycodes
265862 -rwxr-xr-x 1 root root      22600 ene 10  2019  getopt
274406 -rwxr-xr-x 1 root root      43640 nov 10  2018  gettext
274407 -rwxr-xr-x 1 root root       4629 nov 10  2018  gettext.sh
282685 -rwxr-xr-x 1 root root     182592 feb  8  2019  gfix
292792 -rwxr-xr-x 1 root root      88152 nov  6  2019  gio
292808 lrwxrwxrwx 1 root root         49 nov  6  2019  gio-querymodules -> ../lib/x86_64-linux-gnu/glib-2.0/gio-querymodules
292809 lrwxrwxrwx 1 root root         53 nov  6  2019  glib-compile-schemas -> ../lib/x86_64-linux-gnu/glib-2.0/glib-compile-schemas
286118 lrwxrwxrwx 1 root root         15 mar 10  2019  gnome-keyring -> gnome-keyring-3
286019 -rwxr-xr-x 1 root root      22744 mar 10  2019  gnome-keyring-3
286020 -rwxr-xr-x 1 root root    1106848 mar 10  2019  gnome-keyring-daemon
317830 lrwxrwxrwx 1 root root         35 ago 18 18:07  gnome-www-browser -> /etc/alternatives/gnome-www-browser
318194 lrwxrwxrwx 1 root root         21 mar 21  2019  gold -> x86_64-linux-gnu-gold
262195 -rwsr-xr-x 1 root root      84016 jul 27  2018  gpasswd
286576 -rwxr-xr-x 1 root root    1046256 ago 22  2019  gpg
286592 -rwxr-xr-x 1 root root     406256 ago 22  2019  gpg-agent
286549 -rwxr-xr-x 1 root root     874480 ago 22  2019  gpgcompose
281795 -rwxr-xr-x 1 root root     170312 ago 22  2019  gpgconf
281794 -rwxr-xr-x 1 root root     162664 ago 22  2019  gpg-connect-agent
286550 -rwxr-xr-x 1 root root      30792 ago 22  2019  gpgparsemail
286620 -rwxr-xr-x 1 root root     506976 ago 22  2019  gpgsm
286551 -rwxr-xr-x 1 root root      84432 ago 22  2019  gpgsplit
286552 -rwxr-xr-x 1 root root     154952 ago 22  2019  gpgtar
263159 -rwxr-xr-x 1 root root     445432 ago 22  2019  gpgv
286614 -rwxr-xr-x 1 root root     203824 ago 22  2019  gpg-wks-server
286548 -rwxr-xr-x 1 root root       3516 ago 22  2019  gpg-zip
270482 lrwxrwxrwx 1 root root          3 feb 28  2019  gpic -> pic
282686 -rwxr-xr-x 1 root root     668208 feb  8  2019  gpre
318195 lrwxrwxrwx 1 root root         22 mar 21  2019  gprof -> x86_64-linux-gnu-gprof
264149 -rwxr-xr-x 1 root root     198976 ene  7  2019  grep
292793 -rwxr-xr-x 1 root root      22520 nov  6  2019  gresource
270441 -rwxr-xr-x 1 root root     124128 feb 28  2019  groff
270442 -rwxr-xr-x 1 root root       2776 feb 28  2019  grog
270443 -rwxr-xr-x 1 root root     181888 feb 28  2019  grops
270444 -rwxr-xr-x 1 root root     132352 feb 28  2019  grotty
263799 -rwxr-xr-x 1 root root      39584 feb 28  2019  groups
317896 -rwxr-xr-x 1 root root     246680 jul 30 16:19  grub-editenv
317897 -rwxr-xr-x 1 root root     676424 jul 30 16:19  grub-file
317898 -rwxr-xr-x 1 root root     817848 jul 30 16:19  grub-fstest
317899 -rwxr-xr-x 1 root root     246520 jul 30 16:19  grub-glue-efi
317900 -rwxr-xr-x 1 root root       1681 jul 30 16:19  grub-kbdcomp
317901 -rwxr-xr-x 1 root root     226088 jul 30 16:19  grub-menulst2cfg
317902 -rwxr-xr-x 1 root root     267672 jul 30 16:19  grub-mkfont
317903 -rwxr-xr-x 1 root root     341816 jul 30 16:19  grub-mkimage
317904 -rwxr-xr-x 1 root root     246808 jul 30 16:19  grub-mklayout
317905 -rwxr-xr-x 1 root root     391720 jul 30 16:19  grub-mknetdir
317906 -rwxr-xr-x 1 root root     250968 jul 30 16:19  grub-mkpasswd-pbkdf2
317907 -rwxr-xr-x 1 root root     242104 jul 30 16:19  grub-mkrelpath
317908 -rwxr-xr-x 1 root root     851144 jul 30 16:19  grub-mkrescue
317909 -rwxr-xr-x 1 root root     469880 jul 30 16:19  grub-mkstandalone
317910 -rwxr-xr-x 1 root root     623832 jul 30 16:19  grub-mount
318004 lrwxrwxrwx 1 root root         34 jul 30 16:19  grub-ntldr-img -> ../lib/grub/i386-pc/grub-ntldr-img
317911 -rwxr-xr-x 1 root root     693416 jul 30 16:19  grub-render-label
317912 -rwxr-xr-x 1 root root     262712 jul 30 16:19  grub-script-check
317913 -rwxr-xr-x 1 root root     640696 jul 30 16:19  grub-syslinux2cfg
282687 -rwxr-xr-x 1 root root     379256 feb  8  2019  gsec
292794 -rwxr-xr-x 1 root root      30792 nov  6  2019  gsettings
270483 lrwxrwxrwx 1 root root          3 feb 28  2019  gtbl -> tbl
313052 -rwxr-xr-x 1 root root      18632 mar  5  2019  gtf
292987 -rwxr-xr-x 1 root root      35248 feb  5  2019  gtk-builder-tool
292988 -rwxr-xr-x 1 root root      18584 feb  5  2019  gtk-launch
292989 -rwxr-xr-x 1 root root      14328 feb  5  2019  gtk-query-settings
275252 -rwxr-xr-x 1 root root      39392 feb  5  2019  gtk-update-icon-cache
264206 -rwxr-xr-x 2 root root       2345 ene  5  2019  gunzip
264208 -rwxr-xr-x 1 root root       6375 ene  5  2019  gzexe
264211 -rwxr-xr-x 1 root root      98048 ene  5  2019  gzip
271315 -rwxr-xr-x 1 root root      29224 jul 21 16:27  h2ph
271316 -rwxr-xr-x 1 root root      60866 jul 21 16:27  h2xs
268261 lrwxrwxrwx 1 root root          7 may  4  2018  hd -> hexdump
263800 -rwxr-xr-x 1 root root      47840 feb 28  2019  head
294014 lrwxrwxrwx 1 root root         11 may 14  2019  HEAD -> lwp-request
269441 -rwxr-xr-x 1 root root       2514 jun 15  2019  helpztags
268219 -rwxr-xr-x 1 root root      27184 may  4  2018  hexdump
321279 -rwxr-xr-x 1 root root      14328 ene 22  2019  hfind
274397 -rwxr-xr-x 1 root root     129672 may 18 05:02  host
263801 -rwxr-xr-x 1 root root      35424 feb 28  2019  hostid
264242 -rwxr-xr-x 1 root root      26696 sep 27  2018  hostname
266887 -rwxr-xr-x 1 root root      26696 abr 27 14:02  hostnamectl
272677 -rwxr-xr-x 1 root root      34816 oct 15  2019  htcacheclean
272678 -rwxr-xr-x 1 root root      26616 oct 15  2019  htdbm
272679 -rwxr-xr-x 1 root root      14328 oct 15  2019  htdigest
272680 -rwxr-xr-x 1 root root      26616 oct 15  2019  htpasswd
291146 -rwxr-xr-x 1 root root         52 ene  8  2019  hv3
266145 lrwxrwxrwx 1 root root          7 ene 10  2019  i386 -> setarch
321280 -rwxr-xr-x 1 root root      14328 ene 22  2019  icat
313399 -rwxr-xr-x 1 root root      39472 mar 18  2018  iceauth
313277 -rwxr-xr-x 1 root root      47824 mar 18  2018  ico
279738 -rwxr-xr-x 1 root root      35200 may  5  2018  icombine
264288 -rwxr-xr-x 1 root root      60424 may  1  2019  iconv
263802 -rwxr-xr-x 1 root root      43808 feb 28  2019  id
275405 -rwxr-xr-x 1 root root      26696 mar 30  2019  iecset
321281 -rwxr-xr-x 1 root root      14328 ene 22  2019  ifind
279739 -rwxr-xr-x 1 root root      14368 may  5  2018  ijoin
321282 -rwxr-xr-x 1 root root      14328 ene 22  2019  ils
321283 -rwxr-xr-x 1 root root      14328 ene 22  2019  img_cat
321284 -rwxr-xr-x 1 root root      14328 ene 22  2019  img_stat
266233 -rwxr-xr-x 1 root root      63560 nov  2  2019  infocmp
266259 lrwxrwxrwx 1 root root          3 nov  2  2019  infotocap -> tic
263803 -rwxr-xr-x 1 root root     155240 feb 28  2019  install
313024 -rwxr-xr-x 1 root root         95 dic 27  2018  install-printerdriver
271317 -rwxr-xr-x 1 root root       4370 jul 21 16:27  instmodsh
313138 -rwxr-xr-x 1 root root      68848 oct  9  2018  intel-virtual-output
265863 -rwxr-xr-x 1 root root      30800 ene 10  2019  ionice
268433 -rwxr-xr-x 1 root root     584392 ene 10  2019  ip
265864 -rwxr-xr-x 1 root root      30864 ene 10  2019  ipcmk
265865 -rwxr-xr-x 1 root root      30800 ene 10  2019  ipcrm
265866 -rwxr-xr-x 1 root root      67664 ene 10  2019  ipcs
268806 lrwxrwxrwx 1 root root         28 mar  1  2019  iptables-xml -> ../sbin/xtables-legacy-multi
263532 -rwxr-xr-x 1 root root      14576 ene 21  2019  ischroot
313167 -rwxr-xr-x 1 root root      19024 jun 26  2017  isdv4-serial-debugger
313168 -rwxr-xr-x 1 root root      19088 jun 26  2017  isdv4-serial-inputattach
279740 -rwxr-xr-x 1 root root      96728 may  5  2018  ispell
277256 -rwxr-xr-x 1 root root       7222 nov 15  2018  ispell-wrapper
282688 -rwxr-xr-x 1 root root     551424 feb  8  2019  isql-fb
321285 -rwxr-xr-x 1 root root      14328 ene 22  2019  istat
317855 lrwxrwxrwx 1 root root         22 ago 18 18:07  java -> /etc/alternatives/java
321286 -rwxr-xr-x 1 root root      14328 ene 22  2019  jcat
317881 lrwxrwxrwx 1 root root         23 ago 18 18:07  jexec -> /etc/alternatives/jexec
317879 lrwxrwxrwx 1 root root         21 ago 18 18:07  jfr -> /etc/alternatives/jfr
317863 lrwxrwxrwx 1 root root         21 ago 18 18:07  jjs -> /etc/alternatives/jjs
321287 -rwxr-xr-x 1 root root      14328 ene 22  2019  jls
263804 -rwxr-xr-x 1 root root      51968 feb 28  2019  join
265659 -rwxr-xr-x 1 root root      67672 abr 27 14:02  journalctl
321288 -rwxr-xr-x 1 root root      14328 ene 22  2019  jpeg_extract
271318 -rwxr-xr-x 1 root root       4379 jul 21 16:27  json_pp
270196 -rwxr-xr-x 1 root root      14656 jul 28  2018  kbdinfo
270187 -rwxr-xr-x 1 root root      14648 jul 28  2018  kbd_mode
286553 -rwxr-xr-x 1 root root     166568 ago 22  2019  kbxutil
266888 -rwxr-xr-x 1 root root       4639 feb 14  2019  kernel-install
317859 lrwxrwxrwx 1 root root         25 ago 18 18:07  keytool -> /etc/alternatives/keytool
269134 -rwxr-xr-x 1 root root      26704 may 31  2018  kill
268868 -rwxr-xr-x 1 root root     166072 feb  9  2019  kmod
313539 -rwxr-xr-x 1 root root       3759 feb 14  2019  koi8rxterm
269622 -rwxr-xr-x 1 root root       3820 ago 12  2017  laptop-detect
265867 -rwxr-xr-x 1 root root      47184 ene 10  2019  last
266147 lrwxrwxrwx 1 root root          4 ene 10  2019  lastb -> last
265662 -rwxr-xr-x 1 root root      22600 jul 27  2018  lastlog
273638 -rwxr-xr-x 1 root root       7786 dic 14  2018  lcf
318196 lrwxrwxrwx 1 root root         19 mar 21  2019  ld -> x86_64-linux-gnu-ld
318197 lrwxrwxrwx 1 root root         23 mar 21  2019  ld.bfd -> x86_64-linux-gnu-ld.bfd
264289 -rwxr-xr-x 1 root root       5388 may  1  2019  ldd
318198 lrwxrwxrwx 1 root root         24 mar 21  2019  ld.gold -> x86_64-linux-gnu-ld.gold
268893 -rwxr-xr-x 1 root root     166664 may  7  2018  less
268894 -rwxr-xr-x 1 root root      10256 may  7  2018  lessecho
268909 lrwxrwxrwx 1 root root          8 may  7  2018  lessfile -> lesspipe
268895 -rwxr-xr-x 1 root root      19856 may  7  2018  lesskey
268896 -rwxr-xr-x 1 root root       8564 may  7  2018  lesspipe
270505 -rwxr-xr-x 1 root root      96840 feb 10  2019  lexgrog
316941 lrwxrwxrwx 1 root root         21 ago 18 18:04  lft -> /etc/alternatives/lft
274929 -rwxr-xr-x 1 root root       2493 ago 29  2016  lft.db
271319 -rwxr-xr-x 1 root root      15775 jul 21 16:27  libnetcfg
297342 lrwxrwxrwx 1 root root         34 feb  1  2020  libreoffice -> ../lib/libreoffice/program/soffice
309202 -rwxr-xr-x 1 root root      14712 feb 28  2019  libwacom-list-local-devices
309614 -rwxr-xr-x 1 root root     109176 ene 28  2019  light-locker
309615 -rwxr-xr-x 1 root root      23064 ene 28  2019  light-locker-command
263805 -rwxr-xr-x 1 root root      35424 feb 28  2019  link
266149 lrwxrwxrwx 1 root root          7 ene 10  2019  linux32 -> setarch
266151 lrwxrwxrwx 1 root root          7 ene 10  2019  linux64 -> setarch
317981 -rwxr-xr-x 1 root root       1577 ago 10  2018  linux-boot-prober
269743 -rwxr-xr-x 1 root root       4674 sep  5  2018  linux-check-removal
269744 -rwxr-xr-x 1 root root       6320 jun  4  2016  linux-update-symlinks
269745 -rwxr-xr-x 1 root root       2696 ago 11  2015  linux-version
289165 -rwxr-xr-x 1 root root      10872 mar 18  2018  listres
263762 -rwxr-xr-x 1 root root      68552 feb 28  2019  ln
268477 -rwxr-xr-x 1 root root      23288 ene 10  2019  lnstat
270188 -rwxr-xr-x 1 root root     212112 jul 28  2018  loadkeys
270197 -rwxr-xr-x 1 root root      35440 jul 28  2018  loadunimap
297499 -rwxr-xr-x 1 root root         59 feb  1  2020  lobase
297568 -rwxr-xr-x 1 root root         59 feb  1  2020  localc
264290 -rwxr-xr-x 1 root root      55336 may  1  2019  locale
266889 -rwxr-xr-x 1 root root      26696 abr 27 14:02  localectl
264291 -rwxr-xr-x 1 root root     306944 may  1  2019  localedef
297611 -rwxr-xr-x 1 root root         59 feb  1  2020  lodraw
294533 -rwxr-xr-x 1 root root         53 feb  1  2020  loffice
294534 -rwxr-xr-x 1 root root         64 feb  1  2020  lofromtemplate
263667 -rwxr-xr-x 1 root root      47792 ene 10  2019  logger
265657 -rwxr-xr-x 1 root root      56760 jul 27  2018  login
265660 -rwxr-xr-x 1 root root      55480 abr 27 14:02  loginctl
263806 -rwxr-xr-x 1 root root      35424 feb 28  2019  logname
272681 -rwxr-xr-x 1 root root      14336 oct 15  2019  logresolve
297630 -rwxr-xr-x 1 root root         62 feb  1  2020  loimpress
297668 -rwxr-xr-x 1 root root         59 feb  1  2020  lomath
268221 -rwxr-xr-x 1 root root      10744 may  4  2018  look
268223 -rwxr-xr-x 1 root root       2885 may  4  2018  lorder
297684 -rwxr-xr-x 1 root root         58 feb  1  2020  loweb
273522 -rwxr-xr-x 1 root root     117456 mar 21  2019  lowntfs-3g
297685 -rwxr-xr-x 1 root root         61 feb  1  2020  lowriter
281394 -rwxr-xr-x 1 root root      18424 abr 25 11:27  lp
281395 -rwxr-xr-x 1 root root      22600 abr 25 11:27  lpoptions
297549 -rwxr-xr-x 1 root root      51192 may 23  2016  lp_solve
281396 -rwxr-xr-x 1 root root      39200 abr 25 11:27  lpstat
263763 -rwxr-xr-x 1 root root     138856 feb 28  2019  ls
264003 -rwxr-xr-x 1 root root      14336 ene  9  2020  lsattr
265807 -rwxr-xr-x 1 root root     108624 ene 10  2019  lsblk
309739 -rwxr-xr-x 1 root root       3638 may 14  2019  lsb_release
265868 -rwxr-xr-x 1 root root      88144 ene 10  2019  lscpu
269734 -rwxr-xr-x 1 root root        706 feb  6  2019  lsinitramfs
265869 -rwxr-xr-x 1 root root      92240 ene 10  2019  lsipc
265870 -rwxr-xr-x 1 root root      35232 ene 10  2019  lslocks
265871 -rwxr-xr-x 1 root root      67664 ene 10  2019  lslogins
265872 -rwxr-xr-x 1 root root      63568 ene 10  2019  lsmem
268884 lrwxrwxrwx 1 root root          4 feb  9  2019  lsmod -> kmod
265873 -rwxr-xr-x 1 root root      51280 ene 10  2019  lsns
274482 -rwxr-xr-x 1 root root     175584 ene 12  2019  lsof
270144 -rwxr-xr-x 1 root root      82240 nov 30  2016  lspci
286554 -rwxr-xr-x 1 root root       1081 ago 28  2017  lspgpot
270157 -rwxr-xr-x 1 root root     240408 feb 24  2019  lsusb
289166 -rwxr-xr-x 1 root root      49888 mar 18  2018  luit
293972 -rwxr-xr-x 1 root root      10292 may 14  2019  lwp-download
293973 -rwxr-xr-x 1 root root       2711 may 14  2019  lwp-dump
293974 -rwxr-xr-x 1 root root       2413 may 14  2019  lwp-mirror
293975 -rwxr-xr-x 1 root root      16200 may 14  2019  lwp-request
313540 -rwxr-xr-x 1 root root        419 feb 14  2019  lxterm
270107 lrwxrwxrwx 1 root root         23 ago 18 17:55  lzcat -> /etc/alternatives/lzcat
270123 lrwxrwxrwx 1 root root         23 ago 18 17:55  lzcmp -> /etc/alternatives/lzcmp
270119 lrwxrwxrwx 1 root root         24 ago 18 17:55  lzdiff -> /etc/alternatives/lzdiff
270131 lrwxrwxrwx 1 root root         25 ago 18 17:55  lzegrep -> /etc/alternatives/lzegrep
270135 lrwxrwxrwx 1 root root         25 ago 18 17:55  lzfgrep -> /etc/alternatives/lzfgrep
270127 lrwxrwxrwx 1 root root         24 ago 18 17:55  lzgrep -> /etc/alternatives/lzgrep
270115 lrwxrwxrwx 1 root root         24 ago 18 17:55  lzless -> /etc/alternatives/lzless
270099 lrwxrwxrwx 1 root root         22 ago 18 17:55  lzma -> /etc/alternatives/lzma
269913 -rwxr-xr-x 1 root root      14656 ene 27  2019  lzmainfo
270111 lrwxrwxrwx 1 root root         24 ago 18 17:55  lzmore -> /etc/alternatives/lzmore
321289 -rwxr-xr-x 1 root root      27267 ene 22  2019  mactime
318514 -rwxr-xr-x 1 root root     232032 jul 28  2018  make
318515 -rwxr-xr-x 1 root root       4905 jul 28  2018  make-first-existing-target
270506 -rwxr-xr-x 1 root root     115200 feb 10  2019  man
270507 -rwxr-xr-x 1 root root     137952 feb 10  2019  mandb
270508 -rwxr-xr-x 1 root root      35296 feb 10  2019  manpath
270198 -rwxr-xr-x 1 root root      27216 jul 28  2018  mapscrn
264446 -rwxr-xr-x 1 root root     121976 mar 23  2012  mawk
265874 -rwxr-xr-x 1 root root      34960 ene 10  2019  mcookie
263807 -rwxr-xr-x 1 root root      47840 feb 28  2019  md5sum
267514 lrwxrwxrwx 1 root root          6 feb 28  2019  md5sum.textutils -> md5sum
265875 -rwxr-xr-x 1 root root      14408 ene 10  2019  mesg
286555 -rwxr-xr-x 1 root root       3060 ago 21  2019  migrate-pubring-from-classic-gpg
292264 -rwxr-xr-x 1 root root       8626 ago  6  2018  mimeopen
292265 -rwxr-xr-x 1 root root      12060 ago  6  2018  mimetype
263764 -rwxr-xr-x 1 root root      89088 feb 28  2019  mkdir
263808 -rwxr-xr-x 1 root root      64416 feb 28  2019  mkfifo
313224 -rwxr-xr-x 1 root root         65 mar 18  2018  mkfontdir
313225 -rwxr-xr-x 1 root root      39992 mar 18  2018  mkfontscale
270199 -rwxr-xr-x 1 root root      16163 jul 28  2018  mk_modmap
263765 -rwxr-xr-x 1 root root      68544 feb 28  2019  mknod
263766 -rwxr-xr-x 1 root root      43808 feb 28  2019  mktemp
321290 -rwxr-xr-x 1 root root      14328 ene 22  2019  mmcat
310807 -rwxr-xr-x 1 root root     208944 feb  5  2019  mmcli
321291 -rwxr-xr-x 1 root root      14328 ene 22  2019  mmls
321292 -rwxr-xr-x 1 root root      14328 ene 22  2019  mmstat
265808 -rwxr-xr-x 1 root root      43008 ene 10  2019  more
266144 -rwsr-xr-x 1 root root      51280 ene 10  2019  mount
265809 -rwxr-xr-x 1 root root      14408 ene 10  2019  mountpoint
310865 -rwxr-xr-x 1 root root     276632 nov 10  2018  mousepad
289495 -rwxr-xr-x 1 root root       3210 ago  7  2017  mpexpand
269489 lrwxrwxrwx 1 root root         20 ago 18 17:54  mt -> /etc/alternatives/mt
268269 -rwxr-xr-x 1 root root      85320 abr 23  2019  mt-gnu
318208 -rwxr-xr-x 1 root root       6462 may  1  2019  mtrace
279741 -rwxr-xr-x 1 root root      31982 may  5  2018  munchlist
263767 -rwxr-xr-x 1 root root     138728 feb 28  2019  mv
265876 -rwxr-xr-x 1 root root      34896 ene 10  2019  namei
269091 -rwxr-xr-x 1 root root     246160 jun 11  2019  nano
264825 lrwxrwxrwx 1 root root         22 ago 18 17:52  nawk -> /etc/alternatives/nawk
282689 -rwxr-xr-x 1 root root     309608 feb  8  2019  nbackup
316921 lrwxrwxrwx 1 root root         20 ago 18 18:04  nc -> /etc/alternatives/nc
268225 -rwxr-xr-x 1 root root      29848 may  4  2018  ncal
274748 -rwxr-xr-x 1 root root      27400 abr 13  2017  nc.traditional
270445 -rwxr-xr-x 1 root root        913 feb 28  2019  neqn
316923 lrwxrwxrwx 1 root root         24 ago 18 18:04  netcat -> /etc/alternatives/netcat
265812 -rwxr-xr-x 1 root root      47176 abr 27 14:02  networkctl
265663 -rwsr-xr-x 1 root root      44440 jul 27  2018  newgrp
274408 -rwxr-xr-x 1 root root      43656 nov 10  2018  ngettext
263809 -rwxr-xr-x 1 root root      39552 feb 28  2019  nice
264255 lrwxrwxrwx 1 root root          8 sep 27  2018  nisdomainname -> hostname
263812 -rwxr-xr-x 1 root root      43808 feb 28  2019  nl
318199 lrwxrwxrwx 1 root root         19 mar 21  2019  nm -> x86_64-linux-gnu-nm
310980 -rwxr-xr-x 1 root root     308320 abr 19  2019  nm-applet
273405 -rwxr-xr-x 1 root root     762392 oct  4  2019  nmcli
310981 -rwxr-xr-x 1 root root     824768 abr 19  2019  nm-connection-editor
273404 -rwxr-xr-x 1 root root      18992 oct  4  2019  nm-online
273406 -rwxr-xr-x 1 root root     257328 oct  4  2019  nmtui
273504 lrwxrwxrwx 1 root root          5 oct  4  2019  nmtui-connect -> nmtui
273505 lrwxrwxrwx 1 root root          5 oct  4  2019  nmtui-edit -> nmtui
273506 lrwxrwxrwx 1 root root          5 oct  4  2019  nmtui-hostname -> nmtui
289496 -rwxr-xr-x 1 root root       7234 ago  7  2017  nns
289497 -rwxr-xr-x 1 root root       3373 ago  7  2017  nnsd
289498 -rwxr-xr-x 1 root root       4485 ago  7  2017  nnslog
263813 -rwxr-xr-x 1 root root      39584 feb 28  2019  nohup
294250 -rwxr-xr-x 1 root root      18520 dic 28  2018  notify-send
263815 -rwxr-xr-x 1 root root      39584 feb 28  2019  nproc
270446 -rwxr-xr-x 1 root root       3293 feb 28  2019  nroff
265877 -rwxr-xr-x 1 root root      35104 ene 10  2019  nsenter
268479 -rwxr-xr-x 1 root root      81040 ene 10  2019  nstat
273523 -rwsr-xr-x 1 root root     154352 mar 21  2019  ntfs-3g
273524 -rwxr-xr-x 1 root root      14408 mar 21  2019  ntfs-3g.probe
273525 -rwxr-xr-x 1 root root      34920 mar 21  2019  ntfscat
273526 -rwxr-xr-x 1 root root      39016 mar 21  2019  ntfscluster
273527 -rwxr-xr-x 1 root root      39016 mar 21  2019  ntfscmp
273544 -rwxr-xr-x 1 root root      51320 mar 21  2019  ntfsdecrypt
273528 -rwxr-xr-x 1 root root      39024 mar 21  2019  ntfsfallocate
273529 -rwxr-xr-x 1 root root      43120 mar 21  2019  ntfsfix
273530 -rwxr-xr-x 1 root root      59512 mar 21  2019  ntfsinfo
273531 -rwxr-xr-x 1 root root      36024 mar 21  2019  ntfsls
273532 -rwxr-xr-x 1 root root      39016 mar 21  2019  ntfsmove
273533 -rwxr-xr-x 1 root root     120936 mar 21  2019  ntfsrecover
273534 -rwxr-xr-x 1 root root      96864 mar 21  2019  ntfssecaudit
273535 -rwxr-xr-x 1 root root      43040 mar 21  2019  ntfstruncate
273536 -rwxr-xr-x 1 root root      38936 mar 21  2019  ntfsusermap
273537 -rwxr-xr-x 1 root root      47752 mar 21  2019  ntfswipe
263816 -rwxr-xr-x 1 root root      64320 feb 28  2019  numfmt
318200 lrwxrwxrwx 1 root root         24 mar 21  2019  objcopy -> x86_64-linux-gnu-objcopy
318201 lrwxrwxrwx 1 root root         24 mar 21  2019  objdump -> x86_64-linux-gnu-objdump
313278 -rwxr-xr-x 1 root root      24432 mar 18  2018  oclock
263817 -rwxr-xr-x 1 root root      72480 feb 28  2019  od
312152 lrwxrwxrwx 1 root root         17 abr 20  2019  on_ac_power -> /sbin/on_ac_power
274790 -rwxr-xr-x 1 root root     736776 abr 20 17:23  openssl
270189 -rwxr-xr-x 1 root root      23424 jul 28  2018  openvt
282219 -rwxr-xr-x 1 root root        429 ene 18  2019  operon
311259 -rwxr-xr-x 1 root root       8719 oct 20  2018  orca
311260 -rwxr-xr-x 1 root root         70 jul  8  2018  orca-dm-wrapper
317982 -rwxr-xr-x 1 root root       4551 ago 10  2018  os-prober
285929 -rwxr-xr-x 1 root root      34904 feb 16  2019  p11-kit
311811 -rwxr-xr-x 1 root root       4754 feb  5  2018  p7zip
312228 -rwxr-xr-x 1 root root      51312 ago 15  2019  pacat
317867 lrwxrwxrwx 1 root root         25 ago 18 18:07  pack200 -> /etc/alternatives/pack200
312229 -rwxr-xr-x 1 root root      18504 ago 15  2019  pacmd
312230 -rwxr-xr-x 1 root root      63576 ago 15  2019  pactl
312231 -rwxr-xr-x 1 root root       2259 ago 15  2019  padsp
289499 -rwxr-xr-x 1 root root      19490 ago  7  2017  page
263026 lrwxrwxrwx 1 root root         23 ago 18 17:53  pager -> /etc/alternatives/pager
312246 lrwxrwxrwx 1 root root          5 ago 15  2019  pamon -> pacat
294342 -rwxr-xr-x 1 root root      14632 jun 25  2019  paperconf
312247 lrwxrwxrwx 1 root root          5 ago 15  2019  paplay -> pacat
312248 lrwxrwxrwx 1 root root          5 ago 15  2019  parec -> pacat
312249 lrwxrwxrwx 1 root root          5 ago 15  2019  parecord -> pacat
312010 -rwxr-xr-x 1 root root     398120 abr 13  2018  parole
265880 -rwxr-xr-x 1 root root     108624 ene 10  2019  partx
262197 -rwsr-xr-x 1 root root      63736 jul 27  2018  passwd
263818 -rwxr-xr-x 1 root root      39584 feb 28  2019  paste
312232 -rwxr-xr-x 1 root root      18512 ago 15  2019  pasuspender
318606 -rwxr-xr-x 1 root root     187840 jul 26  2019  patch
263819 -rwxr-xr-x 1 root root      39552 feb 28  2019  pathchk
312057 -rwxr-xr-x 1 root root     448712 dic 24  2017  pavucontrol
312233 -rwxr-xr-x 1 root root      14328 ago 15  2019  pax11publish
270145 -rwxr-xr-x 1 root root      14936 nov 30  2016  pcimodules
272329 lrwxrwxrwx 1 root root          4 mar  4  2019  pdb -> pdb2
272317 lrwxrwxrwx 1 root root          6 mar  4  2019  pdb2 -> pdb2.7
272104 lrwxrwxrwx 1 root root         23 oct 10  2019  pdb2.7 -> ../lib/python2.7/pdb.py
269853 lrwxrwxrwx 1 root root          6 mar 26  2019  pdb3 -> pdb3.7
269829 lrwxrwxrwx 1 root root         23 jul 25 10:03  pdb3.7 -> ../lib/python3.7/pdb.py
269746 -rwxr-xr-x 1 root root        528 jul 19  2018  perf
264537 -rwxr-xr-x 2 root root    3201864 jul 21 16:27  perl
264537 -rwxr-xr-x 2 root root    3201864 jul 21 16:27  perl5.28.1
270809 -rwxr-xr-x 1 root root      14512 jul 21 16:27  perl5.28-x86_64-linux-gnu
271320 -rwxr-xr-x 2 root root      46366 jul 21 16:27  perlbug
271321 -rwxr-xr-x 1 root root        125 jul 21 16:27  perldoc
271322 -rwxr-xr-x 1 root root      10864 jul 21 16:27  perlivp
271320 -rwxr-xr-x 2 root root      46366 jul 21 16:27  perlthanks
269142 -rwxr-xr-x 1 root root      26712 may 31  2018  pgrep
270447 -rwxr-xr-x 1 root root     213024 feb 28  2019  pic
269503 lrwxrwxrwx 1 root root         22 ago 18 17:54  pico -> /etc/alternatives/pico
271323 -rwxr-xr-x 1 root root       8357 jul 21 16:27  piconv
266327 lrwxrwxrwx 1 root root         14 feb 14  2019  pidof -> /sbin/killall5
316982 lrwxrwxrwx 1 root root         26 ago 18 18:04  pinentry -> /etc/alternatives/pinentry
286582 -rwxr-xr-x 1 root root      63992 abr 17  2019  pinentry-curses
286012 -rwxr-xr-x 1 root root      76280 abr 17  2019  pinentry-gnome3
316983 lrwxrwxrwx 1 root root         30 ago 18 18:07  pinentry-x11 -> /etc/alternatives/pinentry-x11
268859 -rwxr-xr-x 1 root root      69368 ene 13  2020  ping
268862 lrwxrwxrwx 1 root root          4 ene 13  2020  ping4 -> ping
268863 lrwxrwxrwx 1 root root          4 ene 13  2020  ping6 -> ping
263820 -rwxr-xr-x 1 root root      43840 feb 28  2019  pinky
273381 -rwxr-xr-x 1 root root      14656 ene 15  2019  pkaction
273382 -rwxr-xr-x 1 root root      23192 ene 15  2019  pkcheck
312005 -rwxr-xr-x 1 root root      73432 mar  2  2019  pkcon
273383 -rwsr-xr-x 1 root root      23288 ene 15  2019  pkexec
269178 lrwxrwxrwx 1 root root          5 may 31  2018  pkill -> pgrep
312006 -rwxr-xr-x 1 root root      23032 mar  2  2019  pkmon
273384 -rwxr-xr-x 1 root root      18808 ene 15  2019  pkttyagent
271324 -rwxr-xr-x 1 root root       4533 jul 21 16:27  pl2pm
264292 -rwxr-xr-x 1 root root      23112 may  1  2019  pldd
312172 -rwxr-xr-x 1 root root        146 feb 20  2020  plog
312094 -rwxr-xr-x 1 root root      39512 abr  8  2019  plymouth
269143 -rwxr-xr-x 1 root root      30808 may 31  2018  pmap
271325 -rwxr-xr-x 1 root root       4134 jul 21 16:27  pod2html
271326 -rwxr-xr-x 1 root root      15213 jul 21 16:27  pod2man
271327 -rwxr-xr-x 1 root root      11110 jul 21 16:27  pod2text
271328 -rwxr-xr-x 1 root root       3948 jul 21 16:27  pod2usage
271329 -rwxr-xr-x 1 root root       3658 jul 21 16:27  podchecker
271330 -rwxr-xr-x 1 root root       2527 jul 21 16:27  podselect
312173 -rwxr-xr-x 1 root root       2837 feb 20  2020  poff
312174 -rwxr-xr-x 1 root root       1362 feb 20  2020  pon
294015 lrwxrwxrwx 1 root root         11 may 14  2019  POST -> lwp-request
263825 -rwxr-xr-x 1 root root      76736 feb 28  2019  pr
277291 -rwxr-xr-x 1 root root       5656 ene 31  2019  precat
270448 -rwxr-xr-x 1 root root      67784 feb 28  2019  preconv
277292 -rwxr-xr-x 1 root root       5656 ene 31  2019  preunzip
277293 -rwxr-xr-x 1 root root       5656 ene 31  2019  prezip
277294 -rwxr-xr-x 1 root root      14328 ene 31  2019  prezip-bin
269798 lrwxrwxrwx 1 root root         11 feb  9  2019  print -> run-mailcap
263826 -rwxr-xr-x 1 root root      35424 feb 28  2019  printenv
268227 -rwxr-xr-x 1 root root      22760 may  4  2018  printerbanner
263828 -rwxr-xr-x 1 root root      56000 feb 28  2019  printf
265881 -rwxr-xr-x 1 root root      39520 ene 10  2019  prlimit
271331 -rwxr-xr-x 1 root root      13655 jul 21 16:27  prove
269135 -rwxr-xr-x 1 root root     133432 may 31  2018  ps
270268 lrwxrwxrwx 1 root root          9 jul 28  2018  psfaddtable -> psfxtable
270269 lrwxrwxrwx 1 root root          9 jul 28  2018  psfgettable -> psfxtable
270270 lrwxrwxrwx 1 root root          9 jul 28  2018  psfstriptable -> psfxtable
270200 -rwxr-xr-x 1 root root      22848 jul 28  2018  psfxtable
289500 -rwxr-xr-x 1 root root       4168 ago  7  2017  pt
271332 -rwxr-xr-x 1 root root       3549 jul 21 16:27  ptar
271333 -rwxr-xr-x 1 root root       2628 jul 21 16:27  ptardiff
271334 -rwxr-xr-x 1 root root       4392 jul 21 16:27  ptargrep
263829 -rwxr-xr-x 1 root root      76704 feb 28  2019  ptx
312259 -rwxr-xr-x 1 root root      92328 ago 15  2019  pulseaudio
263768 -rwxr-xr-x 1 root root      39616 feb 28  2019  pwd
269144 -rwxr-xr-x 1 root root      10312 may 31  2018  pwdx
269775 -rwxr-xr-x 1 root root       7806 mar 26  2019  py3clean
269776 -rwxr-xr-x 1 root root      12113 mar 26  2019  py3compile
269780 lrwxrwxrwx 1 root root         31 mar 26  2019  py3versions -> ../share/python3/py3versions.py
271582 -rwxr-xr-x 1 root root       4124 mar  4  2019  pyclean
271583 -rwxr-xr-x 1 root root      11895 mar  4  2019  pycompile
272330 lrwxrwxrwx 1 root root          6 mar  4  2019  pydoc -> pydoc2
272318 lrwxrwxrwx 1 root root          8 mar  4  2019  pydoc2 -> pydoc2.7
272089 -rwxr-xr-x 1 root root         79 oct 10  2019  pydoc2.7
269854 lrwxrwxrwx 1 root root          8 mar 26  2019  pydoc3 -> pydoc3.7
269814 -rwxr-xr-x 1 root root         79 jul 25 10:03  pydoc3.7
272331 lrwxrwxrwx 1 root root         10 mar  4  2019  pygettext -> pygettext2
272319 lrwxrwxrwx 1 root root         12 mar  4  2019  pygettext2 -> pygettext2.7
272090 -rwxr-xr-x 1 root root      22082 oct 10  2019  pygettext2.7
269855 lrwxrwxrwx 1 root root         12 mar 26  2019  pygettext3 -> pygettext3.7
269815 -rwxr-xr-x 1 root root      21547 jul 25 10:03  pygettext3.7
271598 lrwxrwxrwx 1 root root          7 mar  4  2019  python -> python2
271591 lrwxrwxrwx 1 root root          9 mar  4  2019  python2 -> python2.7
271575 -rwxr-xr-x 1 root root    3689352 oct 10  2019  python2.7
269781 lrwxrwxrwx 1 root root          9 mar 26  2019  python3 -> python3.7
269771 -rwxr-xr-x 2 root root    4861504 jul 25 10:03  python3.7
269771 -rwxr-xr-x 2 root root    4861504 jul 25 10:03  python3.7m
269782 lrwxrwxrwx 1 root root         10 mar 26  2019  python3m -> python3.7m
271592 lrwxrwxrwx 1 root root         29 mar  4  2019  pyversions -> ../share/python/pyversions.py
274920 -rwxr-xr-x 1 root root      11003 ago 30  2019  querybts
312439 -rwxr-xr-x 1 root root        421 ene 18  2019  quodlibet
318202 lrwxrwxrwx 1 root root         23 mar 21  2019  ranlib -> x86_64-linux-gnu-ranlib
263666 lrwxrwxrwx 1 root root          4 abr 18  2019  rbash -> bash
317685 lrwxrwxrwx 1 root root         21 ago 18 18:05  rcp -> /etc/alternatives/rcp
268481 -rwxr-xr-x 1 root root     109728 ene 10  2019  rdma
318203 lrwxrwxrwx 1 root root         24 mar 21  2019  readelf -> x86_64-linux-gnu-readelf
263769 -rwxr-xr-x 1 root root      47776 feb 28  2019  readlink
263830 -rwxr-xr-x 1 root root      47808 feb 28  2019  realpath
265882 -rwxr-xr-x 1 root root      22600 ene 10  2019  rename.ul
313279 -rwxr-xr-x 1 root root      57608 mar 18  2018  rendercheck
263721 -rwxr-xr-x 1 root root      14408 ene 10  2019  renice
274921 -rwxr-xr-x 1 root root     107666 ago 30  2019  reportbug
269620 -rwxr-xr-x 1 root root       2099 ago 10  2018  report-hw
266261 lrwxrwxrwx 1 root root          4 nov  2  2019  reset -> tset
313541 -rwxr-xr-x 1 root root      18504 feb 14  2019  resize
270201 -rwxr-xr-x 1 root root      23120 jul 28  2018  resizecons
265884 -rwxr-xr-x 1 root root      63568 ene 10  2019  resizepart
266890 -rwxr-xr-x 1 root root     116960 abr 27 14:02  resolvectl
265885 -rwxr-xr-x 1 root root      14408 ene 10  2019  rev
264150 -rwxr-xr-x 1 root root         30 ago  4  2017  rgrep
312451 -rwxr-xr-x 1 root root     262472 ago 21  2018  ristretto
317681 lrwxrwxrwx 1 root root         24 ago 18 18:05  rlogin -> /etc/alternatives/rlogin
263770 -rwxr-xr-x 1 root root      68416 feb 28  2019  rm
263771 -rwxr-xr-x 1 root root      47776 feb 28  2019  rmdir
317851 lrwxrwxrwx 1 root root         22 ago 18 18:07  rmid -> /etc/alternatives/rmid
317871 lrwxrwxrwx 1 root root         29 ago 18 18:07  rmiregistry -> /etc/alternatives/rmiregistry
269133 lrwxrwxrwx 1 root root          4 jun 11  2019  rnano -> nano
272682 -rwxr-xr-x 1 root root      26696 oct 15  2019  rotatelogs
268483 -rwxr-xr-x 1 root root        208 ene 10  2019  routef
268485 -rwxr-xr-x 1 root root       1656 ene 10  2019  routel
318209 -rwxr-xr-x 1 root root      93160 may  1  2019  rpcgen
317677 lrwxrwxrwx 1 root root         21 ago 18 18:05  rsh -> /etc/alternatives/rsh
313373 -rwxr-xr-x 1 root root       2610 mar 18  2018  rstart
313374 -rwxr-xr-x 1 root root       1469 mar 18  2018  rstartd
268610 lrwxrwxrwx 1 root root          6 ene 10  2019  rtstat -> lnstat
263831 -rwxr-xr-x 1 root root      39648 feb 28  2019  runcon
269787 -rwxr-xr-x 1 root root      18161 feb  9  2019  run-mailcap
263528 -rwxr-xr-x 1 root root      23312 ene 21  2019  run-parts
277295 -rwxr-xr-x 1 root root         57 ene 31  2019  run-with-aspell
269527 lrwxrwxrwx 1 root root         23 ago 18 17:54  rview -> /etc/alternatives/rview
312522 -rwxr-xr-x 1 root root     117456 mar 23  2019  sane-find-scanner
263533 -rwxr-xr-x 1 root root      10469 ene 21  2019  savelog
312523 -rwxr-xr-x 1 root root      51992 mar 23  2019  scanimage
274757 -rwxr-xr-x 1 root root     100496 ene 31  2020  scp
312959 -rwxr-xr-x 1 root root         90 dic 27  2018  scp-dbus-service
270202 -rwxr-xr-x 1 root root      14632 jul 28  2018  screendump
263723 -rwxr-xr-x 1 root root      51280 ene 10  2019  script
263724 -rwxr-xr-x 1 root root      30800 ene 10  2019  scriptreplay
263932 -rwxr-xr-x 1 root root      51984 abr  8  2019  sdiff
266258 -rwxr-xr-x 1 root root     122224 dic 22  2018  sed
269799 lrwxrwxrwx 1 root root         11 feb  9  2019  see -> run-mailcap
277257 -rwxr-xr-x 1 root root        474 nov 15  2018  select-default-iwrap
269016 -rwxr-xr-x 1 root root       2442 mar 12  2018  select-editor
269017 -rwxr-xr-x 1 root root       1209 mar 12  2018  sensible-browser
269018 -rwxr-xr-x 1 root root       1109 mar 12  2018  sensible-editor
269019 -rwxr-xr-x 1 root root        433 mar 12  2018  sensible-pager
309710 -rwxr-xr-x 1 root root      31312 dic 19  2018  sensors
309711 -rwxr-xr-x 1 root root      14027 dic 19  2018  sensors-conf-convert
263832 -rwxr-xr-x 1 root root      51904 feb 28  2019  seq
313400 -rwxr-xr-x 1 root root      14624 mar 18  2018  sessreg
265887 -rwxr-xr-x 1 root root      22880 ene 10  2019  setarch
274993 -rwxr-xr-x 1 root root      39608 mar  1  2019  setfacl
270190 -rwxr-xr-x 1 root root      47792 jul 28  2018  setfont
270203 -rwxr-xr-x 1 root root      14648 jul 28  2018  setkeycodes
270204 -rwxr-xr-x 1 root root      14632 jul 28  2018  setleds
270205 -rwxr-xr-x 1 root root      14640 jul 28  2018  setlogcons
270206 -rwxr-xr-x 1 root root      14680 jul 28  2018  setmetamode
270146 -rwxr-xr-x 1 root root      23080 nov 30  2016  setpci
265888 -rwxr-xr-x 1 root root      43088 ene 10  2019  setpriv
265889 -rwxr-xr-x 1 root root      14408 ene 10  2019  setsid
265890 -rwxr-xr-x 1 root root      43088 ene 10  2019  setterm
270360 -rwxr-xr-x 1 root root      38267 ago 15  2019  setupcon
270207 -rwxr-xr-x 1 root root      14768 jul 28  2018  setvtrgb
293556 -rwxr-xr-x 1 root root      23288 abr 30  2018  setxkbmap
274758 -rwxr-xr-x 1 root root     153960 ene 31  2020  sftp
265804 lrwxrwxrwx 1 root root          6 jul 27  2018  sg -> newgrp
262163 lrwxrwxrwx 1 root root          4 ago 18 17:53  sh -> dash
263833 -rwxr-xr-x 1 root root      51936 feb 28  2019  sha1sum
263834 -rwxr-xr-x 1 root root      56032 feb 28  2019  sha224sum
263835 -rwxr-xr-x 1 root root      56032 feb 28  2019  sha256sum
263836 -rwxr-xr-x 1 root root      64224 feb 28  2019  sha384sum
263837 -rwxr-xr-x 1 root root      64224 feb 28  2019  sha512sum
271335 -rwxr-xr-x 1 root root       9976 jul 21 16:27  shasum
270208 -rwxr-xr-x 1 root root      18824 jul 28  2018  showconsolefont
270209 -rwxr-xr-x 1 root root      18784 jul 28  2018  showkey
313401 -rwxr-xr-x 1 root root      10424 mar 18  2018  showrgb
263838 -rwxr-xr-x 1 root root      60352 feb 28  2019  shred
263839 -rwxr-xr-x 1 root root      60224 feb 28  2019  shuf
321293 -rwxr-xr-x 1 root root      14328 ene 22  2019  sigfind
318204 lrwxrwxrwx 1 root root         21 mar 21  2019  size -> x86_64-linux-gnu-size
269145 -rwxr-xr-x 1 root root      26704 may 31  2018  skill
269146 -rwxr-xr-x 1 root root      18512 may 31  2018  slabtop
263772 -rwxr-xr-x 1 root root      39552 feb 28  2019  sleep
274779 lrwxrwxrwx 1 root root          3 ene 31  2020  slogin -> ssh
313375 -rwxr-xr-x 1 root root      23072 mar 18  2018  smproxy
269179 lrwxrwxrwx 1 root root          5 may 31  2018  snice -> skill
270449 -rwxr-xr-x 1 root root      43208 feb 28  2019  soelim
297343 lrwxrwxrwx 1 root root         34 feb  1  2020  soffice -> ../lib/libreoffice/program/soffice
263840 -rwxr-xr-x 1 root root     114120 feb 28  2019  sort
321294 -rwxr-xr-x 1 root root      50400 ene 22  2019  sorter
318210 -rwxr-xr-x 1 root root       4274 may  1  2019  sotruss
311164 -rwxr-xr-x 1 root root       1003 may  2 07:05  spd-conf
311176 -rwxr-xr-x 1 root root      27400 may  2 07:05  spd-say
275406 -rwxr-xr-x 1 root root      30848 mar 30  2019  speaker-test
311177 -rwxr-xr-x 1 root root     161880 may  2 07:05  speech-dispatcher
271336 -rwxr-xr-x 1 root root      19150 jul 21 16:27  splain
263841 -rwxr-xr-x 1 root root      60744 feb 28  2019  split
270210 -rwxr-xr-x 1 root root      14528 jul 28  2018  splitfont
318211 -rwxr-xr-x 1 root root      27328 may  1  2019  sprof
279742 -rwxr-xr-x 1 root root       6136 may  5  2018  sq
321295 -rwxr-xr-x 1 root root      14328 ene 22  2019  srch_strings
268435 -rwxr-xr-x 1 root root     161488 ene 10  2019  ss
274759 -rwxr-xr-x 1 root root     727848 ene 31  2020  ssh
274760 -rwxr-xr-x 1 root root     338048 ene 31  2020  ssh-add
274761 -rwxr-sr-x 1 root ssh      321672 ene 31  2020  ssh-agent
274762 -rwxr-xr-x 1 root root       1456 ene 31  2020  ssh-argv0
274763 -rwxr-xr-x 1 root root      10658 oct 16  2018  ssh-copy-id
274764 -rwxr-xr-x 1 root root     415896 ene 31  2020  ssh-keygen
274765 -rwxr-xr-x 1 root root     419992 ene 31  2020  ssh-keyscan
312260 -rwxr-xr-x 1 root root       1197 ago 15  2019  start-pulseaudio-x11
313442 -rwxr-xr-x 1 root root       5519 mar 19  2018  startx
313952 -rwxr-xr-x 1 root root       2966 oct 21  2017  startxfce4
263842 -rwxr-xr-x 1 root root      80928 feb 28  2019  stat
263845 -rwxr-xr-x 1 root root      51904 feb 28  2019  stdbuf
318205 lrwxrwxrwx 1 root root         24 mar 21  2019  strings -> x86_64-linux-gnu-strings
318206 lrwxrwxrwx 1 root root         22 mar 21  2019  strip -> x86_64-linux-gnu-strip
263773 -rwxr-xr-x 1 root root      80672 feb 28  2019  stty
265810 -rwsr-xr-x 1 root root      63568 ene 10  2019  su
312552 -rwsr-xr-x 1 root root     157192 feb  2  2020  sudo
312642 lrwxrwxrwx 1 root root          4 feb  2  2020  sudoedit -> sudo
312553 -rwxr-xr-x 1 root root      60256 feb  2  2020  sudoreplay
263846 -rwxr-xr-x 1 root root      43752 feb 28  2019  sum
286556 -rwxr-xr-x 1 root root     121576 ago 22  2019  symcryptrun
312772 -rwxr-xr-x 1 root root        568 abr 15  2019  synaptic-pkexec
263774 -rwxr-xr-x 1 root root      35488 feb 28  2019  sync
313025 -rwxr-xr-x 1 root root         95 dic 27  2018  system-config-printer
313026 -rwxr-xr-x 1 root root         80 dic 27  2018  system-config-printer-applet
265813 -rwxr-xr-x 1 root root     868696 abr 27 14:02  systemctl
267118 lrwxrwxrwx 1 root root         20 abr 27 14:02  systemd -> /lib/systemd/systemd
266891 -rwxr-xr-x 1 root root    1448248 abr 27 14:02  systemd-analyze
265814 -rwxr-xr-x 1 root root      14520 abr 27 14:02  systemd-ask-password
266892 -rwxr-xr-x 1 root root      14416 abr 27 14:02  systemd-cat
266893 -rwxr-xr-x 1 root root      18608 abr 27 14:02  systemd-cgls
266894 -rwxr-xr-x 1 root root      39008 abr 27 14:02  systemd-cgtop
266895 -rwxr-xr-x 1 root root      26696 abr 27 14:02  systemd-delta
266896 -rwxr-xr-x 1 root root      14400 abr 27 14:02  systemd-detect-virt
265815 -rwxr-xr-x 1 root root      18496 abr 27 14:02  systemd-escape
269348 -rwxr-xr-x 1 root root     100720 abr 27 14:02  systemd-hwdb
266897 -rwxr-xr-x 1 root root      14400 abr 27 14:02  systemd-id128
265816 -rwxr-xr-x 1 root root      18520 abr 27 14:02  systemd-inhibit
265817 -rwxr-xr-x 1 root root      26792 abr 27 14:02  systemd-machine-id-setup
266898 -rwxr-xr-x 1 root root      47400 abr 27 14:02  systemd-mount
266181 -rwxr-xr-x 1 root root      18504 abr 27 14:02  systemd-notify
266899 -rwxr-xr-x 1 root root      18496 abr 27 14:02  systemd-path
267196 lrwxrwxrwx 1 root root         10 abr 27 14:02  systemd-resolve -> resolvectl
266900 -rwxr-xr-x 1 root root      51472 abr 27 14:02  systemd-run
266902 -rwxr-xr-x 1 root root      26696 abr 27 14:02  systemd-socket-activate
266903 -rwxr-xr-x 1 root root      18504 abr 27 14:02  systemd-stdio-bridge
266661 -rwxr-xr-x 1 root root      55664 abr 27 14:02  systemd-sysusers
266663 -rwxr-xr-x 1 root root      80128 abr 27 14:02  systemd-tmpfiles
266664 -rwxr-xr-x 1 root root      30792 abr 27 14:02  systemd-tty-ask-password-agent
267197 lrwxrwxrwx 1 root root         13 abr 27 14:02  systemd-umount -> systemd-mount
266235 -rwxr-xr-x 1 root root      18424 nov  2  2019  tabs
263847 -rwxr-xr-x 1 root root      43744 feb 28  2019  tac
263848 -rwxr-xr-x 1 root root      72608 feb 28  2019  tail
264481 -rwxr-xr-x 1 root root     445560 abr 23  2019  tar
269285 -rwxr-xr-x 1 root root      16489 may 23  2019  tasksel
265891 -rwxr-xr-x 1 root root      34896 ene 10  2019  taskset
270450 -rwxr-xr-x 1 root root     141512 feb 28  2019  tbl
289501 -rwxr-xr-x 1 root root      13695 ago  7  2017  tcldocstrip
289492 lrwxrwxrwx 1 root root          8 feb 23  2019  tclsh -> tclsh8.6
289481 -rwxr-xr-x 1 root root      14472 feb 23  2019  tclsh8.6
263849 -rwxr-xr-x 1 root root      39648 feb 28  2019  tee
316917 lrwxrwxrwx 1 root root         24 ago 18 18:04  telnet -> /etc/alternatives/telnet
274925 -rwxr-xr-x 1 root root     116088 feb 24  2019  telnet.netkit
263529 -rwxr-xr-x 1 root root      14440 ene 21  2019  tempfile
263850 -rwxr-xr-x 1 root root      51872 feb 28  2019  test
313658 -rwxr-xr-x 1 root root     860008 ene 28  2019  thunar
313671 lrwxrwxrwx 1 root root          6 ene 28  2019  Thunar -> thunar
313659 -rwxr-xr-x 1 root root        333 ene 28  2019  thunar-settings
314815 -rwxr-xr-x 1 root root      47464 dic 27  2018  thunar-volman
314816 -rwxr-xr-x 1 root root      43144 dic 27  2018  thunar-volman-settings
266236 -rwxr-xr-x 1 root root      88176 nov  2  2019  tic
266904 -rwxr-xr-x 1 root root      38984 abr 27 14:02  timedatectl
263851 -rwxr-xr-x 1 root root      44296 feb 28  2019  timeout
269147 -rwxr-xr-x 1 root root      14424 may 31  2018  tload
266237 -rwxr-xr-x 1 root root      22520 nov  2  2019  toe
269148 -rwxr-xr-x 1 root root     116624 may 31  2018  top
263775 -rwxr-xr-x 1 root root      97152 feb 28  2019  touch
266238 -rwxr-xr-x 1 root root      22552 nov  2  2019  tput
263854 -rwxr-xr-x 1 root root      51904 feb 28  2019  tr
316945 lrwxrwxrwx 1 root root         28 ago 18 18:04  traceproto -> /etc/alternatives/traceproto
274930 -rwxr-xr-x 1 root root       2885 ago 29  2016  traceproto.db
316931 lrwxrwxrwx 1 root root         28 ago 18 18:04  traceroute -> /etc/alternatives/traceroute
316937 lrwxrwxrwx 1 root root         29 ago 18 18:04  traceroute6 -> /etc/alternatives/traceroute6
274937 lrwxrwxrwx 1 root root         13 ago 29  2016  traceroute6.db -> traceroute.db
274932 -rwxr-xr-x 1 root root      68768 ago 29  2016  traceroute.db
274931 -rwxr-xr-x 1 root root       1618 ago 29  2016  traceroute-nanog
313280 -rwxr-xr-x 1 root root      19360 mar 18  2018  transset
270451 -rwxr-xr-x 1 root root     740960 feb 28  2019  troff
263776 -rwxr-xr-x 1 root root      35424 feb 28  2019  true
263857 -rwxr-xr-x 1 root root      43680 feb 28  2019  truncate
285930 -rwxr-xr-x 1 root root     223608 feb 16  2019  trust
279743 -rwxr-xr-x 1 root root       4919 may  5  2018  tryaffix
266239 -rwxr-xr-x 1 root root      30720 nov  2  2019  tset
321296 -rwxr-xr-x 1 root root     101000 ene 22  2019  tsk_comparedir
321297 -rwxr-xr-x 1 root root     101000 ene 22  2019  tsk_gettimes
321298 -rwxr-xr-x 1 root root      96904 ene 22  2019  tsk_loaddb
321299 -rwxr-xr-x 1 root root     101000 ene 22  2019  tsk_recover
263858 -rwxr-xr-x 1 root root      43680 feb 28  2019  tsort
263859 -rwxr-xr-x 1 root root      35456 feb 28  2019  tty
264294 -rwxr-xr-x 1 root root      15363 may  1  2019  tzselect
273639 -rwxr-xr-x 1 root root      40685 dic 14  2018  ucf
273640 -rwxr-xr-x 1 root root      19367 dic 14  2018  ucfq
273641 -rwxr-xr-x 1 root root      10722 dic 14  2018  ucfr
313226 -rwxr-xr-x 1 root root      18760 mar 18  2018  ucs2any
269349 -rwxr-xr-x 1 root root     674312 abr 27 14:02  udevadm
289035 -rwxr-xr-x 1 root root      59464 feb 21  2019  udisksctl
268229 -rwxr-xr-x 1 root root      14640 may  4  2018  ul
273513 -rwxr-xr-x 1 root root      14328 abr 22 16:38  ulockmgr_server
312524 -rwxr-xr-x 1 root root     183368 mar 23  2019  umax_pp
266146 -rwsr-xr-x 1 root root      34888 ene 10  2019  umount
263777 -rwxr-xr-x 1 root root      39584 feb 28  2019  uname
264206 -rwxr-xr-x 2 root root       2345 ene  5  2019  uncompress
263860 -rwxr-xr-x 1 root root      43712 feb 28  2019  unexpand
270191 -rwxr-xr-x 1 root root       2762 jul 28  2018  unicode_start
270211 -rwxr-xr-x 1 root root        530 jul 28  2018  unicode_stop
263861 -rwxr-xr-x 1 root root      51968 feb 28  2019  uniq
263862 -rwxr-xr-x 1 root root      35424 feb 28  2019  unlink
270103 lrwxrwxrwx 1 root root         24 ago 18 17:55  unlzma -> /etc/alternatives/unlzma
269735 -rwxr-xr-x 1 root root       3595 jul 31  2019  unmkinitramfs
294535 -rwxr-xr-x 1 root root         52 feb  1  2020  unopkg
317875 lrwxrwxrwx 1 root root         27 ago 18 18:07  unpack200 -> /etc/alternatives/unpack200
265892 -rwxr-xr-x 1 root root      26904 ene 10  2019  unshare
279744 -rwxr-xr-x 1 root root       6136 may  5  2018  unsq
269947 lrwxrwxrwx 1 root root          2 ene 27  2019  unxz -> xz
314931 -rwxr-xr-x 2 root root     183136 jul 30  2019  unzip
314932 -rwxr-xr-x 1 root root      84664 jul 30  2019  unzipsfx
262606 -rwxr-xr-x 1 root root      55552 jun  3  2019  update-alternatives
281776 -rwxr-xr-x 1 root root      26696 oct  8  2018  update-desktop-database
275030 -rwxr-xr-x 1 root root      56512 sep 25  2018  update-mime-database
314945 -rwxr-xr-x 1 root root      18848 feb 24  2019  upower
269149 -rwxr-xr-x 1 root root      10312 may 31  2018  uptime
270158 -rwxr-xr-x 1 root root       4102 feb 24  2019  usb-devices
270159 -rwxr-xr-x 1 root root      31280 feb 24  2019  usbhid-dump
270160 -rwxr-xr-x 1 root root      14592 feb 24  2019  usbreset
263865 -rwxr-xr-x 1 root root      35488 feb 28  2019  users
321300 -rwxr-xr-x 1 root root      14328 ene 22  2019  usnjls
265895 -rwxr-xr-x 1 root root      30792 ene 10  2019  utmpdump
313542 -rwxr-xr-x 1 root root       3674 feb 14  2019  uxterm
317983 lrwxrwxrwx 1 root root         45 ago 31 23:57  VBoxClient -> /opt/VBoxGuestAdditions-6.1.10/bin/VBoxClient
321200 lrwxrwxrwx 1 root root         54 ago 31 23:58  VBoxClient-all -> /opt/VBoxGuestAdditions-6.1.10/other/98vboxadd-xclient
321193 lrwxrwxrwx 1 root root         46 ago 31 23:57  VBoxControl -> /opt/VBoxGuestAdditions-6.1.10/bin/VBoxControl
321194 lrwxrwxrwx 1 root root         48 ago 31 23:57  VBoxDRMClient -> /opt/VBoxGuestAdditions-6.1.10/bin/VBoxDRMClient
263778 -rwxr-xr-x 1 root root     138856 feb 28  2019  vdir
269529 lrwxrwxrwx 1 root root         20 ago 18 17:54  vi -> /etc/alternatives/vi
269547 lrwxrwxrwx 1 root root         22 ago 18 17:54  view -> /etc/alternatives/view
289167 -rwxr-xr-x 1 root root      28032 mar 18  2018  viewres
269480 -rwxr-xr-x 1 root root    1200696 jun 15  2019  vim.tiny
269150 -rwxr-xr-x 1 root root      34912 may 31  2018  vmstat
313121 -rwxr-xr-x 1 root root      10584 may 26  2018  vmwarectrl
270165 -rwxr-xr-x 1 root root       6136 mar 28  2017  volname
269507 lrwxrwxrwx 1 root root         19 ago 18 17:54  w -> /etc/alternatives/w
263725 -rwxr-sr-x 1 root tty       34896 ene 10  2019  wall
269152 -rwxr-xr-x 1 root root      27048 may 31  2018  watch
286557 -rwxr-xr-x 1 root root      18424 ago 22  2019  watchgnupg
263866 -rwxr-xr-x 1 root root      47880 feb 28  2019  wc
265811 -rwxr-xr-x 1 root root      34896 ene 10  2019  wdctl
274949 -rwxr-xr-x 1 root root     466496 abr  5  2019  wget
270509 -rwxr-xr-x 1 root root      56296 feb 10  2019  whatis
265896 -rwxr-xr-x 1 root root      31240 ene 10  2019  whereis
263530 -rwxr-xr-x 1 root root        946 ene 21  2019  which
269485 -rwxr-xr-x 1 root root      27344 sep 27  2018  whiptail
263867 -rwxr-xr-x 1 root root      56128 feb 28  2019  who
263868 -rwxr-xr-x 1 root root      35456 feb 28  2019  whoami
291134 lrwxrwxrwx 1 root root          7 feb 23  2019  wish -> wish8.6
291123 -rwxr-xr-x 1 root root      14488 feb 23  2019  wish8.6
277296 -rwxr-xr-x 1 root root      14328 ene 31  2019  word-list-compress
273340 -rwxr-xr-x 1 root root      75944 mar 24 07:26  wpa_passphrase
269151 -rwxr-xr-x 1 root root      18504 may 31  2018  w.procps
269589 lrwxrwxrwx 1 root root         23 ago 18 17:54  write -> /etc/alternatives/write
313079 lrwxrwxrwx 1 root root          4 mar  5  2019  X -> Xorg
275701 lrwxrwxrwx 1 root root          1 may  3  2017  X11 -> .
313281 -rwxr-xr-x 1 root root     194856 mar 18  2018  x11perf
313282 -rwxr-xr-x 1 root root       2807 mar 18  2018  x11perfcomp
267750 lrwxrwxrwx 1 root root          7 ene 10  2019  x86_64 -> setarch
318147 -rwxr-xr-x 1 root root      31840 mar 21  2019  x86_64-linux-gnu-addr2line
318148 -rwxr-xr-x 1 root root      64584 mar 21  2019  x86_64-linux-gnu-ar
318149 -rwxr-xr-x 1 root root     893880 mar 21  2019  x86_64-linux-gnu-as
318150 -rwxr-xr-x 1 root root      31424 mar 21  2019  x86_64-linux-gnu-c++filt
281345 lrwxrwxrwx 1 root root          5 feb 25  2019  x86_64-linux-gnu-cpp -> cpp-8
281335 -rwxr-xr-x 1 root root    1104760 abr  6  2019  x86_64-linux-gnu-cpp-8
318151 -rwxr-xr-x 1 root root    2876160 mar 21  2019  x86_64-linux-gnu-dwp
318152 -rwxr-xr-x 1 root root      39768 mar 21  2019  x86_64-linux-gnu-elfedit
318512 lrwxrwxrwx 1 root root          5 feb 25  2019  x86_64-linux-gnu-g++ -> g++-8
318505 -rwxr-xr-x 1 root root    1104760 abr  6  2019  x86_64-linux-gnu-g++-8
318485 lrwxrwxrwx 1 root root          5 feb 25  2019  x86_64-linux-gnu-gcc -> gcc-8
318435 -rwxr-xr-x 1 root root    1100664 abr  6  2019  x86_64-linux-gnu-gcc-8
318486 lrwxrwxrwx 1 root root          8 feb 25  2019  x86_64-linux-gnu-gcc-ar -> gcc-ar-8
318436 -rwxr-xr-x 1 root root      35296 abr  6  2019  x86_64-linux-gnu-gcc-ar-8
318487 lrwxrwxrwx 1 root root          8 feb 25  2019  x86_64-linux-gnu-gcc-nm -> gcc-nm-8
318437 -rwxr-xr-x 1 root root      35296 abr  6  2019  x86_64-linux-gnu-gcc-nm-8
318488 lrwxrwxrwx 1 root root         12 feb 25  2019  x86_64-linux-gnu-gcc-ranlib -> gcc-ranlib-8
318438 -rwxr-xr-x 1 root root      35296 abr  6  2019  x86_64-linux-gnu-gcc-ranlib-8
318489 lrwxrwxrwx 1 root root          6 feb 25  2019  x86_64-linux-gnu-gcov -> gcov-8
318439 -rwxr-xr-x 1 root root     688216 abr  6  2019  x86_64-linux-gnu-gcov-8
318490 lrwxrwxrwx 1 root root         11 feb 25  2019  x86_64-linux-gnu-gcov-dump -> gcov-dump-8
318440 -rwxr-xr-x 1 root root     524240 abr  6  2019  x86_64-linux-gnu-gcov-dump-8
318491 lrwxrwxrwx 1 root root         11 feb 25  2019  x86_64-linux-gnu-gcov-tool -> gcov-tool-8
318441 -rwxr-xr-x 1 root root     561168 abr  6  2019  x86_64-linux-gnu-gcov-tool-8
318165 lrwxrwxrwx 1 root root         24 mar 21  2019  x86_64-linux-gnu-gold -> x86_64-linux-gnu-ld.gold
318153 -rwxr-xr-x 1 root root      98704 mar 21  2019  x86_64-linux-gnu-gprof
318166 lrwxrwxrwx 1 root root         23 mar 21  2019  x86_64-linux-gnu-ld -> x86_64-linux-gnu-ld.bfd
318154 -rwxr-xr-x 1 root root    1785032 mar 21  2019  x86_64-linux-gnu-ld.bfd
318155 -rwxr-xr-x 1 root root    3113472 mar 21  2019  x86_64-linux-gnu-ld.gold
318156 -rwxr-xr-x 1 root root      49056 mar 21  2019  x86_64-linux-gnu-nm
318157 -rwxr-xr-x 1 root root     179632 mar 21  2019  x86_64-linux-gnu-objcopy
318158 -rwxr-xr-x 1 root root     353848 mar 21  2019  x86_64-linux-gnu-objdump
318159 -rwxr-xr-x 1 root root      64616 mar 21  2019  x86_64-linux-gnu-ranlib
318160 -rwxr-xr-x 1 root root     597056 mar 21  2019  x86_64-linux-gnu-readelf
318161 -rwxr-xr-x 1 root root      35808 mar 21  2019  x86_64-linux-gnu-size
318162 -rwxr-xr-x 1 root root      31880 mar 21  2019  x86_64-linux-gnu-strings
318163 -rwxr-xr-x 1 root root     179640 mar 21  2019  x86_64-linux-gnu-strip
315027 -rwxr-xr-x 1 root root     293848 ene  6  2019  xarchiver
264093 -rwxr-xr-x 1 root root      71896 feb 16  2019  xargs
313435 -rwxr-xr-x 1 root root      48584 nov 21  2017  xauth
313283 -rwxr-xr-x 1 root root      20824 mar 18  2018  xbiff
315100 -rwxr-xr-x 1 root root     162128 feb  3  2019  xbrlapi
313284 -rwxr-xr-x 1 root root      40544 mar 18  2018  xcalc
313285 -rwxr-xr-x 1 root root      23376 mar 18  2018  xclipboard
313286 -rwxr-xr-x 1 root root      54976 mar 18  2018  xclock
313402 -rwxr-xr-x 1 root root      31808 mar 18  2018  xcmsdb
313287 -rwxr-xr-x 1 root root      24080 mar 18  2018  xconsole
313288 -rwxr-xr-x 1 root root      14760 mar 18  2018  xcursorgen
313289 -rwxr-xr-x 1 root root      15040 mar 18  2018  xcutsel
279604 -rwxr-xr-x 1 root root      51200 ene 20  2019  xdg-dbus-proxy
315185 -rwxr-xr-x 1 root root      20674 abr 18 16:57  xdg-desktop-icon
315186 -rwxr-xr-x 1 root root      43312 abr 18 16:57  xdg-desktop-menu
315187 -rwxr-xr-x 1 root root      26959 abr 18 16:57  xdg-email
315188 -rwxr-xr-x 1 root root      30064 abr 18 16:57  xdg-icon-resource
315189 -rwxr-xr-x 1 root root      42158 abr 18 16:57  xdg-mime
315190 -rwxr-xr-x 1 root root      25648 abr 18 16:57  xdg-open
315191 -rwxr-xr-x 1 root root      37775 abr 18 16:57  xdg-screensaver
315192 -rwxr-xr-x 1 root root      38429 abr 18 16:57  xdg-settings
315103 -rwxr-xr-x 1 root root        234 dic 27  2018  xdg-user-dir
315104 -rwxr-xr-x 1 root root      26696 dic 27  2018  xdg-user-dirs-update
313290 -rwxr-xr-x 1 root root     107040 mar 18  2018  xditview
289168 -rwxr-xr-x 1 root root      32248 mar 18  2018  xdpyinfo
289169 -rwxr-xr-x 1 root root      10432 mar 18  2018  xdriinfo
313291 -rwxr-xr-x 1 root root     674488 mar 18  2018  xedit
289170 -rwxr-xr-x 1 root root      31704 mar 18  2018  xev
313292 -rwxr-xr-x 1 root root      28672 mar 18  2018  xeyes
315201 -rwxr-xr-x 1 root root     257064 dic 15  2018  xfburn
309369 -rwxr-xr-x 1 root root     125304 ene 18  2018  xfce4-about
313879 -rwxr-xr-x 1 root root      51352 jul  9  2018  xfce4-accessibility-settings
313880 -rwxr-xr-x 1 root root      72704 jul  9  2018  xfce4-appearance-settings
313673 -rwxr-xr-x 1 root root     129560 may  6  2015  xfce4-appfinder
315311 -rwxr-xr-x 1 root root      67632 nov 30  2018  xfce4-clipman
315312 -rwxr-xr-x 1 root root      92208 nov 30  2018  xfce4-clipman-settings
315509 -rwxr-xr-x 1 root root     133776 dic 27  2018  xfce4-dict
313881 -rwxr-xr-x 1 root root     309528 jul  9  2018  xfce4-display-settings
313882 -rwxr-xr-x 1 root root      18440 jul  9  2018  xfce4-find-cursor
313883 -rwxr-xr-x 1 root root      96408 jul  9  2018  xfce4-keyboard-settings
313884 -rwxr-xr-x 1 root root      51304 jul  9  2018  xfce4-mime-settings
313885 -rwxr-xr-x 1 root root      88344 jul  9  2018  xfce4-mouse-settings
315800 -rwxr-xr-x 1 root root     141384 dic 17  2018  xfce4-notes
315801 -rwxr-xr-x 1 root root      22520 dic 17  2018  xfce4-notes-settings
315851 -rwxr-xr-x 1 root root      96248 dic 28  2018  xfce4-notifyd-config
313744 -rwxr-xr-x 1 root root     309920 dic 17  2017  xfce4-panel
313745 -rwxr-xr-x 1 root root       1568 dic 17  2017  xfce4-popup-applicationsmenu
315313 -rwxr-xr-x 1 root root      14328 nov 30  2018  xfce4-popup-clipman
315362 lrwxrwxrwx 1 root root         19 nov 30  2018  xfce4-popup-clipman-actions -> xfce4-popup-clipman
313746 -rwxr-xr-x 1 root root       1496 dic 17  2017  xfce4-popup-directorymenu
315802 -rwxr-xr-x 1 root root      14328 dic 17  2018  xfce4-popup-notes
315905 -rwxr-xr-x 1 root root       1539 dic  8  2018  xfce4-popup-places
316419 -rwxr-xr-x 1 root root       1540 feb  8  2019  xfce4-popup-whiskermenu
313747 -rwxr-xr-x 1 root root       1493 dic 17  2017  xfce4-popup-windowmenu
316684 -rwxr-xr-x 1 root root     223352 mar 28  2018  xfce4-power-manager
316685 -rwxr-xr-x 1 root root     149624 mar 28  2018  xfce4-power-manager-settings
315961 -rwxr-xr-x 1 root root      88600 ago 22  2018  xfce4-screenshooter
316019 -rwxr-xr-x 1 root root      30792 dic 21  2018  xfce4-sensors
313953 -rwxr-xr-x 1 root root     178416 oct 21  2017  xfce4-session
313954 -rwxr-xr-x 1 root root      10632 oct 21  2017  xfce4-session-logout
313955 -rwxr-xr-x 1 root root     108776 oct 21  2017  xfce4-session-settings
313886 -rwxr-xr-x 1 root root      76008 jul  9  2018  xfce4-settings-editor
313887 -rwxr-xr-x 1 root root      51352 jul  9  2018  xfce4-settings-manager
316167 -rwxr-xr-x 1 root root     141496 dic 28  2018  xfce4-taskmanager
313571 -rwxr-xr-x 1 root root     231968 oct  7  2018  xfce4-terminal
313572 -rwxr-xr-x 1 root root       1124 oct  7  2018  xfce4-terminal.wrapper
282509 -rwxr-xr-x 1 root root      27304 nov 12  2016  xfconf-query
289171 -rwxr-xr-x 1 root root      33104 mar 18  2018  xfd
314091 -rwxr-xr-x 1 root root     378984 sep 23  2018  xfdesktop
314092 -rwxr-xr-x 1 root root     146008 sep 23  2018  xfdesktop-settings
309370 -rwxr-xr-x 1 root root       1931 jun 23  2013  xfhelp4
313956 -rwxr-xr-x 1 root root       1589 oct 21  2017  xflock4
289172 -rwxr-xr-x 1 root root      41296 mar 18  2018  xfontsel
313742 lrwxrwxrwx 1 root root         15 may  6  2015  xfrun4 -> xfce4-appfinder
313888 -rwxr-xr-x 1 root root     108824 jul  9  2018  xfsettingsd
314097 -rwxr-xr-x 1 root root     391432 ago 14  2018  xfwm4
314098 -rwxr-xr-x 1 root root     108776 ago 14  2018  xfwm4-settings
314099 -rwxr-xr-x 1 root root      71912 ago 14  2018  xfwm4-tweaks-settings
314100 -rwxr-xr-x 1 root root     137368 ago 14  2018  xfwm4-workspace-settings
313403 -rwxr-xr-x 1 root root      10464 mar 18  2018  xgamma
313293 -rwxr-xr-x 1 root root      76768 mar 18  2018  xgc
313404 -rwxr-xr-x 1 root root      14752 mar 18  2018  xhost
313443 -rwxr-xr-x 1 root root      19064 mar 19  2018  xinit
293557 -rwxr-xr-x 1 root root      14600 abr 30  2018  xkbbell
293558 -rwxr-xr-x 1 root root     213640 abr 30  2018  xkbcomp
293559 -rwxr-xr-x 1 root root      35384 abr 30  2018  xkbevd
293560 -rwxr-xr-x 1 root root      88616 abr 30  2018  xkbprint
293561 -rwxr-xr-x 1 root root      19624 abr 30  2018  xkbvleds
293562 -rwxr-xr-x 1 root root      19656 abr 30  2018  xkbwatch
313405 -rwxr-xr-x 1 root root      16982 mar 18  2018  xkeystone
289173 -rwxr-xr-x 1 root root      14664 mar 18  2018  xkill
313294 -rwxr-xr-x 1 root root      19664 mar 18  2018  xload
313295 -rwxr-xr-x 1 root root      24000 mar 18  2018  xlogo
289174 -rwxr-xr-x 1 root root      10504 mar 18  2018  xlsatoms
289175 -rwxr-xr-x 1 root root      14680 mar 18  2018  xlsclients
289176 -rwxr-xr-x 1 root root      18880 mar 18  2018  xlsfonts
313296 -rwxr-xr-x 1 root root      45984 mar 18  2018  xmag
313297 -rwxr-xr-x 1 root root      71584 mar 18  2018  xman
289177 -rwxr-xr-x 1 root root      23888 mar 18  2018  xmessage
313406 -rwxr-xr-x 1 root root      35656 mar 18  2018  xmodmap
313298 -rwxr-xr-x 1 root root      14848 mar 18  2018  xmore
313050 -rwxr-xr-x 1 root root        274 mar  5  2019  Xorg
289178 -rwxr-xr-x 1 root root      41880 mar 18  2018  xprop
313407 -rwxr-xr-x 1 root root      64336 mar 18  2018  xrandr
313408 -rwxr-xr-x 1 root root      27320 mar 18  2018  xrdb
313409 -rwxr-xr-x 1 root root      10544 mar 18  2018  xrefresh
316883 -rwxr-xr-x 1 root root     777848 nov  5  2018  xsane
317717 lrwxrwxrwx 1 root root         35 ago 18 18:07  x-session-manager -> /etc/alternatives/x-session-manager
313410 -rwxr-xr-x 1 root root      31360 mar 18  2018  xset
313411 -rwxr-xr-x 1 root root      10448 mar 18  2018  xsetmode
313412 -rwxr-xr-x 1 root root      10464 mar 18  2018  xsetpointer
313413 -rwxr-xr-x 1 root root      18824 mar 18  2018  xsetroot
313169 -rwxr-xr-x 1 root root      57384 jun 26  2017  xsetwacom
313376 -rwxr-xr-x 1 root root      98040 mar 18  2018  xsm
313414 -rwxr-xr-x 1 root root      15192 mar 18  2018  xstdcmap
271337 -rwxr-xr-x 1 root root       5164 jul 21 16:27  xsubpp
313543 -rwxr-xr-x 1 root root     787448 feb 14  2019  xterm
317713 lrwxrwxrwx 1 root root         37 ago 18 18:06  x-terminal-emulator -> /etc/alternatives/x-terminal-emulator
313415 -rwxr-xr-x 1 root root      41008 mar 18  2018  xvidtune
289179 -rwxr-xr-x 1 root root      14600 mar 18  2018  xvinfo
313299 -rwxr-xr-x 1 root root      31216 mar 18  2018  xwd
317821 lrwxrwxrwx 1 root root         34 ago 18 18:07  x-window-manager -> /etc/alternatives/x-window-manager
289180 -rwxr-xr-x 1 root root      43808 mar 18  2018  xwininfo
313300 -rwxr-xr-x 1 root root      27080 mar 18  2018  xwud
317819 lrwxrwxrwx 1 root root         31 ago 18 18:07  x-www-browser -> /etc/alternatives/x-www-browser
269434 -rwxr-xr-x 1 root root      18552 jun 15  2019  xxd
269914 -rwxr-xr-x 1 root root      81192 ene 27  2019  xz
269948 lrwxrwxrwx 1 root root          2 ene 27  2019  xzcat -> xz
269949 lrwxrwxrwx 1 root root          6 ene 27  2019  xzcmp -> xzdiff
269915 -rwxr-xr-x 1 root root       6632 ene 27  2019  xzdiff
269950 lrwxrwxrwx 1 root root          6 ene 27  2019  xzegrep -> xzgrep
269951 lrwxrwxrwx 1 root root          6 ene 27  2019  xzfgrep -> xzgrep
269916 -rwxr-xr-x 1 root root       5628 ene 27  2019  xzgrep
269917 -rwxr-xr-x 1 root root       1802 ene 27  2019  xzless
269918 -rwxr-xr-x 1 root root       2161 ene 27  2019  xzmore
263869 -rwxr-xr-x 1 root root      35424 feb 28  2019  yes
264257 lrwxrwxrwx 1 root root          8 sep 27  2018  ypdomainname -> hostname
264212 -rwxr-xr-x 1 root root       1983 ene  5  2019  zcat
264213 -rwxr-xr-x 1 root root       1677 ene  5  2019  zcmp
264214 -rwxr-xr-x 1 root root       5879 ene  5  2019  zdiff
264295 -rwxr-xr-x 1 root root      18840 may  1  2019  zdump
264215 -rwxr-xr-x 1 root root         29 ene  5  2019  zegrep
312770 -rwxr-xr-x 1 root root     119384 dic 27  2018  zenity
264216 -rwxr-xr-x 1 root root         29 ene  5  2019  zfgrep
264217 -rwxr-xr-x 1 root root       2080 ene  5  2019  zforce
264218 -rwxr-xr-x 1 root root       7584 ene  5  2019  zgrep
271338 -rwxr-xr-x 1 root root      48497 jul 21 16:27  zipdetails
314933 -rwxr-xr-x 1 root root       2953 jul 30  2019  zipgrep
314931 -rwxr-xr-x 2 root root     183136 jul 30  2019  zipinfo
264219 -rwxr-xr-x 1 root root       2205 ene  5  2019  zless
264220 -rwxr-xr-x 1 root root       1841 ene  5  2019  zmore
264221 -rwxr-xr-x 1 root root       4552 ene  5  2019  znew 
```
**b. en varias columnas.**
```
matias@debian:~$ ls -i /bin
263779 '['                                  273530  ntfsinfo
272088  2to3-2.7                            273531  ntfsls
311822  7z                                  273532  ntfsmove
311823  7za                                 273533  ntfsrecover
311810  7zr                                 273534  ntfssecaudit
270080  aa-enabled                          273535  ntfstruncate
270081  aa-exec                             273536  ntfsusermap
272674  ab                                  273537  ntfswipe
275391  aconnect                            263816  numfmt
265855  addpart                             318200  objcopy
318188  addr2line                           318201  objdump
275392  alsabat                             313278  oclock
275393  alsaloop                            263817  od
275394  alsamixer                           312152  on_ac_power
275395  alsatplg                            274790  openssl
275396  alsaucm                             270189  openvt
275397  amidi                               282219  operon
275398  amixer                              311259  orca
275474  analog                              311260  orca-dm-wrapper
276059  ant                                 317982  os-prober
275399  aplay                               285929  p11-kit
275400  aplaymidi                           311811  p7zip
289163  appres                              312228  pacat
270792  apropos                             317867  pack200
263338  apt                                 312229  pacmd
263341  apt-cache                           312230  pactl
263342  apt-cdrom                           312231  padsp
263343  apt-config                          289499  page
267334  apt-extracttemplates                263026  pager
267335  apt-ftparchive                      312246  pamon
263344  apt-get                             294342  paperconf
263347  apt-key                             312247  paplay
273655  apt-listchanges                     312248  parec
263348  apt-mark                            312249  parecord
267336  apt-sortpkgs                        312010  parole
318189  ar                                  265880  partx
263780  arch                                262197  passwd
275442  arecord                             263818  paste
275401  arecordmidi                         312232  pasuspender
318190  as                                  318606  patch
275402  aseqdump                            263819  pathchk
275403  aseqnet                             312057  pavucontrol
277289  aspell                              312233  pax11publish
277290  aspell-import                       270145  pcimodules
313274  atobm                               272329  pdb
281213  atril                               272317  pdb2
281214  atril-previewer                     272104  pdb2.7
281215  atril-thumbnailer                   269853  pdb3
264821  awk                                 269829  pdb3.7
275404  axfer                               269746  perf
263781  b2sum                               264537  perl
263782  base32                              264537  perl5.28.1
263783  base64                              270809  perl5.28-x86_64-linux-gnu
263784  basename                            271320  perlbug
263598  bash                                271321  perldoc
263604  bashbug                             271322  perlivp
313221  bdftopcf                            271320  perlthanks
313222  bdftruncate                         269142  pgrep
313275  bitmap                              270447  pic
321270  blkcalc                             269503  pico
321271  blkcat                              271323  piconv
321272  blkls                               266327  pidof
321273  blkstat                             316982  pinentry
313276  bmtoa                               286582  pinentry-curses
266885  bootctl                             286012  pinentry-gnome3
292986  broadwayd                           316983  pinentry-x11
317809  bsd-csh                             268859  ping
268205  bsd-from                            268862  ping4
268207  bsd-write                           268863  ping6
279734  buildhash                           263820  pinky
269863  bunzip2                             273381  pkaction
266886  busctl                              273382  pkcheck
269679  busybox                             312005  pkcon
279593  bwrap                               273383  pkexec
269863  bzcat                               269178  pkill
269878  bzcmp                               312006  pkmon
269864  bzdiff                              273384  pkttyagent
269879  bzegrep                             271324  pl2pm
269865  bzexe                               264292  pldd
269880  bzfgrep                             312172  plog
269866  bzgrep                              312094  plymouth
269863  bzip2                               269143  pmap
269867  bzip2recover                        271325  pod2html
269881  bzless                              271326  pod2man
269868  bzmore                              271327  pod2text
321192  c++                                 271328  pod2usage
321184  c89                                 271329  podchecker
318473  c89-gcc                             271330  podselect
321188  c99                                 312173  poff
318474  c99-gcc                             312174  pon
268259  cal                                 294015  POST
268209  calendar                            263825  pr
281391  cancel                              277291  precat
266257  captoinfo                           270448  preconv
263749  cat                                 277292  preunzip
264285  catchsegv                           277293  prezip
270504  catman                              277294  prezip-bin
321182  cc                                  269798  print
318191  c++filt                             263826  printenv
274991  chacl                               268227  printerbanner
262191  chage                               263828  printf
274783  chardet3                            265881  prlimit
274781  chardetect3                         271331  prove
264002  chattr                              269135  ps
263785  chcon                               270268  psfaddtable
272675  checkgid                            270269  psfgettable
262192  chfn                                270270  psfstriptable
263750  chgrp                               270200  psfxtable
263751  chmod                               289500  pt
265856  choom                               271332  ptar
263752  chown                               271333  ptardiff
265857  chrt                                271334  ptargrep
262193  chsh                                263829  ptx
269678  chvt                                312259  pulseaudio
270361  ckbcomp                             263768  pwd
263786  cksum                               269144  pwdx
266231  clear                               269775  py3clean
263605  clear_console                       269776  py3compile
263928  cmp                                 269780  py3versions
270193  codepage                            271582  pyclean
268211  col                                 271583  pycompile
268213  colcrt                              272330  pydoc
268215  colrm                               272318  pydoc2
268217  column                              272089  pydoc2.7
263787  comm                                269854  pydoc3
269796  compose                             269814  pydoc3.7
271311  corelist                            272331  pygettext
263753  cp                                  272319  pygettext2
271312  cpan                                272090  pygettext2.7
270808  cpan5.28-x86_64-linux-gnu           269855  pygettext3
268267  cpio                                269815  pygettext3.7
281344  cpp                                 271598  python
281338  cpp-8                               271591  python2
274789  c_rehash                            271575  python2.7
268337  crontab                             269781  python3
321213  csh                                 269771  python3.7
263788  csplit                              269771  python3.7m
268609  ctstat                              269782  python3m
281392  cupstestdsc                         271592  pyversions
281393  cupstestppd                         274920  querybts
263789  cut                                 312439  quodlibet
313051  cvt                                 318202  ranlib
312551  cvtsudoers                          263666  rbash
263917  dash                                317685  rcp
263755  date                                268481  rdma
273357  dbus-cleanup-sockets                318203  readelf
273358  dbus-daemon                         263769  readlink
279089  dbus-launch                         263830  realpath
273359  dbus-monitor                        265882  rename.ul
273360  dbus-run-session                    313279  rendercheck
273361  dbus-send                           263721  renice
273362  dbus-update-activation-environment  274921  reportbug
273363  dbus-uuidgen                        269620  report-hw
263757  dd                                  266261  reset
270194  deallocvt                           313541  resize
263702  debconf                             270201  resizecons
263703  debconf-apt-progress                265884  resizepart
263704  debconf-communicate                 266890  resolvectl
263705  debconf-copydb                      265885  rev
263708  debconf-escape                      264150  rgrep
263709  debconf-set-selections              312451  ristretto
263710  debconf-show                        317681  rlogin
274917  debianbts                           263770  rm
281503  debian-reference                    263771  rmdir
264252  deb-systemd-helper                  317851  rmid
264254  deb-systemd-invoke                  317871  rmiregistry
279735  defmt-c                             269133  rnano
279736  defmt-sh                            272682  rotatelogs
265858  delpart                             268483  routef
281787  desktop-file-edit                   268485  routel
281774  desktop-file-install                318209  rpcgen
281775  desktop-file-validate               317677  rsh
263758  df                                  313373  rstart
273689  dh_bash-completion                  313374  rstartd
318823  dh_dkms                             268610  rtstat
293361  dh_perl_openssl                     263831  runcon
272307  dh_python2                          269787  run-mailcap
263930  diff                                263528  run-parts
263931  diff3                               277295  run-with-aspell
263759  dir                                 269527  rview
263790  dircolors                           312522  sane-find-scanner
281817  dirmngr                             263533  savelog
281818  dirmngr-client                      312523  scanimage
263791  dirname                             274757  scp
270412  discover-config                     312959  scp-dbus-service
265805  dmesg                               270202  screendump
309512  dm-tool                             263723  script
264250  dnsdomainname                       263724  scriptreplay
264253  domainname                          263932  sdiff
274475  dotlockfile                         266258  sed
262596  dpkg                                269799  see
318610  dpkg-architecture                   277257  select-default-iwrap
318611  dpkg-buildflags                     269016  select-editor
318612  dpkg-buildpackage                   269017  sensible-browser
318613  dpkg-checkbuilddeps                 269018  sensible-editor
262598  dpkg-deb                            269019  sensible-pager
318614  dpkg-distaddfile                    309710  sensors
262600  dpkg-divert                         309711  sensors-conf-convert
318615  dpkg-genbuildinfo                   263832  seq
318616  dpkg-genchanges                     313400  sessreg
318617  dpkg-gencontrol                     265887  setarch
318618  dpkg-gensymbols                     274993  setfacl
262601  dpkg-maintscript-helper             270190  setfont
318619  dpkg-mergechangelogs                270203  setkeycodes
318620  dpkg-name                           270204  setleds
318621  dpkg-parsechangelog                 270205  setlogcons
262602  dpkg-query                          270206  setmetamode
318622  dpkg-scanpackages                   270146  setpci
318623  dpkg-scansources                    265888  setpriv
318624  dpkg-shlibdeps                      265889  setsid
318625  dpkg-source                         265890  setterm
262603  dpkg-split                          270360  setupcon
262604  dpkg-statoverride                   270207  setvtrgb
262605  dpkg-trigger                        293556  setxkbmap
318626  dpkg-vendor                         274758  sftp
289494  dtplite                             265804  sg
263792  du                                  262163  sh
270185  dumpkeys                            263833  sha1sum
318192  dwp                                 263834  sha224sum
263760  echo                                263835  sha256sum
269797  edit                                263836  sha384sum
269499  editor                              263837  sha512sum
289164  editres                             271335  shasum
264147  egrep                               270208  showconsolefont
270154  eject                               270209  showkey
318193  elfedit                             313401  showrgb
271313  enc2xs                              263838  shred
271314  encguess                            263839  shuf
281879  enchant                             321293  sigfind
281880  enchant-lsmod                       318204  size
263793  env                                 269145  skill
274405  envsubst                            269146  slabtop
270440  eqn                                 263772  sleep
269565  ex                                  274779  slogin
282218  exfalso                             313375  smproxy
282634  exo-csource                         269179  snice
282635  exo-desktop-item-edit               270449  soelim
282636  exo-open                            297343  soffice
282637  exo-preferred-applications          263840  sort
263794  expand                              321294  sorter
262194  expiry                              318210  sotruss
263795  expr                                311164  spd-conf
263796  factor                              311176  spd-say
265661  faillog                             275406  speaker-test
318831  faked-sysv                          311177  speech-dispatcher
318832  faked-tcp                           271336  splain
321164  fakeroot                            263841  split
318833  fakeroot-sysv                       270210  splitfont
318834  fakeroot-tcp                        318211  sprof
265859  fallocate                           279742  sq
263761  false                               321295  srch_strings
282682  fbstat                              268435  ss
282683  fbsvcmgr                            274759  ssh
321274  fcat                                274760  ssh-add
275320  fc-cache                            274761  ssh-agent
275321  fc-cat                              274762  ssh-argv0
275322  fc-conflist                         274763  ssh-copy-id
272676  fcgistarter                         274764  ssh-keygen
275323  fc-list                             274765  ssh-keyscan
275324  fc-match                            312260  start-pulseaudio-x11
275325  fc-pattern                          313442  startx
275326  fc-query                            313952  startxfce4
275327  fc-scan                             263842  stat
275328  fc-validate                         263845  stdbuf
321275  ffind                               318205  strings
270186  fgconsole                           318206  strip
264148  fgrep                               263773  stty
269905  file                                265810  su
265860  fincore                             312552  sudo
264092  find                                312642  sudoedit
279737  findaffix                           312553  sudoreplay
265806  findmnt                             263846  sum
282721  firefox                             286556  symcryptrun
282773  firefox-esr                         312772  synaptic-pkexec
321276  fiwalk                              263774  sync
265861  flock                               313025  system-config-printer
321277  fls                                 313026  system-config-printer-applet
263797  fmt                                 265813  systemctl
263798  fold                                267118  systemd
313223  fonttosfnt                          266891  systemd-analyze
269141  free                                265814  systemd-ask-password
269593  from                                266892  systemd-cat
321278  fsstat                              266893  systemd-cgls
314930  funzip                              266894  systemd-cgtop
273512  fusermount                          266895  systemd-delta
318511  g++                                 266896  systemd-detect-virt
318508  g++-8                               265815  systemd-escape
312521  gamma4scanimage                     269348  systemd-hwdb
292790  gapplication                        266897  systemd-id128
282684  gbak                                265816  systemd-inhibit
318478  gcc                                 265817  systemd-machine-id-setup
318459  gcc-8                               266898  systemd-mount
318479  gcc-ar                              266181  systemd-notify
318460  gcc-ar-8                            266899  systemd-path
318480  gcc-nm                              267196  systemd-resolve
318461  gcc-nm-8                            266900  systemd-run
318481  gcc-ranlib                          266902  systemd-socket-activate
318462  gcc-ranlib-8                        266903  systemd-stdio-bridge
318482  gcov                                266661  systemd-sysusers
318463  gcov-8                              266663  systemd-tmpfiles
318483  gcov-dump                           266664  systemd-tty-ask-password-agent
318464  gcov-dump-8                         267197  systemd-umount
318484  gcov-tool                           266235  tabs
318465  gcov-tool-8                         263847  tac
282885  gcr-viewer                          263848  tail
292791  gdbus                               264481  tar
312769  gdialog                             269285  tasksel
292405  gdk-pixbuf-csource                  265891  taskset
292406  gdk-pixbuf-pixdata                  270450  tbl
292407  gdk-pixbuf-thumbnailer              289501  tcldocstrip
318207  gencat                              289492  tclsh
270481  geqn                                289481  tclsh8.6
294013  GET                                 263849  tee
264286  getconf                             316917  telnet
264287  getent                              274925  telnet.netkit
274992  getfacl                             263529  tempfile
270195  getkeycodes                         263850  test
265862  getopt                              313658  thunar
274406  gettext                             313671  Thunar
274407  gettext.sh                          313659  thunar-settings
282685  gfix                                314815  thunar-volman
292792  gio                                 314816  thunar-volman-settings
292808  gio-querymodules                    266236  tic
292809  glib-compile-schemas                266904  timedatectl
286118  gnome-keyring                       263851  timeout
286019  gnome-keyring-3                     269147  tload
286020  gnome-keyring-daemon                266237  toe
317830  gnome-www-browser                   269148  top
318194  gold                                263775  touch
262195  gpasswd                             266238  tput
286576  gpg                                 263854  tr
286592  gpg-agent                           316945  traceproto
286549  gpgcompose                          274930  traceproto.db
281795  gpgconf                             316931  traceroute
281794  gpg-connect-agent                   316937  traceroute6
286550  gpgparsemail                        274937  traceroute6.db
286620  gpgsm                               274932  traceroute.db
286551  gpgsplit                            274931  traceroute-nanog
286552  gpgtar                              313280  transset
263159  gpgv                                270451  troff
286614  gpg-wks-server                      263776  true
286548  gpg-zip                             263857  truncate
270482  gpic                                285930  trust
282686  gpre                                279743  tryaffix
318195  gprof                               266239  tset
264149  grep                                321296  tsk_comparedir
292793  gresource                           321297  tsk_gettimes
270441  groff                               321298  tsk_loaddb
270442  grog                                321299  tsk_recover
270443  grops                               263858  tsort
270444  grotty                              263859  tty
263799  groups                              264294  tzselect
317896  grub-editenv                        273639  ucf
317897  grub-file                           273640  ucfq
317898  grub-fstest                         273641  ucfr
317899  grub-glue-efi                       313226  ucs2any
317900  grub-kbdcomp                        269349  udevadm
317901  grub-menulst2cfg                    289035  udisksctl
317902  grub-mkfont                         268229  ul
317903  grub-mkimage                        273513  ulockmgr_server
317904  grub-mklayout                       312524  umax_pp
317905  grub-mknetdir                       266146  umount
317906  grub-mkpasswd-pbkdf2                263777  uname
317907  grub-mkrelpath                      264206  uncompress
317908  grub-mkrescue                       263860  unexpand
317909  grub-mkstandalone                   270191  unicode_start
317910  grub-mount                          270211  unicode_stop
318004  grub-ntldr-img                      263861  uniq
317911  grub-render-label                   263862  unlink
317912  grub-script-check                   270103  unlzma
317913  grub-syslinux2cfg                   269735  unmkinitramfs
282687  gsec                                294535  unopkg
292794  gsettings                           317875  unpack200
270483  gtbl                                265892  unshare
313052  gtf                                 279744  unsq
292987  gtk-builder-tool                    269947  unxz
292988  gtk-launch                          314931  unzip
292989  gtk-query-settings                  314932  unzipsfx
275252  gtk-update-icon-cache               262606  update-alternatives
264206  gunzip                              281776  update-desktop-database
264208  gzexe                               275030  update-mime-database
264211  gzip                                314945  upower
271315  h2ph                                269149  uptime
271316  h2xs                                270158  usb-devices
268261  hd                                  270159  usbhid-dump
263800  head                                270160  usbreset
294014  HEAD                                263865  users
269441  helpztags                           321300  usnjls
268219  hexdump                             265895  utmpdump
321279  hfind                               313542  uxterm
274397  host                                317983  VBoxClient
263801  hostid                              321200  VBoxClient-all
264242  hostname                            321193  VBoxControl
266887  hostnamectl                         321194  VBoxDRMClient
272677  htcacheclean                        263778  vdir
272678  htdbm                               269529  vi
272679  htdigest                            269547  view
272680  htpasswd                            289167  viewres
291146  hv3                                 269480  vim.tiny
266145  i386                                269150  vmstat
321280  icat                                313121  vmwarectrl
313399  iceauth                             270165  volname
313277  ico                                 269507  w
279738  icombine                            263725  wall
264288  iconv                               269152  watch
263802  id                                  286557  watchgnupg
275405  iecset                              263866  wc
321281  ifind                               265811  wdctl
279739  ijoin                               274949  wget
321282  ils                                 270509  whatis
321283  img_cat                             265896  whereis
321284  img_stat                            263530  which
266233  infocmp                             269485  whiptail
266259  infotocap                           263867  who
263803  install                             263868  whoami
313024  install-printerdriver               291134  wish
271317  instmodsh                           291123  wish8.6
313138  intel-virtual-output                277296  word-list-compress
265863  ionice                              273340  wpa_passphrase
268433  ip                                  269151  w.procps
265864  ipcmk                               269589  write
265865  ipcrm                               313079  X
265866  ipcs                                275701  X11
268806  iptables-xml                        313281  x11perf
263532  ischroot                            313282  x11perfcomp
313167  isdv4-serial-debugger               267750  x86_64
313168  isdv4-serial-inputattach            318147  x86_64-linux-gnu-addr2line
279740  ispell                              318148  x86_64-linux-gnu-ar
277256  ispell-wrapper                      318149  x86_64-linux-gnu-as
282688  isql-fb                             318150  x86_64-linux-gnu-c++filt
321285  istat                               281345  x86_64-linux-gnu-cpp
317855  java                                281335  x86_64-linux-gnu-cpp-8
321286  jcat                                318151  x86_64-linux-gnu-dwp
317881  jexec                               318152  x86_64-linux-gnu-elfedit
317879  jfr                                 318512  x86_64-linux-gnu-g++
317863  jjs                                 318505  x86_64-linux-gnu-g++-8
321287  jls                                 318485  x86_64-linux-gnu-gcc
263804  join                                318435  x86_64-linux-gnu-gcc-8
265659  journalctl                          318486  x86_64-linux-gnu-gcc-ar
321288  jpeg_extract                        318436  x86_64-linux-gnu-gcc-ar-8
271318  json_pp                             318487  x86_64-linux-gnu-gcc-nm
270196  kbdinfo                             318437  x86_64-linux-gnu-gcc-nm-8
270187  kbd_mode                            318488  x86_64-linux-gnu-gcc-ranlib
286553  kbxutil                             318438  x86_64-linux-gnu-gcc-ranlib-8
266888  kernel-install                      318489  x86_64-linux-gnu-gcov
317859  keytool                             318439  x86_64-linux-gnu-gcov-8
269134  kill                                318490  x86_64-linux-gnu-gcov-dump
268868  kmod                                318440  x86_64-linux-gnu-gcov-dump-8
313539  koi8rxterm                          318491  x86_64-linux-gnu-gcov-tool
269622  laptop-detect                       318441  x86_64-linux-gnu-gcov-tool-8
265867  last                                318165  x86_64-linux-gnu-gold
266147  lastb                               318153  x86_64-linux-gnu-gprof
265662  lastlog                             318166  x86_64-linux-gnu-ld
273638  lcf                                 318154  x86_64-linux-gnu-ld.bfd
318196  ld                                  318155  x86_64-linux-gnu-ld.gold
318197  ld.bfd                              318156  x86_64-linux-gnu-nm
264289  ldd                                 318157  x86_64-linux-gnu-objcopy
318198  ld.gold                             318158  x86_64-linux-gnu-objdump
268893  less                                318159  x86_64-linux-gnu-ranlib
268894  lessecho                            318160  x86_64-linux-gnu-readelf
268909  lessfile                            318161  x86_64-linux-gnu-size
268895  lesskey                             318162  x86_64-linux-gnu-strings
268896  lesspipe                            318163  x86_64-linux-gnu-strip
270505  lexgrog                             315027  xarchiver
316941  lft                                 264093  xargs
274929  lft.db                              313435  xauth
271319  libnetcfg                           313283  xbiff
297342  libreoffice                         315100  xbrlapi
309202  libwacom-list-local-devices         313284  xcalc
309614  light-locker                        313285  xclipboard
309615  light-locker-command                313286  xclock
263805  link                                313402  xcmsdb
266149  linux32                             313287  xconsole
266151  linux64                             313288  xcursorgen
317981  linux-boot-prober                   313289  xcutsel
269743  linux-check-removal                 279604  xdg-dbus-proxy
269744  linux-update-symlinks               315185  xdg-desktop-icon
269745  linux-version                       315186  xdg-desktop-menu
289165  listres                             315187  xdg-email
263762  ln                                  315188  xdg-icon-resource
268477  lnstat                              315189  xdg-mime
270188  loadkeys                            315190  xdg-open
270197  loadunimap                          315191  xdg-screensaver
297499  lobase                              315192  xdg-settings
297568  localc                              315103  xdg-user-dir
264290  locale                              315104  xdg-user-dirs-update
266889  localectl                           313290  xditview
264291  localedef                           289168  xdpyinfo
297611  lodraw                              289169  xdriinfo
294533  loffice                             313291  xedit
294534  lofromtemplate                      289170  xev
263667  logger                              313292  xeyes
265657  login                               315201  xfburn
265660  loginctl                            309369  xfce4-about
263806  logname                             313879  xfce4-accessibility-settings
272681  logresolve                          313880  xfce4-appearance-settings
297630  loimpress                           313673  xfce4-appfinder
297668  lomath                              315311  xfce4-clipman
268221  look                                315312  xfce4-clipman-settings
268223  lorder                              315509  xfce4-dict
297684  loweb                               313881  xfce4-display-settings
273522  lowntfs-3g                          313882  xfce4-find-cursor
297685  lowriter                            313883  xfce4-keyboard-settings
281394  lp                                  313884  xfce4-mime-settings
281395  lpoptions                           313885  xfce4-mouse-settings
297549  lp_solve                            315800  xfce4-notes
281396  lpstat                              315801  xfce4-notes-settings
263763  ls                                  315851  xfce4-notifyd-config
264003  lsattr                              313744  xfce4-panel
265807  lsblk                               313745  xfce4-popup-applicationsmenu
309739  lsb_release                         315313  xfce4-popup-clipman
265868  lscpu                               315362  xfce4-popup-clipman-actions
269734  lsinitramfs                         313746  xfce4-popup-directorymenu
265869  lsipc                               315802  xfce4-popup-notes
265870  lslocks                             315905  xfce4-popup-places
265871  lslogins                            316419  xfce4-popup-whiskermenu
265872  lsmem                               313747  xfce4-popup-windowmenu
268884  lsmod                               316684  xfce4-power-manager
265873  lsns                                316685  xfce4-power-manager-settings
274482  lsof                                315961  xfce4-screenshooter
270144  lspci                               316019  xfce4-sensors
286554  lspgpot                             313953  xfce4-session
270157  lsusb                               313954  xfce4-session-logout
289166  luit                                313955  xfce4-session-settings
293972  lwp-download                        313886  xfce4-settings-editor
293973  lwp-dump                            313887  xfce4-settings-manager
293974  lwp-mirror                          316167  xfce4-taskmanager
293975  lwp-request                         313571  xfce4-terminal
313540  lxterm                              313572  xfce4-terminal.wrapper
270107  lzcat                               282509  xfconf-query
270123  lzcmp                               289171  xfd
270119  lzdiff                              314091  xfdesktop
270131  lzegrep                             314092  xfdesktop-settings
270135  lzfgrep                             309370  xfhelp4
270127  lzgrep                              313956  xflock4
270115  lzless                              289172  xfontsel
270099  lzma                                313742  xfrun4
269913  lzmainfo                            313888  xfsettingsd
270111  lzmore                              314097  xfwm4
321289  mactime                             314098  xfwm4-settings
318514  make                                314099  xfwm4-tweaks-settings
318515  make-first-existing-target          314100  xfwm4-workspace-settings
270506  man                                 313403  xgamma
270507  mandb                               313293  xgc
270508  manpath                             313404  xhost
270198  mapscrn                             313443  xinit
264446  mawk                                293557  xkbbell
265874  mcookie                             293558  xkbcomp
263807  md5sum                              293559  xkbevd
267514  md5sum.textutils                    293560  xkbprint
265875  mesg                                293561  xkbvleds
286555  migrate-pubring-from-classic-gpg    293562  xkbwatch
292264  mimeopen                            313405  xkeystone
292265  mimetype                            289173  xkill
263764  mkdir                               313294  xload
263808  mkfifo                              313295  xlogo
313224  mkfontdir                           289174  xlsatoms
313225  mkfontscale                         289175  xlsclients
270199  mk_modmap                           289176  xlsfonts
263765  mknod                               313296  xmag
263766  mktemp                              313297  xman
321290  mmcat                               289177  xmessage
310807  mmcli                               313406  xmodmap
321291  mmls                                313298  xmore
321292  mmstat                              313050  Xorg
265808  more                                289178  xprop
266144  mount                               313407  xrandr
265809  mountpoint                          313408  xrdb
310865  mousepad                            313409  xrefresh
289495  mpexpand                            316883  xsane
269489  mt                                  317717  x-session-manager
268269  mt-gnu                              313410  xset
318208  mtrace                              313411  xsetmode
279741  munchlist                           313412  xsetpointer
263767  mv                                  313413  xsetroot
265876  namei                               313169  xsetwacom
269091  nano                                313376  xsm
264825  nawk                                313414  xstdcmap
282689  nbackup                             271337  xsubpp
316921  nc                                  313543  xterm
268225  ncal                                317713  x-terminal-emulator
274748  nc.traditional                      313415  xvidtune
270445  neqn                                289179  xvinfo
316923  netcat                              313299  xwd
265812  networkctl                          317821  x-window-manager
265663  newgrp                              289180  xwininfo
274408  ngettext                            313300  xwud
263809  nice                                317819  x-www-browser
264255  nisdomainname                       269434  xxd
263812  nl                                  269914  xz
318199  nm                                  269948  xzcat
310980  nm-applet                           269949  xzcmp
273405  nmcli                               269915  xzdiff
310981  nm-connection-editor                269950  xzegrep
273404  nm-online                           269951  xzfgrep
273406  nmtui                               269916  xzgrep
273504  nmtui-connect                       269917  xzless
273505  nmtui-edit                          269918  xzmore
273506  nmtui-hostname                      263869  yes
289496  nns                                 264257  ypdomainname
289497  nnsd                                264212  zcat
289498  nnslog                              264213  zcmp
263813  nohup                               264214  zdiff
294250  notify-send                         264295  zdump
263815  nproc                               264215  zegrep
270446  nroff                               312770  zenity
265877  nsenter                             264216  zfgrep
268479  nstat                               264217  zforce
273523  ntfs-3g                             264218  zgrep
273524  ntfs-3g.probe                       271338  zipdetails
273525  ntfscat                             314933  zipgrep
273526  ntfscluster                         314931  zipinfo
273527  ntfscmp                             264219  zless
273544  ntfsdecrypt                         264220  zmore
273528  ntfsfallocate                       264221  znew
273529  ntfsfix
```
### 4. Generar un enlace simbólico al archivo /etc/inittab. Explicar las características de este tipo de enlace en base al ejemplo.

Desde su versión 8 (Jessy), Debian migró su gestor de servicios de SysVinit a Systemd. Dado a que para la cursada en cuestión estamos usando Debian 10 (Buster), el archivo ```/etc/inittab``` no existe más en esta versión.

Para realizar el ejercicio voy a crear un enlace simbólico del archivo ```/etc/init.d/apache2```:
```
matias@debian:~$ ln -s /etc/init.d/apache2 link-apache
matias@debian:~$ ls -li link-apache 
3390 lrwxrwxrwx 1 matias matias 19 sep  9 02:38 link-apache -> /etc/init.d/apache2
matias@debian:~$ ls -li /etc/init.d/apache2 
272863 -rwxr-xr-x 1 root root 8181 abr  2  2019 /etc/init.d/apache2
```
El enlace creado, es un archivo del tipo "l", que corresponde a un archivo enlazado (enlaces simbólicos). El mismo al listar el directorio nos muestra la información del archivo original al que apunta, en este caso ```/etc/init.d/apache2```. Si listamos el directorio original, podemos ver que el contador de enlaces sobre el archivo ```apache2``` se mantiene en 1, ya que los enlaces simbólicos son creados en un nuevo i-nodo y no lo comparten con el archivo original, es por esto que los bits de permiso figuran todos levantados ya que los permisos están determinados por el archivo al cual apunta el enlace. La principal diferencia frente a los enlaces duros, es que se pueden crear enlaces simbólicos con archivos que están en otro filesystem.

### 5. Crear el archivo A y mostrar su contenido paginado de 5 líneas por página.
```
matias@debian:~$ more -5 A
Tres Anillos para los Reyes Elfos bajo el cielo.
Siete para los Señores Enanos en palacios de piedra.
Nueve para los Hombres Mortales condenados a morir.
Uno para el Señor Oscuro, sobre el trono oscuro
en la Tierra de Mordor donde se extienden las Sombras.
--Más--(59%)
```
### 6. Mover el archivo A al directorio padre. ¿Tuvo éxito la acción anterior? Justifique.
```
matias@debian:~$ mv A ..
mv: no se puede mover 'A' a '../A': Permiso denegado
```
No pude copiar el archivo en el directorio padre (```/home```) ya que mi usuario común no tiene los permisos de escritura para esa carpeta, solamente el usuario ```root``` posee el permiso de write:
```
matias@debian:~$ ls -la ..
total 24
drwxr-xr-x  6 root       root       4096 sep  1 19:02 .
drwxr-xr-x 19 root       root       4096 ago 18 18:06 ..
drwxr-xr-x 16 matias     matias     4096 sep  9 02:56 matias
drwxr-xr-x  2 vboxadd    vboxsf     4096 ago 31 22:41 matias_001
drwxr-xr-x  2        997        997 4096 ago 31 22:41 matias_002
drwxr-xr-x  2 matias_004 matias_004 4096 sep  1 19:02 matias_004
```
Incluso si mi usuario ```matias``` perteneciese el grupo ```root``` ya que los permisos para dicho grupo también solamente son de lectura y ejecución.
### 7. Explicar en qué consiste la acción de mover un archivo a otro directorio.

La acción de mover un archivo, simplemente consta en cambiar la metadata que contiene su i-nodo con respecto a su nombre y ubicación. No se cambia el i-nodo en sí, sinó la información que referencia. Es por esto que para cambiar el nombre de un archivo, se usa el comando ```mv```, ya que solo está modificando su metadata y no el archivo per se.

## Actividad 4
### 1. Averigüe cuál es su directorio de conexión y cree en él un directorio que se llame clave.
```
matias@debian:~$ echo $HOME
/home/matias
matias@debian:~$ mkdir clave
```
### 2. Copie el archivo passwd del sistema (su localización y sintaxis se puede encontrar utilizando el man) en el directorio clave. Realice la copia de dos modos distintos:
a. Especificando tanto el origen como el destino mediante trayectorias absolutas.
```
matias@debian:~$ cp /etc/passwd /home/matias/clave/
matias@debian:~$ ls clave/
passwd
```
b. Especificando origen y destino con trayectorias relativas.
```
matias@debian:~$ cp ../../etc/passwd clave/
matias@debian:~$ ls clave/
passwd
```
### 3. Utilizando el comando ln (Use man ln):
***a. Cree un enlace duro a un archivo situado en su directorio de conexión y compare el número de enlaces que tiene ahora y los que tenía antes de realizar esta operación.***
```
matias@debian:~$ ls -l A
-rw-r--r-- 1 matias matias 438 sep  9 02:56 A
matias@debian:~$ ln A AA
matias@debian:~$ ls -l A*
-rw-r--r-- 2 matias matias 438 sep  9 02:56 A
-rw-r--r-- 2 matias matias 438 sep  9 02:56 AA
```
El número de enlaces aumento en 1

***b. Realice de nuevo la misma operación pero en este caso sobre un directorio. ¿Puede realizar un enlace simbólico sobre un directorio?***

No se puede realizar enlaces duros sobre directorios, entre otras cosas porque rompería el patrón aciclicó del sistema de archivos (un directorio podria tener a su directorio padre como enlace, creando un bucle infinito para algunos comandos como ```du```, ya que el manejo se basa en el i-nodo). Sin embargo, los enlaces simbólicos a directorios si se permiten, ya que son un archivo más de enlace, con un i-nodo distinto del directorio original.

***c. Cree un enlace simbólico sobre el archivo original de la pregunta a) ¿Cuántos enlaces tiene ahora?***
```
matias@debian:~$ ls -la A*
-rw-r--r-- 2 matias matias 438 sep  9 02:56 A
-rw-r--r-- 2 matias matias 438 sep  9 02:56 AA
lrwxrwxrwx 1 matias matias   1 sep  9 03:31 AAA -> A
```
La cantidad de enlaces permanece en 2.
***d. Borre el archivo original. ¿Puede acceder a los datos a través del enlace simbólico? ¿y a través del enlace duro? ¿Qué ocurre si creamos un archivo con el mismo nombre que el que hemos borrado? ¿Puede acceder a los datos a través del enlace simbólico? ¿y a través del enlace duro?***
Al borrar el archivo original ```A```no se puede acceder a los datos allí guardados a traves del enlace simbólico. Sin embargo, si se puede acceder a traves del enlace duro:
```
matias@debian:~$ cat AAA
cat: AAA: No existe el fichero o el directorio
matias@debian:~$ cat AA
Tres Anillos para los Reyes Elfos bajo el cielo.
Siete para los Señores Enanos en palacios de piedra.
Nueve para los Hombres Mortales condenados a morir.
Uno para el Señor Oscuro, sobre el trono oscuro
en la Tierra de Mordor donde se extienden las Sombras.
Un Anillo para gobernarlos a todos. Un Anillo para encontrarlos,
un Anillo para atraerlos a todos y atarlos en las tinieblas
en la Tierra de Mordor donde se extienden las Sombras
```
Al crear un nuevo archivo con el mismo nombre del original borrado, se puede acceder al mismo a traves del enlace simbólico, ya que este apunta a su path absoluto en el sistema de archivos y no al i-nodo. Sin embargo, al tratarse de un archivo nuevo, nos devuelve un contenido que no era al del archivo originalmente enlazado. A traves del enlace duro si podemos acceder a esa información, ya que el enlace duro compartía el i-nodo con el archivo original, por lo tanto, tiene asignado el mismo blóque de disco donde aún se guarda la inforamción.
```
matias@debian:~$ touch A
matias@debian:~$ cat AAA
matias@debian:~$ ls -lai A*
17389 -rw-r--r-- 1 matias matias   0 sep  9 03:34 A
17385 -rw-r--r-- 1 matias matias 438 sep  9 02:56 AA
17388 lrwxrwxrwx 1 matias matias   1 sep  9 03:31 AAA -> A
matias@debian:~$ cat AA
Tres Anillos para los Reyes Elfos bajo el cielo.
Siete para los Señores Enanos en palacios de piedra.
Nueve para los Hombres Mortales condenados a morir.
Uno para el Señor Oscuro, sobre el trono oscuro
en la Tierra de Mordor donde se extienden las Sombras.
Un Anillo para gobernarlos a todos. Un Anillo para encontrarlos,
un Anillo para atraerlos a todos y atarlos en las tinieblas
en la Tierra de Mordor donde se extienden las Sombras
```
***e. Intente realizar un enlace duro sobre el archivo de contraseñas del sistema. ¿Qué ocurre? ¿Por qué? Realice un enlace simbólico. ¿Qué ocurre? ¿Por qué?***
No se puede realizar un enlace duro sobre el archivo ```/etc/shadow``` ya que solo el usuario ```root``` del sistema tiene permisos de lecto-escritura sobre ese i-nodo. Sin embargo, podemos realizar un enlace simbólico al archivo, pero no podemos acceder a la información que tiene adentro ya que nuevamente los permisos de lecto-escritura son los del archivo origen, y están restringidos solo al usuario **root**

# Capitulo 5
## Actividad 1
### 2.Cree el archivo lista_usu que contenga los usuarios activos del sistema. Verificar la existenciael contenido de los archivos creados.
```
matias@debian:~$ who > lista_usu
matias@debian:~$ ls -l lista_usu lista_com 
-rw-r--r-- 1 matias matias 74266 sep  9 16:22 lista_com
-rw-r--r-- 1 matias matias    44 sep  9 16:44 lista_usu
matias@debian:~$ more lista_usu 
matias   tty7         2020-09-09 16:20 (:0)
matias@debian:~$ more lista_com 
total 110344
-rwxr-xr-x 1 root root      60064 feb 28  2019 [
-rwxr-xr-x 1 root root         96 oct 10  2019 2to3-2.7
-rwxr-xr-x 1 root root         39 feb  5  2018 7z
-rwxr-xr-x 1 root root         40 feb  5  2018 7za
-rwxr-xr-x 1 root root         40 feb  5  2018 7zr
-rwxr-xr-x 1 root root      30936 mar 30  2019 aa-enabled
-rwxr-xr-x 1 root root      30936 mar 30  2019 aa-exec
-rwxr-xr-x 1 root root      55480 oct 15  2019 ab
-rwxr-xr-x 1 root root      22600 mar 30  2019 aconnect
-rwxr-xr-x 1 root root      26704 ene 10  2019 addpart
lrwxrwxrwx 1 root root         26 mar 21  2019 addr2line -> x86_64-linux-gnu-addr2line
-rwxr-xr-x 1 root root      47240 mar 30  2019 alsabat
-rwxr-xr-x 1 root root      80888 mar 30  2019 alsaloop
-rwxr-xr-x 1 root root      68024 mar 30  2019 alsamixer
-rwxr-xr-x 1 root root      14408 mar 30  2019 alsatplg
-rwxr-xr-x 1 root root      18880 mar 30  2019 alsaucm
-rwxr-xr-x 1 root root      26704 mar 30  2019 amidi
-rwxr-xr-x 1 root root      59544 mar 30  2019 amixer
-rwxr-xr-x 1 root root     432480 nov 10  2016 analog
lrwxrwxrwx 1 root root         20 ago 27  2018 ant -> ../share/ant/bin/ant
-rwxr-xr-x 1 root root      79992 mar 30  2019 aplay
-rwxr-xr-x 1 root root      22608 mar 30  2019 aplaymidi
-rwxr-xr-x 1 root root      10472 mar 18  2018 appres
lrwxrwxrwx 1 root root          6 feb 10  2019 apropos -> whatis
-rwxr-xr-x 1 root root      18520 may 12 06:57 apt
-rwxr-xr-x 1 root root      84128 may 12 06:57 apt-cache
-rwxr-xr-x 1 root root      26784 may 12 06:57 apt-cdrom
-rwxr-xr-x 1 root root      26712 may 12 06:57 apt-config
-rwxr-xr-x 1 root root      22688 may 12 06:57 apt-extracttemplates
-rwxr-xr-x 1 root root     243872 may 12 06:57 apt-ftparchive
-rwxr-xr-x 1 root root      47264 may 12 06:57 apt-get
-rwxr-xr-x 1 root root      27730 may 12 06:57 apt-key
-rwxr-xr-x 1 root root      10868 mar 17  2019 apt-listchanges
-rwxr-xr-x 1 root root      55456 may 12 06:57 apt-mark
-rwxr-xr-x 1 root root      47192 may 12 06:57 apt-sortpkgs
lrwxrwxrwx 1 root root         19 mar 21  2019 ar -> x86_64-linux-gnu-ar
-rwxr-xr-x 1 root root      39584 feb 28  2019 arch
lrwxrwxrwx 1 root root          5 mar 30  2019 arecord -> aplay
-rwxr-xr-x 1 root root      30808 mar 30  2019 arecordmidi
lrwxrwxrwx 1 root root         19 mar 21  2019 as -> x86_64-linux-gnu-as
-rwxr-xr-x 1 root root      26696 mar 30  2019 aseqdump
-rwxr-xr-x 1 root root      26752 mar 30  2019 aseqnet
-rwxr-xr-x 1 root root     153944 ene 31  2019 aspell
--Más--(3%)
```
### 3. Realice una copia de seguridad de los archivos creados y llámela copia.tar. Verifique si los archivos originales todavía existen.
```
matias@debian:~$ tar cvf copia.tar lista_usu lista_com 
lista_usu
lista_com
matias@debian:~$ ls -l lista_usu lista_com 
-rw-r--r-- 1 matias matias 74266 sep  9 16:22 lista_com
-rw-r--r-- 1 matias matias    44 sep  9 16:44 lista_usu
```
### 4. Muestre el contenido del archivo de respaldo creado.

```
matias@debian:~$ tar tvf copia.tar 
-rw-r--r-- matias/matias    44 2020-09-09 16:44 lista_usu
-rw-r--r-- matias/matias 74266 2020-09-09 16:22 lista_com
```

### 5. Extraiga los archivos originales del archivo de respaldo, en el sudirectorio backup creado en su directorio de login.
```
matias@debian:~$ mkdir backup && cd backup
matias@debian:~/backup$ tar xvf ../copia.tar 
lista_usu
lista_com
matias@debian:~/backup$ ls
lista_com  lista_usu
```
### 6.Realice una copia de seguridad comprimida de los archivos de su directorio de conexión en un archivo llamado backup.tgz. Verifique si los archivos originales todavía existen.
Efectivamente los archivos siguen existiendo, y también la ejecución del comando arroja un mensajde de advertencia de que el directorio sufrió modificaciones desde que se ejcutó el comando, ya que está teniendo en cuenta el archivo creado por él mismo *backup.tgz*, que quedó lógicamente fuera del backup.
```
matias@debian:~$ tar czvf backup.tgz ./
./
./Escritorio/
./.xsession-errors.old
./.vboxclient-seamless.pid
./.xfce4-session.verbose-log
./.xfce4-session.verbose-log.last
./clave-link-carpeta
./.bashrc
./Música/
./AA
./lista_com
./Plantillas/
./.bash_logout
./Público/
./.vboxclient-display-svga-x11.pid
./.profile
./.gnupg/
./.gnupg/private-keys-v1.d/
./lista_usu
./Descargas/
./.bash_history
./nuevo/
./nuevo/dato1
./nuevo/dato2sb
./nuevo/dato2ln
./.local/
./.local/share/
./.local/share/notes/
./.local/share/notes/Notas/
./.local/share/notes/Notas/Notas
./.local/share/recently-used.xbel
./.local/share/nano/
./link-apache
./.ICEauthority
./AAA
./.mozilla/
./.mozilla/firefox/
./.mozilla/firefox/Pending Pings/
./.mozilla/firefox/gjah9rbv.default/
./.mozilla/firefox/gjah9rbv.default/times.json
./.mozilla/firefox/njcs43kl.default-esr/
./.mozilla/firefox/njcs43kl.default-esr/handlers.json
./.mozilla/firefox/njcs43kl.default-esr/containers.json
./.mozilla/firefox/njcs43kl.default-esr/favicons.sqlite
./.mozilla/firefox/njcs43kl.default-esr/bookmarkbackups/
./.mozilla/firefox/njcs43kl.default-esr/xulstore.json
./.mozilla/firefox/njcs43kl.default-esr/AlternateServices.txt
./.mozilla/firefox/njcs43kl.default-esr/addonStartup.json.lz4
./.mozilla/firefox/njcs43kl.default-esr/crashes/
./.mozilla/firefox/njcs43kl.default-esr/crashes/events/
./.mozilla/firefox/njcs43kl.default-esr/prefs.js
./.mozilla/firefox/njcs43kl.default-esr/datareporting/
./.mozilla/firefox/njcs43kl.default-esr/datareporting/session-state.json
./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/
./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/2020-08/
./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/2020-08/1597785884913.4fffcdc1-aaf1-45e3-ba52-157a9e55d6dd.main.jsonlz4
./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/2020-08/1597785884904.b9b4d94d-7d97-4f51-9f32-74ecdfce26b5.new-profile.jsonlz4
./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/2020-08/1597785884909.a0d8e889-1c42-418c-98cc-00fc56301e05.event.jsonlz4
./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/2020-08/1597785884914.755a64cb-5eba-4efd-828e-35c1d629965a.first-shutdown.jsonlz4
./.mozilla/firefox/njcs43kl.default-esr/datareporting/state.json
./.mozilla/firefox/njcs43kl.default-esr/.parentlock
./.mozilla/firefox/njcs43kl.default-esr/content-prefs.sqlite
./.mozilla/firefox/njcs43kl.default-esr/cookies.sqlite
./.mozilla/firefox/njcs43kl.default-esr/places.sqlite
./.mozilla/firefox/njcs43kl.default-esr/TRRBlacklist.txt
./.mozilla/firefox/njcs43kl.default-esr/extension-preferences.json
./.mozilla/firefox/njcs43kl.default-esr/cert9.db
./.mozilla/firefox/njcs43kl.default-esr/SecurityPreloadState.txt
./.mozilla/firefox/njcs43kl.default-esr/sessionCheckpoints.json
./.mozilla/firefox/njcs43kl.default-esr/search.json.mozlz4
./.mozilla/firefox/njcs43kl.default-esr/addons.json
./.mozilla/firefox/njcs43kl.default-esr/SiteSecurityServiceState.txt
./.mozilla/firefox/njcs43kl.default-esr/minidumps/
./.mozilla/firefox/njcs43kl.default-esr/times.json
./.mozilla/firefox/njcs43kl.default-esr/webappsstore.sqlite
./.mozilla/firefox/njcs43kl.default-esr/extensions.json
./.mozilla/firefox/njcs43kl.default-esr/key4.db
./.mozilla/firefox/njcs43kl.default-esr/pkcs11.txt
./.mozilla/firefox/njcs43kl.default-esr/permissions.sqlite
./.mozilla/firefox/njcs43kl.default-esr/storage.sqlite
./.mozilla/firefox/njcs43kl.default-esr/sessionstore-backups/
./.mozilla/firefox/njcs43kl.default-esr/sessionstore.jsonlz4
./.mozilla/firefox/njcs43kl.default-esr/extensions/
./.mozilla/firefox/njcs43kl.default-esr/compatibility.ini
./.mozilla/firefox/njcs43kl.default-esr/storage/
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/.metadata-v2
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/1657114595AmcateirvtiSty.sqlite
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/1451318868ntouromlalnodry--epcr.sqlite
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/1451318868ntouromlalnodry--epcr.files/
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/3870112724rsegmnoittet-es.files/
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/3870112724rsegmnoittet-es.sqlite
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/3561288849sdhlie.files/
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/3561288849sdhlie.sqlite
./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/1657114595AmcateirvtiSty.files/
./.mozilla/firefox/installs.ini
./.mozilla/firefox/profiles.ini
./.mozilla/firefox/Crash Reports/
./.mozilla/firefox/Crash Reports/InstallTime20200720181548
./.mozilla/firefox/Crash Reports/events/
./.mozilla/extensions/
./.mozilla/systemextensionsdev/
./.vboxclient-clipboard.pid
./passwd-link
./Vídeos/
./A
./backup/
./backup/lista_com
./backup/lista_usu
./Documentos/
./shadow-link
./copia.tar
./clave/
./clave/passwd
./.config/
./.config/xfce4-session/
./.config/xfce4/
./.config/xfce4/panel/
./.config/xfce4/panel/launcher-9/
./.config/xfce4/panel/launcher-9/15977853891.desktop
./.config/xfce4/panel/launcher-10/
./.config/xfce4/panel/launcher-10/15977853892.desktop
./.config/xfce4/panel/launcher-11/
./.config/xfce4/panel/launcher-11/15977853893.desktop
./.config/xfce4/panel/launcher-12/
./.config/xfce4/panel/launcher-12/15977853894.desktop
./.config/xfce4/terminal/
./.config/xfce4/terminal/accels.scm
./.config/xfce4/xfce4-taskmanager.rc
./.config/xfce4/xfwm4/
./.config/xfce4/help.rc
./.config/xfce4/xfconf/
./.config/xfce4/xfconf/xfce-perchannel-xml/
./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-settings-manager.xml
./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-desktop.xml
./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-panel.xml
./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-keyboard-shortcuts.xml
./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-session.xml
./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-settings-editor.xml
./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-notifyd.xml
./.config/xfce4/xfconf/xfce-perchannel-xml/xfwm4.xml
./.config/xfce4/xfconf/xfce-perchannel-xml/keyboards.xml
./.config/xfce4/xfconf/xfce-perchannel-xml/thunar.xml
./.config/xfce4/desktop/
./.config/xfce4/desktop/icons.screen0-934x902.rc
./.config/xfce4/desktop/icons.screen0-1904x914.rc
./.config/xfce4/desktop/icons.screen0-784x584.rc
./.config/xfce4/desktop/icons.screen0-784x504.rc
./.config/xfce4/xfce4-notes.gtkrc
./.config/Mousepad/
./.config/Mousepad/accels.scm
./.config/user-dirs.locale
./.config/Thunar/
./.config/Thunar/uca.xml
./.config/Thunar/accels.scm
./.config/procps/
./.config/user-dirs.dirs
./.config/dconf/
./.config/dconf/user
./.config/pulse/
./.config/pulse/cd44de520bd642e69488d5d8ef40864c-device-volumes.tdb
./.config/pulse/cd44de520bd642e69488d5d8ef40864c-default-sink
./.config/pulse/cookie
./.config/pulse/cd44de520bd642e69488d5d8ef40864c-stream-volumes.tdb
./.config/pulse/cd44de520bd642e69488d5d8ef40864c-card-database.tdb
./.config/pulse/cd44de520bd642e69488d5d8ef40864c-default-source
./.config/gtk-3.0/
./.Xauthority
./.xsession-errors
./.cache/
./.cache/sessions/
./.cache/sessions/xfwm4-2b41916c3-d0e0-4737-b5a4-bb94db194521.state
./.cache/sessions/xfwm4-2dfd72c32-9bc0-4d18-bf19-3f572afe5c77.state
./.cache/sessions/xfce4-session-debian:0
./.cache/sessions/xfce4-session-debian:0.bak
./.cache/mozilla/
./.cache/mozilla/firefox/
./.cache/mozilla/firefox/gjah9rbv.default/
./.cache/mozilla/firefox/njcs43kl.default-esr/
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-trackwhite-simple.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/block-flash-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-block-simple.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flashallow-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-malware-simple.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/mozplugin-block-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/base-track-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/block-flashsubdoc-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-phish-simple.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-block-simple.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-trackwhite-simple.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flashsubdoc-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/block-flashsubdoc-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flashsubdoc-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/ads-track-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-harmful-simple.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/analytics-track-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flash-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-unwanted-simple.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/base-track-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flash-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-malware-simple.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/content-track-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-harmful-simple.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/social-track-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-unwanted-simple.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/analytics-track-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/allow-flashallow-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/social-track-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-track-simple.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/ads-track-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flashallow-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-phish-simple.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/allow-flashallow-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/content-track-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/google4/
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-track-simple.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/mozstd-trackwhite-digest256.sbstore
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/block-flash-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/mozplugin-block-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/mozstd-trackwhite-digest256.pset
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/83ADE40216D6A370A78A28ECA2EB0805FBD73379
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/20FF2AC5583B0097CC109C426C2028BFFDB6F10D
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/CC272A84C437C06018182F241F266FFC52770F69
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/E7DE6A2E092398D6655100CA653A72C5A1819E3E
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/B6F8D2A797B257A0FA38E0B262ECF974330E267C
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/5D7EED656A360F7171932CAEA249E6C8F2F37AA5
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/996D20D018E4F7762222CD38EB107482289071F3
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/78DBE55782B7B81AF853B4884323B48C34429A53
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/FA9AB486396637268818DF116C977F8A81C62A80
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/D68CAF7DF2821B6FF8FA7C896445E3FEDF710B49
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/03249B0B12F3E9B09D67FBA6461D0DC0231C8ACC
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0D288E5EFB5F6BD4D2FBED99FD460472CAB057B9
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0B1F93F56D27DAB33AE304F6CF4F6AEF68C31E0A
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/B9667D755101C1D21E786F253C654BD086964020
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/89DBE1DF558BB8439E2062ECC3272086F2E3FF1F
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/EF24CA4A4C9F65F851ACC2CDBDEFF0B7EB1A8BD0
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/9DF825CC78A660D81D571A4A46F060676D7CF4F3
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/DADD4F9B9A5498815F97C8458A170D119989A542
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/4903E7ABE348ED39D98D1C844FB81A906D5ECA16
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/C826F47B16117BA28458A47C4D3BA037A530889A
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0DDE7EBD8F3AD9D564DBF6AD91C37AB55D56D0AF
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/43234379F581348638A4940A6ADE08EFDE610BDB
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/4F7F8C85314AA6357D8FE326094823BCF481DAB0
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/DE946FEBDB6602261E439C36266EE3395B3D05B3
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/1761AD362311F7EAAC34E15A930400DDFE6299E0
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/103BE14A23A6DF77F47EFA85938B6926E6ECA347
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/6D730121FD763F5F1F5C0FA06E1E8AC73C97591D
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/BAEE5929C302B628351F8A770CA24F6C3585A52B
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/C3D12E2B603C194F2FE1E0DB12DB2A2BB4C4FE2A
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0EDDF8C091E2FED62E44BEDDDC1723F5BF38FE4F
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/23EA9B0B9F6AB1B521FD52A464FA54FD53C11217
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/6D263E36A5B08A3BCDF5793C6C843DAA81B083BB
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/340A10D652987DF5E54312E31F5C22F6E8DBA574
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0318830328E6C5A25F4128E85A844818A3EF4040
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/4B6ED8BCAD25D8524A2762D781ED6AFB47AA1BE5
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/F8B51D2EC10AE9A943F8F24B1B1561CF237EA4EA
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/66F684AF9CC570C6247262B47C769C601C2A338B
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/E910D1FCE8BF27F5536B88567A4DC32624377CC3
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/447E62EE439AC61BDFBDB92986DBA56D2E79ADD8
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/179977EC1B5CF43A769203F2E63E4D2CCB00C0BE
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/D1FF650E4D89F0AF6D2D3412AE4EFA82EB6911AE
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0D0F64D1E6826ADE9123EFDCDC3E125423305620
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/D2DB1CF83E7976F198B7B40E1C9CBEA4CF237C70
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/44BA9A5AAB74A795209F8B1E91F45308B9E2D97C
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/D68DF503ED76B50297BF15F775A07FE8820C8200
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/ce_T151c2VyQ29udGV4dElkPTUsYSw=
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/doomed/
./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/ce_T151c2VyQ29udGV4dElkPTUs
./.cache/mozilla/firefox/njcs43kl.default-esr/thumbnails/
./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/
./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/scriptCache-child.bin
./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/scriptCache.bin
./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/webext.sc.lz4
./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/urlCache.bin
./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/startupCache.8.little
./.cache/mozilla/firefox/njcs43kl.default-esr/OfflineCache/
./.cache/mozilla/firefox/njcs43kl.default-esr/OfflineCache/index.sqlite
./.cache/gstreamer-1.0/
./.cache/gstreamer-1.0/registry.x86_64.bin
./.cache/fontconfig/
./.cache/fontconfig/CACHEDIR.TAG
./.cache/fontconfig/e74d411252dea466295e020db15a86c6-le64.cache-7
./.vboxclient-draganddrop.pid
./Imágenes/
./.dmrc
tar: .: el fichero cambió mientras se estaba leyendo
```
### 7. Muestre el contenido del archivo de respaldo creado.
```
matias@debian:~$ tar tvf backup.tgz 
drwxr-xr-x matias/matias     0 2020-09-09 16:53 ./
drwxr-xr-x matias/matias     0 2020-08-18 18:16 ./Escritorio/
-rw------- matias/matias  3599 2020-09-09 03:55 ./.xsession-errors.old
-rw-r----- matias/matias     5 2020-09-09 16:20 ./.vboxclient-seamless.pid
-rw-r--r-- matias/matias 19032 2020-09-09 16:20 ./.xfce4-session.verbose-log
-rw-r--r-- matias/matias 19701 2020-09-08 23:43 ./.xfce4-session.verbose-log.last
lrwxrwxrwx matias/matias     0 2020-09-09 03:27 ./clave-link-carpeta -> clave/
-rw-r--r-- matias/matias  3526 2020-08-18 18:08 ./.bashrc
drwxr-xr-x matias/matias     0 2020-08-18 18:16 ./Música/
-rw-r--r-- matias/matias   438 2020-09-09 02:56 ./AA
-rw-r--r-- matias/matias 74266 2020-09-09 16:22 ./lista_com
drwxr-xr-x matias/matias     0 2020-08-18 18:16 ./Plantillas/
-rw-r--r-- matias/matias   220 2020-08-18 18:08 ./.bash_logout
drwxr-xr-x matias/matias     0 2020-08-18 18:16 ./Público/
-rw-r----- matias/matias     5 2020-09-09 16:20 ./.vboxclient-display-svga-x11.pid
-rw-r--r-- matias/matias   807 2020-08-18 18:08 ./.profile
drwx------ matias/matias     0 2020-08-18 18:16 ./.gnupg/
drwx------ matias/matias     0 2020-08-18 18:16 ./.gnupg/private-keys-v1.d/
-rw-r--r-- matias/matias    44 2020-09-09 16:44 ./lista_usu
drwxr-xr-x matias/matias     0 2020-08-18 18:16 ./Descargas/
-rw------- matias/matias 20930 2020-09-09 03:55 ./.bash_history
drwxr-xr-x matias/matias     0 2020-09-07 22:23 ./nuevo/
-rw-r--r-- matias/matias   931 2020-09-07 21:50 ./nuevo/dato1
lrwxrwxrwx matias/matias     0 2020-09-07 22:17 ./nuevo/dato2sb -> dato2
-rw-r--r-- matias/matias   971 2020-09-07 21:56 ./nuevo/dato2ln
drwxr-xr-x matias/matias     0 2020-08-18 18:16 ./.local/
drwx------ matias/matias     0 2020-09-07 21:00 ./.local/share/
drwx------ matias/matias     0 2020-08-24 18:31 ./.local/share/notes/
drwx------ matias/matias     0 2020-08-24 18:32 ./.local/share/notes/Notas/
-rw-r--r-- matias/matias   134 2020-08-24 18:32 ./.local/share/notes/Notas/Notas
-rw------- matias/matias   218 2020-09-01 00:42 ./.local/share/recently-used.xbel
drwx------ matias/matias     0 2020-09-07 21:00 ./.local/share/nano/
lrwxrwxrwx matias/matias     0 2020-09-09 02:38 ./link-apache -> /etc/init.d/apache2
-rw------- matias/matias  2214 2020-09-09 16:20 ./.ICEauthority
lrwxrwxrwx matias/matias     0 2020-09-09 03:31 ./AAA -> A
drwx------ matias/matias     0 2020-08-18 18:24 ./.mozilla/
drwx------ matias/matias     0 2020-08-18 18:24 ./.mozilla/firefox/
drwx------ matias/matias     0 2020-08-18 18:24 ./.mozilla/firefox/Pending Pings/
drwx------ matias/matias     0 2020-08-18 18:24 ./.mozilla/firefox/gjah9rbv.default/
-rwx------ matias/matias    47 2020-08-18 18:24 ./.mozilla/firefox/gjah9rbv.default/times.json
drwx------ matias/matias     0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/
-rw------- matias/matias   555 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/handlers.json
-rw------- matias/matias   939 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/containers.json
-rw-r--r-- matias/matias 5242880 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/favicons.sqlite
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/bookmarkbackups/
-rw------- matias/matias     157 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/xulstore.json
-rw-r--r-- matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/AlternateServices.txt
-rw------- matias/matias    3591 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/addonStartup.json.lz4
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/crashes/
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/crashes/events/
-rw------- matias/matias    5632 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/prefs.js
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/datareporting/
-rw------- matias/matias     161 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/datareporting/session-state.json
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/2020-08/
-rw------- matias/matias    8798 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/2020-08/1597785884913.4fffcdc1-aaf1-45e3-ba52-157a9e55d6dd.main.jsonlz4
-rw------- matias/matias    2602 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/2020-08/1597785884904.b9b4d94d-7d97-4f51-9f32-74ecdfce26b5.new-profile.jsonlz4
-rw------- matias/matias    2884 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/2020-08/1597785884909.a0d8e889-1c42-418c-98cc-00fc56301e05.event.jsonlz4
-rw------- matias/matias    8790 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/datareporting/archived/2020-08/1597785884914.755a64cb-5eba-4efd-828e-35c1d629965a.first-shutdown.jsonlz4
-rw------- matias/matias      51 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/datareporting/state.json
-rw-r--r-- matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/.parentlock
-rw-r--r-- matias/matias  229376 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/content-prefs.sqlite
-rw-r--r-- matias/matias  131072 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/cookies.sqlite
-rw-r--r-- matias/matias 5242880 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/places.sqlite
-rw-r--r-- matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/TRRBlacklist.txt
-rw------- matias/matias    1023 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/extension-preferences.json
-rw------- matias/matias  229376 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/cert9.db
-rw-r--r-- matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/SecurityPreloadState.txt
-rw------- matias/matias     288 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/sessionCheckpoints.json
-rw------- matias/matias    2884 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/search.json.mozlz4
-rw------- matias/matias      45 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/addons.json
-rw-r--r-- matias/matias     479 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/SiteSecurityServiceState.txt
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/minidumps/
-rw------- matias/matias      50 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/times.json
-rw-r--r-- matias/matias   98304 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/webappsstore.sqlite
-rw------- matias/matias   79991 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/extensions.json
-rw------- matias/matias  294912 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/key4.db
-rw------- matias/matias     474 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/pkcs11.txt
-rw-r--r-- matias/matias   98304 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/permissions.sqlite
-rw-r--r-- matias/matias     512 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage.sqlite
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/sessionstore-backups/
-rw------- matias/matias    4014 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/sessionstore.jsonlz4
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/extensions/
-rw------- matias/matias     171 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/compatibility.ini
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/
-rw-r--r-- matias/matias      42 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/.metadata-v2
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/
-rw-r--r-- matias/matias   49152 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/1657114595AmcateirvtiSty.sqlite
-rw-r--r-- matias/matias   49152 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/1451318868ntouromlalnodry--epcr.sqlite
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/1451318868ntouromlalnodry--epcr.files/
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/3870112724rsegmnoittet-es.files/
-rw-r--r-- matias/matias  638976 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/3870112724rsegmnoittet-es.sqlite
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/3561288849sdhlie.files/
-rw-r--r-- matias/matias   49152 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/3561288849sdhlie.sqlite
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/njcs43kl.default-esr/storage/permanent/chrome/idb/1657114595AmcateirvtiSty.files/
-rw-r--r-- matias/matias      58 2020-08-18 18:24 ./.mozilla/firefox/installs.ini
-rw-r--r-- matias/matias     247 2020-08-18 18:24 ./.mozilla/firefox/profiles.ini
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/Crash Reports/
-rw------- matias/matias      10 2020-08-18 18:24 ./.mozilla/firefox/Crash Reports/InstallTime20200720181548
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/firefox/Crash Reports/events/
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/extensions/
drwx------ matias/matias       0 2020-08-18 18:24 ./.mozilla/systemextensionsdev/
-rw-r----- matias/matias       5 2020-09-09 16:20 ./.vboxclient-clipboard.pid
lrwxrwxrwx matias/matias       0 2020-09-09 03:45 ./passwd-link -> /etc/passwd
drwxr-xr-x matias/matias       0 2020-08-18 18:16 ./Vídeos/
-rw-r--r-- matias/matias       0 2020-09-09 03:34 ./A
drwxr-xr-x matias/matias       0 2020-09-09 16:53 ./backup/
-rw-r--r-- matias/matias   74266 2020-09-09 16:22 ./backup/lista_com
-rw-r--r-- matias/matias      44 2020-09-09 16:44 ./backup/lista_usu
drwxr-xr-x matias/matias       0 2020-08-18 18:16 ./Documentos/
lrwxrwxrwx matias/matias       0 2020-09-09 03:47 ./shadow-link -> /etc/shadow
-rw-r--r-- matias/matias   81920 2020-09-09 16:49 ./copia.tar
drwxr-xr-x matias/matias       0 2020-09-09 03:12 ./clave/
-rw-r--r-- matias/matias    2210 2020-09-09 03:12 ./clave/passwd
drwxr-xr-x matias/matias       0 2020-09-01 02:36 ./.config/
drwx------ matias/matias       0 2020-08-25 13:23 ./.config/xfce4-session/
drwxr-xr-x matias/matias       0 2020-08-24 20:37 ./.config/xfce4/
drwxr-xr-x matias/matias       0 2020-08-18 18:16 ./.config/xfce4/panel/
drwx------ matias/matias       0 2020-08-18 18:16 ./.config/xfce4/panel/launcher-9/
-rw-r--r-- matias/matias     423 2020-08-18 18:16 ./.config/xfce4/panel/launcher-9/15977853891.desktop
drwx------ matias/matias       0 2020-08-18 18:16 ./.config/xfce4/panel/launcher-10/
-rw-r--r-- matias/matias     483 2020-08-18 18:16 ./.config/xfce4/panel/launcher-10/15977853892.desktop
drwx------ matias/matias       0 2020-08-18 18:16 ./.config/xfce4/panel/launcher-11/
-rw-r--r-- matias/matias     442 2020-08-18 18:16 ./.config/xfce4/panel/launcher-11/15977853893.desktop
drwx------ matias/matias       0 2020-08-18 18:16 ./.config/xfce4/panel/launcher-12/
-rw-r--r-- matias/matias     400 2020-08-18 18:16 ./.config/xfce4/panel/launcher-12/15977853894.desktop
drwx------ matias/matias       0 2020-08-18 18:16 ./.config/xfce4/terminal/
-rw-r--r-- matias/matias    3680 2020-08-18 18:16 ./.config/xfce4/terminal/accels.scm
-rw-r--r-- matias/matias     462 2020-08-24 20:36 ./.config/xfce4/xfce4-taskmanager.rc
drwx------ matias/matias       0 2020-08-18 18:16 ./.config/xfce4/xfwm4/
-rw-r--r-- matias/matias      19 2020-08-24 20:33 ./.config/xfce4/help.rc
drwxr-xr-x matias/matias       0 2020-08-18 18:16 ./.config/xfce4/xfconf/
drwx------ matias/matias       0 2020-09-09 16:20 ./.config/xfce4/xfconf/xfce-perchannel-xml/
-rw-r--r-- matias/matias     276 2020-08-25 13:24 ./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-settings-manager.xml
-rw-r--r-- matias/matias    4395 2020-08-18 18:16 ./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-desktop.xml
-rw-r--r-- matias/matias    3501 2020-09-09 16:20 ./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-panel.xml
-rw-r--r-- matias/matias   10167 2020-08-18 18:16 ./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-keyboard-shortcuts.xml
-rw-r--r-- matias/matias    1495 2020-08-18 18:32 ./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-session.xml
-rw-r--r-- matias/matias     336 2020-08-25 13:24 ./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-settings-editor.xml
-rw-r--r-- matias/matias     273 2020-08-18 18:32 ./.config/xfce4/xfconf/xfce-perchannel-xml/xfce4-notifyd.xml
-rw-r--r-- matias/matias    5218 2020-08-18 18:16 ./.config/xfce4/xfconf/xfce-perchannel-xml/xfwm4.xml
-rw-r--r-- matias/matias     203 2020-08-31 22:41 ./.config/xfce4/xfconf/xfce-perchannel-xml/keyboards.xml
-rw-r--r-- matias/matias     337 2020-08-18 18:24 ./.config/xfce4/xfconf/xfce-perchannel-xml/thunar.xml
drwx------ matias/matias       0 2020-09-09 03:51 ./.config/xfce4/desktop/
-rw-r--r-- matias/matias     163 2020-09-08 19:44 ./.config/xfce4/desktop/icons.screen0-934x902.rc
-rw-r--r-- matias/matias     163 2020-09-09 03:51 ./.config/xfce4/desktop/icons.screen0-1904x914.rc
-rw-r--r-- matias/matias     125 2020-08-18 18:16 ./.config/xfce4/desktop/icons.screen0-784x584.rc
-rw-r--r-- matias/matias     163 2020-09-01 00:00 ./.config/xfce4/desktop/icons.screen0-784x504.rc
-rw-r--r-- matias/matias     281 2020-08-24 20:37 ./.config/xfce4/xfce4-notes.gtkrc
drwx------ matias/matias       0 2020-08-24 20:35 ./.config/Mousepad/
-rw-r--r-- matias/matias    5134 2020-08-24 20:35 ./.config/Mousepad/accels.scm
-rw-r--r-- matias/matias       5 2020-08-18 18:16 ./.config/user-dirs.locale
drwx------ matias/matias       0 2020-08-18 18:24 ./.config/Thunar/
-rw------- matias/matias     395 2020-08-18 18:24 ./.config/Thunar/uca.xml
-rw-r--r-- matias/matias    5273 2020-09-09 16:20 ./.config/Thunar/accels.scm
drwx------ matias/matias       0 2020-09-01 02:36 ./.config/procps/
-rw------- matias/matias     644 2020-08-18 18:16 ./.config/user-dirs.dirs
drwx------ matias/matias       0 2020-09-09 16:20 ./.config/dconf/
-rw-r--r-- matias/matias    2067 2020-09-09 16:20 ./.config/dconf/user
drwx------ matias/matias       0 2020-08-18 18:16 ./.config/pulse/
-rw------- matias/matias   12288 2020-09-08 19:47 ./.config/pulse/cd44de520bd642e69488d5d8ef40864c-device-volumes.tdb
-rw------- matias/matias       1 2020-09-09 16:20 ./.config/pulse/cd44de520bd642e69488d5d8ef40864c-default-sink
-rw------- matias/matias     256 2020-08-18 18:16 ./.config/pulse/cookie
-rw------- matias/matias     696 2020-08-18 18:16 ./.config/pulse/cd44de520bd642e69488d5d8ef40864c-stream-volumes.tdb
-rw------- matias/matias   45056 2020-08-18 18:16 ./.config/pulse/cd44de520bd642e69488d5d8ef40864c-card-database.tdb
-rw------- matias/matias       1 2020-09-09 16:20 ./.config/pulse/cd44de520bd642e69488d5d8ef40864c-default-source
drwx------ matias/matias       0 2020-09-01 00:42 ./.config/gtk-3.0/
-rw------- matias/matias      51 2020-09-09 16:20 ./.Xauthority
-rw------- matias/matias    2752 2020-09-09 16:20 ./.xsession-errors
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.cache/
drwx------ matias/matias       0 2020-09-07 23:37 ./.cache/sessions/
-rw-r--r-- matias/matias     230 2020-09-07 23:37 ./.cache/sessions/xfwm4-2b41916c3-d0e0-4737-b5a4-bb94db194521.state
-rw-r--r-- matias/matias     263 2020-08-18 18:31 ./.cache/sessions/xfwm4-2dfd72c32-9bc0-4d18-bf19-3f572afe5c77.state
-rw-r--r-- matias/matias    2475 2020-09-07 23:37 ./.cache/sessions/xfce4-session-debian:0
-rw-r--r-- matias/matias    3060 2020-09-01 19:18 ./.cache/sessions/xfce4-session-debian:0.bak
drwx------ matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/
drwx------ matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/
drwx------ matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/gjah9rbv.default/
drwx------ matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-trackwhite-simple.pset
-rw-r--r-- matias/matias    7648 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/block-flash-digest256.sbstore
-rw-r--r-- matias/matias     232 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-block-simple.sbstore
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flashallow-digest256.pset
-rw-r--r-- matias/matias     232 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-malware-simple.sbstore
-rw-r--r-- matias/matias    3580 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/mozplugin-block-digest256.sbstore
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/base-track-digest256.pset
-rw-r--r-- matias/matias   82744 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/block-flashsubdoc-digest256.sbstore
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-phish-simple.pset
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-block-simple.pset
-rw-r--r-- matias/matias     232 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-trackwhite-simple.sbstore
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flashsubdoc-digest256.pset
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/block-flashsubdoc-digest256.pset
-rw-r--r-- matias/matias     304 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flashsubdoc-digest256.sbstore
-rw-r--r-- matias/matias   59272 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/ads-track-digest256.sbstore
-rw-r--r-- matias/matias     232 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-harmful-simple.sbstore
-rw-r--r-- matias/matias   11104 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/analytics-track-digest256.sbstore
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flash-digest256.pset
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-unwanted-simple.pset
-rw-r--r-- matias/matias   72340 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/base-track-digest256.sbstore
-rw-r--r-- matias/matias     268 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flash-digest256.sbstore
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-malware-simple.pset
-rw-r--r-- matias/matias   18700 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/content-track-digest256.sbstore
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-harmful-simple.pset
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/social-track-digest256.pset
-rw-r--r-- matias/matias     232 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-unwanted-simple.sbstore
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/analytics-track-digest256.pset
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/allow-flashallow-digest256.pset
-rw-r--r-- matias/matias    2572 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/social-track-digest256.sbstore
-rw-r--r-- matias/matias     272 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-track-simple.sbstore
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/ads-track-digest256.pset
-rw-r--r-- matias/matias     232 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/except-flashallow-digest256.sbstore
-rw-r--r-- matias/matias     232 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-phish-simple.sbstore
-rw-r--r-- matias/matias     232 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/allow-flashallow-digest256.sbstore
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/content-track-digest256.pset
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/google4/
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/test-track-simple.pset
-rw-r--r-- matias/matias  458296 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/mozstd-trackwhite-digest256.sbstore
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/block-flash-digest256.pset
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/mozplugin-block-digest256.pset
-rw-r--r-- matias/matias      16 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/safebrowsing/mozstd-trackwhite-digest256.pset
drwx------ matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/
drwx------ matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/
-rw------- matias/matias   13461 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/83ADE40216D6A370A78A28ECA2EB0805FBD73379
-rw------- matias/matias    1276 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/20FF2AC5583B0097CC109C426C2028BFFDB6F10D
-rw------- matias/matias   10014 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/CC272A84C437C06018182F241F266FFC52770F69
-rw------- matias/matias    9352 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/E7DE6A2E092398D6655100CA653A72C5A1819E3E
-rw------- matias/matias    9900 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/B6F8D2A797B257A0FA38E0B262ECF974330E267C
-rw------- matias/matias    1276 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/5D7EED656A360F7171932CAEA249E6C8F2F37AA5
-rw------- matias/matias   26117 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/996D20D018E4F7762222CD38EB107482289071F3
-rw------- matias/matias    9691 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/78DBE55782B7B81AF853B4884323B48C34429A53
-rw------- matias/matias    1276 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/FA9AB486396637268818DF116C977F8A81C62A80
-rw------- matias/matias  105656 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/D68CAF7DF2821B6FF8FA7C896445E3FEDF710B49
-rw------- matias/matias    9180 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/03249B0B12F3E9B09D67FBA6461D0DC0231C8ACC
-rw------- matias/matias   11568 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0D288E5EFB5F6BD4D2FBED99FD460472CAB057B9
-rw------- matias/matias   18197 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0B1F93F56D27DAB33AE304F6CF4F6AEF68C31E0A
-rw------- matias/matias  105542 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/B9667D755101C1D21E786F253C654BD086964020
-rw------- matias/matias    8622 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/89DBE1DF558BB8439E2062ECC3272086F2E3FF1F
-rw------- matias/matias   12038 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/EF24CA4A4C9F65F851ACC2CDBDEFF0B7EB1A8BD0
-rw------- matias/matias   26347 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/9DF825CC78A660D81D571A4A46F060676D7CF4F3
-rw------- matias/matias   12457 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/DADD4F9B9A5498815F97C8458A170D119989A542
-rw------- matias/matias   10022 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/4903E7ABE348ED39D98D1C844FB81A906D5ECA16
-rw------- matias/matias   13470 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/C826F47B16117BA28458A47C4D3BA037A530889A
-rw------- matias/matias   11247 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0DDE7EBD8F3AD9D564DBF6AD91C37AB55D56D0AF
-rw------- matias/matias    8503 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/43234379F581348638A4940A6ADE08EFDE610BDB
-rw------- matias/matias  153800 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/4F7F8C85314AA6357D8FE326094823BCF481DAB0
-rw------- matias/matias   10102 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/DE946FEBDB6602261E439C36266EE3395B3D05B3
-rw------- matias/matias   10727 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/1761AD362311F7EAAC34E15A930400DDFE6299E0
-rw------- matias/matias   14235 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/103BE14A23A6DF77F47EFA85938B6926E6ECA347
-rw------- matias/matias   10413 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/6D730121FD763F5F1F5C0FA06E1E8AC73C97591D
-rw------- matias/matias   12346 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/BAEE5929C302B628351F8A770CA24F6C3585A52B
-rw------- matias/matias    9785 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/C3D12E2B603C194F2FE1E0DB12DB2A2BB4C4FE2A
-rw------- matias/matias     238 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0EDDF8C091E2FED62E44BEDDDC1723F5BF38FE4F
-rw------- matias/matias   10646 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/23EA9B0B9F6AB1B521FD52A464FA54FD53C11217
-rw------- matias/matias    9986 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/6D263E36A5B08A3BCDF5793C6C843DAA81B083BB
-rw------- matias/matias   10042 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/340A10D652987DF5E54312E31F5C22F6E8DBA574
-rw------- matias/matias   10850 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0318830328E6C5A25F4128E85A844818A3EF4040
-rw------- matias/matias   41411 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/4B6ED8BCAD25D8524A2762D781ED6AFB47AA1BE5
-rw------- matias/matias   10294 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/F8B51D2EC10AE9A943F8F24B1B1561CF237EA4EA
-rw------- matias/matias    9276 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/66F684AF9CC570C6247262B47C769C601C2A338B
-rw------- matias/matias   32872 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/E910D1FCE8BF27F5536B88567A4DC32624377CC3
-rw------- matias/matias   12464 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/447E62EE439AC61BDFBDB92986DBA56D2E79ADD8
-rw------- matias/matias   98434 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/179977EC1B5CF43A769203F2E63E4D2CCB00C0BE
-rw------- matias/matias    9455 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/D1FF650E4D89F0AF6D2D3412AE4EFA82EB6911AE
-rw------- matias/matias    1276 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/0D0F64D1E6826ADE9123EFDCDC3E125423305620
-rw------- matias/matias   48015 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/D2DB1CF83E7976F198B7B40E1C9CBEA4CF237C70
-rw------- matias/matias   12586 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/44BA9A5AAB74A795209F8B1E91F45308B9E2D97C
-rw------- matias/matias    1276 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/entries/D68DF503ED76B50297BF15F775A07FE8820C8200
-rw------- matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/ce_T151c2VyQ29udGV4dElkPTUsYSw=
drwx------ matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/doomed/
-rw------- matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/cache2/ce_T151c2VyQ29udGV4dElkPTUs
drwx------ matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/thumbnails/
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/
-rw-r--r-- matias/matias  764271 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/scriptCache-child.bin
-rw-r--r-- matias/matias 7262443 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/scriptCache.bin
-rw------- matias/matias   98199 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/webext.sc.lz4
-rw-r--r-- matias/matias    1816 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/urlCache.bin
-rw-r--r-- matias/matias 4830187 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/startupCache/startupCache.8.little
drwx------ matias/matias       0 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/OfflineCache/
-rw-r--r-- matias/matias  262144 2020-08-18 18:24 ./.cache/mozilla/firefox/njcs43kl.default-esr/OfflineCache/index.sqlite
drwxr-xr-x matias/matias       0 2020-08-18 18:16 ./.cache/gstreamer-1.0/
-rw------- matias/matias  978536 2020-08-18 18:16 ./.cache/gstreamer-1.0/registry.x86_64.bin
drwxr-xr-x matias/matias       0 2020-08-18 18:24 ./.cache/fontconfig/
-rw-r--r-- matias/matias     200 2020-08-18 18:24 ./.cache/fontconfig/CACHEDIR.TAG
-rw-r--r-- matias/matias    2552 2020-08-18 18:24 ./.cache/fontconfig/e74d411252dea466295e020db15a86c6-le64.cache-7
-rw-r----- matias/matias       5 2020-09-09 16:20 ./.vboxclient-draganddrop.pid
drwxr-xr-x matias/matias       0 2020-08-18 18:16 ./Imágenes/
-rw-r--r-- matias/matias      23 2020-08-18 18:32 ./.dmrc
```
### 8. Extraiga del archivo backup.tgz los archivos comprimidos, en el subdirectorio COPIAS creado en su directorio de conexión.
```
matias@debian:~$ mkdir COPIAS && cd COPIAS
matias@debian:~/COPIAS$ tar xzvf ../backup.tgz 
```
### 9. Comprima solamente el archivo lista_com como lista_com.gz. Luego verifique si el archivo
original todavía existe.
```
matias@debian:~$ gzip lista_com 
matias@debian:~$ ls -l lista_com
ls: no se puede acceder a 'lista_com': No existe el fichero o el directorio
```
El comando gzip reemplazo el archivo original lista_com por lista_com.gz
### 10. Muestre el contenido del archivo comprimido lista_com.gz y luego descomprímalo.
```
matias@debian:~$ zcat lista_com.gz
-rwxr-xr-x 1 root root      34976 ene 10  2019 flock
-rwxr-xr-x 1 root root      14328 ene 22  2019 fls
-rwxr-xr-x 1 root root      43680 feb 28  2019 fmt
-rwxr-xr-x 1 root root      39584 feb 28  2019 fold
-rwxr-xr-x 1 root root      35240 mar 18  2018 fonttosfnt
-rwxr-xr-x 1 root root      18512 may 31  2018 free
lrwxrwxrwx 1 root root         22 ago 18 17:54 from -> /etc/alternatives/from
-rwxr-xr-x 1 root root      14328 ene 22  2019 fsstat
-rwxr-xr-x 1 root root      22792 jul 30  2019 funzip
-rwsr-xr-x 1 root root      34896 abr 22 16:38 fusermount
lrwxrwxrwx 1 root root          5 feb 25  2019 g++ -> g++-8
lrwxrwxrwx 1 root root         22 abr  6  2019 g++-8 -> x86_64-linux-gnu-g++-8
-rwxr-xr-x 1 root root      14328 mar 23  2019 gamma4scanimage
-rwxr-xr-x 1 root root      22600 nov  6  2019 gapplication
-rwxr-xr-x 1 root root     731560 feb  8  2019 gbak
lrwxrwxrwx 1 root root          5 feb 25  2019 gcc -> gcc-8
lrwxrwxrwx 1 root root         22 abr  6  2019 gcc-8 -> x86_64-linux-gnu-gcc-8
lrwxrwxrwx 1 root root          8 feb 25  2019 gcc-ar -> gcc-ar-8
lrwxrwxrwx 1 root root         25 abr  6  2019 gcc-ar-8 -> x86_64-linux-gnu-gcc-ar-8
lrwxrwxrwx 1 root root          8 feb 25  2019 gcc-nm -> gcc-nm-8
lrwxrwxrwx 1 root root         25 abr  6  2019 gcc-nm-8 -> x86_64-linux-gnu-gcc-nm-8
lrwxrwxrwx 1 root root         12 feb 25  2019 gcc-ranlib -> gcc-ranlib-8
lrwxrwxrwx 1 root root         29 abr  6  2019 gcc-ranlib-8 -> x86_64-linux-gnu-gcc-ranlib-8
lrwxrwxrwx 1 root root          6 feb 25  2019 gcov -> gcov-8
lrwxrwxrwx 1 root root         23 abr  6  2019 gcov-8 -> x86_64-linux-gnu-gcov-8
lrwxrwxrwx 1 root root         11 feb 25  2019 gcov-dump -> gcov-dump-8
lrwxrwxrwx 1 root root         28 abr  6  2019 gcov-dump-8 -> x86_64-linux-gnu-gcov-dump-8
lrwxrwxrwx 1 root root         11 feb 25  2019 gcov-tool -> gcov-tool-8
lrwxrwxrwx 1 root root         28 abr  6  2019 gcov-tool-8 -> x86_64-linux-gnu-gcov-tool-8
-rwxr-xr-x 1 root root      14408 ene 22  2019 gcr-viewer
-rwxr-xr-x 1 root root      51280 nov  6  2019 gdbus
-rwxr-xr-x 1 root root       9228 dic 27  2018 gdialog
-rwxr-xr-x 1 root root      14344 mar  4  2019 gdk-pixbuf-csource
-rwxr-xr-x 1 root root      14328 mar  4  2019 gdk-pixbuf-pixdata
-rwxr-xr-x 1 root root      18512 mar  4  2019 gdk-pixbuf-thumbnailer
-rwxr-xr-x 1 root root      27240 may  1  2019 gencat
lrwxrwxrwx 1 root root          3 feb 28  2019 geqn -> eqn
lrwxrwxrwx 1 root root         11 may 14  2019 GET -> lwp-request
-rwxr-xr-x 1 root root      35192 may  1  2019 getconf
-rwxr-xr-x 1 root root      36192 may  1  2019 getent
-rwxr-xr-x 1 root root      31352 mar  1  2019 getfacl
-rwxr-xr-x 1 root root      14648 jul 28  2018 getkeycodes
-rwxr-xr-x 1 root root      22600 ene 10  2019 getopt
-rwxr-xr-x 1 root root      43640 nov 10  2018 gettext
-rwxr-xr-x 1 root root       4629 nov 10  2018 gettext.sh
-rwxr-xr-x 1 root root     182592 feb  8  2019 gfix
-rwxr-xr-x 1 root root      88152 nov  6  2019 gio
lrwxrwxrwx 1 root root         49 nov  6  2019 gio-querymodules -> ../lib/x86_64-linux-gnu/glib-2.0/gio-querymodules
lrwxrwxrwx 1 root root         53 nov  6  2019 glib-compile-schemas -> ../lib/x86_64-linux-gnu/glib-2.0/glib-compile-schemas
lrwxrwxrwx 1 root root         15 mar 10  2019 gnome-keyring -> gnome-keyring-3
-rwxr-xr-x 1 root root      22744 mar 10  2019 gnome-keyring-3
-rwxr-xr-x 1 root root    1106848 mar 10  2019 gnome-keyring-daemon
lrwxrwxrwx 1 root root         35 ago 18 18:07 gnome-www-browser -> /etc/alternatives/gnome-www-browser
lrwxrwxrwx 1 root root         21 mar 21  2019 gold -> x86_64-linux-gnu-gold
-rwsr-xr-x 1 root root      84016 jul 27  2018 gpasswd
-rwxr-xr-x 1 root root    1046256 ago 22  2019 gpg
-rwxr-xr-x 1 root root     406256 ago 22  2019 gpg-agent
-rwxr-xr-x 1 root root     874480 ago 22  2019 gpgcompose
-rwxr-xr-x 1 root root     170312 ago 22  2019 gpgconf
-rwxr-xr-x 1 root root     162664 ago 22  2019 gpg-connect-agent
-rwxr-xr-x 1 root root      30792 ago 22  2019 gpgparsemail
-rwxr-xr-x 1 root root     506976 ago 22  2019 gpgsm
-rwxr-xr-x 1 root root      84432 ago 22  2019 gpgsplit
-rwxr-xr-x 1 root root     154952 ago 22  2019 gpgtar
-rwxr-xr-x 1 root root     445432 ago 22  2019 gpgv
-rwxr-xr-x 1 root root     203824 ago 22  2019 gpg-wks-server
-rwxr-xr-x 1 root root       3516 ago 22  2019 gpg-zip
lrwxrwxrwx 1 root root          3 feb 28  2019 gpic -> pic
-rwxr-xr-x 1 root root     668208 feb  8  2019 gpre
lrwxrwxrwx 1 root root         22 mar 21  2019 gprof -> x86_64-linux-gnu-gprof
-rwxr-xr-x 1 root root     198976 ene  7  2019 grep
-rwxr-xr-x 1 root root      22520 nov  6  2019 gresource
-rwxr-xr-x 1 root root     124128 feb 28  2019 groff
-rwxr-xr-x 1 root root       2776 feb 28  2019 grog
-rwxr-xr-x 1 root root     181888 feb 28  2019 grops
-rwxr-xr-x 1 root root     132352 feb 28  2019 grotty
-rwxr-xr-x 1 root root      39584 feb 28  2019 groups
-rwxr-xr-x 1 root root     246680 jul 30 16:19 grub-editenv
-rwxr-xr-x 1 root root     676424 jul 30 16:19 grub-file
-rwxr-xr-x 1 root root     817848 jul 30 16:19 grub-fstest
-rwxr-xr-x 1 root root     246520 jul 30 16:19 grub-glue-efi
-rwxr-xr-x 1 root root       1681 jul 30 16:19 grub-kbdcomp
-rwxr-xr-x 1 root root     226088 jul 30 16:19 grub-menulst2cfg
-rwxr-xr-x 1 root root     267672 jul 30 16:19 grub-mkfont
-rwxr-xr-x 1 root root     341816 jul 30 16:19 grub-mkimage
-rwxr-xr-x 1 root root     246808 jul 30 16:19 grub-mklayout
-rwxr-xr-x 1 root root     391720 jul 30 16:19 grub-mknetdir
-rwxr-xr-x 1 root root     250968 jul 30 16:19 grub-mkpasswd-pbkdf2
-rwxr-xr-x 1 root root     242104 jul 30 16:19 grub-mkrelpath
-rwxr-xr-x 1 root root     851144 jul 30 16:19 grub-mkrescue
-rwxr-xr-x 1 root root     469880 jul 30 16:19 grub-mkstandalone
-rwxr-xr-x 1 root root     623832 jul 30 16:19 grub-mount
lrwxrwxrwx 1 root root         34 jul 30 16:19 grub-ntldr-img -> ../lib/grub/i386-pc/grub-ntldr-img
-rwxr-xr-x 1 root root     693416 jul 30 16:19 grub-render-label
-rwxr-xr-x 1 root root     262712 jul 30 16:19 grub-script-check
-rwxr-xr-x 1 root root     640696 jul 30 16:19 grub-syslinux2cfg
-rwxr-xr-x 1 root root     379256 feb  8  2019 gsec
-rwxr-xr-x 1 root root      30792 nov  6  2019 gsettings
lrwxrwxrwx 1 root root          3 feb 28  2019 gtbl -> tbl
-rwxr-xr-x 1 root root      18632 mar  5  2019 gtf
-rwxr-xr-x 1 root root      35248 feb  5  2019 gtk-builder-tool
-rwxr-xr-x 1 root root      18584 feb  5  2019 gtk-launch
-rwxr-xr-x 1 root root      14328 feb  5  2019 gtk-query-settings
-rwxr-xr-x 1 root root      39392 feb  5  2019 gtk-update-icon-cache
-rwxr-xr-x 2 root root       2345 ene  5  2019 gunzip
-rwxr-xr-x 1 root root       6375 ene  5  2019 gzexe
-rwxr-xr-x 1 root root      98048 ene  5  2019 gzip
-rwxr-xr-x 1 root root      29224 jul 21 16:27 h2ph
-rwxr-xr-x 1 root root      60866 jul 21 16:27 h2xs
lrwxrwxrwx 1 root root          7 may  4  2018 hd -> hexdump
-rwxr-xr-x 1 root root      47840 feb 28  2019 head
lrwxrwxrwx 1 root root         11 may 14  2019 HEAD -> lwp-request
-rwxr-xr-x 1 root root       2514 jun 15  2019 helpztags
-rwxr-xr-x 1 root root      27184 may  4  2018 hexdump
-rwxr-xr-x 1 root root      14328 ene 22  2019 hfind
-rwxr-xr-x 1 root root     129672 may 18 05:02 host
-rwxr-xr-x 1 root root      35424 feb 28  2019 hostid
-rwxr-xr-x 1 root root      26696 sep 27  2018 hostname
-rwxr-xr-x 1 root root      26696 abr 27 14:02 hostnamectl
-rwxr-xr-x 1 root root      34816 oct 15  2019 htcacheclean
-rwxr-xr-x 1 root root      26616 oct 15  2019 htdbm
-rwxr-xr-x 1 root root      14328 oct 15  2019 htdigest
-rwxr-xr-x 1 root root      26616 oct 15  2019 htpasswd
-rwxr-xr-x 1 root root         52 ene  8  2019 hv3
lrwxrwxrwx 1 root root          7 ene 10  2019 i386 -> setarch
-rwxr-xr-x 1 root root      14328 ene 22  2019 icat
-rwxr-xr-x 1 root root      39472 mar 18  2018 iceauth
-rwxr-xr-x 1 root root      47824 mar 18  2018 ico
-rwxr-xr-x 1 root root      35200 may  5  2018 icombine
-rwxr-xr-x 1 root root      60424 may  1  2019 iconv
-rwxr-xr-x 1 root root      43808 feb 28  2019 id
-rwxr-xr-x 1 root root      26696 mar 30  2019 iecset
-rwxr-xr-x 1 root root      14328 ene 22  2019 ifind
-rwxr-xr-x 1 root root      14368 may  5  2018 ijoin
-rwxr-xr-x 1 root root      14328 ene 22  2019 ils
-rwxr-xr-x 1 root root      14328 ene 22  2019 img_cat
-rwxr-xr-x 1 root root      14328 ene 22  2019 img_stat
-rwxr-xr-x 1 root root      63560 nov  2  2019 infocmp
lrwxrwxrwx 1 root root          3 nov  2  2019 infotocap -> tic
-rwxr-xr-x 1 root root     155240 feb 28  2019 install
-rwxr-xr-x 1 root root         95 dic 27  2018 install-printerdriver
-rwxr-xr-x 1 root root       4370 jul 21 16:27 instmodsh
-rwxr-xr-x 1 root root      68848 oct  9  2018 intel-virtual-output
-rwxr-xr-x 1 root root      30800 ene 10  2019 ionice
-rwxr-xr-x 1 root root     584392 ene 10  2019 ip
-rwxr-xr-x 1 root root      30864 ene 10  2019 ipcmk
-rwxr-xr-x 1 root root      30800 ene 10  2019 ipcrm
-rwxr-xr-x 1 root root      67664 ene 10  2019 ipcs
lrwxrwxrwx 1 root root         28 mar  1  2019 iptables-xml -> ../sbin/xtables-legacy-multi
-rwxr-xr-x 1 root root      14576 ene 21  2019 ischroot
-rwxr-xr-x 1 root root      19024 jun 26  2017 isdv4-serial-debugger
-rwxr-xr-x 1 root root      19088 jun 26  2017 isdv4-serial-inputattach
-rwxr-xr-x 1 root root      96728 may  5  2018 ispell
-rwxr-xr-x 1 root root       7222 nov 15  2018 ispell-wrapper
-rwxr-xr-x 1 root root     551424 feb  8  2019 isql-fb
-rwxr-xr-x 1 root root      14328 ene 22  2019 istat
lrwxrwxrwx 1 root root         22 ago 18 18:07 java -> /etc/alternatives/java
-rwxr-xr-x 1 root root      14328 ene 22  2019 jcat
lrwxrwxrwx 1 root root         23 ago 18 18:07 jexec -> /etc/alternatives/jexec
lrwxrwxrwx 1 root root         21 ago 18 18:07 jfr -> /etc/alternatives/jfr
lrwxrwxrwx 1 root root         21 ago 18 18:07 jjs -> /etc/alternatives/jjs
-rwxr-xr-x 1 root root      14328 ene 22  2019 jls
-rwxr-xr-x 1 root root      51968 feb 28  2019 join
-rwxr-xr-x 1 root root      67672 abr 27 14:02 journalctl
-rwxr-xr-x 1 root root      14328 ene 22  2019 jpeg_extract
-rwxr-xr-x 1 root root       4379 jul 21 16:27 json_pp
-rwxr-xr-x 1 root root      14656 jul 28  2018 kbdinfo
-rwxr-xr-x 1 root root      14648 jul 28  2018 kbd_mode
-rwxr-xr-x 1 root root     166568 ago 22  2019 kbxutil
-rwxr-xr-x 1 root root       4639 feb 14  2019 kernel-install
lrwxrwxrwx 1 root root         25 ago 18 18:07 keytool -> /etc/alternatives/keytool
-rwxr-xr-x 1 root root      26704 may 31  2018 kill
-rwxr-xr-x 1 root root     166072 feb  9  2019 kmod
-rwxr-xr-x 1 root root       3759 feb 14  2019 koi8rxterm
-rwxr-xr-x 1 root root       3820 ago 12  2017 laptop-detect
-rwxr-xr-x 1 root root      47184 ene 10  2019 last
lrwxrwxrwx 1 root root          4 ene 10  2019 lastb -> last
-rwxr-xr-x 1 root root      22600 jul 27  2018 lastlog
-rwxr-xr-x 1 root root       7786 dic 14  2018 lcf
lrwxrwxrwx 1 root root         19 mar 21  2019 ld -> x86_64-linux-gnu-ld
lrwxrwxrwx 1 root root         23 mar 21  2019 ld.bfd -> x86_64-linux-gnu-ld.bfd
-rwxr-xr-x 1 root root       5388 may  1  2019 ldd
lrwxrwxrwx 1 root root         24 mar 21  2019 ld.gold -> x86_64-linux-gnu-ld.gold
-rwxr-xr-x 1 root root     166664 may  7  2018 less
-rwxr-xr-x 1 root root      10256 may  7  2018 lessecho
lrwxrwxrwx 1 root root          8 may  7  2018 lessfile -> lesspipe
-rwxr-xr-x 1 root root      19856 may  7  2018 lesskey
-rwxr-xr-x 1 root root       8564 may  7  2018 lesspipe
-rwxr-xr-x 1 root root      96840 feb 10  2019 lexgrog
lrwxrwxrwx 1 root root         21 ago 18 18:04 lft -> /etc/alternatives/lft
-rwxr-xr-x 1 root root       2493 ago 29  2016 lft.db
-rwxr-xr-x 1 root root      15775 jul 21 16:27 libnetcfg
lrwxrwxrwx 1 root root         34 feb  1  2020 libreoffice -> ../lib/libreoffice/program/soffice
-rwxr-xr-x 1 root root      14712 feb 28  2019 libwacom-list-local-devices
-rwxr-xr-x 1 root root     109176 ene 28  2019 light-locker
-rwxr-xr-x 1 root root      23064 ene 28  2019 light-locker-command
-rwxr-xr-x 1 root root      35424 feb 28  2019 link
lrwxrwxrwx 1 root root          7 ene 10  2019 linux32 -> setarch
lrwxrwxrwx 1 root root          7 ene 10  2019 linux64 -> setarch
-rwxr-xr-x 1 root root       1577 ago 10  2018 linux-boot-prober
-rwxr-xr-x 1 root root       4674 sep  5  2018 linux-check-removal
-rwxr-xr-x 1 root root       6320 jun  4  2016 linux-update-symlinks
-rwxr-xr-x 1 root root       2696 ago 11  2015 linux-version
-rwxr-xr-x 1 root root      10872 mar 18  2018 listres
-rwxr-xr-x 1 root root      68552 feb 28  2019 ln
-rwxr-xr-x 1 root root      23288 ene 10  2019 lnstat
-rwxr-xr-x 1 root root     212112 jul 28  2018 loadkeys
-rwxr-xr-x 1 root root      35440 jul 28  2018 loadunimap
-rwxr-xr-x 1 root root         59 feb  1  2020 lobase
-rwxr-xr-x 1 root root         59 feb  1  2020 localc
-rwxr-xr-x 1 root root      55336 may  1  2019 locale
-rwxr-xr-x 1 root root      26696 abr 27 14:02 localectl
-rwxr-xr-x 1 root root     306944 may  1  2019 localedef
-rwxr-xr-x 1 root root         59 feb  1  2020 lodraw
-rwxr-xr-x 1 root root         53 feb  1  2020 loffice
-rwxr-xr-x 1 root root         64 feb  1  2020 lofromtemplate
-rwxr-xr-x 1 root root      47792 ene 10  2019 logger
-rwxr-xr-x 1 root root      56760 jul 27  2018 login
-rwxr-xr-x 1 root root      55480 abr 27 14:02 loginctl
-rwxr-xr-x 1 root root      35424 feb 28  2019 logname
-rwxr-xr-x 1 root root      14336 oct 15  2019 logresolve
-rwxr-xr-x 1 root root         62 feb  1  2020 loimpress
-rwxr-xr-x 1 root root         59 feb  1  2020 lomath
-rwxr-xr-x 1 root root      10744 may  4  2018 look
-rwxr-xr-x 1 root root       2885 may  4  2018 lorder
-rwxr-xr-x 1 root root         58 feb  1  2020 loweb
-rwxr-xr-x 1 root root     117456 mar 21  2019 lowntfs-3g
-rwxr-xr-x 1 root root         61 feb  1  2020 lowriter
-rwxr-xr-x 1 root root      18424 abr 25 11:27 lp
-rwxr-xr-x 1 root root      22600 abr 25 11:27 lpoptions
-rwxr-xr-x 1 root root      51192 may 23  2016 lp_solve
-rwxr-xr-x 1 root root      39200 abr 25 11:27 lpstat
-rwxr-xr-x 1 root root     138856 feb 28  2019 ls
-rwxr-xr-x 1 root root      14336 ene  9  2020 lsattr
-rwxr-xr-x 1 root root     108624 ene 10  2019 lsblk
-rwxr-xr-x 1 root root       3638 may 14  2019 lsb_release
-rwxr-xr-x 1 root root      88144 ene 10  2019 lscpu
-rwxr-xr-x 1 root root        706 feb  6  2019 lsinitramfs
-rwxr-xr-x 1 root root      92240 ene 10  2019 lsipc
-rwxr-xr-x 1 root root      35232 ene 10  2019 lslocks
-rwxr-xr-x 1 root root      67664 ene 10  2019 lslogins
-rwxr-xr-x 1 root root      63568 ene 10  2019 lsmem
lrwxrwxrwx 1 root root          4 feb  9  2019 lsmod -> kmod
-rwxr-xr-x 1 root root      51280 ene 10  2019 lsns
-rwxr-xr-x 1 root root     175584 ene 12  2019 lsof
-rwxr-xr-x 1 root root      82240 nov 30  2016 lspci
-rwxr-xr-x 1 root root       1081 ago 28  2017 lspgpot
-rwxr-xr-x 1 root root     240408 feb 24  2019 lsusb
-rwxr-xr-x 1 root root      49888 mar 18  2018 luit
-rwxr-xr-x 1 root root      10292 may 14  2019 lwp-download
-rwxr-xr-x 1 root root       2711 may 14  2019 lwp-dump
-rwxr-xr-x 1 root root       2413 may 14  2019 lwp-mirror
-rwxr-xr-x 1 root root      16200 may 14  2019 lwp-request
-rwxr-xr-x 1 root root        419 feb 14  2019 lxterm
lrwxrwxrwx 1 root root         23 ago 18 17:55 lzcat -> /etc/alternatives/lzcat
lrwxrwxrwx 1 root root         23 ago 18 17:55 lzcmp -> /etc/alternatives/lzcmp
lrwxrwxrwx 1 root root         24 ago 18 17:55 lzdiff -> /etc/alternatives/lzdiff
lrwxrwxrwx 1 root root         25 ago 18 17:55 lzegrep -> /etc/alternatives/lzegrep
lrwxrwxrwx 1 root root         25 ago 18 17:55 lzfgrep -> /etc/alternatives/lzfgrep
lrwxrwxrwx 1 root root         24 ago 18 17:55 lzgrep -> /etc/alternatives/lzgrep
lrwxrwxrwx 1 root root         24 ago 18 17:55 lzless -> /etc/alternatives/lzless
lrwxrwxrwx 1 root root         22 ago 18 17:55 lzma -> /etc/alternatives/lzma
-rwxr-xr-x 1 root root      14656 ene 27  2019 lzmainfo
lrwxrwxrwx 1 root root         24 ago 18 17:55 lzmore -> /etc/alternatives/lzmore
-rwxr-xr-x 1 root root      27267 ene 22  2019 mactime
-rwxr-xr-x 1 root root     232032 jul 28  2018 make
-rwxr-xr-x 1 root root       4905 jul 28  2018 make-first-existing-target
-rwxr-xr-x 1 root root     115200 feb 10  2019 man
-rwxr-xr-x 1 root root     137952 feb 10  2019 mandb
-rwxr-xr-x 1 root root      35296 feb 10  2019 manpath
-rwxr-xr-x 1 root root      27216 jul 28  2018 mapscrn
-rwxr-xr-x 1 root root     121976 mar 23  2012 mawk
-rwxr-xr-x 1 root root      34960 ene 10  2019 mcookie
-rwxr-xr-x 1 root root      47840 feb 28  2019 md5sum
lrwxrwxrwx 1 root root          6 feb 28  2019 md5sum.textutils -> md5sum
-rwxr-xr-x 1 root root      14408 ene 10  2019 mesg
-rwxr-xr-x 1 root root       3060 ago 21  2019 migrate-pubring-from-classic-gpg
-rwxr-xr-x 1 root root       8626 ago  6  2018 mimeopen
-rwxr-xr-x 1 root root      12060 ago  6  2018 mimetype
-rwxr-xr-x 1 root root      89088 feb 28  2019 mkdir
-rwxr-xr-x 1 root root      64416 feb 28  2019 mkfifo
-rwxr-xr-x 1 root root         65 mar 18  2018 mkfontdir
-rwxr-xr-x 1 root root      39992 mar 18  2018 mkfontscale
-rwxr-xr-x 1 root root      16163 jul 28  2018 mk_modmap
-rwxr-xr-x 1 root root      68544 feb 28  2019 mknod
-rwxr-xr-x 1 root root      43808 feb 28  2019 mktemp
-rwxr-xr-x 1 root root      14328 ene 22  2019 mmcat
-rwxr-xr-x 1 root root     208944 feb  5  2019 mmcli
-rwxr-xr-x 1 root root      14328 ene 22  2019 mmls
-rwxr-xr-x 1 root root      14328 ene 22  2019 mmstat
-rwxr-xr-x 1 root root      43008 ene 10  2019 more
-rwsr-xr-x 1 root root      51280 ene 10  2019 mount
-rwxr-xr-x 1 root root      14408 ene 10  2019 mountpoint
-rwxr-xr-x 1 root root     276632 nov 10  2018 mousepad
-rwxr-xr-x 1 root root       3210 ago  7  2017 mpexpand
lrwxrwxrwx 1 root root         20 ago 18 17:54 mt -> /etc/alternatives/mt
-rwxr-xr-x 1 root root      85320 abr 23  2019 mt-gnu
-rwxr-xr-x 1 root root       6462 may  1  2019 mtrace
-rwxr-xr-x 1 root root      31982 may  5  2018 munchlist
-rwxr-xr-x 1 root root     138728 feb 28  2019 mv
-rwxr-xr-x 1 root root      34896 ene 10  2019 namei
-rwxr-xr-x 1 root root     246160 jun 11  2019 nano
lrwxrwxrwx 1 root root         22 ago 18 17:52 nawk -> /etc/alternatives/nawk
-rwxr-xr-x 1 root root     309608 feb  8  2019 nbackup
lrwxrwxrwx 1 root root         20 ago 18 18:04 nc -> /etc/alternatives/nc
-rwxr-xr-x 1 root root      29848 may  4  2018 ncal
-rwxr-xr-x 1 root root      27400 abr 13  2017 nc.traditional
-rwxr-xr-x 1 root root        913 feb 28  2019 neqn
lrwxrwxrwx 1 root root         24 ago 18 18:04 netcat -> /etc/alternatives/netcat
-rwxr-xr-x 1 root root      47176 abr 27 14:02 networkctl
-rwsr-xr-x 1 root root      44440 jul 27  2018 newgrp
-rwxr-xr-x 1 root root      43656 nov 10  2018 ngettext
-rwxr-xr-x 1 root root      39552 feb 28  2019 nice
lrwxrwxrwx 1 root root          8 sep 27  2018 nisdomainname -> hostname
-rwxr-xr-x 1 root root      43808 feb 28  2019 nl
lrwxrwxrwx 1 root root         19 mar 21  2019 nm -> x86_64-linux-gnu-nm
-rwxr-xr-x 1 root root     308320 abr 19  2019 nm-applet
-rwxr-xr-x 1 root root     762392 oct  4  2019 nmcli
-rwxr-xr-x 1 root root     824768 abr 19  2019 nm-connection-editor
-rwxr-xr-x 1 root root      18992 oct  4  2019 nm-online
-rwxr-xr-x 1 root root     257328 oct  4  2019 nmtui
lrwxrwxrwx 1 root root          5 oct  4  2019 nmtui-connect -> nmtui
lrwxrwxrwx 1 root root          5 oct  4  2019 nmtui-edit -> nmtui
lrwxrwxrwx 1 root root          5 oct  4  2019 nmtui-hostname -> nmtui
-rwxr-xr-x 1 root root       7234 ago  7  2017 nns
-rwxr-xr-x 1 root root       3373 ago  7  2017 nnsd
-rwxr-xr-x 1 root root       4485 ago  7  2017 nnslog
-rwxr-xr-x 1 root root      39584 feb 28  2019 nohup
-rwxr-xr-x 1 root root      18520 dic 28  2018 notify-send
-rwxr-xr-x 1 root root      39584 feb 28  2019 nproc
-rwxr-xr-x 1 root root       3293 feb 28  2019 nroff
-rwxr-xr-x 1 root root      35104 ene 10  2019 nsenter
-rwxr-xr-x 1 root root      81040 ene 10  2019 nstat
-rwsr-xr-x 1 root root     154352 mar 21  2019 ntfs-3g
-rwxr-xr-x 1 root root      14408 mar 21  2019 ntfs-3g.probe
-rwxr-xr-x 1 root root      34920 mar 21  2019 ntfscat
-rwxr-xr-x 1 root root      39016 mar 21  2019 ntfscluster
-rwxr-xr-x 1 root root      39016 mar 21  2019 ntfscmp
-rwxr-xr-x 1 root root      51320 mar 21  2019 ntfsdecrypt
-rwxr-xr-x 1 root root      39024 mar 21  2019 ntfsfallocate
-rwxr-xr-x 1 root root      43120 mar 21  2019 ntfsfix
-rwxr-xr-x 1 root root      59512 mar 21  2019 ntfsinfo
-rwxr-xr-x 1 root root      36024 mar 21  2019 ntfsls
-rwxr-xr-x 1 root root      39016 mar 21  2019 ntfsmove
-rwxr-xr-x 1 root root     120936 mar 21  2019 ntfsrecover
-rwxr-xr-x 1 root root      96864 mar 21  2019 ntfssecaudit
-rwxr-xr-x 1 root root      43040 mar 21  2019 ntfstruncate
-rwxr-xr-x 1 root root      38936 mar 21  2019 ntfsusermap
-rwxr-xr-x 1 root root      47752 mar 21  2019 ntfswipe
-rwxr-xr-x 1 root root      64320 feb 28  2019 numfmt
lrwxrwxrwx 1 root root         24 mar 21  2019 objcopy -> x86_64-linux-gnu-objcopy
lrwxrwxrwx 1 root root         24 mar 21  2019 objdump -> x86_64-linux-gnu-objdump
-rwxr-xr-x 1 root root      24432 mar 18  2018 oclock
-rwxr-xr-x 1 root root      72480 feb 28  2019 od
lrwxrwxrwx 1 root root         17 abr 20  2019 on_ac_power -> /sbin/on_ac_power
-rwxr-xr-x 1 root root     736776 abr 20 17:23 openssl
-rwxr-xr-x 1 root root      23424 jul 28  2018 openvt
-rwxr-xr-x 1 root root        429 ene 18  2019 operon
-rwxr-xr-x 1 root root       8719 oct 20  2018 orca
-rwxr-xr-x 1 root root         70 jul  8  2018 orca-dm-wrapper
-rwxr-xr-x 1 root root       4551 ago 10  2018 os-prober
-rwxr-xr-x 1 root root      34904 feb 16  2019 p11-kit
-rwxr-xr-x 1 root root       4754 feb  5  2018 p7zip
-rwxr-xr-x 1 root root      51312 ago 15  2019 pacat
lrwxrwxrwx 1 root root         25 ago 18 18:07 pack200 -> /etc/alternatives/pack200
-rwxr-xr-x 1 root root      18504 ago 15  2019 pacmd
-rwxr-xr-x 1 root root      63576 ago 15  2019 pactl
-rwxr-xr-x 1 root root       2259 ago 15  2019 padsp
-rwxr-xr-x 1 root root      19490 ago  7  2017 page
lrwxrwxrwx 1 root root         23 ago 18 17:53 pager -> /etc/alternatives/pager
lrwxrwxrwx 1 root root          5 ago 15  2019 pamon -> pacat
-rwxr-xr-x 1 root root      14632 jun 25  2019 paperconf
lrwxrwxrwx 1 root root          5 ago 15  2019 paplay -> pacat
lrwxrwxrwx 1 root root          5 ago 15  2019 parec -> pacat
lrwxrwxrwx 1 root root          5 ago 15  2019 parecord -> pacat
-rwxr-xr-x 1 root root     398120 abr 13  2018 parole
-rwxr-xr-x 1 root root     108624 ene 10  2019 partx
-rwsr-xr-x 1 root root      63736 jul 27  2018 passwd
-rwxr-xr-x 1 root root      39584 feb 28  2019 paste
-rwxr-xr-x 1 root root      18512 ago 15  2019 pasuspender
-rwxr-xr-x 1 root root     187840 jul 26  2019 patch
-rwxr-xr-x 1 root root      39552 feb 28  2019 pathchk
-rwxr-xr-x 1 root root     448712 dic 24  2017 pavucontrol
-rwxr-xr-x 1 root root      14328 ago 15  2019 pax11publish
-rwxr-xr-x 1 root root      14936 nov 30  2016 pcimodules
lrwxrwxrwx 1 root root          4 mar  4  2019 pdb -> pdb2
lrwxrwxrwx 1 root root          6 mar  4  2019 pdb2 -> pdb2.7
lrwxrwxrwx 1 root root         23 oct 10  2019 pdb2.7 -> ../lib/python2.7/pdb.py
lrwxrwxrwx 1 root root          6 mar 26  2019 pdb3 -> pdb3.7
lrwxrwxrwx 1 root root         23 jul 25 10:03 pdb3.7 -> ../lib/python3.7/pdb.py
-rwxr-xr-x 1 root root        528 jul 19  2018 perf
-rwxr-xr-x 2 root root    3201864 jul 21 16:27 perl
-rwxr-xr-x 2 root root    3201864 jul 21 16:27 perl5.28.1
-rwxr-xr-x 1 root root      14512 jul 21 16:27 perl5.28-x86_64-linux-gnu
-rwxr-xr-x 2 root root      46366 jul 21 16:27 perlbug
-rwxr-xr-x 1 root root        125 jul 21 16:27 perldoc
-rwxr-xr-x 1 root root      10864 jul 21 16:27 perlivp
-rwxr-xr-x 2 root root      46366 jul 21 16:27 perlthanks
-rwxr-xr-x 1 root root      26712 may 31  2018 pgrep
-rwxr-xr-x 1 root root     213024 feb 28  2019 pic
lrwxrwxrwx 1 root root         22 ago 18 17:54 pico -> /etc/alternatives/pico
-rwxr-xr-x 1 root root       8357 jul 21 16:27 piconv
lrwxrwxrwx 1 root root         14 feb 14  2019 pidof -> /sbin/killall5
lrwxrwxrwx 1 root root         26 ago 18 18:04 pinentry -> /etc/alternatives/pinentry
-rwxr-xr-x 1 root root      63992 abr 17  2019 pinentry-curses
-rwxr-xr-x 1 root root      76280 abr 17  2019 pinentry-gnome3
lrwxrwxrwx 1 root root         30 ago 18 18:07 pinentry-x11 -> /etc/alternatives/pinentry-x11
-rwxr-xr-x 1 root root      69368 ene 13  2020 ping
lrwxrwxrwx 1 root root          4 ene 13  2020 ping4 -> ping
lrwxrwxrwx 1 root root          4 ene 13  2020 ping6 -> ping
-rwxr-xr-x 1 root root      43840 feb 28  2019 pinky
-rwxr-xr-x 1 root root      14656 ene 15  2019 pkaction
-rwxr-xr-x 1 root root      23192 ene 15  2019 pkcheck
-rwxr-xr-x 1 root root      73432 mar  2  2019 pkcon
-rwsr-xr-x 1 root root      23288 ene 15  2019 pkexec
lrwxrwxrwx 1 root root          5 may 31  2018 pkill -> pgrep
-rwxr-xr-x 1 root root      23032 mar  2  2019 pkmon
-rwxr-xr-x 1 root root      18808 ene 15  2019 pkttyagent
-rwxr-xr-x 1 root root       4533 jul 21 16:27 pl2pm
-rwxr-xr-x 1 root root      23112 may  1  2019 pldd
-rwxr-xr-x 1 root root        146 feb 20  2020 plog
-rwxr-xr-x 1 root root      39512 abr  8  2019 plymouth
-rwxr-xr-x 1 root root      30808 may 31  2018 pmap
-rwxr-xr-x 1 root root       4134 jul 21 16:27 pod2html
-rwxr-xr-x 1 root root      15213 jul 21 16:27 pod2man
-rwxr-xr-x 1 root root      11110 jul 21 16:27 pod2text
-rwxr-xr-x 1 root root       3948 jul 21 16:27 pod2usage
-rwxr-xr-x 1 root root       3658 jul 21 16:27 podchecker
-rwxr-xr-x 1 root root       2527 jul 21 16:27 podselect
-rwxr-xr-x 1 root root       2837 feb 20  2020 poff
-rwxr-xr-x 1 root root       1362 feb 20  2020 pon
lrwxrwxrwx 1 root root         11 may 14  2019 POST -> lwp-request
-rwxr-xr-x 1 root root      76736 feb 28  2019 pr
-rwxr-xr-x 1 root root       5656 ene 31  2019 precat
-rwxr-xr-x 1 root root      67784 feb 28  2019 preconv
-rwxr-xr-x 1 root root       5656 ene 31  2019 preunzip
-rwxr-xr-x 1 root root       5656 ene 31  2019 prezip
-rwxr-xr-x 1 root root      14328 ene 31  2019 prezip-bin
lrwxrwxrwx 1 root root         11 feb  9  2019 print -> run-mailcap
-rwxr-xr-x 1 root root      35424 feb 28  2019 printenv
-rwxr-xr-x 1 root root      22760 may  4  2018 printerbanner
-rwxr-xr-x 1 root root      56000 feb 28  2019 printf
-rwxr-xr-x 1 root root      39520 ene 10  2019 prlimit
-rwxr-xr-x 1 root root      13655 jul 21 16:27 prove
-rwxr-xr-x 1 root root     133432 may 31  2018 ps
lrwxrwxrwx 1 root root          9 jul 28  2018 psfaddtable -> psfxtable
lrwxrwxrwx 1 root root          9 jul 28  2018 psfgettable -> psfxtable
lrwxrwxrwx 1 root root          9 jul 28  2018 psfstriptable -> psfxtable
-rwxr-xr-x 1 root root      22848 jul 28  2018 psfxtable
-rwxr-xr-x 1 root root       4168 ago  7  2017 pt
-rwxr-xr-x 1 root root       3549 jul 21 16:27 ptar
-rwxr-xr-x 1 root root       2628 jul 21 16:27 ptardiff
-rwxr-xr-x 1 root root       4392 jul 21 16:27 ptargrep
-rwxr-xr-x 1 root root      76704 feb 28  2019 ptx
-rwxr-xr-x 1 root root      92328 ago 15  2019 pulseaudio
-rwxr-xr-x 1 root root      39616 feb 28  2019 pwd
-rwxr-xr-x 1 root root      10312 may 31  2018 pwdx
-rwxr-xr-x 1 root root       7806 mar 26  2019 py3clean
-rwxr-xr-x 1 root root      12113 mar 26  2019 py3compile
lrwxrwxrwx 1 root root         31 mar 26  2019 py3versions -> ../share/python3/py3versions.py
-rwxr-xr-x 1 root root       4124 mar  4  2019 pyclean
-rwxr-xr-x 1 root root      11895 mar  4  2019 pycompile
lrwxrwxrwx 1 root root          6 mar  4  2019 pydoc -> pydoc2
lrwxrwxrwx 1 root root          8 mar  4  2019 pydoc2 -> pydoc2.7
-rwxr-xr-x 1 root root         79 oct 10  2019 pydoc2.7
lrwxrwxrwx 1 root root          8 mar 26  2019 pydoc3 -> pydoc3.7
-rwxr-xr-x 1 root root         79 jul 25 10:03 pydoc3.7
lrwxrwxrwx 1 root root         10 mar  4  2019 pygettext -> pygettext2
lrwxrwxrwx 1 root root         12 mar  4  2019 pygettext2 -> pygettext2.7
-rwxr-xr-x 1 root root      22082 oct 10  2019 pygettext2.7
lrwxrwxrwx 1 root root         12 mar 26  2019 pygettext3 -> pygettext3.7
-rwxr-xr-x 1 root root      21547 jul 25 10:03 pygettext3.7
lrwxrwxrwx 1 root root          7 mar  4  2019 python -> python2
lrwxrwxrwx 1 root root          9 mar  4  2019 python2 -> python2.7
-rwxr-xr-x 1 root root    3689352 oct 10  2019 python2.7
lrwxrwxrwx 1 root root          9 mar 26  2019 python3 -> python3.7
-rwxr-xr-x 2 root root    4861504 jul 25 10:03 python3.7
-rwxr-xr-x 2 root root    4861504 jul 25 10:03 python3.7m
lrwxrwxrwx 1 root root         10 mar 26  2019 python3m -> python3.7m
lrwxrwxrwx 1 root root         29 mar  4  2019 pyversions -> ../share/python/pyversions.py
-rwxr-xr-x 1 root root      11003 ago 30  2019 querybts
-rwxr-xr-x 1 root root        421 ene 18  2019 quodlibet
lrwxrwxrwx 1 root root         23 mar 21  2019 ranlib -> x86_64-linux-gnu-ranlib
lrwxrwxrwx 1 root root          4 abr 18  2019 rbash -> bash
lrwxrwxrwx 1 root root         21 ago 18 18:05 rcp -> /etc/alternatives/rcp
-rwxr-xr-x 1 root root     109728 ene 10  2019 rdma
lrwxrwxrwx 1 root root         24 mar 21  2019 readelf -> x86_64-linux-gnu-readelf
-rwxr-xr-x 1 root root      47776 feb 28  2019 readlink
-rwxr-xr-x 1 root root      47808 feb 28  2019 realpath
-rwxr-xr-x 1 root root      22600 ene 10  2019 rename.ul
-rwxr-xr-x 1 root root      57608 mar 18  2018 rendercheck
-rwxr-xr-x 1 root root      14408 ene 10  2019 renice
-rwxr-xr-x 1 root root     107666 ago 30  2019 reportbug
-rwxr-xr-x 1 root root       2099 ago 10  2018 report-hw
lrwxrwxrwx 1 root root          4 nov  2  2019 reset -> tset
-rwxr-xr-x 1 root root      18504 feb 14  2019 resize
-rwxr-xr-x 1 root root      23120 jul 28  2018 resizecons
-rwxr-xr-x 1 root root      63568 ene 10  2019 resizepart
-rwxr-xr-x 1 root root     116960 abr 27 14:02 resolvectl
-rwxr-xr-x 1 root root      14408 ene 10  2019 rev
-rwxr-xr-x 1 root root         30 ago  4  2017 rgrep
-rwxr-xr-x 1 root root     262472 ago 21  2018 ristretto
lrwxrwxrwx 1 root root         24 ago 18 18:05 rlogin -> /etc/alternatives/rlogin
-rwxr-xr-x 1 root root      68416 feb 28  2019 rm
-rwxr-xr-x 1 root root      47776 feb 28  2019 rmdir
lrwxrwxrwx 1 root root         22 ago 18 18:07 rmid -> /etc/alternatives/rmid
lrwxrwxrwx 1 root root         29 ago 18 18:07 rmiregistry -> /etc/alternatives/rmiregistry
lrwxrwxrwx 1 root root          4 jun 11  2019 rnano -> nano
-rwxr-xr-x 1 root root      26696 oct 15  2019 rotatelogs
-rwxr-xr-x 1 root root        208 ene 10  2019 routef
-rwxr-xr-x 1 root root       1656 ene 10  2019 routel
-rwxr-xr-x 1 root root      93160 may  1  2019 rpcgen
lrwxrwxrwx 1 root root         21 ago 18 18:05 rsh -> /etc/alternatives/rsh
-rwxr-xr-x 1 root root       2610 mar 18  2018 rstart
-rwxr-xr-x 1 root root       1469 mar 18  2018 rstartd
lrwxrwxrwx 1 root root          6 ene 10  2019 rtstat -> lnstat
-rwxr-xr-x 1 root root      39648 feb 28  2019 runcon
-rwxr-xr-x 1 root root      18161 feb  9  2019 run-mailcap
-rwxr-xr-x 1 root root      23312 ene 21  2019 run-parts
-rwxr-xr-x 1 root root         57 ene 31  2019 run-with-aspell
lrwxrwxrwx 1 root root         23 ago 18 17:54 rview -> /etc/alternatives/rview
-rwxr-xr-x 1 root root     117456 mar 23  2019 sane-find-scanner
-rwxr-xr-x 1 root root      10469 ene 21  2019 savelog
-rwxr-xr-x 1 root root      51992 mar 23  2019 scanimage
-rwxr-xr-x 1 root root     100496 ene 31  2020 scp
-rwxr-xr-x 1 root root         90 dic 27  2018 scp-dbus-service
-rwxr-xr-x 1 root root      14632 jul 28  2018 screendump
-rwxr-xr-x 1 root root      51280 ene 10  2019 script
-rwxr-xr-x 1 root root      30800 ene 10  2019 scriptreplay
-rwxr-xr-x 1 root root      51984 abr  8  2019 sdiff
-rwxr-xr-x 1 root root     122224 dic 22  2018 sed
lrwxrwxrwx 1 root root         11 feb  9  2019 see -> run-mailcap
-rwxr-xr-x 1 root root        474 nov 15  2018 select-default-iwrap
-rwxr-xr-x 1 root root       2442 mar 12  2018 select-editor
-rwxr-xr-x 1 root root       1209 mar 12  2018 sensible-browser
-rwxr-xr-x 1 root root       1109 mar 12  2018 sensible-editor
-rwxr-xr-x 1 root root        433 mar 12  2018 sensible-pager
-rwxr-xr-x 1 root root      31312 dic 19  2018 sensors
-rwxr-xr-x 1 root root      14027 dic 19  2018 sensors-conf-convert
-rwxr-xr-x 1 root root      51904 feb 28  2019 seq
-rwxr-xr-x 1 root root      14624 mar 18  2018 sessreg
-rwxr-xr-x 1 root root      22880 ene 10  2019 setarch
-rwxr-xr-x 1 root root      39608 mar  1  2019 setfacl
-rwxr-xr-x 1 root root      47792 jul 28  2018 setfont
-rwxr-xr-x 1 root root      14648 jul 28  2018 setkeycodes
-rwxr-xr-x 1 root root      14632 jul 28  2018 setleds
-rwxr-xr-x 1 root root      14640 jul 28  2018 setlogcons
-rwxr-xr-x 1 root root      14680 jul 28  2018 setmetamode
-rwxr-xr-x 1 root root      23080 nov 30  2016 setpci
-rwxr-xr-x 1 root root      43088 ene 10  2019 setpriv
-rwxr-xr-x 1 root root      14408 ene 10  2019 setsid
-rwxr-xr-x 1 root root      43088 ene 10  2019 setterm
-rwxr-xr-x 1 root root      38267 ago 15  2019 setupcon
-rwxr-xr-x 1 root root      14768 jul 28  2018 setvtrgb
-rwxr-xr-x 1 root root      23288 abr 30  2018 setxkbmap
-rwxr-xr-x 1 root root     153960 ene 31  2020 sftp
lrwxrwxrwx 1 root root          6 jul 27  2018 sg -> newgrp
lrwxrwxrwx 1 root root          4 ago 18 17:53 sh -> dash
-rwxr-xr-x 1 root root      51936 feb 28  2019 sha1sum
-rwxr-xr-x 1 root root      56032 feb 28  2019 sha224sum
-rwxr-xr-x 1 root root      56032 feb 28  2019 sha256sum
-rwxr-xr-x 1 root root      64224 feb 28  2019 sha384sum
-rwxr-xr-x 1 root root      64224 feb 28  2019 sha512sum
-rwxr-xr-x 1 root root       9976 jul 21 16:27 shasum
-rwxr-xr-x 1 root root      18824 jul 28  2018 showconsolefont
-rwxr-xr-x 1 root root      18784 jul 28  2018 showkey
-rwxr-xr-x 1 root root      10424 mar 18  2018 showrgb
-rwxr-xr-x 1 root root      60352 feb 28  2019 shred
-rwxr-xr-x 1 root root      60224 feb 28  2019 shuf
-rwxr-xr-x 1 root root      14328 ene 22  2019 sigfind
lrwxrwxrwx 1 root root         21 mar 21  2019 size -> x86_64-linux-gnu-size
-rwxr-xr-x 1 root root      26704 may 31  2018 skill
-rwxr-xr-x 1 root root      18512 may 31  2018 slabtop
-rwxr-xr-x 1 root root      39552 feb 28  2019 sleep
lrwxrwxrwx 1 root root          3 ene 31  2020 slogin -> ssh
-rwxr-xr-x 1 root root      23072 mar 18  2018 smproxy
lrwxrwxrwx 1 root root          5 may 31  2018 snice -> skill
-rwxr-xr-x 1 root root      43208 feb 28  2019 soelim
lrwxrwxrwx 1 root root         34 feb  1  2020 soffice -> ../lib/libreoffice/program/soffice
-rwxr-xr-x 1 root root     114120 feb 28  2019 sort
-rwxr-xr-x 1 root root      50400 ene 22  2019 sorter
-rwxr-xr-x 1 root root       4274 may  1  2019 sotruss
-rwxr-xr-x 1 root root       1003 may  2 07:05 spd-conf
-rwxr-xr-x 1 root root      27400 may  2 07:05 spd-say
-rwxr-xr-x 1 root root      30848 mar 30  2019 speaker-test
-rwxr-xr-x 1 root root     161880 may  2 07:05 speech-dispatcher
-rwxr-xr-x 1 root root      19150 jul 21 16:27 splain
-rwxr-xr-x 1 root root      60744 feb 28  2019 split
-rwxr-xr-x 1 root root      14528 jul 28  2018 splitfont
-rwxr-xr-x 1 root root      27328 may  1  2019 sprof
-rwxr-xr-x 1 root root       6136 may  5  2018 sq
-rwxr-xr-x 1 root root      14328 ene 22  2019 srch_strings
-rwxr-xr-x 1 root root     161488 ene 10  2019 ss
-rwxr-xr-x 1 root root     727848 ene 31  2020 ssh
-rwxr-xr-x 1 root root     338048 ene 31  2020 ssh-add
-rwxr-sr-x 1 root ssh      321672 ene 31  2020 ssh-agent
-rwxr-xr-x 1 root root       1456 ene 31  2020 ssh-argv0
-rwxr-xr-x 1 root root      10658 oct 16  2018 ssh-copy-id
-rwxr-xr-x 1 root root     415896 ene 31  2020 ssh-keygen
-rwxr-xr-x 1 root root     419992 ene 31  2020 ssh-keyscan
-rwxr-xr-x 1 root root       1197 ago 15  2019 start-pulseaudio-x11
-rwxr-xr-x 1 root root       5519 mar 19  2018 startx
-rwxr-xr-x 1 root root       2966 oct 21  2017 startxfce4
-rwxr-xr-x 1 root root      80928 feb 28  2019 stat
-rwxr-xr-x 1 root root      51904 feb 28  2019 stdbuf
lrwxrwxrwx 1 root root         24 mar 21  2019 strings -> x86_64-linux-gnu-strings
lrwxrwxrwx 1 root root         22 mar 21  2019 strip -> x86_64-linux-gnu-strip
-rwxr-xr-x 1 root root      80672 feb 28  2019 stty
-rwsr-xr-x 1 root root      63568 ene 10  2019 su
-rwsr-xr-x 1 root root     157192 feb  2  2020 sudo
lrwxrwxrwx 1 root root          4 feb  2  2020 sudoedit -> sudo
-rwxr-xr-x 1 root root      60256 feb  2  2020 sudoreplay
-rwxr-xr-x 1 root root      43752 feb 28  2019 sum
-rwxr-xr-x 1 root root     121576 ago 22  2019 symcryptrun
-rwxr-xr-x 1 root root        568 abr 15  2019 synaptic-pkexec
-rwxr-xr-x 1 root root      35488 feb 28  2019 sync
-rwxr-xr-x 1 root root         95 dic 27  2018 system-config-printer
-rwxr-xr-x 1 root root         80 dic 27  2018 system-config-printer-applet
-rwxr-xr-x 1 root root     868696 abr 27 14:02 systemctl
lrwxrwxrwx 1 root root         20 abr 27 14:02 systemd -> /lib/systemd/systemd
-rwxr-xr-x 1 root root    1448248 abr 27 14:02 systemd-analyze
-rwxr-xr-x 1 root root      14520 abr 27 14:02 systemd-ask-password
-rwxr-xr-x 1 root root      14416 abr 27 14:02 systemd-cat
-rwxr-xr-x 1 root root      18608 abr 27 14:02 systemd-cgls
-rwxr-xr-x 1 root root      39008 abr 27 14:02 systemd-cgtop
-rwxr-xr-x 1 root root      26696 abr 27 14:02 systemd-delta
-rwxr-xr-x 1 root root      14400 abr 27 14:02 systemd-detect-virt
-rwxr-xr-x 1 root root      18496 abr 27 14:02 systemd-escape
-rwxr-xr-x 1 root root     100720 abr 27 14:02 systemd-hwdb
-rwxr-xr-x 1 root root      14400 abr 27 14:02 systemd-id128
-rwxr-xr-x 1 root root      18520 abr 27 14:02 systemd-inhibit
-rwxr-xr-x 1 root root      26792 abr 27 14:02 systemd-machine-id-setup
-rwxr-xr-x 1 root root      47400 abr 27 14:02 systemd-mount
-rwxr-xr-x 1 root root      18504 abr 27 14:02 systemd-notify
-rwxr-xr-x 1 root root      18496 abr 27 14:02 systemd-path
lrwxrwxrwx 1 root root         10 abr 27 14:02 systemd-resolve -> resolvectl
-rwxr-xr-x 1 root root      51472 abr 27 14:02 systemd-run
-rwxr-xr-x 1 root root      26696 abr 27 14:02 systemd-socket-activate
-rwxr-xr-x 1 root root      18504 abr 27 14:02 systemd-stdio-bridge
-rwxr-xr-x 1 root root      55664 abr 27 14:02 systemd-sysusers
-rwxr-xr-x 1 root root      80128 abr 27 14:02 systemd-tmpfiles
-rwxr-xr-x 1 root root      30792 abr 27 14:02 systemd-tty-ask-password-agent
lrwxrwxrwx 1 root root         13 abr 27 14:02 systemd-umount -> systemd-mount
-rwxr-xr-x 1 root root      18424 nov  2  2019 tabs
-rwxr-xr-x 1 root root      43744 feb 28  2019 tac
-rwxr-xr-x 1 root root      72608 feb 28  2019 tail
-rwxr-xr-x 1 root root     445560 abr 23  2019 tar
-rwxr-xr-x 1 root root      16489 may 23  2019 tasksel
-rwxr-xr-x 1 root root      34896 ene 10  2019 taskset
-rwxr-xr-x 1 root root     141512 feb 28  2019 tbl
-rwxr-xr-x 1 root root      13695 ago  7  2017 tcldocstrip
lrwxrwxrwx 1 root root          8 feb 23  2019 tclsh -> tclsh8.6
-rwxr-xr-x 1 root root      14472 feb 23  2019 tclsh8.6
-rwxr-xr-x 1 root root      39648 feb 28  2019 tee
lrwxrwxrwx 1 root root         24 ago 18 18:04 telnet -> /etc/alternatives/telnet
-rwxr-xr-x 1 root root     116088 feb 24  2019 telnet.netkit
-rwxr-xr-x 1 root root      14440 ene 21  2019 tempfile
-rwxr-xr-x 1 root root      51872 feb 28  2019 test
-rwxr-xr-x 1 root root     860008 ene 28  2019 thunar
lrwxrwxrwx 1 root root          6 ene 28  2019 Thunar -> thunar
-rwxr-xr-x 1 root root        333 ene 28  2019 thunar-settings
-rwxr-xr-x 1 root root      47464 dic 27  2018 thunar-volman
-rwxr-xr-x 1 root root      43144 dic 27  2018 thunar-volman-settings
-rwxr-xr-x 1 root root      88176 nov  2  2019 tic
-rwxr-xr-x 1 root root      38984 abr 27 14:02 timedatectl
-rwxr-xr-x 1 root root      44296 feb 28  2019 timeout
-rwxr-xr-x 1 root root      14424 may 31  2018 tload
-rwxr-xr-x 1 root root      22520 nov  2  2019 toe
-rwxr-xr-x 1 root root     116624 may 31  2018 top
-rwxr-xr-x 1 root root      97152 feb 28  2019 touch
-rwxr-xr-x 1 root root      22552 nov  2  2019 tput
-rwxr-xr-x 1 root root      51904 feb 28  2019 tr
lrwxrwxrwx 1 root root         28 ago 18 18:04 traceproto -> /etc/alternatives/traceproto
-rwxr-xr-x 1 root root       2885 ago 29  2016 traceproto.db
lrwxrwxrwx 1 root root         28 ago 18 18:04 traceroute -> /etc/alternatives/traceroute
lrwxrwxrwx 1 root root         29 ago 18 18:04 traceroute6 -> /etc/alternatives/traceroute6
lrwxrwxrwx 1 root root         13 ago 29  2016 traceroute6.db -> traceroute.db
-rwxr-xr-x 1 root root      68768 ago 29  2016 traceroute.db
-rwxr-xr-x 1 root root       1618 ago 29  2016 traceroute-nanog
-rwxr-xr-x 1 root root      19360 mar 18  2018 transset
-rwxr-xr-x 1 root root     740960 feb 28  2019 troff
-rwxr-xr-x 1 root root      35424 feb 28  2019 true
-rwxr-xr-x 1 root root      43680 feb 28  2019 truncate
-rwxr-xr-x 1 root root     223608 feb 16  2019 trust
-rwxr-xr-x 1 root root       4919 may  5  2018 tryaffix
-rwxr-xr-x 1 root root      30720 nov  2  2019 tset
-rwxr-xr-x 1 root root     101000 ene 22  2019 tsk_comparedir
-rwxr-xr-x 1 root root     101000 ene 22  2019 tsk_gettimes
-rwxr-xr-x 1 root root      96904 ene 22  2019 tsk_loaddb
-rwxr-xr-x 1 root root     101000 ene 22  2019 tsk_recover
-rwxr-xr-x 1 root root      43680 feb 28  2019 tsort
-rwxr-xr-x 1 root root      35456 feb 28  2019 tty
-rwxr-xr-x 1 root root      15363 may  1  2019 tzselect
-rwxr-xr-x 1 root root      40685 dic 14  2018 ucf
-rwxr-xr-x 1 root root      19367 dic 14  2018 ucfq
-rwxr-xr-x 1 root root      10722 dic 14  2018 ucfr
-rwxr-xr-x 1 root root      18760 mar 18  2018 ucs2any
-rwxr-xr-x 1 root root     674312 abr 27 14:02 udevadm
-rwxr-xr-x 1 root root      59464 feb 21  2019 udisksctl
-rwxr-xr-x 1 root root      14640 may  4  2018 ul
-rwxr-xr-x 1 root root      14328 abr 22 16:38 ulockmgr_server
-rwxr-xr-x 1 root root     183368 mar 23  2019 umax_pp
-rwsr-xr-x 1 root root      34888 ene 10  2019 umount
-rwxr-xr-x 1 root root      39584 feb 28  2019 uname
-rwxr-xr-x 2 root root       2345 ene  5  2019 uncompress
-rwxr-xr-x 1 root root      43712 feb 28  2019 unexpand
-rwxr-xr-x 1 root root       2762 jul 28  2018 unicode_start
-rwxr-xr-x 1 root root        530 jul 28  2018 unicode_stop
-rwxr-xr-x 1 root root      51968 feb 28  2019 uniq
-rwxr-xr-x 1 root root      35424 feb 28  2019 unlink
lrwxrwxrwx 1 root root         24 ago 18 17:55 unlzma -> /etc/alternatives/unlzma
-rwxr-xr-x 1 root root       3595 jul 31  2019 unmkinitramfs
-rwxr-xr-x 1 root root         52 feb  1  2020 unopkg
lrwxrwxrwx 1 root root         27 ago 18 18:07 unpack200 -> /etc/alternatives/unpack200
-rwxr-xr-x 1 root root      26904 ene 10  2019 unshare
-rwxr-xr-x 1 root root       6136 may  5  2018 unsq
lrwxrwxrwx 1 root root          2 ene 27  2019 unxz -> xz
-rwxr-xr-x 2 root root     183136 jul 30  2019 unzip
-rwxr-xr-x 1 root root      84664 jul 30  2019 unzipsfx
-rwxr-xr-x 1 root root      55552 jun  3  2019 update-alternatives
-rwxr-xr-x 1 root root      26696 oct  8  2018 update-desktop-database
-rwxr-xr-x 1 root root      56512 sep 25  2018 update-mime-database
-rwxr-xr-x 1 root root      18848 feb 24  2019 upower
-rwxr-xr-x 1 root root      10312 may 31  2018 uptime
-rwxr-xr-x 1 root root       4102 feb 24  2019 usb-devices
-rwxr-xr-x 1 root root      31280 feb 24  2019 usbhid-dump
-rwxr-xr-x 1 root root      14592 feb 24  2019 usbreset
-rwxr-xr-x 1 root root      35488 feb 28  2019 users
-rwxr-xr-x 1 root root      14328 ene 22  2019 usnjls
-rwxr-xr-x 1 root root      30792 ene 10  2019 utmpdump
-rwxr-xr-x 1 root root       3674 feb 14  2019 uxterm
lrwxrwxrwx 1 root root         45 ago 31 23:57 VBoxClient -> /opt/VBoxGuestAdditions-6.1.10/bin/VBoxClient
lrwxrwxrwx 1 root root         54 ago 31 23:58 VBoxClient-all -> /opt/VBoxGuestAdditions-6.1.10/other/98vboxadd-xclient
lrwxrwxrwx 1 root root         46 ago 31 23:57 VBoxControl -> /opt/VBoxGuestAdditions-6.1.10/bin/VBoxControl
lrwxrwxrwx 1 root root         48 ago 31 23:57 VBoxDRMClient -> /opt/VBoxGuestAdditions-6.1.10/bin/VBoxDRMClient
-rwxr-xr-x 1 root root     138856 feb 28  2019 vdir
lrwxrwxrwx 1 root root         20 ago 18 17:54 vi -> /etc/alternatives/vi
lrwxrwxrwx 1 root root         22 ago 18 17:54 view -> /etc/alternatives/view
-rwxr-xr-x 1 root root      28032 mar 18  2018 viewres
-rwxr-xr-x 1 root root    1200696 jun 15  2019 vim.tiny
-rwxr-xr-x 1 root root      34912 may 31  2018 vmstat
-rwxr-xr-x 1 root root      10584 may 26  2018 vmwarectrl
-rwxr-xr-x 1 root root       6136 mar 28  2017 volname
lrwxrwxrwx 1 root root         19 ago 18 17:54 w -> /etc/alternatives/w
-rwxr-sr-x 1 root tty       34896 ene 10  2019 wall
-rwxr-xr-x 1 root root      27048 may 31  2018 watch
-rwxr-xr-x 1 root root      18424 ago 22  2019 watchgnupg
-rwxr-xr-x 1 root root      47880 feb 28  2019 wc
-rwxr-xr-x 1 root root      34896 ene 10  2019 wdctl
-rwxr-xr-x 1 root root     466496 abr  5  2019 wget
-rwxr-xr-x 1 root root      56296 feb 10  2019 whatis
-rwxr-xr-x 1 root root      31240 ene 10  2019 whereis
-rwxr-xr-x 1 root root        946 ene 21  2019 which
-rwxr-xr-x 1 root root      27344 sep 27  2018 whiptail
-rwxr-xr-x 1 root root      56128 feb 28  2019 who
-rwxr-xr-x 1 root root      35456 feb 28  2019 whoami
lrwxrwxrwx 1 root root          7 feb 23  2019 wish -> wish8.6
-rwxr-xr-x 1 root root      14488 feb 23  2019 wish8.6
-rwxr-xr-x 1 root root      14328 ene 31  2019 word-list-compress
-rwxr-xr-x 1 root root      75944 mar 24 07:26 wpa_passphrase
-rwxr-xr-x 1 root root      18504 may 31  2018 w.procps
lrwxrwxrwx 1 root root         23 ago 18 17:54 write -> /etc/alternatives/write
lrwxrwxrwx 1 root root          4 mar  5  2019 X -> Xorg
lrwxrwxrwx 1 root root          1 may  3  2017 X11 -> .
-rwxr-xr-x 1 root root     194856 mar 18  2018 x11perf
-rwxr-xr-x 1 root root       2807 mar 18  2018 x11perfcomp
lrwxrwxrwx 1 root root          7 ene 10  2019 x86_64 -> setarch
-rwxr-xr-x 1 root root      31840 mar 21  2019 x86_64-linux-gnu-addr2line
-rwxr-xr-x 1 root root      64584 mar 21  2019 x86_64-linux-gnu-ar
-rwxr-xr-x 1 root root     893880 mar 21  2019 x86_64-linux-gnu-as
-rwxr-xr-x 1 root root      31424 mar 21  2019 x86_64-linux-gnu-c++filt
lrwxrwxrwx 1 root root          5 feb 25  2019 x86_64-linux-gnu-cpp -> cpp-8
-rwxr-xr-x 1 root root    1104760 abr  6  2019 x86_64-linux-gnu-cpp-8
-rwxr-xr-x 1 root root    2876160 mar 21  2019 x86_64-linux-gnu-dwp
-rwxr-xr-x 1 root root      39768 mar 21  2019 x86_64-linux-gnu-elfedit
lrwxrwxrwx 1 root root          5 feb 25  2019 x86_64-linux-gnu-g++ -> g++-8
-rwxr-xr-x 1 root root    1104760 abr  6  2019 x86_64-linux-gnu-g++-8
lrwxrwxrwx 1 root root          5 feb 25  2019 x86_64-linux-gnu-gcc -> gcc-8
-rwxr-xr-x 1 root root    1100664 abr  6  2019 x86_64-linux-gnu-gcc-8
lrwxrwxrwx 1 root root          8 feb 25  2019 x86_64-linux-gnu-gcc-ar -> gcc-ar-8
-rwxr-xr-x 1 root root      35296 abr  6  2019 x86_64-linux-gnu-gcc-ar-8
lrwxrwxrwx 1 root root          8 feb 25  2019 x86_64-linux-gnu-gcc-nm -> gcc-nm-8
-rwxr-xr-x 1 root root      35296 abr  6  2019 x86_64-linux-gnu-gcc-nm-8
lrwxrwxrwx 1 root root         12 feb 25  2019 x86_64-linux-gnu-gcc-ranlib -> gcc-ranlib-8
-rwxr-xr-x 1 root root      35296 abr  6  2019 x86_64-linux-gnu-gcc-ranlib-8
lrwxrwxrwx 1 root root          6 feb 25  2019 x86_64-linux-gnu-gcov -> gcov-8
-rwxr-xr-x 1 root root     688216 abr  6  2019 x86_64-linux-gnu-gcov-8
lrwxrwxrwx 1 root root         11 feb 25  2019 x86_64-linux-gnu-gcov-dump -> gcov-dump-8
-rwxr-xr-x 1 root root     524240 abr  6  2019 x86_64-linux-gnu-gcov-dump-8
lrwxrwxrwx 1 root root         11 feb 25  2019 x86_64-linux-gnu-gcov-tool -> gcov-tool-8
-rwxr-xr-x 1 root root     561168 abr  6  2019 x86_64-linux-gnu-gcov-tool-8
lrwxrwxrwx 1 root root         24 mar 21  2019 x86_64-linux-gnu-gold -> x86_64-linux-gnu-ld.gold
-rwxr-xr-x 1 root root      98704 mar 21  2019 x86_64-linux-gnu-gprof
lrwxrwxrwx 1 root root         23 mar 21  2019 x86_64-linux-gnu-ld -> x86_64-linux-gnu-ld.bfd
-rwxr-xr-x 1 root root    1785032 mar 21  2019 x86_64-linux-gnu-ld.bfd
-rwxr-xr-x 1 root root    3113472 mar 21  2019 x86_64-linux-gnu-ld.gold
-rwxr-xr-x 1 root root      49056 mar 21  2019 x86_64-linux-gnu-nm
-rwxr-xr-x 1 root root     179632 mar 21  2019 x86_64-linux-gnu-objcopy
-rwxr-xr-x 1 root root     353848 mar 21  2019 x86_64-linux-gnu-objdump
-rwxr-xr-x 1 root root      64616 mar 21  2019 x86_64-linux-gnu-ranlib
-rwxr-xr-x 1 root root     597056 mar 21  2019 x86_64-linux-gnu-readelf
-rwxr-xr-x 1 root root      35808 mar 21  2019 x86_64-linux-gnu-size
-rwxr-xr-x 1 root root      31880 mar 21  2019 x86_64-linux-gnu-strings
-rwxr-xr-x 1 root root     179640 mar 21  2019 x86_64-linux-gnu-strip
-rwxr-xr-x 1 root root     293848 ene  6  2019 xarchiver
-rwxr-xr-x 1 root root      71896 feb 16  2019 xargs
-rwxr-xr-x 1 root root      48584 nov 21  2017 xauth
-rwxr-xr-x 1 root root      20824 mar 18  2018 xbiff
-rwxr-xr-x 1 root root     162128 feb  3  2019 xbrlapi
-rwxr-xr-x 1 root root      40544 mar 18  2018 xcalc
-rwxr-xr-x 1 root root      23376 mar 18  2018 xclipboard
-rwxr-xr-x 1 root root      54976 mar 18  2018 xclock
-rwxr-xr-x 1 root root      31808 mar 18  2018 xcmsdb
-rwxr-xr-x 1 root root      24080 mar 18  2018 xconsole
-rwxr-xr-x 1 root root      14760 mar 18  2018 xcursorgen
-rwxr-xr-x 1 root root      15040 mar 18  2018 xcutsel
-rwxr-xr-x 1 root root      51200 ene 20  2019 xdg-dbus-proxy
-rwxr-xr-x 1 root root      20674 abr 18 16:57 xdg-desktop-icon
-rwxr-xr-x 1 root root      43312 abr 18 16:57 xdg-desktop-menu
-rwxr-xr-x 1 root root      26959 abr 18 16:57 xdg-email
-rwxr-xr-x 1 root root      30064 abr 18 16:57 xdg-icon-resource
-rwxr-xr-x 1 root root      42158 abr 18 16:57 xdg-mime
-rwxr-xr-x 1 root root      25648 abr 18 16:57 xdg-open
-rwxr-xr-x 1 root root      37775 abr 18 16:57 xdg-screensaver
-rwxr-xr-x 1 root root      38429 abr 18 16:57 xdg-settings
-rwxr-xr-x 1 root root        234 dic 27  2018 xdg-user-dir
-rwxr-xr-x 1 root root      26696 dic 27  2018 xdg-user-dirs-update
-rwxr-xr-x 1 root root     107040 mar 18  2018 xditview
-rwxr-xr-x 1 root root      32248 mar 18  2018 xdpyinfo
-rwxr-xr-x 1 root root      10432 mar 18  2018 xdriinfo
-rwxr-xr-x 1 root root     674488 mar 18  2018 xedit
-rwxr-xr-x 1 root root      31704 mar 18  2018 xev
-rwxr-xr-x 1 root root      28672 mar 18  2018 xeyes
-rwxr-xr-x 1 root root     257064 dic 15  2018 xfburn
-rwxr-xr-x 1 root root     125304 ene 18  2018 xfce4-about
-rwxr-xr-x 1 root root      51352 jul  9  2018 xfce4-accessibility-settings
-rwxr-xr-x 1 root root      72704 jul  9  2018 xfce4-appearance-settings
-rwxr-xr-x 1 root root     129560 may  6  2015 xfce4-appfinder
-rwxr-xr-x 1 root root      67632 nov 30  2018 xfce4-clipman
-rwxr-xr-x 1 root root      92208 nov 30  2018 xfce4-clipman-settings
-rwxr-xr-x 1 root root     133776 dic 27  2018 xfce4-dict
-rwxr-xr-x 1 root root     309528 jul  9  2018 xfce4-display-settings
-rwxr-xr-x 1 root root      18440 jul  9  2018 xfce4-find-cursor
-rwxr-xr-x 1 root root      96408 jul  9  2018 xfce4-keyboard-settings
-rwxr-xr-x 1 root root      51304 jul  9  2018 xfce4-mime-settings
-rwxr-xr-x 1 root root      88344 jul  9  2018 xfce4-mouse-settings
-rwxr-xr-x 1 root root     141384 dic 17  2018 xfce4-notes
-rwxr-xr-x 1 root root      22520 dic 17  2018 xfce4-notes-settings
-rwxr-xr-x 1 root root      96248 dic 28  2018 xfce4-notifyd-config
-rwxr-xr-x 1 root root     309920 dic 17  2017 xfce4-panel
-rwxr-xr-x 1 root root       1568 dic 17  2017 xfce4-popup-applicationsmenu
-rwxr-xr-x 1 root root      14328 nov 30  2018 xfce4-popup-clipman
lrwxrwxrwx 1 root root         19 nov 30  2018 xfce4-popup-clipman-actions -> xfce4-popup-clipman
-rwxr-xr-x 1 root root       1496 dic 17  2017 xfce4-popup-directorymenu
-rwxr-xr-x 1 root root      14328 dic 17  2018 xfce4-popup-notes
-rwxr-xr-x 1 root root       1539 dic  8  2018 xfce4-popup-places
-rwxr-xr-x 1 root root       1540 feb  8  2019 xfce4-popup-whiskermenu
-rwxr-xr-x 1 root root       1493 dic 17  2017 xfce4-popup-windowmenu
-rwxr-xr-x 1 root root     223352 mar 28  2018 xfce4-power-manager
-rwxr-xr-x 1 root root     149624 mar 28  2018 xfce4-power-manager-settings
-rwxr-xr-x 1 root root      88600 ago 22  2018 xfce4-screenshooter
-rwxr-xr-x 1 root root      30792 dic 21  2018 xfce4-sensors
-rwxr-xr-x 1 root root     178416 oct 21  2017 xfce4-session
-rwxr-xr-x 1 root root      10632 oct 21  2017 xfce4-session-logout
-rwxr-xr-x 1 root root     108776 oct 21  2017 xfce4-session-settings
-rwxr-xr-x 1 root root      76008 jul  9  2018 xfce4-settings-editor
-rwxr-xr-x 1 root root      51352 jul  9  2018 xfce4-settings-manager
-rwxr-xr-x 1 root root     141496 dic 28  2018 xfce4-taskmanager
-rwxr-xr-x 1 root root     231968 oct  7  2018 xfce4-terminal
-rwxr-xr-x 1 root root       1124 oct  7  2018 xfce4-terminal.wrapper
-rwxr-xr-x 1 root root      27304 nov 12  2016 xfconf-query
-rwxr-xr-x 1 root root      33104 mar 18  2018 xfd
-rwxr-xr-x 1 root root     378984 sep 23  2018 xfdesktop
-rwxr-xr-x 1 root root     146008 sep 23  2018 xfdesktop-settings
-rwxr-xr-x 1 root root       1931 jun 23  2013 xfhelp4
-rwxr-xr-x 1 root root       1589 oct 21  2017 xflock4
-rwxr-xr-x 1 root root      41296 mar 18  2018 xfontsel
lrwxrwxrwx 1 root root         15 may  6  2015 xfrun4 -> xfce4-appfinder
-rwxr-xr-x 1 root root     108824 jul  9  2018 xfsettingsd
-rwxr-xr-x 1 root root     391432 ago 14  2018 xfwm4
-rwxr-xr-x 1 root root     108776 ago 14  2018 xfwm4-settings
-rwxr-xr-x 1 root root      71912 ago 14  2018 xfwm4-tweaks-settings
-rwxr-xr-x 1 root root     137368 ago 14  2018 xfwm4-workspace-settings
-rwxr-xr-x 1 root root      10464 mar 18  2018 xgamma
-rwxr-xr-x 1 root root      76768 mar 18  2018 xgc
-rwxr-xr-x 1 root root      14752 mar 18  2018 xhost
-rwxr-xr-x 1 root root      19064 mar 19  2018 xinit
-rwxr-xr-x 1 root root      14600 abr 30  2018 xkbbell
-rwxr-xr-x 1 root root     213640 abr 30  2018 xkbcomp
-rwxr-xr-x 1 root root      35384 abr 30  2018 xkbevd
-rwxr-xr-x 1 root root      88616 abr 30  2018 xkbprint
-rwxr-xr-x 1 root root      19624 abr 30  2018 xkbvleds
-rwxr-xr-x 1 root root      19656 abr 30  2018 xkbwatch
-rwxr-xr-x 1 root root      16982 mar 18  2018 xkeystone
-rwxr-xr-x 1 root root      14664 mar 18  2018 xkill
-rwxr-xr-x 1 root root      19664 mar 18  2018 xload
-rwxr-xr-x 1 root root      24000 mar 18  2018 xlogo
-rwxr-xr-x 1 root root      10504 mar 18  2018 xlsatoms
-rwxr-xr-x 1 root root      14680 mar 18  2018 xlsclients
-rwxr-xr-x 1 root root      18880 mar 18  2018 xlsfonts
-rwxr-xr-x 1 root root      45984 mar 18  2018 xmag
-rwxr-xr-x 1 root root      71584 mar 18  2018 xman
-rwxr-xr-x 1 root root      23888 mar 18  2018 xmessage
-rwxr-xr-x 1 root root      35656 mar 18  2018 xmodmap
-rwxr-xr-x 1 root root      14848 mar 18  2018 xmore
-rwxr-xr-x 1 root root        274 mar  5  2019 Xorg
-rwxr-xr-x 1 root root      41880 mar 18  2018 xprop
-rwxr-xr-x 1 root root      64336 mar 18  2018 xrandr
-rwxr-xr-x 1 root root      27320 mar 18  2018 xrdb
-rwxr-xr-x 1 root root      10544 mar 18  2018 xrefresh
-rwxr-xr-x 1 root root     777848 nov  5  2018 xsane
lrwxrwxrwx 1 root root         35 ago 18 18:07 x-session-manager -> /etc/alternatives/x-session-manager
-rwxr-xr-x 1 root root      31360 mar 18  2018 xset
-rwxr-xr-x 1 root root      10448 mar 18  2018 xsetmode
-rwxr-xr-x 1 root root      10464 mar 18  2018 xsetpointer
-rwxr-xr-x 1 root root      18824 mar 18  2018 xsetroot
-rwxr-xr-x 1 root root      57384 jun 26  2017 xsetwacom
-rwxr-xr-x 1 root root      98040 mar 18  2018 xsm
-rwxr-xr-x 1 root root      15192 mar 18  2018 xstdcmap
-rwxr-xr-x 1 root root       5164 jul 21 16:27 xsubpp
-rwxr-xr-x 1 root root     787448 feb 14  2019 xterm
lrwxrwxrwx 1 root root         37 ago 18 18:06 x-terminal-emulator -> /etc/alternatives/x-terminal-emulator
-rwxr-xr-x 1 root root      41008 mar 18  2018 xvidtune
-rwxr-xr-x 1 root root      14600 mar 18  2018 xvinfo
-rwxr-xr-x 1 root root      31216 mar 18  2018 xwd
lrwxrwxrwx 1 root root         34 ago 18 18:07 x-window-manager -> /etc/alternatives/x-window-manager
-rwxr-xr-x 1 root root      43808 mar 18  2018 xwininfo
-rwxr-xr-x 1 root root      27080 mar 18  2018 xwud
lrwxrwxrwx 1 root root         31 ago 18 18:07 x-www-browser -> /etc/alternatives/x-www-browser
-rwxr-xr-x 1 root root      18552 jun 15  2019 xxd
-rwxr-xr-x 1 root root      81192 ene 27  2019 xz
lrwxrwxrwx 1 root root          2 ene 27  2019 xzcat -> xz
lrwxrwxrwx 1 root root          6 ene 27  2019 xzcmp -> xzdiff
-rwxr-xr-x 1 root root       6632 ene 27  2019 xzdiff
lrwxrwxrwx 1 root root          6 ene 27  2019 xzegrep -> xzgrep
lrwxrwxrwx 1 root root          6 ene 27  2019 xzfgrep -> xzgrep
-rwxr-xr-x 1 root root       5628 ene 27  2019 xzgrep
-rwxr-xr-x 1 root root       1802 ene 27  2019 xzless
-rwxr-xr-x 1 root root       2161 ene 27  2019 xzmore
-rwxr-xr-x 1 root root      35424 feb 28  2019 yes
lrwxrwxrwx 1 root root          8 sep 27  2018 ypdomainname -> hostname
-rwxr-xr-x 1 root root       1983 ene  5  2019 zcat
-rwxr-xr-x 1 root root       1677 ene  5  2019 zcmp
-rwxr-xr-x 1 root root       5879 ene  5  2019 zdiff
-rwxr-xr-x 1 root root      18840 may  1  2019 zdump
-rwxr-xr-x 1 root root         29 ene  5  2019 zegrep
-rwxr-xr-x 1 root root     119384 dic 27  2018 zenity
-rwxr-xr-x 1 root root         29 ene  5  2019 zfgrep
-rwxr-xr-x 1 root root       2080 ene  5  2019 zforce
-rwxr-xr-x 1 root root       7584 ene  5  2019 zgrep
-rwxr-xr-x 1 root root      48497 jul 21 16:27 zipdetails
-rwxr-xr-x 1 root root       2953 jul 30  2019 zipgrep
-rwxr-xr-x 2 root root     183136 jul 30  2019 zipinfo
-rwxr-xr-x 1 root root       2205 ene  5  2019 zless
-rwxr-xr-x 1 root root       1841 ene  5  2019 zmore
-rwxr-xr-x 1 root root       4552 ene  5  2019 znew
matias@debian:~$ gunzip lista_com.gz 
matias@debian:~$ ls -l lista_com
-rw-r--r-- 1 matias matias 74266 sep  9 16:22 lista_com
```
### 11. Divida el archivo lista_com en archivos de 15 líneas cada uno. Verifique los archivos existentes
```
atias@debian:~$ split -15 lista_com 
matias@debian:~$ ls -l
total 9344
-rw-r--r--  1 matias matias       0 sep  9 03:34 A
-rw-r--r--  1 matias matias     438 sep  9 02:56 AA
lrwxrwxrwx  1 matias matias       1 sep  9 03:31 AAA -> A
drwxr-xr-x  2 matias matias    4096 sep  9 16:53 backup
-rw-r--r--  1 matias matias 9007549 sep  9 16:55 backup.tgz
drwxr-xr-x  2 matias matias    4096 sep  9 03:12 clave
lrwxrwxrwx  1 matias matias       6 sep  9 03:27 clave-link-carpeta -> clave/
drwxr-xr-x 18 matias matias    4096 sep  9 16:53 COPIAS
-rw-r--r--  1 matias matias   81920 sep  9 16:49 copia.tar
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Descargas
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Documentos
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Escritorio
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Imágenes
lrwxrwxrwx  1 matias matias      19 sep  9 02:38 link-apache -> /etc/init.d/apache2
-rw-r--r--  1 matias matias   74266 sep  9 16:22 lista_com
-rw-r--r--  1 matias matias      44 sep  9 16:44 lista_usu
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Música
drwxr-xr-x  2 matias matias    4096 sep  7 22:23 nuevo
lrwxrwxrwx  1 matias matias      11 sep  9 03:45 passwd-link -> /etc/passwd
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Plantillas
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Público
lrwxrwxrwx  1 matias matias      11 sep  9 03:47 shadow-link -> /etc/shadow
drwxr-xr-x  2 matias matias    4096 ago 18 18:16 Vídeos
-rw-r--r--  1 matias matias     799 sep  9 17:11 xaa
-rw-r--r--  1 matias matias     867 sep  9 17:11 xab
-rw-r--r--  1 matias matias     898 sep  9 17:11 xac
-rw-r--r--  1 matias matias     856 sep  9 17:11 xad
-rw-r--r--  1 matias matias     824 sep  9 17:11 xae
-rw-r--r--  1 matias matias     921 sep  9 17:11 xaf
-rw-r--r--  1 matias matias     897 sep  9 17:11 xag
-rw-r--r--  1 matias matias     802 sep  9 17:11 xah
-rw-r--r--  1 matias matias     868 sep  9 17:11 xai
-rw-r--r--  1 matias matias     877 sep  9 17:11 xaj
-rw-r--r--  1 matias matias     935 sep  9 17:11 xak
-rw-r--r--  1 matias matias     921 sep  9 17:11 xal
-rw-r--r--  1 matias matias     898 sep  9 17:11 xam
-rw-r--r--  1 matias matias     950 sep  9 17:11 xan
-rw-r--r--  1 matias matias     908 sep  9 17:11 xao
-rw-r--r--  1 matias matias     907 sep  9 17:11 xap
-rw-r--r--  1 matias matias     863 sep  9 17:11 xaq
-rw-r--r--  1 matias matias     837 sep  9 17:11 xar
-rw-r--r--  1 matias matias     869 sep  9 17:11 xas
-rw-r--r--  1 matias matias    1042 sep  9 17:11 xat
-rw-r--r--  1 matias matias    1009 sep  9 17:11 xau
-rw-r--r--  1 matias matias    1072 sep  9 17:11 xav
-rw-r--r--  1 matias matias     844 sep  9 17:11 xaw
-rw-r--r--  1 matias matias     874 sep  9 17:11 xax
-rw-r--r--  1 matias matias     959 sep  9 17:11 xay
-rw-r--r--  1 matias matias     863 sep  9 17:11 xaz
-rw-r--r--  1 matias matias     827 sep  9 17:11 xba
-rw-r--r--  1 matias matias     847 sep  9 17:11 xbb
-rw-r--r--  1 matias matias     931 sep  9 17:11 xbc
-rw-r--r--  1 matias matias     902 sep  9 17:11 xbd
-rw-r--r--  1 matias matias     910 sep  9 17:11 xbe
-rw-r--r--  1 matias matias     988 sep  9 17:11 xbf
-rw-r--r--  1 matias matias     828 sep  9 17:11 xbg
-rw-r--r--  1 matias matias     818 sep  9 17:11 xbh
-rw-r--r--  1 matias matias     819 sep  9 17:11 xbi
-rw-r--r--  1 matias matias    1077 sep  9 17:11 xbj
-rw-r--r--  1 matias matias     874 sep  9 17:11 xbk
-rw-r--r--  1 matias matias     818 sep  9 17:11 xbl
-rw-r--r--  1 matias matias     905 sep  9 17:11 xbm
-rw-r--r--  1 matias matias     912 sep  9 17:11 xbn
-rw-r--r--  1 matias matias     827 sep  9 17:11 xbo
-rw-r--r--  1 matias matias     900 sep  9 17:11 xbp
-rw-r--r--  1 matias matias     871 sep  9 17:11 xbq
-rw-r--r--  1 matias matias     889 sep  9 17:11 xbr
-rw-r--r--  1 matias matias     914 sep  9 17:11 xbs
-rw-r--r--  1 matias matias     951 sep  9 17:11 xbt
-rw-r--r--  1 matias matias     831 sep  9 17:11 xbu
-rw-r--r--  1 matias matias     844 sep  9 17:11 xbv
-rw-r--r--  1 matias matias     865 sep  9 17:11 xbw
-rw-r--r--  1 matias matias     985 sep  9 17:11 xbx
-rw-r--r--  1 matias matias     979 sep  9 17:11 xby
-rw-r--r--  1 matias matias     866 sep  9 17:11 xbz
-rw-r--r--  1 matias matias     923 sep  9 17:11 xca
-rw-r--r--  1 matias matias     906 sep  9 17:11 xcb
-rw-r--r--  1 matias matias     868 sep  9 17:11 xcc
-rw-r--r--  1 matias matias     840 sep  9 17:11 xcd
-rw-r--r--  1 matias matias     896 sep  9 17:11 xce
-rw-r--r--  1 matias matias     825 sep  9 17:11 xcf
-rw-r--r--  1 matias matias     895 sep  9 17:11 xcg
-rw-r--r--  1 matias matias     930 sep  9 17:11 xch
-rw-r--r--  1 matias matias     965 sep  9 17:11 xci
-rw-r--r--  1 matias matias     883 sep  9 17:11 xcj
-rw-r--r--  1 matias matias     883 sep  9 17:11 xck
-rw-r--r--  1 matias matias     962 sep  9 17:11 xcl
-rw-r--r--  1 matias matias     829 sep  9 17:11 xcm
-rw-r--r--  1 matias matias     901 sep  9 17:11 xcn
-rw-r--r--  1 matias matias     869 sep  9 17:11 xco
-rw-r--r--  1 matias matias    1113 sep  9 17:11 xcp
-rw-r--r--  1 matias matias     825 sep  9 17:11 xcq
-rw-r--r--  1 matias matias     985 sep  9 17:11 xcr
-rw-r--r--  1 matias matias    1161 sep  9 17:11 xcs
-rw-r--r--  1 matias matias    1134 sep  9 17:11 xct
-rw-r--r--  1 matias matias     849 sep  9 17:11 xcu
-rw-r--r--  1 matias matias     864 sep  9 17:11 xcv
-rw-r--r--  1 matias matias     996 sep  9 17:11 xcw
-rw-r--r--  1 matias matias    1045 sep  9 17:11 xcx
-rw-r--r--  1 matias matias     938 sep  9 17:11 xcy
-rw-r--r--  1 matias matias     856 sep  9 17:11 xcz
-rw-r--r--  1 matias matias     808 sep  9 17:11 xda
-rw-r--r--  1 matias matias     925 sep  9 17:11 xdb
-rw-r--r--  1 matias matias     926 sep  9 17:11 xdc
-rw-r--r--  1 matias matias     823 sep  9 17:11 xdd
-rw-r--r--  1 matias matias     105 sep  9 17:11 xde
```
### 12. Cree el archivo coman_dos que contenga los nombres de los comandos que pueden ejecutar los usuarios del sistema Linux y luego agregue al mismo archivo el número de i-nodo del archivo creado.
```
matias@debian:~$ ls /bin/ > coman_dos
matias@debian:~$ ls -i coman_dos >> coman_dos 
matias@debian:~$ tail coman_dos 
zfgrep
zforce
zgrep
zipdetails
zipgrep
zipinfo
zless
zmore
znew
17773 coman_dos
```
### 13. Realice la misma operación pero creando un archivo llamado coman_tres
```
matias@debian:~$ ls /bin/ > coman_tres
matias@debian:~$ ls -i coman_tres >> coman_tres
matias@debian:~$ tail coman_tres 
zfgrep
zforce
zgrep
zipdetails
zipgrep
zipinfo
zless
zmore
znew
17774 coman_tres
```
### 14. Verifique si hay diferencias entre el archivo coman_dos y el archivo coman_tres
Efectivamente la diferencia está en la linea 1232 que es la que contiene el i-nodo y nombre de cada archivo.
```
matias@debian:~$ diff coman_dos coman_tres 
1232c1232
< 17773 coman_dos
---
> 17774 coman_tres
```
### 15. Compare los archivos anteriores y describa la salida obtenida.
```
matias@debian:~$ cmp coman_dos coman_tres 
coman_dos coman_tres son distintos: byte 12158, línea 1232
```
El output de ```cmp``` lo unico que arroja (en el caso de que haya una diferencia) es el byte donde se encuentra la diferencia.
### 16. Copie el archivo coman_tres al archivo copia3, verifique que la copia exista y luego compárelos. ¿Qué salida obtiene?
```
matias@debian:~$ cp coman_tres copia3
matias@debian:~$ ls -l copia*
-rw-r--r-- 1 matias matias 12170 sep  9 17:23 copia3
-rw-r--r-- 1 matias matias 81920 sep  9 16:49 copia.tar
matias@debian:~$ cmp coman_tres copia3 
matias@debian:~$ 
```
cmp no arroja ningún mensaje al promt ya que los archivos son identicos (no se hallaron diferencias)

## Actividad 2
### 2. Dividir el archivo dispositivos en archivos que comiencen con el prefijo “device” de 150 líneas cada uno. Verificar los archivos creados.
```
matias@debian:~$ ls -l device*
-rw-r--r-- 1 matias matias 8821 sep  9 17:26 device-aa
-rw-r--r-- 1 matias matias  825 sep  9 17:26 device-ab
```
### 3. Realice una copia de seguridad de los archivos creados (dispositivos y device*) en backup2.tar. Verifique si los archivos originales todavía existen.
```
matias@debian:~$ tar cvf backup2.tar dispositivos device-*
dispositivos
device-aa
device-ab
matias@debian:~$ ls -l dispositivos device-*
-rw-r--r-- 1 matias matias 8821 sep  9 17:26 device-aa
-rw-r--r-- 1 matias matias  825 sep  9 17:26 device-ab
-rw-r--r-- 1 matias matias 9646 sep  9 17:26 dispositivos
```
### 4. Muestre el contenido del archivo de respaldo creado.
```
matias@debian:~$ tar tvf backup2.tar 
-rw-r--r-- matias/matias  9646 2020-09-09 17:26 dispositivos
-rw-r--r-- matias/matias  8821 2020-09-09 17:26 device-aa
-rw-r--r-- matias/matias   825 2020-09-09 17:26 device-ab
```
### 5. Comprima el archivo backup2.tar como un archivo .gz con la mayor velocidad de compresión. Verifique el archivo creado
```
matias@debian:~$ gzip -1 backup2.tar 
matias@debian:~$ ls -l backup*
-rw-r--r-- 1 matias matias    2221 sep  9 17:28 backup2.tar.gz
-rw-r--r-- 1 matias matias 9007549 sep  9 16:55 backup.tgz
```
### 6. Descomprima el archivo creado anteriormente.
```
matias@debian:~$ gunzip backup2.tar.gz 
matias@debian:~$ ls -l backup2.tar 
-rw-r--r-- 1 matias matias 30720 sep  9 17:28 backup2.tar
```
### 7. Extraiga los archivos originales del archivo de respaldo, en el subdirectorio recupero de su directorio de login.
```
matias@debian:~$ mkdir recupero && cd recupero
matias@debian:~/recupero$ tar xvf ../backup2.tar 
dispositivos
device-aa
device-ab
matias@debian:~/recupero$ ls -li
total 28
17782 -rw-r--r-- 1 matias matias 8821 sep  9 17:26 device-aa
17783 -rw-r--r-- 1 matias matias  825 sep  9 17:26 device-ab
17781 -rw-r--r-- 1 matias matias 9646 sep  9 17:26 dispositivos
```
## Actividad 3
### 1. Cree un archivo de respaldo de los archivos del directorio /etc
```
matias@debian:~/actividad_03$ tar cvf backup_etc.tar /etc/
...
/etc/pam.d/polkit-1
/etc/pam.d/systemd-user
/etc/pam.d/login
/etc/pam.d/chfn
/etc/pam.d/chpasswd
/etc/pam.d/common-account
/etc/pam.d/common-session-noninteractive
/etc/pam.d/common-password
tar: Se sale con estado de fallo debido a errores anteriores
matias@debian:~/actividad_03$ ls
backup_etc.tar
```
### 2. Comprima los archivos de /bin que comiencen con la letra m
Se tuvo que usar la cuenta de administrador para poder realizar este punto, ya que por temas de permisos no podían utilizarse los binarios con una cuenta normal.
```
root@debian:/home/matias/actividad_03# gzip -k /bin/m*
gzip: /bin/md5sum.textutils: Too many levels of symbolic links
gzip: /bin/mount is set-user-ID on execution - ignored
gzip: /bin/mt: Too many levels of symbolic links
root@debian:/home/matias/actividad_03# exit
exit
matias@debian:~/actividad_03$ ls -l /bin/m*.gz
-rwxr-xr-x 1 root root   7575 ene 22  2019 /bin/mactime.gz
-rwxr-xr-x 1 root root   2148 jul 28  2018 /bin/make-first-existing-target.gz
-rwxr-xr-x 1 root root 112085 jul 28  2018 /bin/make.gz
-rwxr-xr-x 1 root root  57929 feb 10  2019 /bin/mandb.gz
-rwxr-xr-x 1 root root  50012 feb 10  2019 /bin/man.gz
-rwxr-xr-x 1 root root  14106 feb 10  2019 /bin/manpath.gz
-rwxr-xr-x 1 root root   8544 jul 28  2018 /bin/mapscrn.gz
-rwxr-xr-x 1 root root  58593 mar 23  2012 /bin/mawk.gz
-rwxr-xr-x 1 root root  13573 ene 10  2019 /bin/mcookie.gz
-rwxr-xr-x 1 root root  20328 feb 28  2019 /bin/md5sum.gz
-rwxr-xr-x 1 root root   4007 ene 10  2019 /bin/mesg.gz
-rwxr-xr-x 1 root root   1400 ago 21  2019 /bin/migrate-pubring-from-classic-gpg.gz
-rwxr-xr-x 1 root root   3485 ago  6  2018 /bin/mimeopen.gz
-rwxr-xr-x 1 root root   4900 ago  6  2018 /bin/mimetype.gz
-rwxr-xr-x 1 root root  38443 feb 28  2019 /bin/mkdir.gz
-rwxr-xr-x 1 root root  30208 feb 28  2019 /bin/mkfifo.gz
-rwxr-xr-x 1 root root     90 mar 18  2018 /bin/mkfontdir.gz
-rwxr-xr-x 1 root root  16840 mar 18  2018 /bin/mkfontscale.gz
-rwxr-xr-x 1 root root   3360 jul 28  2018 /bin/mk_modmap.gz
-rwxr-xr-x 1 root root  32023 feb 28  2019 /bin/mknod.gz
-rwxr-xr-x 1 root root  18664 feb 28  2019 /bin/mktemp.gz
-rwxr-xr-x 1 root root   3806 ene 22  2019 /bin/mmcat.gz
-rwxr-xr-x 1 root root  66609 feb  5  2019 /bin/mmcli.gz
-rwxr-xr-x 1 root root   4633 ene 22  2019 /bin/mmls.gz
-rwxr-xr-x 1 root root   3489 ene 22  2019 /bin/mmstat.gz
-rwxr-xr-x 1 root root  17448 ene 10  2019 /bin/more.gz
-rwxr-xr-x 1 root root   4667 ene 10  2019 /bin/mountpoint.gz
-rwxr-xr-x 1 root root  92213 nov 10  2018 /bin/mousepad.gz
-rwxr-xr-x 1 root root   1099 ago  7  2017 /bin/mpexpand.gz
-rwxr-xr-x 1 root root  37876 abr 23  2019 /bin/mt-gnu.gz
-rwxr-xr-x 1 root root   2237 may  1  2019 /bin/mtrace.gz
-rwxr-xr-x 1 root root  11101 may  5  2018 /bin/munchlist.gz
-rwxr-xr-x 1 root root  65791 feb 28  2019 /bin/mv.gz
```
### 3. Realice una copia de seguridad de los archivos creados en seguridad.tar. Muestre el contenido del archivo de respaldo creado.
```
matias@debian:~/actividad_03$ tar cvf seguridad.tar /bin/m*.gz
tar: Eliminando la `/' inicial de los nombres
/bin/mactime.gz
tar: Eliminando la `/' inicial de los objetivos de los enlaces
/bin/make-first-existing-target.gz
/bin/make.gz
/bin/mandb.gz
/bin/man.gz
/bin/manpath.gz
/bin/mapscrn.gz
/bin/mawk.gz
/bin/mcookie.gz
/bin/md5sum.gz
/bin/mesg.gz
/bin/migrate-pubring-from-classic-gpg.gz
/bin/mimeopen.gz
/bin/mimetype.gz
/bin/mkdir.gz
/bin/mkfifo.gz
/bin/mkfontdir.gz
/bin/mkfontscale.gz
/bin/mk_modmap.gz
/bin/mknod.gz
/bin/mktemp.gz
/bin/mmcat.gz
/bin/mmcli.gz
/bin/mmls.gz
/bin/mmstat.gz
/bin/more.gz
/bin/mountpoint.gz
/bin/mousepad.gz
/bin/mpexpand.gz
/bin/mt-gnu.gz
/bin/mtrace.gz
/bin/munchlist.gz
/bin/mv.gz
matias@debian:~/actividad_03$ tar tvf seguridad.tar 
-rwxr-xr-x root/root      7575 2019-01-22 08:53 bin/mactime.gz
-rwxr-xr-x root/root      2148 2018-07-28 07:07 bin/make-first-existing-target.gz
-rwxr-xr-x root/root    112085 2018-07-28 07:07 bin/make.gz
-rwxr-xr-x root/root     57929 2019-02-10 09:14 bin/mandb.gz
-rwxr-xr-x root/root     50012 2019-02-10 09:14 bin/man.gz
-rwxr-xr-x root/root     14106 2019-02-10 09:14 bin/manpath.gz
-rwxr-xr-x root/root      8544 2018-07-28 12:58 bin/mapscrn.gz
-rwxr-xr-x root/root     58593 2012-03-23 17:15 bin/mawk.gz
-rwxr-xr-x root/root     13573 2019-01-10 05:30 bin/mcookie.gz
-rwxr-xr-x root/root     20328 2019-02-28 12:30 bin/md5sum.gz
-rwxr-xr-x root/root      4007 2019-01-10 05:30 bin/mesg.gz
-rwxr-xr-x root/root      1400 2019-08-21 15:53 bin/migrate-pubring-from-classic-gpg.gz
-rwxr-xr-x root/root      3485 2018-08-06 12:21 bin/mimeopen.gz
-rwxr-xr-x root/root      4900 2018-08-06 12:21 bin/mimetype.gz
-rwxr-xr-x root/root     38443 2019-02-28 12:30 bin/mkdir.gz
-rwxr-xr-x root/root     30208 2019-02-28 12:30 bin/mkfifo.gz
-rwxr-xr-x root/root        90 2018-03-18 14:01 bin/mkfontdir.gz
-rwxr-xr-x root/root     16840 2018-03-18 14:01 bin/mkfontscale.gz
-rwxr-xr-x root/root      3360 2018-07-28 12:58 bin/mk_modmap.gz
-rwxr-xr-x root/root     32023 2019-02-28 12:30 bin/mknod.gz
-rwxr-xr-x root/root     18664 2019-02-28 12:30 bin/mktemp.gz
-rwxr-xr-x root/root      3806 2019-01-22 08:53 bin/mmcat.gz
-rwxr-xr-x root/root     66609 2019-02-05 19:40 bin/mmcli.gz
-rwxr-xr-x root/root      4633 2019-01-22 08:53 bin/mmls.gz
-rwxr-xr-x root/root      3489 2019-01-22 08:53 bin/mmstat.gz
-rwxr-xr-x root/root     17448 2019-01-10 05:30 bin/more.gz
-rwxr-xr-x root/root      4667 2019-01-10 05:30 bin/mountpoint.gz
-rwxr-xr-x root/root     92213 2018-11-10 16:56 bin/mousepad.gz
-rwxr-xr-x root/root      1099 2017-08-07 20:35 bin/mpexpand.gz
-rwxr-xr-x root/root     37876 2019-04-23 12:29 bin/mt-gnu.gz
-rwxr-xr-x root/root      2237 2019-05-01 14:24 bin/mtrace.gz
-rwxr-xr-x root/root     11101 2018-05-05 07:28 bin/munchlist.gz
-rwxr-xr-x root/root     65791 2019-02-28 12:30 bin/mv.gz
```
### 4. Divida el archivo de respaldo creado en archivos de 20 líneas cada uno. Verifique los archivos existentes.
```
matias@debian:~/actividad_03$ split --lines=20 seguridad.tar 
matias@debian:~/actividad_03$ ls -l
total 6128
-rw-r--r-- 1 matias matias 4259840 sep  9 17:35 backup_etc.tar
-rw-r--r-- 1 matias matias  839680 sep  9 17:52 seguridad.tar
-rw-r--r-- 1 matias matias    4647 sep  9 17:54 xaa
-rw-r--r-- 1 matias matias    6032 sep  9 17:54 xab
-rw-r--r-- 1 matias matias    6813 sep  9 17:54 xac
-rw-r--r-- 1 matias matias    3634 sep  9 17:54 xad
-rw-r--r-- 1 matias matias    8982 sep  9 17:54 xae
-rw-r--r-- 1 matias matias    4630 sep  9 17:54 xaf
-rw-r--r-- 1 matias matias    3013 sep  9 17:54 xag
-rw-r--r-- 1 matias matias    5793 sep  9 17:54 xah
-rw-r--r-- 1 matias matias    4906 sep  9 17:54 xai
-rw-r--r-- 1 matias matias    5331 sep  9 17:54 xaj
-rw-r--r-- 1 matias matias    3839 sep  9 17:54 xak
-rw-r--r-- 1 matias matias    4221 sep  9 17:54 xal
-rw-r--r-- 1 matias matias    3992 sep  9 17:54 xam
-rw-r--r-- 1 matias matias    6670 sep  9 17:54 xan
-rw-r--r-- 1 matias matias    6026 sep  9 17:54 xao
-rw-r--r-- 1 matias matias    5366 sep  9 17:54 xap
-rw-r--r-- 1 matias matias    5318 sep  9 17:54 xaq
-rw-r--r-- 1 matias matias    5572 sep  9 17:54 xar
-rw-r--r-- 1 matias matias    5151 sep  9 17:54 xas
-rw-r--r-- 1 matias matias    5001 sep  9 17:54 xat
-rw-r--r-- 1 matias matias    3814 sep  9 17:54 xau
-rw-r--r-- 1 matias matias    3964 sep  9 17:54 xav
-rw-r--r-- 1 matias matias    5974 sep  9 17:54 xaw
-rw-r--r-- 1 matias matias    3727 sep  9 17:54 xax
-rw-r--r-- 1 matias matias    6706 sep  9 17:54 xay
-rw-r--r-- 1 matias matias    5269 sep  9 17:54 xaz
-rw-r--r-- 1 matias matias    6947 sep  9 17:54 xba
-rw-r--r-- 1 matias matias    4010 sep  9 17:54 xbb
-rw-r--r-- 1 matias matias    4544 sep  9 17:54 xbc
-rw-r--r-- 1 matias matias    5996 sep  9 17:54 xbd
-rw-r--r-- 1 matias matias    6242 sep  9 17:54 xbe
-rw-r--r-- 1 matias matias    5279 sep  9 17:54 xbf
-rw-r--r-- 1 matias matias    2155 sep  9 17:54 xbg
-rw-r--r-- 1 matias matias    6477 sep  9 17:54 xbh
-rw-r--r-- 1 matias matias    9379 sep  9 17:54 xbi
-rw-r--r-- 1 matias matias    3436 sep  9 17:54 xbj
-rw-r--r-- 1 matias matias    4930 sep  9 17:54 xbk
-rw-r--r-- 1 matias matias    5055 sep  9 17:54 xbl
-rw-r--r-- 1 matias matias    5963 sep  9 17:54 xbm
-rw-r--r-- 1 matias matias    4983 sep  9 17:54 xbn
-rw-r--r-- 1 matias matias    5077 sep  9 17:54 xbo
-rw-r--r-- 1 matias matias    4523 sep  9 17:54 xbp
-rw-r--r-- 1 matias matias    3384 sep  9 17:54 xbq
-rw-r--r-- 1 matias matias    2928 sep  9 17:54 xbr
-rw-r--r-- 1 matias matias    2144 sep  9 17:54 xbs
-rw-r--r-- 1 matias matias    2798 sep  9 17:54 xbt
-rw-r--r-- 1 matias matias    5959 sep  9 17:54 xbu
-rw-r--r-- 1 matias matias    4873 sep  9 17:54 xbv
-rw-r--r-- 1 matias matias    4165 sep  9 17:54 xbw
-rw-r--r-- 1 matias matias    6902 sep  9 17:54 xbx
-rw-r--r-- 1 matias matias    4756 sep  9 17:54 xby
-rw-r--r-- 1 matias matias    6207 sep  9 17:54 xbz
-rw-r--r-- 1 matias matias    2830 sep  9 17:54 xca
-rw-r--r-- 1 matias matias    4723 sep  9 17:54 xcb
-rw-r--r-- 1 matias matias    4177 sep  9 17:54 xcc
-rw-r--r-- 1 matias matias    4445 sep  9 17:54 xcd
-rw-r--r-- 1 matias matias    7264 sep  9 17:54 xce
-rw-r--r-- 1 matias matias    5726 sep  9 17:54 xcf
-rw-r--r-- 1 matias matias    4991 sep  9 17:54 xcg
-rw-r--r-- 1 matias matias    8770 sep  9 17:54 xch
-rw-r--r-- 1 matias matias    5664 sep  9 17:54 xci
-rw-r--r-- 1 matias matias    9456 sep  9 17:54 xcj
-rw-r--r-- 1 matias matias    4198 sep  9 17:54 xck
-rw-r--r-- 1 matias matias    4145 sep  9 17:54 xcl
-rw-r--r-- 1 matias matias    4630 sep  9 17:54 xcm
-rw-r--r-- 1 matias matias    3066 sep  9 17:54 xcn
-rw-r--r-- 1 matias matias    5922 sep  9 17:54 xco
-rw-r--r-- 1 matias matias    4295 sep  9 17:54 xcp
-rw-r--r-- 1 matias matias    5131 sep  9 17:54 xcq
-rw-r--r-- 1 matias matias    5185 sep  9 17:54 xcr
-rw-r--r-- 1 matias matias    8615 sep  9 17:54 xcs
-rw-r--r-- 1 matias matias    6540 sep  9 17:54 xct
-rw-r--r-- 1 matias matias    2771 sep  9 17:54 xcu
-rw-r--r-- 1 matias matias    6603 sep  9 17:54 xcv
-rw-r--r-- 1 matias matias    5961 sep  9 17:54 xcw
-rw-r--r-- 1 matias matias    4994 sep  9 17:54 xcx
-rw-r--r-- 1 matias matias    5848 sep  9 17:54 xcy
-rw-r--r-- 1 matias matias    3554 sep  9 17:54 xcz
-rw-r--r-- 1 matias matias    3612 sep  9 17:54 xda
-rw-r--r-- 1 matias matias    6071 sep  9 17:54 xdb
-rw-r--r-- 1 matias matias    5492 sep  9 17:54 xdc
-rw-r--r-- 1 matias matias    4036 sep  9 17:54 xdd
-rw-r--r-- 1 matias matias    6704 sep  9 17:54 xde
-rw-r--r-- 1 matias matias    5140 sep  9 17:54 xdf
-rw-r--r-- 1 matias matias    5304 sep  9 17:54 xdg
-rw-r--r-- 1 matias matias    6138 sep  9 17:54 xdh
-rw-r--r-- 1 matias matias    6147 sep  9 17:54 xdi
-rw-r--r-- 1 matias matias    7521 sep  9 17:54 xdj
-rw-r--r-- 1 matias matias    4423 sep  9 17:54 xdk
-rw-r--r-- 1 matias matias    8078 sep  9 17:54 xdl
-rw-r--r-- 1 matias matias    6791 sep  9 17:54 xdm
-rw-r--r-- 1 matias matias    8711 sep  9 17:54 xdn
-rw-r--r-- 1 matias matias    5359 sep  9 17:54 xdo
-rw-r--r-- 1 matias matias    8124 sep  9 17:54 xdp
-rw-r--r-- 1 matias matias    7571 sep  9 17:54 xdq
-rw-r--r-- 1 matias matias    6035 sep  9 17:54 xdr
-rw-r--r-- 1 matias matias    8173 sep  9 17:54 xds
-rw-r--r-- 1 matias matias    4127 sep  9 17:54 xdt
-rw-r--r-- 1 matias matias    5643 sep  9 17:54 xdu
-rw-r--r-- 1 matias matias    4444 sep  9 17:54 xdv
-rw-r--r-- 1 matias matias    6446 sep  9 17:54 xdw
-rw-r--r-- 1 matias matias    6407 sep  9 17:54 xdx
-rw-r--r-- 1 matias matias    7241 sep  9 17:54 xdy
-rw-r--r-- 1 matias matias    4834 sep  9 17:54 xdz
-rw-r--r-- 1 matias matias    4616 sep  9 17:54 xea
-rw-r--r-- 1 matias matias    5846 sep  9 17:54 xeb
-rw-r--r-- 1 matias matias    5882 sep  9 17:54 xec
-rw-r--r-- 1 matias matias    8632 sep  9 17:54 xed
-rw-r--r-- 1 matias matias    5971 sep  9 17:54 xee
-rw-r--r-- 1 matias matias    4604 sep  9 17:54 xef
-rw-r--r-- 1 matias matias    5030 sep  9 17:54 xeg
-rw-r--r-- 1 matias matias    4406 sep  9 17:54 xeh
-rw-r--r-- 1 matias matias    9131 sep  9 17:54 xei
-rw-r--r-- 1 matias matias   11346 sep  9 17:54 xej
-rw-r--r-- 1 matias matias    9021 sep  9 17:54 xek
-rw-r--r-- 1 matias matias    6296 sep  9 17:54 xel
-rw-r--r-- 1 matias matias    6652 sep  9 17:54 xem
-rw-r--r-- 1 matias matias    5464 sep  9 17:54 xen
-rw-r--r-- 1 matias matias    6653 sep  9 17:54 xeo
-rw-r--r-- 1 matias matias    5114 sep  9 17:54 xep
-rw-r--r-- 1 matias matias    5601 sep  9 17:54 xeq
-rw-r--r-- 1 matias matias    7220 sep  9 17:54 xer
-rw-r--r-- 1 matias matias    8088 sep  9 17:54 xes
-rw-r--r-- 1 matias matias    5916 sep  9 17:54 xet
-rw-r--r-- 1 matias matias    5702 sep  9 17:54 xeu
-rw-r--r-- 1 matias matias    6232 sep  9 17:54 xev
-rw-r--r-- 1 matias matias    5953 sep  9 17:54 xew
-rw-r--r-- 1 matias matias    5581 sep  9 17:54 xex
-rw-r--r-- 1 matias matias    5444 sep  9 17:54 xey
-rw-r--r-- 1 matias matias    7014 sep  9 17:54 xez
-rw-r--r-- 1 matias matias    5640 sep  9 17:54 xfa
-rw-r--r-- 1 matias matias    7251 sep  9 17:54 xfb
-rw-r--r-- 1 matias matias    6777 sep  9 17:54 xfc
-rw-r--r-- 1 matias matias    4180 sep  9 17:54 xfd
-rw-r--r-- 1 matias matias    5655 sep  9 17:54 xfe
-rw-r--r-- 1 matias matias    3674 sep  9 17:54 xff
-rw-r--r-- 1 matias matias    7816 sep  9 17:54 xfg
-rw-r--r-- 1 matias matias    5181 sep  9 17:54 xfh
-rw-r--r-- 1 matias matias    4837 sep  9 17:54 xfi
-rw-r--r-- 1 matias matias    3470 sep  9 17:54 xfj
-rw-r--r-- 1 matias matias    5138 sep  9 17:54 xfk
-rw-r--r-- 1 matias matias    5763 sep  9 17:54 xfl
-rw-r--r-- 1 matias matias    8980 sep  9 17:54 xfm
-rw-r--r-- 1 matias matias    5131 sep  9 17:54 xfn
-rw-r--r-- 1 matias matias    5754 sep  9 17:54 xfo
-rw-r--r-- 1 matias matias    6755 sep  9 17:54 xfp
-rw-r--r-- 1 matias matias    3782 sep  9 17:54 xfq
-rw-r--r-- 1 matias matias    6708 sep  9 17:54 xfr
-rw-r--r-- 1 matias matias    8194 sep  9 17:54 xfs
```



