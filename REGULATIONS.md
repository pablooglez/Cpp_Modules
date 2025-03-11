# Reglas generales

## Compilación

- Compila tu código con `c++` usando las opciones `-Wall -Wextra -Werror`.
- Asegúrese de que su código todavía puede compilar con la bandera `-std=c++98`.

### Formato y Convenciones de Nomenclatura

- Nombra los directorios del ejercicio como sigue: `ex00`, `ex01`, ..., `exn`.
- Siga las directrices para nombrar sus archivos, clases, funciones, funciones miembro y atributos.
- Utilice **Mayúsculas** para los nombres de las clases. Los ficheros que contengan código de clase deben nombrarse según el nombre de la clase. Por ejemplo, una clase llamada `BrickWall` debería tener ficheros llamados `BrickWall.hpp`, `BrickWall.cpp`, o `BrickWall.tpp`.
- A menos que se especifique lo contrario, cada mensaje de salida debe terminar con un carácter de nueva línea y mostrarse en la salida estándar.
- No se impone un estilo de codificación para los módulos C++. Escriba código limpio y legible que los evaluadores puedan entender.

### Permitido/prohibido

Ahora estás codificando en C++, así que:

- Utiliza casi todo de la biblioteca estándar. Utiliza versiones C++ de funciones C cuando sea posible.
- No utilice bibliotecas externas, C++11 (y formas derivadas), o bibliotecas Boost. Las siguientes funciones también están prohibidas: `*printf()`, `*alloc()`, y `free()`. Usarlas resultará en una calificación de 0.
- Las palabras clave `using namespace <ns_name>` y `friend` están prohibidas a menos que se indique explícitamente lo contrario. Violar esto resultará en una calificación de -42.
- La STL sólo puede utilizarse en los módulos 08 y 09**. Esto significa que nada de **Contenedores** (por ejemplo, `vector`, `list`, `map`) y nada de **Algoritmos** (nada que requiera la cabecera `<algorithm>`) antes de entonces. Violar esto resultará en una calificación de -42.

### Requisitos de diseño

- Evitar fugas de memoria al asignar memoria con la palabra clave `new`.
- Del Módulo 02 al Módulo 09, diseñe sus clases en la **Forma Canónica Ortodoxa**, a menos que se indique lo contrario.
- Implementar funciones en un fichero de cabecera (excepto plantillas de funciones) supondrá una calificación de 0 en el ejercicio.
- Asegúrese de que cada cabecera se puede utilizar de forma independiente, incluyendo todas las dependencias necesarias y utilizando **include guards** para evitar la doble inclusión. Si no lo hace, obtendrá una calificación de 0.

### Léame

- Puede añadir archivos adicionales si es necesario para organizar su código, siempre que envíe los archivos obligatorios.
- Las directrices pueden ser breves, pero los ejemplos pueden mostrar requisitos adicionales no escritos explícitamente en las instrucciones.
- Lea cada módulo por completo antes de empezar.
- ¡Usa tus habilidades de pensamiento crítico!
