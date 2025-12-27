#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <ctime>

using namespace std;

//////////////////////////////////////

void menuppal();
void agregarClientes();
void modificarClientes();
void eliminarClientes();
void buscarClientes();
void mostrarClientes();

void agregarProveedores();
void modificarProveedores();
void eliminarProveedores();
void buscarProveedores();
void mostrarProveedores();

void agregarProductos();
void modificarProductos();
void eliminarProductos();
void buscarProductos();
void mostrarProductos();

void mostrarEntradas();
void mostrarSalidas();

void agregarSalidas();
void mostrarInventario();
void archivoInventario();
void totalEntradas();
void totalSalidas();
void valorTotalEntradas();
void valorTotalSalidas();
void movimientoProducto();

////////////////////////////////////////
int main(int argc, char **argv)
{

	menuppal();

	return 0;
}
////////////////////////////////
void menuppal()
{

	int opcionmp = 0, opp = 0, opinf = 0, opc = 0, oppd = 0;

	time_t now = time(0);

	char *dt = ctime(&now);

	cout << "------------------------------MENU PRINCIPAL------------------------------";
	cout << "\n1. Mantenimiento a los productos";
	cout << "\n2. Mantenimiento a los Clientes";
	cout << "\n3. Mantenimiento Proveedores";
	cout << "\n4. Mostrar entradas";
	cout << "\n5. Mantenimiento de salidas";
	cout << "\n6. Informes";
	cout << "\n7. Salir del Programa";
	cout << "\n------------------------------------------------------------------------";
	cout << "\nDigite la Opcion: ";
	cin >> opcionmp;
	cout << endl;

	switch (opcionmp)
	{
	case 1:
		do
		{
			system("cls");
			cout << endl
				 << endl;

			cout << "----------------------------MENU DE MANTENIMIENTO PRODUCTOS ------------------------------";
			cout << "\n1. Ingreso";
			cout << "\n2. Modificacion";
			cout << "\n3. Eliminacion";
			cout << "\n4. Busqueda";
			cout << "\n5. Mostrar";
			cout << "\n6. Volver a menu principal";
			cout << "\n7. salir";
			cout << "\n------------------------------------------------------------------------------------------";
			cout << "\nDigite la Opcion: ";
			cin >> oppd;

			if (oppd == 1)
			{
				agregarProductos();
			}
			else if (oppd == 2)
			{
				modificarProductos();
			}
			else if (oppd == 3)
			{
				eliminarProductos();
			}
			else if (oppd == 4)
			{
				buscarProductos();
			}
			else if (oppd == 5)
			{
				mostrarProductos();
			}
			else if (oppd == 6)
			{
				system("cls");
				cout << endl
					 << endl;
				menuppal();
			}

		} while (oppd != 7);
		break;

	case 2:

		do
		{
			system("cls");
			cout << endl
				 << endl;

			cout << "------------------------------MENU DE MANTENIMIENTO CLIENTES ------------------------------";
			cout << "\n1. Agregar Clientes";
			cout << "\n2. Modificar Clientes";
			cout << "\n3. Eliminar Clientes";
			cout << "\n4. Buscar Clientes";
			cout << "\n5. Mostrar Clientes";
			cout << "\n6. Volver a menu principal";
			cout << "\n7. salir";
			cout << "\n-----------------------------------------------------------------------------------------";
			cout << "\nDigite la Opcion: ";
			cin >> opc;

			if (opc == 1)
			{
				agregarClientes();
			}
			else if (opc == 2)
			{
				modificarClientes();
			}
			else if (opc == 3)
			{
				eliminarClientes();
			}
			else if (opc == 4)
			{
				buscarClientes();
			}
			else if (opc == 5)
			{
				mostrarClientes();
			}
			else if (opc == 6)
			{
				system("cls");
				cout << endl
					 << endl;
				menuppal();
			}

		} while (opc != 7);
		break;

	case 3:
		do
		{
			system("cls");
			cout << endl
				 << endl;

			cout << "------------------------------MENU DE MANTENIMIENTO PROVEEDORES ------------------------------";
			cout << "\n1. Agregar Proveedores";
			cout << "\n2. Modificar Proveedores";
			cout << "\n3. Eliminar Proveedores";
			cout << "\n4. Buscar Proveedores";
			cout << "\n5. Mostrar Proveedores";
			cout << "\n6. Volver a menu principal";
			cout << "\n7. Salir";
			cout << "\n--------------------------------------------------------------------------------------------";
			cout << "\nDigite la Opcion: ";
			cin >> opp;

			if (opp == 1)
			{
				agregarProveedores();
			}
			else if (opp == 2)
			{
				modificarProveedores();
			}
			else if (opp == 3)
			{
				eliminarProveedores();
			}
			else if (opp == 4)
			{
				buscarProveedores();
			}
			else if (opp == 5)
			{
				mostrarProveedores();
			}
			else if (opp == 6)
			{
				system("cls");
				cout << endl
					 << endl;
				menuppal();
			}
		} while (opp != 7);
		break;
	case 4:
		mostrarEntradas();
		break;

	case 5:
		do
		{
			system("cls");
			cout << endl
				 << endl;

			cout << "----------------------------MENU DE MANTENIMIENTO SALIDAS ------------------------------";
			cout << "\n1. Ingreso";
			cout << "\n2. Mostrar";
			cout << "\n3. Volver a menu principal";
			cout << "\n4. salir";
			cout << "\n---------------------------------------------------------------------------------------";
			cout << "\nDigite la Opcion: ";
			cin >> oppd;

			if (oppd == 1)
			{
				agregarSalidas();
			}
			else if (oppd == 2)
			{
				mostrarSalidas();
			}
			else if (oppd == 3)
			{
				system("cls");
				cout << endl
					 << endl;
				menuppal();
			}

		} while (oppd != 4);
		break;

	case 6:

		do
		{
			system("cls");
			cout << endl
				 << endl;

			cout << "------------------------------MENU DE INFORMES------------------------------";
			cout << "\n1. Inventario actual";
			cout << "\n2. Total de entradas";
			cout << "\n3. Total de salidas";
			cout << "\n4. Valor total de entradas";
			cout << "\n5. Valor total de salidas";
			cout << "\n6. Movimiento de un producto";
			cout << "\n7. producto con mas movimiento";
			cout << "\n8. Fecha con mas movimiento";
			cout << "\n9. Total de salidas del cliente";
			cout << "\n10. Total de salidas del cliente y un producto";
			cout << "\n11. Total de entradas por proveedor";
			cout << "\n12. Total de entradas por proveedor y un procuto";
			cout << "\n13. Volver a menu principal";
			cout << "\n14. salir";
			cout << "\n---------------------------------------------------------------------------";
			cout << "\nDigite la Opcion: ";
			cin >> opinf;

			if (opinf == 1)
			{
				archivoInventario();
			}
			else if (opinf == 2)
			{
				totalEntradas();
			}
			else if (opinf == 3)
			{
				totalSalidas();
			}
			else if (opinf == 4)
			{
				valorTotalEntradas();
			}
			else if (opinf == 5)
			{
				valorTotalSalidas();
			}
			else if (opinf == 6)
			{
				movimientoProducto();
			}
			else if (opinf == 13)
			{
				system("cls");
				cout << endl
					 << endl;
				menuppal();
			}

		} while (opinf != 14);
		break;
	case 7:
		break;
	}
}

/////////////////////////////////

void agregarEntradas(string codigo, string producto, int valorU, int cantidad, string proveedor)
{

	/* fecha/hora actual basado en el sistema actual */
	time_t now = time(0);

	/* Objeto de una estructura tm con fecha/hora local */
	tm *time = localtime(&now);

	int year = 1900 + time->tm_year;

	ofstream archivo;

	archivo.open("ArchivoEntradas.txt", ios::out | ios::app);

	if (archivo.fail())
	{
		cout << "No se pudo crear el archivo de entradas";
		exit(1);
	}
	else
	{
		archivo << codigo << " " << producto << " " << cantidad << " " << valorU << " " << proveedor << " " << time->tm_mday << "/" << time->tm_mon << "/" << year << endl;
		archivo.close();
	}
}

///////////////////////////////

bool existeProveedores(string val)
{
	ifstream archivo;
	string id;

	archivo.open("ArchivoProveedores.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
		exit(1);
	}

	archivo >> id;
	while (!archivo.eof())
	{
		if (id == val)
		{
			archivo.close();
			return true;
		}
		archivo >> id;
	}

	archivo.close();
	return false;
}

///////////////////////////////////////

void agregarProveedoresP(string proveedor)
{
	string NIT, direccion;
	int validar = 0;

	ofstream archivo;

	archivo.open("ArchivoProveedores.txt", ios::out | ios::app);

	if (archivo.fail())
	{
		cout << "No se pudo crear el archivo";
		exit(1);
	}

	while (validar == 0)
	{
		cout << endl;
		cout << "Digite el NIT del proveedor: \t ";
		cin >> NIT;
		if (existeProveedores(NIT))
		{
			cout << "El NIT ya existe en el archivo\n";
		}
		else
		{
			validar = 1;
		}
	}

	cout << "Digite la direccion del proveedor: \t";
	cin >> direccion;

	archivo << NIT << " " << proveedor << " " << direccion << endl;
	archivo.close();
}

//////////////////////////////////////////////////////

// clientes

bool existeClientes(string x)
{
	ifstream archivo;
	string id;

	archivo.open("ArchivoClientes.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
		exit(1);
	}

	archivo >> id;
	while (!archivo.eof())
	{
		if (id == x)
		{
			archivo.close();
			return true;
		}
		archivo >> id;
	}

	archivo.close();
	return false;
}

//////////////////////////////////////////////

void agregarClientesP( string cliente)
{
	string cedula, direccion;
	int validacion = 0;

	ofstream archivo;

	archivo.open("ArchivoClientes.txt", ios::out | ios::app);

	if (archivo.fail())
	{
		cout << "No se pudo crear el archivo";
		exit(1);
	}

	while (validacion == 0)
	{
		cout << endl;
		cout << "Ingrese la cedula del cliente: \t ";
		cin >> cedula;

		if (existeClientes(cedula))
		{
			cout << "La cedula ya existe en el archivo \n";
		}
		else
		{
			validacion = 1;
		}
	}

	cout << "Digite la direccion del cliente: \t";
	cin >> direccion;

	archivo << cedula << " " << cliente << " " << direccion << endl;
	archivo.close();
}

////////////////////////////////////

void agregarSalidas()
{
	string codigo, producto, cliente;
	int valorU, cantidad;
	/* fecha/hora actual basado en el sistema actual */
	time_t now = time(0);

	/* Objeto de una estructura tm con fecha/hora local */
	tm *time = localtime(&now);

	int year = 1900 + time->tm_year;

	ofstream archivo;

	cout << "Ingrese el codigo del producto: ";
	cin >> codigo;

	cout << "Ingrese el nombre del producto: ";
	cin >> producto;

	cout << "Ingrese la cantidad de este producto: ";
	cin >> cantidad;

	cout << "Quien es el cliente: ";
	cin >> cliente;
	agregarClientesP(cliente);

	archivo.open("ArchivoSalidas.txt", ios::out | ios::app);

	if (archivo.fail())
	{
		cout << "No se pudo crear el archivo de salides";
		exit(1);
	}
	else
	{
		archivo << codigo << " " << producto << " " << cantidad << " " << " " << cliente << " " << time->tm_mday << "/" << time->tm_mon << "/" << year << endl;
		archivo.close();
	}
}

//////////////////////////////////////

bool ProductosExistentes(string y)
{
	ifstream archivo;
	string id;

	archivo.open("ArchivoProductos.txt", ios::in); // abrir archivo- modo lectura

	if (!archivo.is_open())
	{
		cout << "No se abrio el archivo";
		exit(1);
	}

	archivo >> id; // guardar id en archivo
	while (!archivo.eof())
	{
		if (id == y)
		{
			archivo.close();
			return true;
		}
		archivo >> id;
	}

	archivo.close();
	return false;
}

////////////////////////////

void agregarProductos()
{

	string producto, proveedor;
	string codigo;
	int cantidad = 0, valorU = 0, valida = 0;

	ofstream archivo;

	archivo.open("ArchivoProductos.txt", ios::out | ios::app);

	if (archivo.fail())
	{
		cout << "No se pudo crear el archivo";
		exit(1);
	}
	else
	{

		while (valida == 0)
		{
			cout << endl;
			cout << "Digite el codigo del producto: \t ";
			cin >> codigo;
			if (ProductosExistentes(codigo))
			{
				cout << "El codigo ya esta en el archivo\n";
			}
			else
			{
				valida = 1;
			}
		}

		cout << "Ingrese el nombre del producto: ";
		cin >> producto;

		cout << "Ingrese la cantidad de este producto: ";
		cin >> cantidad;

		cout << "Ingrese el valor por unidad de este producto: ";
		cin >> valorU;

		cout << "Quien es el proveedor: ";
		cin >> proveedor;
		agregarProveedoresP(proveedor);

		archivo << codigo << " " << producto << " " << cantidad << " " << valorU << endl;
		archivo.close();
		agregarEntradas(codigo, producto, valorU, cantidad, proveedor);
	}
}

//////////////////////////////////

void modificarProductos()
{

	string producto, codigoVerificacion, codigo;
	int cantidad = 0, nuevaCantidad = 0, nuevoValorUnidad = 0, valorU = 0;

	ifstream archivo;  // abro lectura
	ofstream auxiliar; // abro escritura que voy a modificar

	archivo.open("ArchivoProductos.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el Archivo";
	}
	else
	{
		archivo.close();
		int validar = 0;

		while (validar == 0)
		{
			cout << endl;
			cout << "Digite el codigo del producto: \t";
			cin >> codigoVerificacion;
			if (!ProductosExistentes(codigoVerificacion))
			{
				cout << "El codigo no existe en el archivo, Intente de nuevo por favor\n";
			}
			else
			{
				validar = 1;
			}
		}

		cout << "Ingrese el nuevo valor por unidad del producto: \t";
		cin >> nuevoValorUnidad;

		cout << "Ingrese la nueva cantidad de productos: \t";
		cin >> nuevaCantidad;

		archivo.open("ArchivoProductos.txt", ios::in);
		auxiliar.open("auxiliar.txt", ios::out);

		archivo >> codigo;
		while (!archivo.eof())
		{
			archivo >> producto;
			archivo >> cantidad;
			archivo >> valorU;
			if (codigoVerificacion == codigo)
			{																									  // si codigo del archivo es igual a codigoDe verificacion
				auxiliar << codigo << " " << producto << " " << nuevaCantidad << " " << nuevoValorUnidad << endl; // pase la info a auxiliar
			}
			else
			{
				auxiliar << codigo << " " << producto << " " << cantidad << " " << valorU << endl; // sino copie en auxiliar las variables que digitó
			}
			archivo >> codigo;
		}
		archivo.close();
		auxiliar.close(); // cierre archivo y auxiliar
	}
	remove("ArchivoProductos.txt");					// borre archivo
	rename("auxiliar.txt", "ArchivoProductos.txt"); // renombre con el mismo nombre del anterior
}

//////////////////////////////////

void eliminarProductos()
{
	string codigoVerificacion, codigo, producto;
	int cantidad, valorUnidad;

	ifstream archivo;
	ofstream auxiliar;

	archivo.open("ArchivoProductos.txt", ios::in);
	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		int validacion = 0;
		archivo.close();

		while (validacion == 0)
		{
			cout << endl;
			cout << "Ingrese el codigo del producto: \t";
			cin >> codigoVerificacion;
			if (!ProductosExistentes(codigoVerificacion))
			{
				cout << "El codigo no existe en el archivo, Intente nuevamente\n";
			}
			else
			{
				validacion = 1;
			}
		}

		archivo.open("ArchivoProductos.txt", ios::in);
		auxiliar.open("auxiliar.txt", ios::out);

		archivo >> codigo;
		while (!archivo.eof())
		{
			archivo >> producto;
			archivo >> valorUnidad;
			archivo >> cantidad;

			if (codigoVerificacion != codigo)
			{
				auxiliar << codigo << " " << producto << " " << valorUnidad << " " << cantidad << endl;
			}
			else
			{
				cout << "Se elimino correctamente el producto" << endl;
			}
			archivo >> codigo;
		}

		system("pause");
		archivo.close();
		auxiliar.close();
	}
	remove("ArchivoProductos.txt");
	rename("auxiliar.txt", "ArchivoProductos.txt");
}
//////////////////////////////////////////////////////

void mostrarProductos()
{
	string producto, codigo;
	int valorUnitario, cantidad;

	ifstream archivo;

	archivo.open("ArchivoProductos.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		cout << "--------------------------------------------\n";
		while (archivo.eof() != true)
		{
			archivo >> codigo;
			archivo >> producto;
			archivo >> valorUnitario;
			archivo >> cantidad;
			if (archivo.eof() != true)
			{
				cout << "Codigo del producto: \t" << codigo << endl;
				cout << "Nombre del producto: \t" << producto << endl;
				cout << "Valor unitario del producto: \t" << valorUnitario << endl;
				cout << "Cantidad del producto: \t" << cantidad << endl;
				cout << "--------------------------------------------\n";
			}
		}
		system("pause");
		archivo.close();
	}
}

/////////////////////////////////////////////

void buscarProductos()
{
	string codigoVerificacion, codigo, producto;
	int valorUnitario, cantidad;

	ifstream archivo;
	archivo.open("producto.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo Abrir el Archivo";
	}
	else
	{
		int verificacion = 0;
		archivo.close();

		while (verificacion == 0)
		{
			cout << endl;
			cout << "Digite el codigo del producto: ";
			cin >> codigoVerificacion;
			if (!ProductosExistentes(codigoVerificacion))
			{
				cout << "El codigo no existe en el archivo, Intente de nuevo por favor\n";
			}
			else
			{
				verificacion = 1;
			}
		}

		archivo.open("ArchivoProductos.txt", ios::in);
		archivo >> codigo;

		while (!archivo.eof())
		{
			if (codigoVerificacion == codigo)
			{
				archivo >> producto;
				archivo >> valorUnitario;
				archivo >> cantidad;
				cout << endl;
				cout << "--------------------------------------------\n";
				cout << "Codigo de producto es: " << codigo << endl;
				cout << "Nombre de  producto es: " << producto << endl;
				cout << "cantidad productos es: " << cantidad << endl;
				cout << "valor de producto es: " << valorUnitario << endl;
				cout << "--------------------------------------------\n";
			}
			archivo >> codigo;
		}
		system("pause");
		archivo.close();
	}
}

//////////////////////////////////////////////

void agregarClientes()
{
	string cliente, cedula, direccion;
	int validacion = 0;

	ofstream archivo;

	archivo.open("ArchivoClientes.txt", ios::out | ios::app);

	if (archivo.fail())
	{
		cout << "No se pudo crear el archivo";
		exit(1);
	}

	while (validacion == 0)
	{
		cout << endl;
		cout << "Ingrese la cedula del cliente: \t ";
		cin >> cedula;

		if (existeClientes(cedula))
		{
			cout << "La cedula ya existe en el archivo \n";
		}
		else
		{
			validacion = 1;
		}
	}

	cout << "Digite el nombre del cliente: \t";
	cin >> cliente;

	cout << "Digite la direccion del cliente: \t";
	cin >> direccion;

	archivo << cedula << " " << cliente << " " << direccion << endl;
	archivo.close();
}

/////////////////////////////////////////////////

void modificarClientes()
{
	string cliente, cedula, direccion, nuevoCliente, nuevaDireccion, cedulaVerificacion;

	ifstream archivo;
	ofstream auxiliar;

	archivo.open("ArchivoClientes.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		int validacion = 0;
		archivo.close();

		while (validacion == 0)
		{
			cout << endl;
			cout << "Digite la cedula del cliente: \t";
			cin >> cedulaVerificacion;
			if (!existeClientes(cedulaVerificacion))
			{
				cout << "La cedula no existe en el archivo\n";
			}
			else
			{
				validacion = 1;
			}
		}

		cout << "Digite el nuevo nombre del cliente: \t";
		cin >> nuevoCliente;

		cout << "Digite la nueva direccion del cliente: \t";
		cin >> nuevaDireccion;

		archivo.open("ArchivoClientes.txt", ios::in);
		auxiliar.open("auxiliar.txt", ios::out);

		archivo >> cedula;

		while (!archivo.eof())
		{
			archivo >> cliente;
			archivo >> direccion;

			if (cedulaVerificacion == cedula)
			{
				auxiliar << cedula << " " << nuevoCliente << " " << nuevaDireccion << endl;
			}
			else
			{
				auxiliar << cedula << " " << cliente << " " << direccion << endl;
			}

			archivo >> cedula;
		}
		archivo.close();
		auxiliar.close();
	}

	remove("ArchivoClientes.txt");
	rename("auxiliar.txt", "ArchivoClientes.txt");
}

////////////////////////////

void eliminarClientes()
{
	string cedula, cliente, direccion, cedulaVerificacion;

	ifstream archivo;
	ofstream auxiliar;

	archivo.open("ArchivoClientes.txt", ios::in);
	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		int validacion = 0;
		archivo.close();

		while (validacion == 0)
		{
			cout << endl;
			cout << "Digite la cedula del cliente: \t";
			cin >> cedulaVerificacion;
			if (!existeClientes(cedulaVerificacion))
			{
				cout << "La cedula no existe en el archivo, Intente de nuevo por favor\n";
			}
			else
			{
				validacion = 1;
			}
		}

		archivo.open("ArchivoClientes.txt", ios::in);
		auxiliar.open("auxiliar.txt", ios::out);

		archivo >> cedula;
		while (!archivo.eof())
		{
			archivo >> cliente;
			archivo >> direccion;

			if (cedulaVerificacion != cedula)
			{
				auxiliar << cedula << " " << cliente << " " << direccion << endl;
			}
			else
			{
				cout << "Se elimino el cliente" << endl;
			}
			archivo >> cedula;
		}

		system("pause");
		archivo.close();
		auxiliar.close();
	}
	remove("ArchivoClientes.txt");
	rename("auxiliar.txt", "ArchivoClientes.txt");
}

//////////////////////////////

void mostrarClientes()
{
	string cedula, cliente, direccion;

	ifstream archivo;

	archivo.open("ArchivoClientes.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		cout << "--------------------------------------------\n";
		while (archivo.eof() != true)
		{
			archivo >> cedula;
			archivo >> cliente;
			archivo >> direccion;
			if (archivo.eof() != true)
			{
				cout << "Cedula del cliente: \t" << cedula << endl;
				cout << "Nombre del cliente: \t" << cliente << endl;
				cout << "Direccion del cliente: \t" << direccion << endl;
				cout << "--------------------------------------------\n";
			}
		}
		system("pause");
		archivo.close();
	}
}
//////////////////////////////////////

void buscarClientes()
{
	string cedula, cliente, direccion, cedulaVerificacion;

	ifstream archivo;
	archivo.open("ArchivoClientes.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el Archivo";
	}
	else
	{
		int verificacion = 0;
		archivo.close();

		while (verificacion == 0)
		{
			cout << endl;
			cout << "Digite la cedula del cliente: ";
			cin >> cedulaVerificacion;
			if (!existeClientes(cedulaVerificacion))
			{
				cout << "La cedula no existe en el archivo, Intente de nuevo por favor\n";
			}
			else
			{
				verificacion = 1;
			}
		}

		archivo.open("ArchivoClientes.txt", ios::in);
		archivo >> cedula;

		while (!archivo.eof())
		{
			if (cedulaVerificacion == cedula)
			{
				archivo >> cliente;
				archivo >> direccion;
				cout << endl;
				cout << "--------------------------------------------\n";
				cout << "Cedula del cliente es: " << cedula << endl;
				cout << "Nombre del cliente es: " << cliente << endl;
				cout << "Direccion del cliente es: " << direccion << endl;
				cout << "--------------------------------------------\n";
			}
			archivo >> cedula;
		}
		system("pause");
		archivo.close();
	}
}

///////////////////////////////////////

void agregarProveedores()
{
	string NIT, direccion, proveedor;
	int validar = 0;

	ofstream archivo;

	archivo.open("ArchivoProveedores.txt", ios::out | ios::app);

	if (archivo.fail())
	{
		cout << "No se pudo crear el archivo";
		exit(1);
	}

	while (validar == 0)
	{
		cout << endl;
		cout << "Digite el NIT del proveedor: \t ";
		cin >> NIT;
		if (existeProveedores(NIT))
		{
			cout << "El NIT ya existe en el archivo\n";
		}
		else
		{
			validar = 1;
		}
	}

	cout << "escriba el nombre del proveedor: \t";
	cin >> proveedor;

	cout << "Digite la direccion del proveedor: \t";
	cin >> direccion;

	archivo << NIT << " " << proveedor << " " << direccion << endl;
	archivo.close();
}

////////////////////////////////////
void modificarProveedores()
{
	string proveedor, nuevoProveedor, Nit, NitVerificar, direccion, nuevaDireccion;

	ifstream archivo;
	ofstream auxiliar;

	archivo.open("ArchivoProveedores.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		int validacion = 0;
		archivo.close();

		while (validacion == 0)
		{
			cout << endl;
			cout << "Digite el NIT del proveedor: \t";
			cin >> NitVerificar;
			if (!existeProveedores(NitVerificar))
			{
				cout << "El NIT no existe en el archivo. \n";
			}
			else
			{
				validacion = 1;
			}
		}

		cout << "Ingrese el nuevo nombre del proveedor: \t";
		cin >> nuevoProveedor;

		cout << "Ingrese la nueva direccion del proveedor: \t";
		cin >> nuevaDireccion;

		archivo.open("ArchivoProveedores", ios::in);
		auxiliar.open("auxiliar.txt", ios::out);

		archivo >> Nit;

		while (!archivo.eof())
		{
			archivo >> proveedor;
			archivo >> direccion;

			if (NitVerificar == Nit)
			{
				auxiliar << Nit << " " << nuevoProveedor << " " << nuevaDireccion << endl;
			}
			else
			{
				auxiliar << Nit << " " << proveedor << " " << direccion << endl;
			}

			archivo >> Nit;
		}
		archivo.close();
		auxiliar.close();
	}

	remove("ArchivoProveedores.txt");
	rename("auxiliar.txt", "ArchivoProveedores.txt");
}

/////////////////////////////////

void eliminarProveedores()
{
	string NIT, proveedor, direccion, NitVerifica;

	ifstream archivo;
	ofstream auxiliar;

	archivo.open("ArchivoProveedores.txt", ios::in);
	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		int validacion = 0;
		archivo.close();

		while (validacion == 0)
		{
			cout << endl;
			cout << "Ingrese el NIT del proveedor: \t";
			cin >> NitVerifica;
			if (!existeProveedores(NitVerifica))
			{
				cout << "El NIT no existe en el archivo\n";
			}
			else
			{
				validacion = 1;
			}
		}

		archivo.open("ArchivoProveedores.txt", ios::in);
		auxiliar.open("auxiliar.txt", ios::out);

		archivo >> NIT;
		while (!archivo.eof())
		{
			archivo >> proveedor;
			archivo >> direccion;

			if (NitVerifica != NIT)
			{
				auxiliar << NIT << " " << proveedor << " " << direccion << endl;
			}
			else
			{
				cout << "El proveedor ha sido eliminado" << endl;
			}
			archivo >> NIT;
		}

		system("pause");
		archivo.close();
		auxiliar.close();
	}
	remove("ArchivoProveedores.txt");
	rename("auxiliar.txt", "ArchivoProveedores.txt");
}

///////////////////////////////////

void mostrarProveedores()
{
	string Nit, proveedor, direccion;

	ifstream archivo;

	archivo.open("ArchivoProveedores.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{

		while (archivo.eof() != true)
		{
			archivo >> Nit;
			archivo >> proveedor;
			archivo >> direccion;
			if (archivo.eof() != true)
			{
				cout << "NIT del proveedor: \t" << Nit << endl;
				cout << "Nombre del proveedor: \t" << proveedor << endl;
				cout << "Direccion del proveedor: \t" << direccion << endl;
			}
		}
		system("pause");
		archivo.close();
	}
}

//////////////////////////////////////

void buscarProveedores()
{
	string NIT, proveedor, direccion, NITVerificacion;

	ifstream archivo;
	archivo.open("ArchivoProveedores.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el Archivo";
	}
	else
	{
		int verificacion = 0;
		archivo.close();

		while (verificacion == 0)
		{
			cout << endl;
			cout << "Digite el NIT del proveedor: ";
			cin >> NITVerificacion;
			if (!existeProveedores(NITVerificacion))
			{
				cout << "El NIT no existe en el archivo\n";
			}
			else
			{
				verificacion = 1;
			}
		}

		archivo.open("ArchivoProveedores.txt", ios::in);
		archivo >> NIT;

		while (!archivo.eof())
		{
			if (NITVerificacion == NIT)
			{
				archivo >> proveedor;
				archivo >> direccion;
				cout << endl;
				cout << "El NIT del proveedor es: " << NIT << endl;
				cout << "El Nombre del proveedor es: " << proveedor << endl;
				cout << "La Direccion del proveedor es: " << direccion << endl;
			}
			archivo >> NIT;
		}
		system("pause");
		archivo.close();
	}
}

///////////////////////////////////////////

void mostrarEntradas()
{
	string producto, codigo, proveedor;
	int valorUnitario, cantidad;

	time_t now = time(0);
	char *dt = ctime(&now);

	ifstream archivo;

	archivo.open("ArchivoEntradas.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		cout << "--------------------------------------------\n";
		while (archivo.eof() != true)
		{
			archivo >> codigo;
			archivo >> producto;
			archivo >> cantidad;
			archivo >> valorUnitario;
			archivo >> proveedor;
			archivo >> dt;
			if (archivo.eof() != true)
			{
				cout << "Codigo del producto: \t" << codigo << endl;
				cout << "Nombre del producto: \t" << producto << endl;
				cout << "Cantidad del producto: \t" << cantidad << endl;
				cout << "proveedor del producto: \t" << proveedor << endl;
				cout << "Valor unitario del producto: \t" << valorUnitario << endl;
				cout << "Fecha de Entrada: \t" << dt << endl;
				cout << "--------------------------------------------\n";
			}
		}
		system("pause");
		archivo.close();
	}
}

///////////////////////////////////////////

void mostrarSalidas()
{
	string producto, codigo, cliente;
	int valorUnitario, cantidad;

	time_t now = time(0);
	char *dt = ctime(&now);

	ifstream archivo;

	archivo.open("ArchivoSalidas.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		cout << "--------------------------------------------\n";
		while (archivo.eof() != true)
		{
			archivo >> codigo;
			archivo >> producto;
			archivo >> cantidad;
			archivo >> valorUnitario;
			archivo >> cliente;
			archivo >> dt;
			if (archivo.eof() != true)
			{
				cout << "Codigo del producto: \t" << codigo << endl;
				cout << "Nombre del producto: \t" << producto << endl;
				cout << "Cantidad del producto: \t" << cantidad << endl;
				cout << "Valor unitario delcantidadSalidas producto: \t" << valorUnitario << endl;
				cout << "Cliente: \t" << cliente << endl;
				cout << "Fecha de Salida: \t" << dt << endl;
				cout << "--------------------------------------------\n";
			}
		}
		system("pause");
		archivo.close();
	}
}

///////////////////////////////////

void mostrarInventario()
{
	string producto, codigo;
	int valorUnitario, cantidad,cantidadTotal,cantidadSalidas;

	ifstream archivo;

	archivo.open("ArchivoInventario.txt", ios::in);
	cantidadTotal=cantidad-cantidadSalidas;


//AQUIIIIIIIIIIIIIIII
// if(agregarSalidas(cantidad)<cantidadSalidas){}
// if(cantidad<cantidadSalidas){
//	cout<<"no hay cantidad disponible para salir";
//}
//else{

//	}





	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		cout << "--------------------------------------------\n";
		while (archivo.eof() != true)
		{
			archivo >> codigo;
			archivo >> producto;
			archivo >> valorUnitario;
			archivo >> cantidad;

			if (archivo.eof() != true)
			{
				cout << "Codigo del producto: \t" << codigo << endl;
				cout << "Nombre del producto: \t" << producto << endl;
				cout << "Valor unitario del producto: \t" << valorUnitario << endl;
				cout << "Cantidad actual del producto: \t" << cantidadTotal << endl;
				cout << "--------------------------------------------\n";
			}
		}
		system("pause");
		archivo.close();
	}
}

//////////////////////////////////////////////////

void archivoInventario()
{
	string producto;
	string codigo;
	int cantidad = 0, valorU = 0, valida = 0;

	ofstream archivo;
	ifstream auxiliar;

	auxiliar.open("ArchivoProductos.txt", ios::in | ios::app);
	archivo.open("ArchivoInventario.txt", ios::out | ios::app);

	if (archivo.fail())
	{
		cout << "No se pudo crear el archivo";
		exit(1);
	}
	else
	{

		auxiliar >> codigo;
		while (!auxiliar.eof())
		{
			auxiliar >> producto;
			auxiliar >> cantidad;
			auxiliar >> valorU;
			if (cantidad != 0)
			{
				archivo << codigo << " " << producto << " " << cantidad << " " << valorU << endl;
			}
			auxiliar >> codigo;
		}
		archivo.close();
		auxiliar.close(); // cierre archivo y auxiliar
	}

	mostrarInventario();
}

/////////////////////////////////////////////////

void totalEntradas()
{
	string producto, codigo, proveedor;
	int valorUnitario, cantidad, cantidadEntradas;

	ifstream archivo;

	time_t now = time(0);
	char *dt = ctime(&now);

	archivo.open("ArchivoEntradas.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		cantidadEntradas = 0;
		while (archivo.eof() != true)
		{
			archivo >> codigo;
			archivo >> producto;
			archivo >> cantidad;
			archivo >> valorUnitario;
			archivo >> proveedor;
			archivo >> dt;
			if (archivo.eof() != true)
			{
				cantidadEntradas = cantidadEntradas + (int)cantidad;
			}
		}
		cout << "Cantidad total de entradas: \t" << cantidadEntradas << endl;
		system("pause");
		archivo.close();
	}
}

////////////////////////////////////////////////

void valorTotalEntradas()
{
	string producto, codigo, proveedor;
	int valorUnitario, cantidad, totalValor;

	ifstream archivo;

	time_t now = time(0);
	char *dt = ctime(&now);

	archivo.open("ArchivoEntradas.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		totalValor = 0;
		while (archivo.eof() != true)
		{
			archivo >> codigo;
			archivo >> producto;
			archivo >> cantidad;
			archivo >> valorUnitario;
			archivo >> proveedor;
			archivo >> dt;
			if (archivo.eof() != true)
			{
				totalValor = ((int)valorUnitario * (int)cantidad) + totalValor;
			}
		}
		cout << "El valor total de las entradas es: " << totalValor << endl;
		system("pause");
		archivo.close();
	}
}

///////////////////////////////////////////////////

void totalSalidas()
{
	string producto, codigo, cliente;
	int valorUnitario, cantidad, cantidadSalidas;
	time_t now = time(0);
	char *dt = ctime(&now);

	ifstream archivo;

	archivo.open("ArchivoSalidas.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		cantidadSalidas = 0;
		while (archivo.eof() != true)
		{
			archivo >> codigo;
			archivo >> producto;
			archivo >> cantidad;
			archivo >> valorUnitario;
			archivo >> cliente;
			archivo >> dt;
			if (archivo.eof() != true)
			{
				cantidadSalidas = cantidadSalidas + (int)cantidad;
			}
		}
		cout << "La cantidad de salidas totales es: " << cantidadSalidas << endl;
		system("pause");
		archivo.close();
	}
}

////////////////////////////////////////////////

void valorTotalSalidas()
{
	string producto, codigo, cliente;
	int valorUnitario, cantidad, totalValor;

	ifstream archivo;

	time_t now = time(0);
	char *dt = ctime(&now);

	archivo.open("ArchivoSalidas.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		totalValor = 0;
		while (archivo.eof() != true)
		{
			archivo >> codigo;
			archivo >> producto;
			archivo >> cantidad;
			archivo >> valorUnitario;
			archivo >> cliente;
			archivo >> dt;
			if (archivo.eof() != true)
			{
				totalValor = ((int)valorUnitario * (int)cantidad) + totalValor;
			}
		}
		cout << "El valor total de las salidas es: " << totalValor << endl;
		system("pause");
		archivo.close();
	}
}

/////////////////////////////////////////////////////

void movimientoProducto()
{
	string producto, codigo, productoBusqueda, cliente, proveedor;
	int valorUnitario, cantidad, totalValor, totalValorSalida = 0, valida = 0;

	ifstream archivo;

	time_t now = time(0);
	char *dt = ctime(&now);

	archivo.open("ArchivoEntradas.txt", ios::in);

	while (valida == 0)
	{
		cout << endl;
		cout << "Digite el codigo del producto: \t ";
		cin >> productoBusqueda;

		if (!ProductosExistentes(productoBusqueda))
		{
			cout << "El producto no existe\n";
		}
		else
		{
			valida = 1;
		}
	}

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		totalValor = 0;
		while (archivo.eof() != true)
		{
			archivo >> codigo;
			archivo >> producto;
			archivo >> cantidad;
			archivo >> valorUnitario;
			archivo >> proveedor;
			archivo >> dt;
			if (archivo.eof() != true)
			{
				if (codigo == productoBusqueda)
				{
					totalValor = totalValor + 1;
				}
			}
		}
	}
	archivo.close();

	archivo.open("ArchivoSalidas.txt", ios::in);

	if (!archivo.is_open())
	{
		cout << "No se pudo abrir el archivo";
	}
	else
	{
		while (archivo.eof() != true)
		{
			archivo >> codigo;
			archivo >> producto;
			archivo >> cantidad;
			archivo >> valorUnitario;
			archivo >> cliente;
			archivo >> dt;
			if (archivo.eof() != true)
			{
				if (codigo == productoBusqueda)
				{
					totalValorSalida = totalValorSalida + 1;
				}
			}
		}

		cout << "el movimiento del producto es de: " << totalValorSalida << " Ventas y " << totalValor << " compras" << endl;
		archivo.close();
		system("pause");
	}
}