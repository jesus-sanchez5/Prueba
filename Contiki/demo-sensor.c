#include "contiki.h"
#include "sys/etimer.h"
#include "misensor.h"
#include <stdio.h>

PROCESS(sensor_process, "Proceso del sensor");
AUTOSTART_PROCESSES(&sensor_process);

static struct etimer timer;

PROCESS_THREAD(sensor_process, ev, data){
	PROCESS_BEGIN();
	
	printf("Demo Virtual Sensor\n");
	while(1){
		etimer_set(&timer, 3 * CLOCK_SECOND);
		PROCESS_WAIT_EVENT_UNTIL(etimer_expired(&timer));
		
		struct Sensor temperatura = read_temperatura();
		printf("%s: %.2d\n", temperatura.nombre, temperatura.valor);
		struct Sensor humedad = read_humedad();
		printf("%s: %.2d\n", humedad.nombre, humedad.valor);
		printf("------------\n");
	}
	
	PROCESS_END();
}