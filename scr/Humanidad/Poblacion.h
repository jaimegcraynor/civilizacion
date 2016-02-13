#ifndef HUMANIDAD_H
#define HUMANIDAD_H

namespace humanidad
{
	class Poblacion
	{

		friend class Dios;
public:
//private: TODO:need to protect this
			//habitantes
			int Habitantes_count_;
			//hold pointer to each human.
			int Humanos[1024];
		
		public:
			int Habitantes_Count (void){return this->Habitantes_count_; };
			Poblacion(void);
			~Poblacion(void);
	};
}

#endif //HUMANINAD_H
