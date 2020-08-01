/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.77
        Device            :  PIC18F26K83
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    
        uCAN_MSG DeviceSend;
        uCAN_MSG *Device; 
           
        char dummy; 
        Device=&DeviceSend;

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    
     
      //PORTBbits.RB4 = 1; //STANBY MODE
      PORTBbits.RB4 = 0; //NORMAL MODE
        
       void Color_Test();
       
        //BLACK
       PWM6_LoadDutyValue(0); // RED
       PWM7_LoadDutyValue(0); // GREEN
       PWM5_LoadDutyValue(0);// BLUE
   

    while (1)
    {
        // Add your application code
        
                 //RECEIVE
     dummy=CAN_receive(Device);
    
    switch (Device->frame.data0){
        
    case 0x04:
            //CYAN
            PWM6_LoadDutyValue(0); // RED
            PWM7_LoadDutyValue(1023); // GREEN
            PWM5_LoadDutyValue(1023);// BLUE
        break;

    case 0x05:
             //GRAY
            PWM6_LoadDutyValue(512); // RED
            PWM7_LoadDutyValue(512); // GREEN
            PWM5_LoadDutyValue(512);// BLUE
        break;
              
    case 0x06:
            //NAVY
            PWM6_LoadDutyValue(0); // RED
            PWM7_LoadDutyValue(0); // GREEN
            PWM5_LoadDutyValue(512);// BLUE
        break;
        
        
    case 0x07:
            //SILVER
            PWM6_LoadDutyValue(760); // RED
            PWM7_LoadDutyValue(760); // GREEN
            PWM5_LoadDutyValue(760);// BLUE
    break;     
    
    case 0x08:
            //BLACK
            PWM6_LoadDutyValue(0); // RED
            PWM7_LoadDutyValue(0); // GREEN
            PWM5_LoadDutyValue(0);// BLUE
    break;   

    case 0x09:
            //GREEN
            PWM6_LoadDutyValue(0); // RED
            PWM7_LoadDutyValue(511); // GREEN
            PWM5_LoadDutyValue(0);// BLUE
    break;   

    case 0x0A:
            //OLIVE
            PWM6_LoadDutyValue(511); // RED
            PWM7_LoadDutyValue(511); // GREEN
            PWM5_LoadDutyValue(0);// BLUE
    break;   

    case 0x0B:
            //TEAL
            PWM6_LoadDutyValue(0); // RED
            PWM7_LoadDutyValue(511); // GREEN
            PWM5_LoadDutyValue(511);// BLUE
    break;   
       
    case 0x0C:
            //BLUE
            PWM6_LoadDutyValue(0); // RED
            PWM7_LoadDutyValue(0); // GREEN
            PWM5_LoadDutyValue(1023);// BLUE
    break;    
    
    case 0x0D:
            //LIME
            PWM6_LoadDutyValue(0); // RED
            PWM7_LoadDutyValue(1023); // GREEN
            PWM5_LoadDutyValue(0);// BLUE  
    break;     
    
    case 0x0E:
            //PURPLE
            PWM6_LoadDutyValue(511); // RED
            PWM7_LoadDutyValue(300); // GREEN
            PWM5_LoadDutyValue(511);// BLUE  
    break; 

    case 0x0F:
            //WHITE
            PWM6_LoadDutyValue(1023); // RED
            PWM7_LoadDutyValue(1023); // GREEN
            PWM5_LoadDutyValue(1023);// BLUE
    break; 

    case 0x10:
            //FUCSIA
            PWM6_LoadDutyValue(1023); // RED
            PWM7_LoadDutyValue(0); // GREEN
            PWM5_LoadDutyValue(1023);// BLUE
    break; 

    case 0x11:
            //MAROON
            PWM6_LoadDutyValue(511); // RED
            PWM7_LoadDutyValue(0); // GREEN
            PWM5_LoadDutyValue(0);// BLUE 
    break; 

    case 0x12:
            //RED
            PWM6_LoadDutyValue(1023); // RED
            PWM7_LoadDutyValue(0); // GREEN
            PWM5_LoadDutyValue(0);// BLUE  
    break; 

    case 0x13:
            //YELLOW
            PWM6_LoadDutyValue(1023); // RED
            PWM7_LoadDutyValue(1023); // GREEN
            PWM5_LoadDutyValue(0);// BLUE
    break;    
    
    
    
    default:
        //return 0;  
        break;
    }//
        
    }
}

void Color_Test() 
{
      //CYAN
      PWM6_LoadDutyValue(0); // RED
      PWM7_LoadDutyValue(1023); // GREEN
      PWM5_LoadDutyValue(1023);// BLUE
      __delay_ms(3000); // 1 Second Delay
      
      //GRAY
      PWM6_LoadDutyValue(512); // RED
      PWM7_LoadDutyValue(512); // GREEN
      PWM5_LoadDutyValue(512);// BLUE
      __delay_ms(3000); // 1 Second Delay 
      
      //NAVY
      PWM6_LoadDutyValue(0); // RED
      PWM7_LoadDutyValue(0); // GREEN
      PWM5_LoadDutyValue(512);// BLUE
      __delay_ms(3000); // 1 Second Delay 
 
      //SILVER
      PWM6_LoadDutyValue(760); // RED
      PWM7_LoadDutyValue(760); // GREEN
      PWM5_LoadDutyValue(760);// BLUE
      __delay_ms(3000); // 1 Second Delay
         
      //BLACK
      PWM6_LoadDutyValue(0); // RED
      PWM7_LoadDutyValue(0); // GREEN
      PWM5_LoadDutyValue(0);// BLUE
      __delay_ms(3000); // 1 Second Delay 
         
      //GREEN
      PWM6_LoadDutyValue(0); // RED
      PWM7_LoadDutyValue(511); // GREEN
      PWM5_LoadDutyValue(0);// BLUE
      __delay_ms(3000); // 1 Second Delay       
      
      //OLIVE
      PWM6_LoadDutyValue(511); // RED
      PWM7_LoadDutyValue(511); // GREEN
      PWM5_LoadDutyValue(0);// BLUE
      __delay_ms(3000); // 1 Second Delay   
       
      //TEAL
      PWM6_LoadDutyValue(0); // RED
      PWM7_LoadDutyValue(511); // GREEN
      PWM5_LoadDutyValue(511);// BLUE
      __delay_ms(3000); // 1 Second Delay   
       
      //BLUE
      PWM6_LoadDutyValue(0); // RED
      PWM7_LoadDutyValue(0); // GREEN
      PWM5_LoadDutyValue(1023);// BLUE
      __delay_ms(3000); // 1 Second Delay
        
      //LIME
      PWM6_LoadDutyValue(0); // RED
      PWM7_LoadDutyValue(1023); // GREEN
      PWM5_LoadDutyValue(0);// BLUE   
      __delay_ms(3000); // 1 Second Delay
      
      //PURPLE
      PWM6_LoadDutyValue(511); // RED
      PWM7_LoadDutyValue(300); // GREEN
      PWM5_LoadDutyValue(511);// BLUE   
      __delay_ms(3000); // 1 Second Delay
      
      //WHITE
      PWM6_LoadDutyValue(1023); // RED
      PWM7_LoadDutyValue(1023); // GREEN
      PWM5_LoadDutyValue(1023);// BLUE
      __delay_ms(3000); // 1 Second Delay 
    
       //FUCSIA
      PWM6_LoadDutyValue(1023); // RED
      PWM7_LoadDutyValue(0); // GREEN
      PWM5_LoadDutyValue(1023);// BLUE
      __delay_ms(3000); // 1 Second Delay
        
      //MAROON
      PWM6_LoadDutyValue(511); // RED
      PWM7_LoadDutyValue(0); // GREEN
      PWM5_LoadDutyValue(0);// BLUE   
      __delay_ms(3000); // 1 Second Delay
      
      //RED
      PWM6_LoadDutyValue(1023); // RED
      PWM7_LoadDutyValue(0); // GREEN
      PWM5_LoadDutyValue(0);// BLUE   
      __delay_ms(3000); // 1 Second Delay
      
      //YELLOW
      PWM6_LoadDutyValue(1023); // RED
      PWM7_LoadDutyValue(1023); // GREEN
      PWM5_LoadDutyValue(0);// BLUE
      __delay_ms(3000); // 1 Second Delay 
      
}
/**
 End of File
*/