Proyecto de Programación implementacion de un CRUD con QT CREATOR, el proyecto se basara en registro, modificación, búsqueda, muestra y eliminación de datos. Todos los datos registrados se lo harán en un archivo txt 
La creacion del proyecto se inicio el dia 14 de Julio de 2026 a la 20:00 PM.
La fecha de entrega del proyecto es el dia 15 de Julio de 2026 a las 23:59 PM 
El proyecto se comenzo a realizar un dia antes de la entrega por tema de busqueda y creacion de la idea para la implementacion de CRUD para QT Creator Se hizo uso de IA para correccion de errores y para ayuda
Motivación
La pérdida de una mascota es una situación de alta vulnerabilidad emocional para las familias. Muchas veces, la difusión de estos casos en redes sociales se dispersa rápidamente y pierde visibilidad con el tiempo.

La motivación de este proyecto nace de la necesidad de estructurar una herramienta local centralizada, ágil y de uso sencillo que permita registrar de manera organizada los datos de mascotas perdidas en una comunidad. El enfoque técnico busca demostrar cómo la programación estructurada y las interfaces gráficas de escritorio pueden unirse para crear soluciones reales con un impacto social directo.

Trabajos Futuros
Migración a SQLite: Como trabajo futuro, se recomienda reemplazar el motor de archivos de texto secuencial por una base de datos embebida SQLite. Esto facilitará consultas estructuradas (SQL) de manera más eficiente cuando el volumen de mascotas registradas crezca exponencialmente.

Módulo de Geolocalización: Implementar una integración con APIs de mapas para marcar de forma gráfica la zona donde la mascota fue vista por última vez.

Exportación de Reportes: Añadir una función de generación de PDF para crear hojas de búsqueda listas para imprimir de forma automática desde la misma aplicación.
Alcance del Proyecto
Persistencia Segura de Datos: Creación, lectura y modificación física de archivos planos en disco local sin pérdida de integridad de información.

Seguridad de Entrada en Interfaz: Bloqueo de entrada en tiempo real mediante expresiones regulares (QRegularExpressionValidator) que impiden ingresar números en campos de nombres o letras en campos de contacto telefónico.

Historial de Cambios e Integridad: Los registros eliminados nunca se destruyen del todo de inmediato; pasan a una base de datos secundaria (eliminados.txt) junto con una descripción del porqué de la baja, garantizando auditoría interna del flujo de datos.

Diseño Modular Multiventana: Arquitectura orientada a objetos donde cada ventana tiene responsabilidades únicas y limpias.

Interfaz Adaptable: Ajustes dinámicos de las tablas para visualizar bloques completos de texto multilínea sin cortes visuales
