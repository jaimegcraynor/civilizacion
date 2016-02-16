#ifndef DIOS_H
#define DIOS_H

#include "stdio.h"
#include "stdlib.h"

//declare
//class forward declaration
namespace humanidad{
	class Poblacion;
	class humano;
	class ADAN;
	class EVA;
	class Cls_Mujer;
	class Cls_Hombre;
}
//using
using namespace humanidad;




namespace Divinidad
{
	//using namespace humanidad;
	class Dios
	{
		public:
			~Dios(void);
		
			static Dios& getInstance()
			{
				static Dios instance;
				return instance;
			};

			void * CreaHumanidad(void);
			

	protected:
		
	private:
		Dios(void);
		Poblacion * poblacion_;
	};
};
#endif//DIOS_H
