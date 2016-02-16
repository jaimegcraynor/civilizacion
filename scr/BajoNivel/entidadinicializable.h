/*
 * entidadinicializable.h
 *
 *  Created on: Feb 15, 2016
 *      Author: jaime
 */

#ifndef BAJONIVEL_ENTIDADINICIALIZABLE_H_
#define BAJONIVEL_ENTIDADINICIALIZABLE_H_

namespace Ciencia {
namespace Cosmos {

class entidad_inicializable {
public:
	char * Entity_Name(void);
protected:

	entidad_inicializable(char * Nombre_Entidad);
	char Entity_Name_[255];
	virtual ~entidad_inicializable();

private:
	entidad_inicializable();

};
} /* namespace Cosmos */
} /* namespace Ciencia */

#endif /* BAJONIVEL_ENTIDADINICIALIZABLE_H_ */
