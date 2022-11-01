#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

#include "i2cmaster.h"


//Example code for 128x32 display!
#include "SSD1306_x32.h"
#include "font.h"
#include "bitmap.h"

int main(){
  i2c_init();
  SSD1306_setup();
    SSD1306_clear();
    SSD1306_update();

//  Draws every char
  for(short i=0;i<25;i++){
    draw_Char(0x20+i,i,0);
    draw_Char(0x20+i+25,i,1);
    draw_Char(0x20+i+50,i,2);
  }
  for(short i=0;i<21;i++){
    draw_Char(0x20+i+75,i,3);
  }

  //print_float(number,2,0,0);
  //draw_BitMap(SDU_BitMap,128,32, "mirror",0,0);  
  //print_String("Hello World",5,3);
  SSD1306_update();
}
