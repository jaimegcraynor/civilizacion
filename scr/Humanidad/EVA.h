
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
	private:
		EVA(void);
	};
}
