EESchema Schematic File Version 4
LIBS:pro_mini_lorawan_sensor-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L arduino-pro-mini:arduino-pro-mini U1
U 1 1 5D0D7C1E
P 3300 2450
F 0 "U1" H 9100 1550 55  0000 C CNN
F 1 " " H 3300 3338 55  0000 C CNN
F 2 "" H 3200 3300 55  0001 C CNN
F 3 "" H 3200 3300 55  0001 C CNN
	1    3300 2450
	1    0    0    -1  
$EndComp
$Comp
L Sensor:BME280 U3
U 1 1 5D0DCB7C
P 5000 2550
F 0 "U3" H 950 3750 50  0000 R CNN
F 1 "BME280" H 4571 2505 50  0000 R CNN
F 2 "Package_LGA:Bosch_LGA-8_2.5x2.5mm_P0.65mm_ClockwisePinNumbering" H 5000 2350 50  0001 C CNN
F 3 "https://ae-bst.resource.bosch.com/media/_tech/media/datasheets/BST-BME280_DS001-11.pdf" H 5000 2350 50  0001 C CNN
	1    5000 2550
	-1   0    0    1   
$EndComp
$Comp
L LED:LD274 D1
U 1 1 5D0E3282
P 4050 2050
F 0 "D1" H 2150 -3000 50  0000 C CNN
F 1 "LED_IR" V 4000 1850 50  0000 C CNN
F 2 "LED_THT:LED_D5.0mm_IRGrey" H 4050 2225 50  0001 C CNN
F 3 "http://pdf.datasheetcatalog.com/datasheet/siemens/LD274.pdf" H 4000 2050 50  0001 C CNN
	1    4050 2050
	0    -1   -1   0   
$EndComp
$Comp
L Device:Battery_Cell BT1
U 1 1 5D0E0801
P 4050 1300
F 0 "BT1" H 9050 -1250 50  0000 L CNN
F 1 "Bateria_18650" H 3450 1250 50  0000 L CNN
F 2 "" V 4050 1360 50  0001 C CNN
F 3 "~" V 4050 1360 50  0001 C CNN
	1    4050 1300
	1    0    0    -1  
$EndComp
$Comp
L RF_Module:RFM95W-868S2 U2
U 1 1 5D0D95FE
P 3350 4150
F 0 "U2" H -2400 3650 50  0000 C CNN
F 1 "RFM95W" H 3350 4740 50  0000 C CNN
F 2 "" H 50  5800 50  0001 C CNN
F 3 "https://www.hoperf.com/data/upload/portal/20181127/5bfcbea20e9ef.pdf" H 50  5800 50  0001 C CNN
	1    3350 4150
	-1   0    0    1   
$EndComp
$Comp
L Device:R_POT RV1
U 1 1 5D0E1CE0
P 4550 1550
F 0 "RV1" V 6500 6100 50  0000 R CNN
F 1 "Potenciometro" V 4400 1650 50  0000 R CNN
F 2 "" H 4550 1550 50  0001 C CNN
F 3 "~" H 4550 1550 50  0001 C CNN
	1    4550 1550
	0    1    1    0   
$EndComp
Wire Wire Line
	4700 1550 4700 1700
Wire Wire Line
	4700 1700 4550 1700
Wire Wire Line
	4050 1400 4050 1500
Wire Wire Line
	4050 1000 2850 1000
Wire Wire Line
	2850 1000 2850 1700
Wire Wire Line
	2850 1700 2950 1700
Wire Wire Line
	4050 1000 4050 1100
Wire Wire Line
	2950 3150 2750 3150
Wire Wire Line
	2750 3150 2750 1500
Wire Wire Line
	2750 1500 4050 1500
Connection ~ 4050 1500
Wire Wire Line
	4050 1500 4050 1700
Wire Wire Line
	3450 3550 3350 3550
Wire Wire Line
	2850 3550 2850 3250
Wire Wire Line
	2850 3250 2950 3250
Connection ~ 3250 3550
Wire Wire Line
	3250 3550 2850 3550
Connection ~ 3350 3550
Wire Wire Line
	3350 3550 3250 3550
Wire Wire Line
	3650 3250 3900 3250
Wire Wire Line
	3900 3250 3900 4150
Wire Wire Line
	3900 4150 3850 4150
Wire Wire Line
	3850 4250 3950 4250
Wire Wire Line
	3950 4250 3950 3150
Wire Wire Line
	3950 3150 3650 3150
Wire Wire Line
	3850 4350 4000 4350
Wire Wire Line
	4000 4350 4000 3050
Wire Wire Line
	4000 3050 3650 3050
Wire Wire Line
	3850 4450 4050 4450
Wire Wire Line
	4050 4450 4050 2950
Wire Wire Line
	4050 2950 3650 2950
Wire Wire Line
	4400 2450 3800 2450
Wire Wire Line
	3800 2450 3800 2650
Wire Wire Line
	3800 2650 3650 2650
Wire Wire Line
	4400 2650 3850 2650
Wire Wire Line
	3850 2650 3850 2750
Wire Wire Line
	3850 2750 3650 2750
Wire Wire Line
	4400 2850 3650 2850
Wire Wire Line
	5100 1950 4900 1950
Connection ~ 4900 1950
Wire Wire Line
	3350 4650 2650 4650
Wire Wire Line
	2650 4650 2650 1000
Wire Wire Line
	2650 1000 2850 1000
Connection ~ 2850 1000
Wire Wire Line
	4900 3150 4900 4650
Wire Wire Line
	4900 4650 3350 4650
Connection ~ 3350 4650
Connection ~ 4050 1950
Wire Wire Line
	4050 2250 3650 2250
$Comp
L SparkFun-Sensors:METHANE_SENSOR M1
U 1 1 5D0DD673
P 5050 1000
F 0 "M1" H 5050 1000 50  0001 C CNN
F 1 "METHANE_SENSOR" H 5050 1000 50  0001 C CNN
F 2 "MQ-3" H 5080 1150 20  0001 C CNN
F 3 "" H 5050 1000 50  0001 C CNN
	1    5050 1000
	1    0    0    -1  
$EndComp
Wire Wire Line
	4450 1000 4050 1000
Connection ~ 4050 1000
Wire Wire Line
	4050 1000 4050 800 
Wire Wire Line
	4050 800  4550 800 
Wire Wire Line
	5650 1000 5650 1700
Wire Wire Line
	5650 1700 4700 1700
Connection ~ 4050 1700
Wire Wire Line
	4050 1700 4050 1950
Connection ~ 4550 1700
Wire Wire Line
	4550 1700 4050 1700
Connection ~ 4700 1700
Wire Wire Line
	4400 1550 4400 1200
Wire Wire Line
	4400 1200 4550 1200
Wire Wire Line
	4050 1950 4900 1950
Wire Wire Line
	5550 800  5700 800 
Wire Wire Line
	5700 800  5700 1800
Wire Wire Line
	5700 1800 3650 1800
Text Notes 4750 1550 0    50   ~ 0
Sensor de Humo
Text Notes 5450 2850 0    50   ~ 0
Sensor de Temperatura\nHumedad relativa y\nPresión Atmosférica
Text Notes 2850 4850 0    50   ~ 0
Chip de comunicación LoRa
Text Notes 2900 1600 0    50   ~ 0
Controlador Pro-Mini
Text Notes 4050 2050 0    50   ~ 0
Sensor de llama
Text Notes 3400 1300 0    50   ~ 0
Bateria Litio\n3,7V 2000mAh
$EndSCHEMATC
