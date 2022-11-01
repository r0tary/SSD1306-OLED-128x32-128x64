# SSD1306-OLED-128x32-128x64

**BUGS MAY OCCUR**

### Getting started
To see descriptions of function input variables see [SSD1306.h](https://github.com/r0tary/SSD1306-OLED-128X32/blob/main/include/SSD1306.h).
To see examples of function use see [main.c](https://github.com/r0tary/SSD1306-OLED-128X32/blob/main/src/main.c)

### Current features include:

                - Turn on any pixel on the display(draw_Pixel), on specified X and Y coordinates.
                - Draw/Print ASCII characters(draw_Char), on specified X and Y coordinates.
                - Print out a string of characters (print_String), on specified X and Y coordinates.
                - Print a integer(print_int) or float(print_float) type variable on the display.
                - Draw horizontal and vertical lines wherever specified, can specifie width
                - Draw bitmapped images(draw_Bitmap) on the display from a bitmap array. Image size and coordinate can be specified in function call.  

### About bitmapping
For bitmapping images I used [image2cpp](https://javl.github.io/image2cpp/). If you use it include "*mirror*" in the function call like in the example. If you use something else your bytes might be mirrored in that case write if you havent already "*mirror*".
