#define F_CPU  8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

//Define the chip select bits for 3 sensors, sram, SD
//all bits are on PORTD
#define sensor1_cs 2
#define sensor2_cs 3
#define sensor3_cs 4
#define sram_cs 5
#define SD_cs 6


//SPI init will set up SPI 
void spi_init()
{
//DDRB houses SPI pins SCK-5 MOSI-3 MISO-4  SS-2 used for programing
DDRB=(1<<5)|(1<<3)|(0<<4)|(1<<2);
//PORT D holds all chip select pins. Set to output
DDRD=(1<<sensor1_cs)|(1<<sensor2_cs)|(1<<sensor3_cs)|(1<<sram_cs)|(1<<SD_cs);
SPCR=(1<<SPE)|(1<<MSTR);  //master mode
SPSR=(1<<SPI2X);          //sets 2x speed
}//end spi_init()

void check_sensor()
{

}//end check_sensor



//Writes byte(s) to sram
//possible arguments address, number of bytes, data
void sram_write()
{

}//end sram_write()


//Read byte(s) from sram
//arguments address, number of bytes
void sram_read()
{

}//end sram_read()

//Will write full "shot" to SD card file
void SD_write()
{

}




int main()
{
spi_init();



while(1)
{ 
 } //end while 
} //end main
