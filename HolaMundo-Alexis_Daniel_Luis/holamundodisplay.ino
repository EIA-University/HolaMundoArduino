#include <LiquidCrystal.h>            // incluimos la libreria LCD
  LiquidCrystal lcd(12, 11, 5, 4, 3, 2);// inicializamos los pines 
// Alexis Garcia Ramirez
// Daniel Lopez Gaviria
// Luis Felipe Montoya
 
//------------------------------------
//Funcion principal
//------------------------------------
 
void setup() {
 lcd.begin(16, 2);                     //Cofiguramos el tamaño de la LCD
 lcd.println("Hola mundo");
}

void loop() {
}
