#include "misensor.h"
#include <string.h>
#include <stdlib.h>

float valor_random(float min, float max){
	float escala = rand() / (float) RAND_MAX;
	return min + escala * (max - min);
}

struct Sensor read_temperatura(){
	struct Sensor temperatura;
	
	strncpy(temperatura.nombre, "Temperatura", 15);
	temperatura.valor = valor_random(0, 35);
	
	return temperatura;
}
struct Sensor read_humedad(){
	struct Sensor humedad;
	
	strncpy(humedad.nombre, "Humedad", 15);
	humedad.valor = valor_random(40, 80);
	
	return humedad;
}
