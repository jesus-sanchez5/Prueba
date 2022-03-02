#ifndef MISENSOR_H
#define MISENSOR_H

struct Sensor{
	char nombre[15];
	float valor;
};

struct Sensor read_temperatura();
struct Sensor read_humedad();

#endif

