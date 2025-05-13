# Diapositivas #9 - 13/05/2025

## Diseño

### Introducción

- Durante el análisis, un caso de uso fue reformulado en términos de interacciones entre los actores y el sistema (DSS).
- El efecto de cada mensaje fue especificado de forma precisa (Contrato).
- Es el momento de definir **cómo** hace el sistema internamente para resolver cada una de las operaciones del sistema.
- La arquitectura de software busca expresar la estructura global de una aplicación.
- El nivel de abstracción empleado para expresar dicha estructura es mayor que el empleado para detallar la solución al problema de software planteado.
- El objetivo de la arquitectura no es detallar la solución adoptada, sino que proveer una visión global de la misma para simplificar su comprensión.
- Uno de los puntos de vista desde donde se suele estudiar la estructura de una aplicación es la **estructura interna**.
- La arquitectura desde este punto de vista se denomina **arquitectura lógica**.
- A definir cómo se resuelven las operaciones del sistema en esta estructura se le llama **diseño de bajo nivel** (o simplemente **diseño**).

### Objetivos

- Definir la estructura interna del sistema a construir.
- Realizar el diseño de las operaciones del sistema.

### Arquitectura lógica

- La arquitectura lógica se define como un conjunto de componentes lógicos relacionados entre si, con responsabilidades específicas.
- Estos componentes se obtienen a partir de la sucesiva partición del sistema en componentes con responsabilidades más concretas (enfoque top-down).
- Existen **guías** de particionamiento.
- Cada una de ellas propone:
    - Un tipo de asignación particular
    - Asignación de responsabilidades a los componentes resultantes
- Se denominan estilos o patrones de arquitectura
- La elección del estilo a aplicar depende del sistema que se esté construyendo.

#### Aspectos de una aplicación

- El diseño de un sistema de software comprende la resolución de múltiples aspectos de una aplicación.
- La forma en la que esos aspectos sean resueltos determina la flexibilidad del diseño.
- Desde un punto de vista lógico, es preferible separar el diseño de aspectos diferentes para:
    - Permitir que evolucionen independientemente
    - Simplificar el problema y tener mejor visibilidad de las partes que componenen la aplicación
- Diseñar e implementar en forma conjunta diferentes aspectos:
    - Usualmente simplifica la arquitectura, pero
    - Complica el diseño
- La separación de aspectos generalmente:
    - Complica la arquitectura (estructura general)
    - Simplifica el diseño de cada uno al permitir enfocarse sobre cada uno por separado.

![Figura 1](images/d9fig1.png)

- En el ejemplo anterior se detectan fragmentos de código con diferentes propósitos en una misma clase.
    - Código para procesar la información existente que implementa la lógica de la aplicación,
    - Código de interacción con el usuario, y
    - Código que sirve para almacenar los datos en un medio persistente
- Esto es común a la mayoría de los sistemas de información interactivos.
- Se puede decir que estas aplicaciones abarcan básicamente tres aspectos.
    - **Presentación:** incluye todo lo referente a la interacción del sistema con los usuarios en el mundo exterior
    - **Lógica:** se encarga del procesamiento particular que el sistema debe realizar sobre la información que maneja
    - **Persistencia:** consiste en el almacenamiento persistente de dicha información

- Incluir los tres aspectos en una clase no resulta flexible.
- La clase completa queda dependiente de:
    - La forma en que los datos son mostrados u obtenidos del usuario, y además de
    - La forma en que los datos son almacenados
- Es deseable establecer una separación de dichos aspectos.
- Es decir, mantener el código referente a cada aspecto en clases separadas.
- Esto sugiere un criterio concreto de partición de componentes.

    ![Figura 2](images/d9fig2.png)

#### Arquitectura en capas

- Una arquitectura en capas es la arquitectura de un sistema que haya sido particionado según el estilo de capas.
    - Define diferentes "niveles" de elementos
    - Los elementos de un mismo nivel tienen responsabilidades de abstracción similar
    - Los elementos de un nivel están para atender los pedidos del nivel superior

    ![Figura 3](images/d9fig3.png)

- La partición definida anteriormente es compatible con el estilo de capas.
- Se pueden definir las capas:
    - Presentación
    - Lógica
    - Persistencia
- Los actores solamente utilizan la capa de presentación
- La capa de persistencia no requiere de los servicios de ningún otra.

    ![Figura 4](images/d9fig4.png)

- Qué hay en cada capa?
    - **Presentación:** clases que se encargan de capturar la entrada de los usuarios y mostrar información
    - **Lógica:**
        - Clases que describen los objetos que procesarán la información para satisfacer los casos de uso del sistema
        - Clases que permiten a las anteriores acceder a los datos
    - **Persistencia:** datos del sistema que necesiten ser preservados (texto plano, base de datos, etc.)

- Usualmente la capa lógica es refinada de la siguiente manera:

    ![Figura 5](images/d9fig5.png)

    ![Figura 6](images/d9fig6.png)