# Sistema de Gestión de Inventarios en C++

Proyecto académico desarrollado en **C++** que implementa un sistema de gestión de inventarios por consola.  
El programa permite administrar **productos, clientes y proveedores**, así como registrar **entradas (compras)** y **salidas (ventas)** utilizando **archivos de texto** como mecanismo de persistencia.

---

## 📌 Características principales

- Gestión de **productos**
  - Agregar
  - Modificar
  - Eliminar
  - Buscar
  - Mostrar

- Gestión de **clientes**
  - Agregar
  - Modificar
  - Eliminar
  - Buscar
  - Mostrar

- Gestión de **proveedores**
  - Agregar
  - Modificar
  - Eliminar
  - Buscar
  - Mostrar

- Registro de **entradas** (ingreso de productos al inventario)
- Registro de **salidas** (ventas a clientes)
- Generación de **inventario actual**
- Módulo de **informes**, incluyendo:
  - Total de entradas
  - Total de salidas
  - Valor total de entradas
  - Valor total de salidas
  - Movimiento de un producto (compras vs ventas)

---

## 🗂️ Archivos utilizados

El sistema trabaja con archivos de texto para almacenar la información:

- `ArchivoProductos.txt`
- `ArchivoClientes.txt`
- `ArchivoProveedores.txt`
- `ArchivoEntradas.txt`
- `ArchivoSalidas.txt`
- `ArchivoInventario.txt`

Cada archivo cumple una función específica dentro del sistema y permite mantener los datos aun después de cerrar el programa.

---

## 🛠️ Tecnologías utilizadas

- Lenguaje: **C++**
- Paradigma: **Programación procedimental**
- Manejo de archivos: `ifstream`, `ofstream`
- Manejo de fechas: `<ctime>`
- Interfaz: **Consola**

---

## 🎯 Propósito académico

Este proyecto fue desarrollado con fines **educativos**, con el objetivo de reforzar los siguientes conceptos:

- Manejo de archivos en C++
- Validación de datos
- Menús jerárquicos por consola
- Persistencia de información sin base de datos
- Uso de archivos auxiliares para modificar y eliminar registros
- Lógica básica de inventarios

---

## ⚠️ Limitaciones conocidas

- El sistema no utiliza estructuras como `struct` o `class`
- No se usa base de datos (solo archivos de texto)
- No valida completamente la disponibilidad del inventario en tiempo real
- El código se encuentra en un solo archivo (`.cpp`)
- Uso de funciones dependientes del sistema operativo (`system("cls")`, `system("pause")`)

---

## 🚀 Posibles mejoras futuras

- Separar el proyecto en múltiples archivos (`.h` y `.cpp`)
- Implementar programación orientada a objetos
- Uso de estructuras (`struct`) para mayor claridad
- Mejor control del inventario al registrar salidas
- Implementar almacenamiento en base de datos
- Interfaz gráfica

---

## 👤 Autor

**Andrés Aguirre**  
Proyecto académico – Lenguaje C++
