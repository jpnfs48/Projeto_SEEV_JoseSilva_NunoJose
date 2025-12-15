#ifdef __IN_ECLIPSE__
//This is a automatic generated file
//Please do not modify this file
//If you touch this file your change will be overwritten during the next build
//This file has been generated on 2025-12-15 17:51:12

#include "Arduino.h"
#include "Arduino.h"
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "nvs_flash.h"
#include "esp_task_wdt.h"
#include <ESP32Servo.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>

void drawImage(const uint16_t *img, int w, int h, int x, int y, Adafruit_ST7735 &tft) ;
void setup() ;
void vTask_TFT(void *pvParameters) ;
void vTask_MANETES ( void *pvParameters ) ;
void vTask_LDR ( void *pvParameters ) ;
void vTask_POT ( void *pvParameters ) ;
void vTask_SERVO ( void *pvParameters ) ;
void vTask_MINIMOS ( void *pvParameters ) ;
void vTask_MEDIOS ( void *pvParameters ) ;
void vTask_MAXIMOS ( void *pvParameters ) ;
void vTask_PISCAS ( void *pvParameters) ;
void vTask_IDLE ( void *pvParameters ) ;
static void IRAM_ATTR vExampleInterruptHandler( void ) ;
void loop() ;

#include "Projeto_teste.ino"


#endif
