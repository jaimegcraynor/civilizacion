#ifndef ADAN_H
#define ADAN_H

#include "Cls_Hombre.h"
#include "Dios.h"
namespace humanidad
{
	class ADAN : public Cls_Hombre
	{

	friend class Dios;
	public:
		~ADAN(void);
	//private: TODO:NEED TO PROTECT THIS
		ADAN(void);


	};
}

#endif //ADAN_H
