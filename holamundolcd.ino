 char Str[12] = {'H', 'o', 'l', 'a', ',', ' ', 'M','u','n','d','o','!'};
  int posicion = 0;
 
  #include <LiquidCrystal.h>            // incluimos la libreria LCD
  LiquidCrystal lcd(12, 11, 5, 4, 3, 2);// inicializamos los pines 
 

void setup() {
 
  lcd.begin(16, 2);                    
}
 
//------------------------------------
//Funcion ciclicla
//------------------------------------
 
void loop() {
 
  while (posicion < 12)  {              //Configuramos la estructura con la
                                        //cantidad de posiciones de la cadena
    lcd.cursor();                       //Activamos el apuntador
    lcd.setCursor(posicion, 0);         //Rotamos las columnas
    lcd.print(Str[posicion]);           //imprimimos la posicion de la cadena
    delay (500);                        //Retardo entre posiciones
    posicion++;                         //Rotamos la posion de la cedena
  }
 
  posicion = 0;                         //Colocamos la posicion de la cadena
  delay(1000);                          //Retardo de impresion del mensaje
  lcd.clear();                          
}
 
//Fin programa

