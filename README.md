# Wireless-UART-HC12
A Simple implementation code for both Arduino and Nucleo(ARM Mbed) to send and retrieve data with UART/Serial Protocol with HC-12 Wireless Serial Module. Channel is set to default and using 9600 baud rate.
<br>

# Wiring 
## Nucleo F446RE and HC12 transmitter
HC 12 - VDD GND RX TX SET <br>
Serial USB (Serial2) : <br>
- D1 -> TX 
- D0 -> RX
Serial to Module (Serial1) : <br>
- PA_9 -> TX 
- PA_10 -> RX
HC 12 : <br>
- TX Module - RX Nucleo (PA_10)
- RX Module - TX Nucleo (PA_9)
- VCC GND as usual
## HC12 Receiver to FTDI 
FTDI - GND - X - VCC - TX - RX <br>
- TX FTDI -> RX Module HC12
- RX FTDI -> TX Module HC12 
- VCC GND as usual 
## Docs
![1001079](https://user-images.githubusercontent.com/47879766/107240862-fd0daf00-6a5c-11eb-88ca-c6898e0f823d.jpg)
