# Primer-taller-en-C

Introducción:

Para el desarrollo de este taller hay que tener en cuenta varias herramientas las cuales serán el entorno de trabajo y en donde se ejecutarán cada una de las aplicaciones propuestas en clase. Primeramente, se dará una breve definición del lo que es el Lenguaje C, una vez con esto claro se definirá la distribución de Linux llamada Ubuntu, el cual será nuestro sistema operativo que nos ayudará a la instalación de paquetes y herramientas para el desarrollo de esta práctica.
Con lo anterior en cuenta, C es un lenguaje de programación de propósito general que ofrece economía sintáctica, control de flujo, estructuras sencillas y un buen conjunto de operadores. Es un lenguaje de nivel medio y no está especializado en ningún tipo de aplicación.
Por otra parte, Ubuntu es una distribución Linux basada en Debian GNU/Linux, que incluye principalmente software libre y de código abierto. Puede utilizarse en ordenadores y servidores. Está orientado al usuario promedio, con un fuerte enfoque en la facilidad de uso y en mejorar la experiencia del usuario. Está compuesto de múltiple software normalmente distribuido bajo una licencia libre o de código abierto.
Para demostrar la funcionalidad y las herramientas que ofrecen las herramientas mencionadas anteriormente, se realizaran aplicaciones en C desde Ubuntu, para determinar su eficiencia.  

Desarrollo:

Para el desarrollo de este laboratorio, se hizo uso de Visual Studio Code, el cual es un entorno de desarrollo integrado (IDE). Sin embargo, en la evidencia de los resultados se muestra la compilación de cada uno de los ejercicios a través de la consola de Ubuntu. Es importante aclarar que para la elaboración de cada uno de los ejercicios NO es necesario instalar algún editor de Código.
Teniendo lo anterior en cuenta, para el desarrollo de los ejercicios es prácticamente obligatorio instalar el compilador gcc para el lenguaje C, el cual es la base del desarrollo de este taller.
Instalación GCC

1.	Abrir la consola o terminal de Ubuntu (Ctr + Alt + T).
2.	Ingresar sudo apt-get update
3.	Ingresar sudo apt-get upgrade
4.	Ingresar sudo apt-get install gcc
5.	Verificar la instalación con gcc --version
Ahora podrá realizar cualquier programa basado en la sintaxis del lenguaje C.
Modularidad de clases
El modularidad de clases se refiere a la separación de la clase principal con las funciones o métodos que se implementen dentro de la lógica de la aplicación de software que se esté desarrollando.
Esto tiene muchos beneficios, uno de los mas importantes es el orden, ya que hace mas entendible el Código para cualquier persona que quiera realizar modificaciones. Segundo punto y no menos importante es que, el modularidad de clases nos ayuda a la reutilización de Código, ya que este esta segmentado por bloques y solo seria adaptarlo a la aplicación que necesitemos.
Teniendo en cuenta lo anterior, en el presente taller se utilizaron los siguientes archivos o clases para el correcto desarrollo de la aplicación:
1.	mm_lib.c: Este archivo tendrá la lógica y la implementación de los métodos definidos en el archivo cabecera.
2.	mm_lib.h: Archivo cabecera, el cual definirá los métodos a implementar
3.	mm_main.c: Clase principal del programa



Creación Makefile:

Se elaboró un fichero Makefile. El cual será el encargado de dar las ordenes que debe ejecutar la utilidad make.
Un fichero makefile contiene las órdenes que debe ejecutar la utilidad make, así como las dependencias entre los distintos módulos del proyecto. Este archivo de descripción es un fichero de texto.
La sintaxis de un fichero makefile varía ligeramente de un sistema a otro, si bien las líneas básicas son similares. En esta sección describiremos la sintaxis de un fichero makefile para la utilidad make de GNU, si bien los elementos que describimos pueden encontrarse en la especificación de ficheros makefile en cualquier sistema. 
El fichero Makefile utilizado para esta practica cuenta con la siguiente estructura:
GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c99 -D_POSIX_C_SOURCE=199309L
MATHFLAG = -lm

PROGS = mm_main

all: $(PROGS)

mm_main:
	$(GCC) $(FLAGS) -c $@.c 
	$(GCC) $(FLAGS) -c mm_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o mm_lib.o $(MATHFLAG)
clean:
	$(RM) *.o $(PROGS)
 
Conclusiones:

Se concluye que el lenguaje C es muy útil ya que maneja el paradigma imperativo, funcional, lógico y orientado a objetos. A pesar de que no todos los paradigmas mencionados anteriormente fueron utilizados en esta práctica, se obtuvieron los resultados esperados y se llegó a la finalización exitosa del taller.
Es importante mencionar la importancia de manipular las herramientas que posee Ubuntu, ya que esto nos facilita la descarga de bibliotecas, la ejecución y compilación de programas en lenguaje C, ya que existe una gran comunidad que se encarga de brindar actualizaciones con el fin de contar con las mejores herramientas para nuestro entorno de trabajo.


Referencias:

1.	https://cs.uns.edu.ar/~ldm/mypage/data/oc/apuntes/2019-apunte1.pdf
2.	https://ubuntu-co.com/
3.	https://openwebinars.net/blog/que-es-c/
4.	https://www.enter.co/especiales/dev/que-debes-tener-en-cuenta-para-aprender-lenguaje-c/
5.	http://www.it.uc3m.es/~pedmume/asignaturas/2005/LAO/Lab2/tutorial4/node4.html#:~:text=Un%20fichero%20makefile%20contiene%20las,las%20l%C3%ADneas%20b%C3%A1sicas%20son%20similares.
 
  
  
