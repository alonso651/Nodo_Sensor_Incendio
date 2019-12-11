Nodo loRaWan para Arduino Pro Mini Atmega328p 3.3v
==================================================
Febrero de 2019 

Este programa fue desarrollado a partir del código ejemplo de la libreria LMiC 1.51 port to ESP8266 and Arduino [LMiC-v1.51](libraries/lmic-v1.51/README.md), 
publicada en http://things4u.github.io por M. Westenberg.

Esta libreria implementa la pila para una red LoRa.
Contiene la pila completa de LoRa y funciona en la plataforma Teensy, ESP8266 y en el Ardino Atmega328.

LMIC 1.5 port to ESP8266 and Arduino esta compuesta de dos bibliotecas existentes:

1. La biblioteca LMIC-1.5 de IBM, que fue portada a Arduino IDE por Thomas Telkamp y Matthijs Kooijman
2. La pequeña implementación para Arduino hecha por Gerben den Hartog para Ideetron.


Nodo LoRaWAN
------------
Este programa envia un paquete LoRaWAN válido con la lectura de sensores al servidor The Things Network (TTN).

Utiliza el método de autenticación ABP, tambien es posible utilizar el método de activación OTAA, 
aunque este no fue probado aún.

Se utilizó la Banda de frecuencias ISM US915 MHz, que cuenta con 72 canales, 
de los cuales solo utilizamos los 8 canales de la segunda sub banda (Sub Banda 1).

Sub banda 1 (903.9 - 905.3 MHz): 

	· Canal 0 - 903.9 MHz
	· Canal 1 - 904.1 MHz
	· Canal 2 - 904.3 MHz
	· Canal 3 - 904.5 MHz
	· Canal 4 - 904.7 MHz
	· Canal 5 - 904.9 MHz
	· Canal 6 - 905.1 MHz
	· Canal 7 - 905.3 MHz
Es posible utilizar los factores de esparcimiento SF (Spreading Factor) del 7 al 12, solo fue probado 
con el SF7.

Hardware
--------
	· Arduino Pro Mini Atmega328p 3,3V 8MHz
	· HopeRF RFM95w de 915MHz  

Conexiones
----------
	 _____________________________
	|   RFM95w   |Arduino Pro Mini|
	|____________|________________|
	|GND         |GND             |
	|3.3v        |VCC (3.3v)      |
	|MISO        |12              |
	|MOSI        |11              |
	|SCK         |13              |
	|NSS         |10              |
	|DIO0        |4               |
	|DIO1        |5               |
	|DIO2        |7               |
	|____________|________________|


Modificaciónes hechas a la libreria LMIC 1.5 port to ESP8266 and Arduino:
-------------------------------------------------------------------------
lmic.cpp: LMIC_disableChannel(u1_t channel) 

	//LMIC.channelMap[channel/4] &= ~(1<<(channel&0xF)); 
    LMIC.channelMap[channel/16] &= ~(1<<(channel&0xF));


TTGO Pro Mini_LORA 20180926 - T-DEER:
-------------------------------------

	· Es necesario conectar dos pines de la placa entre si (puente) D5 - IO1
	· La definicion de pines es diferente que en el Arduino Pro Mini (Descomentar en el código fuente 
	y comentar la definición de pines anterior)
	· Se lo programa como Arduino UNO (En Arduino IDE)

	.