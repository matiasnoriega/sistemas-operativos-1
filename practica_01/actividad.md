## Actividad 1, Matias Nicolas Noriega.
### 1. Enumere las características principales del SO Linux.
Las caracteristicas principales de GNU/Linux como Sistema Operativo son:

* **Multitarea:** Tiene la capacidad de ejecutar muchos programas al mismo tiempo, garantizando a todos los procesos en ejecución su tiempo de procesador.
* **Multiusuario:** Permite a distintos usuarios acceder al sistema simultaneamente y compartir recursos dependiendo de la jerarquía que tenga, asegurando también privacidad y protección.
* **Kernel Modular:** Los modulos de kernel son cargados on-demand sin necesidad de reiniciar el sistema. Cuando se inicia, en memoria solo hay un kernel mínimo y si se requiere se cargan más modulos.
* **Portable:** Soporta una amplia variedad de configuraciones de hardware.
* **Licencia Libre:** Al estar publicado bajo licencia GNU hace que sea de libre distribución, y dando la libertad a quien quiera de ampliar o modificar el programa (y distribuirlo) sin que los programadores pierdan su derecho de autor (En este caso, Linus Torvalds)
* **Librerías Compartidas:** Los programas comparten una serie de librerías estandar sin necesidad de que estos contengan las mismas (y consecuentemente cargarlas redundantemente en memoria). Gracias a esto los binarios en GNU/Linux son de menor tamaño y aprovechan mejor la memoria.
* **Memoria:** Garantiza a los procesos una zona de memoria protegida para su ejecución, logrando aislarlo en caso de mal funcionamiento (y que esto se replique en el resto del equipo). También tiene una partición "swap" que almacena procesos suspendidos y en el caso de que sea necesario también funciona como una extensión de la memoria principal (memoria virtual)
* **Seguridad:** Su kernel soporta politicas de segutidad para el control del acceso (SELinux), el uso de SOCKS y también puede construir firewalls basado en el filtrado de paquetes.
* **Convivencia:** Puede convivir con otros sistemas operativos (como DOS, Windows o incluso otras distrubiciones de GNU/Linux) en el mismo disco duro y también la capacidad de acceder en modo de lectoescritura de otros sistemas de archivos (FAT, NTFS, etc.) aparte de nativo propio (como ext4).

Estas son las caracteristicas más importantes, aunque también cuenta con otras tales como operar con todos los sistemas de archivos estandar, soportar varias consolas virtuales (varias sesiones de usuario/s simultaneas), capacidades para redes y comunicaciones, entornos gráficos muy poderosos (GNOME, KDE, Enlightment, etc), software libre u open-source para casi todas las necesidades y un sin fin de herramientas de desarrollo (un Sistema Operativo hecho por y para programadores).
### 2. El núcleo del sistema Linux, se denomina:
   a. Shell  
   b. BIOS  
   **c. Kernel <----**  
   d. File System  
   e. Ninguna  
### 3. Marque cuáles de los siguientes son shells de Linux:
   a. msh (Hay algunas con este nombre, nada oficial)  
   **b. ash <---**  
   **c. bsh <---**  
   **d. bash <---**  
   **e. csh <---**  
   f. xsh  
   **g. ksh <---**  
   h. fsh  
### 4. Cuáles son las interfaces posibles de Linux?
La interfaz del usuario con GNU/Linux puede ser tanto una interfaz gráfica cómo una intefaz de línea de comandos:
#### Intefaz Grafica de Usuario (GUI - Graphical User Interface)
La interfaz gráfica brinda al usuario un entorno operativo gráfico con el cual puede interactuar con las aplicaciones del sistema. Si esta interfaz es propia del sistema operativo se habla de un "entorno de escritorio", que en definitiva es un grupo de softwrare que ofrece una interfaz amigable entre el usuario y el sistema operativo. Esto es lo que comunmente se conoce como ventanas, escritorio, íconos, widgets, etc. Algunos ejemplos de entornos de escritorio en GNU/Linux son GNOME (en sus distintas versiones), KDE, XFCE, Enlightment, MATE ó Cinnamon.
Tambien cuenta con un gestor de ventanas, que se ocupa de acciones tales como abrir, cerrar, minimizar, maximizar, mover y escalar ventanas. También se ocupa de cuestiones como el decorador de ventanas, paneles, manejar escritorios virtuales, etc. Algunos de estos gestores son Kwin, Metacity, Openbox e i3.
#### Interfaz de Linea de Comandos (CLI - Command Line Interface)
Si bien las GUI ofrecen muchas posibilidades, no permiten acceso a todas las caracteristicas del sistema operativo, en contraposición a traves de la CLI se puede obtener un control total y acceso a todas las funcionalidades del SO.

Las CLI son un mecanismo de consolas de texto, que consisten en que apartir de una entrada (teclado) y una salida (monitor) se simulen "terminales", donde el mismo o varios usuarios puedan conectarse. En estas terminales podemos usar una o distintos tipos de Shell(bsh, bash, zsh, fish, csh, etc), debe estar logueado un usuario y asociada a un dispositivo TTY.

## Actividad 2
### 1. Los módulos del Kernel se guardan en el directorio ```/lib/modules/<version>``` **V ó F**
**Verdadero**
### 2. Explique a qué hace referencia <versión>, del punto anterior.
Esta nomenclatura hace referencia a la versión del kernel que se está utilizando, esta puede ser una versión de **producción** ó **desarrollo**, dependiendo en la estabilidad y calidad de la misma.

Se enumera con 4 números con el formato ***VV.XX.YY.ZZ***, donde *VV* es la versión *mayor* del kernel (se modificó solo 4 veces en más de 20 años), *XX* es la versión *menor* del kernel, un cambio significativo pero no tan grande (antes de la versión 2.6 su paridad indicaba si era una versión estable o de desarrollo). *YY* contempla nuevas revisiones (incorporación de algunas características y drivers) y *ZZ* indica parches de seguridad y/o corrección de errores (bugs).

Puede tener más adiciones, como letras: "rc" indicando que es un candidato a un lanzamiento no oficial (release candidate), o "generic" indicando el *flavour* del release, que sería a qué tipo de caso de uso está destinado el kernel (***generic*** ó ***server***, por ejemplo).

### 3. Todas las funciones de un determinado módulo deben formar parte fija del kernel. **V ó F**
**Falso**: No necesariamente todas las funciones de un módulo deben ser una parte fija del kernel, sino que estas pueden ser cargadas dinámicamente en tiempo de ejecución. Por eso mismo se dice que el kernel es **modular**, y durante su configuración se decide que funcionalidades se incorporan de manera fija y cuales como módulo.

### 4. Las siguientes son distribuciones de Linux:
   **a. RedHat <---**

   **b. Conectiva <---**

   c. Karatte

   **d. Caldera <--- (Actualmente cambio su nombre a SCO Linux
)**

   e. AutoLink

   **f. Suse <--- (Se puede hallar en su versión libre como OpenSUSE o la versión empresarial SUSE Linux Enterprise)**

###### Fuente: [DistroWatch](https://distrowatch.com)

### 5. Muestre qué distribución Linux tiene instalada.
```
matias@debian:~$ cat /etc/os-release
PRETTY_NAME="Debian GNU/Linux 10 (buster)"
NAME="Debian GNU/Linux"
VERSION_ID="10"
VERSION="10 (buster)"
VERSION_CODENAME=buster
ID=debian
HOME_URL="https://www.debian.org/"
SUPPORT_URL="https://www.debian.org/support"
BUG_REPORT_URL="https://bugs.debian.org/"
```
### 6. Muestre información sobre el S.O. instalado.
```
matias@debian:~$ uname -a
Linux debian 4.19.0-10-amd64 #1 SMP Debian 4.19.132-1 (2020-07-24) x86_64 GNU/Linux
```
### 7. ¿Cuál es la versión del kernel que utiliza su distribución?
```
matias@debian:~$ uname -v
#1 SMP Debian 4.19.132-1 (2020-07-24)
```