# TALLER DE LENGUAJES 1

## Trabajo práctico 1

Este repositorio trata sobre lo aprendido en la primera clase de la materia de **Taller de Tenguajes 1**, consta de ejercicios simples para la practicar las bases de Git y el uso de GitHub.

### Información sobre `.gitignore`

El `.gitignore` es un archivo de texto plano que se ubica en el la raíz del repositorio. Su función es "marcar" los tipos de archivos o ubicaciones que git debe ignorar en el moemento de realizar una actualización en el repositorio remoto.
Es bueno incluirlo desde un principio, contemplando el contexto en el que se este trabajando, es decir, el lenguaje de programación, los objetivos del proyecto, datos sensibles o archivos puntuales del entorno.
Para configurarlo se puede hacer de forma manual siguiendo las siguientes reglas básicas
- archivo.extencion → ignora este archivo puntualmente.
- carpeta/ → ignora todo el contenido de la carpeta.
- *.extencion → ignora todos los archivo de esta `extención`. 
- !archivo.extención → no ignora este archivo en específico.

Pero también existen herramientas como [GitIgnore.io](https://www.gitignore.io/) que ayudan a configurar el archivo de forma más simple.

### Ejercicio 3c

Obsevé que al repositorio se subieron todos los archivos del repositirio local, el que no me parece que sea necesario es el archivo ejecutable, pues este esta condicionado para funcionar en mi máquina.

### Ejercicio 3g

Los apartados 2 y 3 muestran lo mismo valor porque el puntero almacena la dirección de la variable, por lo tanto el contenido del puntero y la id de la variable son lo mismo.
La dirección de memoria del puntero es diferente, porque el puntero en sí es una variable almacenada en otra posición de la memoria.
El puntero es una tipo de dato que guarda la dirección de la variable, ocupa de por sí un espacio en la memoria distinto e independiente de la variable, entonces es distinto a los demás.

