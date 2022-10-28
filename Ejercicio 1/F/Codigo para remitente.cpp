//Codigo para el remitente LoRa

#include <SPI.h>
#include <LoRa.h>
#include <DHT.h>

#define DHTPIN A0 // a que pin estamos conectados
#define TIPO DHT DHT11 // DHT 11

DHT dht(DHTPIN, DHTTYPE);

int zumbido;

temperatura de flotacion; //Almacena el valor de la temperatura

contador int = 0;

configuracion vacia () {    

  Serial.begin(9600);

  dht.begin();

  while (! Serie);
  Serial.println("LoRa Remitente");

   if (!LoRa.begin(433E6)) {

    Serial.println("Error al iniciar LoRa");

    while (1);

   }

}


bucle vacio () {
  temp = dht.readTemperature();
  zumbido = dht.leerHumedad();

  Serial.print("Enviando paquete: ");
  Serial.println(contador);
  LoRa.beginPacket();
  LoRa.print("Humedad: ");
  LoRa.print(hum);
  LoRa.print("c");
  LoRa.print("Temperatura:");
  LoRa.print(temp);
  LoRa.endPacket();

  contador++;

  retraso (5000);

}