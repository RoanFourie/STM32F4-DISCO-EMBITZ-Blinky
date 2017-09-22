Date: 2017-Week-38  

# Blink the 4 LEDs and read the User Button on the STM32F4-Discovery board (STM32F407VGT6) 

---
## Introduction:  
Getting started with the [STM32F4-Discovery](https://stm32f4-discovery.net/stm32f4-links/) board using the free [EmBitz IDE](https://www.embitz.org/) on Windows.   
To blink the 4 LEDs and read the User Button [modified and used this article](./User Manuals/isildak_en.pdf) and [used this article](http://www.firmcodes.com/stm32f407-discovery-gpio-tu) to get it working.   
Flashed firmware hex file using [ST-Link Utility](http://www.st.com/en/development-tools/stsw-link004.html). 

---
## Operation:  
When the button is not pressed:  
- The Blue and Green LEDs are off;  
- The Red LED stays on;  
- The Orange LED blinks.   

When the button is pressed:  
- The Red and Orange LEDs are off;  
- The Green button stays on;  
- The Blue button blinks.  

---
## Source Files:  

>I left all the autoconfigured standard libraries so the project could be used as a template.  

**Hex file for flashing to board:**  
/STM32F407Disco/bin/Release/STM32F407Disco.hex 

**Manually added these files:**  
/STM32F407Disco/Delay/fm_stm32f4_Delay.c  
/STM32F407Disco/Delay/fm_stm32f4_Delay.h  
/STM32F407Disco/LED/fm_stm32f4_led.c  
/STM32F407Disco/LED/fm_stm32f4_led.h  


---
## Usefull Links:  
[STM32F4-Discovery](http://www.st.com/web/catalog/tools/FM116/SC959/SS1532/LN1848/PF252419?s_searchtype=partnumber)  
[Getting Started](http://www.st.com/st-web-ui/static/active/en/resource/technical/document/user_manual/DM00037368.pdf)  
[Board Datasheet](http://www.st.com/st-web-ui/static/active/en/resource/technical/document/user_manual/DM00039084.pdf)  
[Schematics](http://www.st.com/st-web-ui/static/active/en/resource/technical/layouts_and_diagrams/schematic_pack/stm32f4discovery_sch.zip)  
[Sample projects](http://www.st.com/web/en/catalog/tools/FM147/CL1794/SC961/SS1743/LN1734/PF257904?s_searchtype=keyword)  
[STM32F407VG Datasheet](http://www.st.com/st-web-ui/static/active/en/resource/technical/document/datasheet/DM00037051.pdf)  
[STM32 ST-LINK Utility](http://www.st.com/web/en/catalog/tools/PF258168)  
[Main datasheet for all STM32F4xx devices](http://www.st.com/st-web-ui/static/active/en/resource/technical/document/reference_manual/DM00031020.pdf) 1700+ pages  
[Standard Peripheral drivers and CMSIS library](http://www.st.com/web/en/catalog/tools/PF257901)  
[Handy article giving details about the board](https://www.badprog.com/electronics-stm32-using-the-push-button-to-switch-on-the-led6-on-the-stm32f3-discovery-board)  


---
## About EmBitz IDE:  
[EmBitz IDE](https://www.embitz.org/) is a free IDE that can be used to do ARM, AVR, PIC, MSP430 and other development. It is natively written in C++ and is fast. It is a full featured IDE that can import projects from amongst others, Keil/ARM Realview, ARM GCC, MSPGCC, PIC32 Microchip, PIC24,PIC30,dsPIC Microchip, PIC18 Microchip, AVR GCC etc. It has a Special tailored GDB binaries optimized for embedded debugging and a whole lot of other features. Do yourself a favour and download it and try it out. It was the quickest and most featured free STM32 Development Environment I got working in a small amount of time after I struggled for days not succeeding with Eclipse based IDEs.  
