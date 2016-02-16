/*
 * singleton_implementacion.h
 *
 *  Created on: Feb 15, 2016
 *      Author: jaime
 */

#ifndef BAJONIVEL_SINGLETON_IMPLEMENTACION_H_
#define BAJONIVEL_SINGLETON_IMPLEMENTACION_H_
#include "stddef.h"

#define SINGLETON_DEFINITION(ClassName) \
private: \
ClassName();\
static ClassName *Instance_;\
public:\
static ClassName * GetInstance(void)\
{\
	if (ClassName::Instance_ == NULL) ClassName::Instance_ = new ClassName();\
	return ClassName::Instance_ ;\
}\


#endif /* BAJONIVEL_SINGLETON_IMPLEMENTACION_H_ */
