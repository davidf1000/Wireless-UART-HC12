#include "mbed.h"
Serial pc(PA_9, PA_10); //TX-PA_9 atas RX-PA_10 bawah
Serial usb(D1, D0); //TX-D1 atas RX-D0 bawah
// FTDI GND - NO - VCC - TX (RX NUCLEO) - RX (TX NUCLEO)
// HC 12 - VDD GND RX TX SET
DigitalOut led(LED1);
const int kMaxBufferSize = 100;
char      buffer[kMaxBufferSize];
void Rx_interrupt(void)
{
    pc.scanf("%s", buffer);
    usb.printf("UART data: ");
    usb.printf("%s", buffer);
    return;
}
int main()
{
    int i = 1;

    pc.printf("Hello World !\n");
    pc.attach(Rx_interrupt);
    while(1) {

        wait(1); // 1 second
        led = !led; // Toggle LED
        pc.printf("This program runs since %d seconds.\n", i++);
        usb.printf("READABLE : %d\n",pc.readable());


    }

}
