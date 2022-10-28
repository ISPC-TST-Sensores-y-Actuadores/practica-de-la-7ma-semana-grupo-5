//Codigo para el receptor LoRa

#include <SPI.h>
#include <LoRa.h>
#include <Cristal Liquido.h>

const int rs = 8, en = 7, d4 = 6, d5 = 5, d6 = 4, d7 = 3; //Mencione el numero de pin para la conexion LCD

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);//Inicializar metodo LCD

configuracion vacia () {

  Serial.begin(9600);

  lcd.begin(16, 2);

  while (! Serie);

  Serial.println("Receptor LoRa");

  if (!LoRa.begin(433E6)) {

    Serial.println("¡Error al iniciar LoRa!");

    while (1);

  }

}

bucle vacio () {

  // intenta analizar el paquete

  int TamanoPaquete = LoRa.parsePacket();

  if (tamano del paquete) {

    // recibi un paquete

    Serial.print("Paquete recibido '");

    // leer paquete

    while (LoRa.disponible()) {

      char entrante = (char)LoRa.read();

      if (entrante == 'c'){

        lcd.setCursor(0, 1);

      }

      else {

        lcd.print(entrante);

      }

    }

  }