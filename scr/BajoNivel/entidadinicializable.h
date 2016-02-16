/*
 * entidadinicializable.h
 *
 *  Created on: Feb 15, 2016
 *      Author: jaime
 */

#ifndef BAJONIVEL_ENTIDADINICIALIZABLE_H_
#define BAJONIVEL_ENTIDADINICIALIZABLE_H_

namespace Ciencia {

class entidad_inicializable {
public:
	entidad_inicializable(char * Nombre_Entidad);
	virtual ~entidad_inicializable();
private:
	entidad_inicializable();
};

} /* namespace Ciencia */

#endif /* BAJONIVEL_ENTIDADINICIALIZABLE_H_ */
