#include <ADC.h>
#include <main.h>

ADC_HandleTypeDef hadc1;

UART_HandleTypeDef huart2;

uint16_t ob_ADC()
{
	//Definir una variable donde va el dato
	uint16_t raw;
	//Y una vector donde incluir los datos obtenidos
	//char msg[10];

	// Obtener valor ADC
	HAL_ADC_Start(&hadc1);
	HAL_ADC_PollForConversion(&hadc1,HAL_MAX_DELAY);
	raw=HAL_ADC_GetValue(&hadc1);

	// convertir a una cadena e imprimir
	//sprintf(msg,"%hu\r\n",raw);
	//HAL_UART_Transmit(&huart2, (uint8_t*)msg, strlen(msg), HAL_MAX_DELAY);


	return raw;
}
