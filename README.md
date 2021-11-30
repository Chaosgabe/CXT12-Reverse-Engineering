# CXT12E3 Reverse Engineering

Documentation page for the reengineering of a CXT12 macroboard from CXT


[MCU]

ATmega32U4
https://www.microchip.com/en-us/product/ATmega32U4

https://www.arduino.cc/en/uploads/Hacking/32U4PinMapping.png
![32U4PinMapping](https://user-images.githubusercontent.com/58740634/143497370-90239e95-3e81-42cf-9e31-80c9df20c7eb.png)



| Pin | Pin Name	| Mapped Pin Name |
| --- | --- | --- |
| 1	| PE6 | Encoder 1 (Row 3)
| 2	| UVcc	| 
| 3	| D-	| 
| 4	| D+	| 
| 5	| UGnd	| 
| 6	| UCap	| 
| 7	| VUSB	| 
| 8	| PB0	| 
| 9	| PB1	| 
| 10	| PB2	| Encoder 1 (Row 1)
| 11	| PB3	| Encoder 2 (Row 1)
| 12	| PB7	| 
| 13	| RESET	| 
| 14	| Vcc	| 
| 15	| GND	| 
| 16	| XTAL2	| 
| 17	| XTAL1	| 
| 18	| PD0	| 
| 19	| PD1	| 
| 20	| PD2	| 
| 21	| PD3	| 
| 22	| PD5	| 
| 23	| GND1	| 
| 24	| AVCC	| 
| 25	| PD4 | Column 0
| 26	| PD6	| Row 2
| 27	| PD7 | Column 1
| 28	| PB4	| Column 2
| 29	| PB5	| Column 3
| 30	| PB6	| 
| 31	| PC6	| Row 1
| 32	| PC7	| Row 0
| 33	| PE2	| 
| 34	| Vcc1	| 
| 35	| GND2	| 
| 36	| PF7	| WS2812 
| 37	| PF6	| Encoder 2 (Row 2)
| 38	| PF5	| Encoder 1 (Row 2)
| 39	| PF4	| Row 3
| 40	| PF1	| 
| 41	| PF0	| Encoder 2 (Row 3)
| 42	| AREF	| 
| 43	| GND3	| 
| 44	| AVCC1	| 
