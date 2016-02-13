#ifndef EVA_H
#define EVA_H
#include "Cls_Mujer.h"
namespace humanidad
{
	class EVA : public Cls_Mujer 
	{
	public: 
		EVA(int x) {};
	friend class Dios;
	public:
		~EVA(void);
	//private: TODO:NEED TO PROTECT THIS
		EVA(void);
	};
}
#endif //EVA_H
