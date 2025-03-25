# Diapositivas #4 - 25/03/2025

## Requerimientos de software

### Especificación de requerimientos

La especificación de requerimientos es un insumo fundamental en el desarrollo de software.
- Es la principal fuente de información a partir de la cual se diseña, implementa y testea el sistema.
- Es uno de los aspectos más delicados de un proyecto:
    - Es algo complejo de obtener.
    - De su correctitud depende el éxito del proyecto.
- Representa un "contrato" con el usuario.
- No se genera por completo al inicio del proyecto, sino incrementalmente.
- Suele presentarse como la agregación de diferentes artefactos.

### Tipos de requerimientos

Un requerimiento es una condición o capacidad que un sistema debe cumplir.
- **Requerimiento funcional:**
    - Expresa una acción que debe ser capaz de realizar el sistema.
    - Especifica comportamiento de entrada/salida.
- **Requerimiento no funcional:**
    - Expresa una propiedad o cualidad que el sistema debe tener.
    - También restricciones físicas sobre los funcionales.

#### Requerimientos no funcionales

Cuando se habla de requerimientos no funcionales se suele hacer referencia a:
- **Usabilidad:** factores humanos, ayuda, documentación.
- **Confiabilidad:** frecuencia de fallos, tiempo de recuperación.
- **Performance:** tiempo de respuesta, tasa de procesamiento, precisión, capacidad de carga.
- **Soportabilidad:** adaptabilidad, mantenibilidad, configurabilidad, internacionalización.
- **Interfaces:** restricciones en la comunicación con sistemas externos.
- **Restricciones:** en el uso de:
    - Sistemas o paquetes existentes
    - Plataformas
    - Lenguajes de programación
    - Ambientes de desarrollo
    - Herramientas (sistemas de bases de datos, middleware, etc.)

#### Requerimientos funcionales

- Los requerimientos funcionales se expresaban en términos de "funciones del sistema".
- Una función del sistema es algo puntual que el sistema debe hacer.
- Técnica básica: Si X es una función del sistema entonces la frase "El sistema debe hacer X" tiene que tener sentido.
- Esta herramienta funcionó bien mientras:
    - Las funcionalidades de los sistemas eran sencillas.
    - El modelo de uso de los usuarios se limitaba a una interacción simple y puntual con el sistema.
- Perdió su efectividad cuando las interacciones a soportar se volvieron más complejas tomando períodos de tiempo más prolongados.
- Nuevo enfoque: **Casos de uso**.

### Casos de uso

- El enfoque de casos de uso está basado en la noción de actor.
- Un actor es un agente externo (humano o no) que interactúa directamente con el sistema
- Un caso de uso narra la historia completa (junto con todas sus variantes) de un conjunto de actores mientras usan el sistema.
    - La historia termina cuando uno de los actores (el principal) logra su objetivo y obtiene un resultado de valor.
- Los casos de uso (y similares) son una herramienta muy aplicada para la especificación de requerimientos funcionales.
- Por ser expresados textualmente resultan simples de comprender (hasta para personal no técnico).
- Por estar orientados hacia los objetivos de los actores (y al camino hacia su obtención):
    - Son intuitivos.
    - Propician la completitud de especificación.
- Un caso de uso se compone de:
    - **Nombre** que identifica al caso de uso.
    - **Actores** participantes en el caso de uso
    - **Sinopsis** que describe brevemente su objetivo.
    - **Curso típico de eventos** que narra la "historia" más común de los actores durante el uso del sistema.
    - **Cursos alternativos de eventos** que narran las variantes de uso del sistema.
- Los casos de uso no suelen especificarse con todo detalle de una sola vez.
- Esto se realiza en forma gradual y posterior a la identificación de actores:
    - Los actores son más fáciles de identificar y sus necesidades dan lugar a los casos de uso.
- Formas posibles de un caso de uso:
    - Identificado o detectado: solo su nombre y actores participantes.
    - Especificado en alto nivel: se incorpora una sinopsis
    - Espeficicado en forma expandida: se incorporan los cursos de eventos.
- Método básico (varible según el avance):
    1. Detectar errores
    2. Identificar algunos casos de uso (detectando objetivos y necesidades de actores)
    3. Especificarlos en alto nivel
    4. Examinarlos y expandir alguno de ellos
- A medida que se avanza en el desarrollo se detectan nuevos casos de uso y se especifican otros ya detectados.
- Sobre el principio del proyecto se tiende a buscar y especificar los casos de uso más importantes.
- Los casos de uso se usan además como criterio de partición del problema en un proceso iterativo e incremental:
    - En una iteración se desarrolla "uno a la vez"
    - Los incrementos no refieren a "partes" físicas sino a conjunto de funcionalidades

#### Ejemplo de caso de uso

- **Nombre:** Escribir email
- **Actores:** Usuario
- **Descripción:** El caso de uso comienza cuando el Usuario desea escribir un correo electrónico. Para ello especifica el cuerpo del correo electrónico y un asunto. Luego si lo desea el usuario puede adjuntar uno o más archivos de su disco duro en el email. Al finalizar de escribir el email el sistema especifica una lista de contactos y el usuario selecciona opcionalmente uno o más destinatarios. Para cada destinatario puede especificar que tipo de destinatario se trata (Principal, Con Copia o Con Copia oculta). Luego el usuario puede elegir más destinatarios escribiendo manualmente sus correos electrónicos y el tipo de destinatario al igual que lo hizo antes. Al finalizar el sistema envía el correo y lo copia en la carpeta "Enviados".
- **Escenario típico:**
    1. Usuario especifica cuerpo del correo y el asunto
    2. El sistema muestra una lista de contactos
    3. El usuario selecciona contactos y especifica el tipo de destinatario para cada uno.
    4. El usuario hace click en un botón de "Enviar"
    5. El sistema envía el correo
    6. El sistema copia el correo en la carpeta "Enviados"

#### ¿Qué sigue después?

- Una vez detectado y especificado el conjunto inicial de casos de uso:
    - El equipo de desarrollo está listo para analizarlos, diseñar una solución para ellos e implementarlo.
- Mientras tanto el equipo de analistas avanza en la detección y especificación de otros casos de uso.

## Breve introducción al Análisis

### Objetivos

- Modelar el dominio del problema:
    - Para comprender mejor el contexto del problema
    - Para obtener una primera "aproximación" a la estructura de la solución
- Especificar el comportamiento del problema:
    - Para contar con una descripción más precisa de lo que se espera del sistema.

### Actividades

Para lograr los objetivos planteados realizaremos las siguientes actividades:
- Modelado de Dominio
- Especificación del comportamiento del sistema

#### Modelado de Dominio

- Consiste en encontrar y describir los conceptos en el dominio de la aplicación.
- Durante esta actividad se construye el **Modelo de Dominio**.
- En él se incluyen todos los modelos que se definan durante esta actividad.

#### Comportamiento del sistema

- Consiste en:
    - Entender cada caso de uso en términos de intercambios de mensajes entre los actores y el sistema
    - Especificar el comportamiento de cada uno de esos mensajes (pero sin decir como funcionan)
- Durante esta actividad se completa el **Modelo de casos de uso**.
- En él se incluyen todos los elementos que se definan durante esta actividad.