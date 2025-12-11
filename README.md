# Allarme Arduino Ultrasuoni

Progetto Arduino con sensore ad ultrasuoni HC-SR04 che rileva oggetti vicini.  
Quando un oggetto entra nell’area di rilevamento:

- LED rosso acceso  
- Buzzer dinamico (più vicino → suono più acuto e veloce)  
- LED verde acceso quando non ci sono oggetti

## Componenti
- Arduino Uno / Elegoo R3  
- HC-SR04  
- LED rosso e verde  
- Buzzer  
- Resistenze 220Ω  
- Cavi jumper e breadboard

## Schema collegamenti
- VCC HC-SR04 → 5V  
- GND HC-SR04 → GND  
- TRIG → Pin 3  
- ECHO → Pin 2  
- LED verde → Pin 7  
- LED rosso → Pin 8  
- Buzzer → Pin 9

## Uso
1. Collega i componenti come indicato.  
2. Carica lo sketch `.ino` su Arduino.  
3. Apri il Monitor Serial per vedere la distanza.  
4. Avvicinati agli oggetti e osserva il comportamento di LED e buzzer.

