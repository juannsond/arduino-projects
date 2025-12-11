# Allarme Arduino Ultrasuoni – Progetto Avanzato

Progetto Arduino che utilizza un **sensore ad ultrasuoni HC-SR04** per rilevare oggetti vicini e generare un **allarme dinamico**.  
Quando un oggetto entra nell’area di rilevamento, il sistema:

- Accende il **LED rosso**  
- Suona un **buzzer dinamico** (più vicino → suono più acuto e veloce)  
- Quando non ci sono oggetti vicini, il **LED verde** rimane acceso

---

## Componenti utilizzati

- Arduino Uno / Elegoo R3  
- Sensore ad ultrasuoni HC-SR04  
- LED rosso e verde  
- Buzzer  
- Resistenze da 220Ω per i LED (consigliato)  
- Cavi jumper e breadboard

---

## Schema dei collegamenti

- **VCC HC-SR04 → 5V Arduino**  
- **GND HC-SR04 → GND Arduino**  
- **TRIG HC-SR04 → Pin 3 Arduino**  
- **ECHO HC-SR04 → Pin 2 Arduino**  
- **LED verde → Pin 7**  
- **LED rosso → Pin 8**  
- **Buzzer → Pin 9**

> Puoi aggiungere qui un’immagine o un diagramma della breadboard, ad esempio:  
> `![Schema breadboard](link-alla-tua-immagine.jpg)`

---

## Come usare

1. Collega tutti i componenti secondo lo schema sopra.  
2. Apri Arduino IDE e carica lo sketch `.ino` su Arduino.  
3. Apri il **Monitor Serial** per vedere la distanza rilevata in cm.  
4. Avvicinati agli oggetti e verifica il comportamento dei LED e del buzzer.

---

## Parametri regolabili

- `distanza_min` → distanza minima ignorata (cm)  
- `distanza_max` → distanza massima per attivare l’allarme (cm)  
- Frequenza del buzzer → varia dinamicamente in base alla distanza rilevata

---

## Note

- Funziona meglio con oggetti solidi e superfici riflettenti.  
- Evita ostacoli troppo vicini (<5 cm) per non generare falsi allarmi.  
- Il progetto può essere esteso aggiungendo display, più LED, o un sistema di registrazione dei dati.

---

## Licenza

Puoi usare e modificare liberamente questo progetto.  
