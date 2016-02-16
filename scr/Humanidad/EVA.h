#ifndef EVA_H
#define EVA_H

#include "Cls_Mujer.h"
#include "Dios.h"
namespace humanidad
{

	class EVA : public Cls_Mujer 
	{
		friend class Divinidad::Dios;
	public: 

		~EVA(void);
	private:
		EVA(void);
	};
}
#endif //EVA_H
