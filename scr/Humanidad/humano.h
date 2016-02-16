#ifndef HUMANO_H
#define HUMANO_H
// #include "Dios.h"

namespace humanidad
{
enum Genero_enum
{
	Masculino_e,
	Femenino_e
};
	class humano
	{
	public:
		~humano(void);
        //humano& operator+(humano& a);
		const humano * papa(void);
		const humano * mama(void);
		const char  * Nombre;

	protected:
		humano(void);
		char Nombre_[50];
		Genero_enum Genero_;
		void DrawMe();
		//
		const Genero_enum Genero(){return Genero_;}
	private:
		
		humano * papa_;
		humano * mama_;
		
	};

}
#endif //HUMANO_H
