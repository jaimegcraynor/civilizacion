#ifndef ADAN_H
#define ADAN_H

#include "Cls_Hombre.h"
#include "Dios.h"

namespace humanidad
{
	class ADAN : public Cls_Hombre
	{
		friend class Divinidad::Dios;


	public:
		~ADAN();
		//un cambio muy simple
	private: //TODO:NEED TO PROTECT THIS
	ADAN();


	};
}

#endif //ADAN_H
