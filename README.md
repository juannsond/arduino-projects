# arduino-projects
my creation 
# Allarme Arduino Ultrasuoni

Progetto Arduino che utilizza un sensore ad ultrasuoni per rilevare oggetti vicini.  
Quando qualcosa si avvicina entro la distanza impostata, il sistema:

- Accende il LED rosso
- Suona un allarme dinamico (più vicino → suono più acuto e veloce)
- Quando non ci sono oggetti vicini, il LED verde rimane acceso

## Componenti utilizzati
- Arduino Uno / Elegoo R3
- Sensore ad ultrasuoni HC-SR04
- LED rosso e verde
- Buzzer

## Come usare
1. Collegare i componenti secondo lo schema indicato nel codice.
2. Caricare lo sketch `.ino` su Arduino.
3. Aprire il monitor seriale per vedere la distanza rilevata.
4. Avvicinarsi agli oggetti e osservare il comportamento del LED e del buzzer.

## Note
- Distanza minima ignorata: 5 cm  
- Distanza massima per allarme: 50 cm  
- Frequenza del buzzer varia in base alla distanza
