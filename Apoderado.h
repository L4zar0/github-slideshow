#pragma once

using namespace System;

public ref class Apoderado {

	private:
		String^ nombre;
		String^ apellidos;
		String^ correoElectronico;
		String^ dni;

		int codigo;
		String^ contraseña;

		String^ hijo;
		int codigoHijo;
		
	public:
		Apoderado();

};
