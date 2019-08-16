# uhrws2812
Stoppuhr mit WS2812b-LED-Streifen

Wer eine große Stoppuhr mit einem Arduino und einem WS2812b-LED-Band bauen will, für den ist dieser Sketch genau das Richtige.

Ich habe folgende Teile verwendet:
- 1 Arduino Nano
- 1 WS2812b mit 150 LEDs 5 Meter lang
- 1 5V-Trafo
- 1 Kondensator 1000 µF
- 1 Wiederstand 470 Ohm
  
Der Anschluss der Teile erfolgt wie auf diesem Bild: https://hackster.imgix.net/uploads/image/file/161045/WhimsyNeopixelNano_bb%20copy.png?auto=compress%2Cformat&w=1280&h=960&fit=max

Das WS2812b-Band wird als 8-stellige digitale Zahl gelegt und zuerst vom Sekunden-Anzeiger in dieser Form aufgebaut:


        5  4  3 
       6        2
       7        1
       8        0
     
24 23 22 21 20

       9        19
      10        18
      11        17
      12        16
        13 14 15
      
      
      
Zwischen den 10ern und 1ern der Stunden-, Minuten- und Sekunden-Anzeige liegen jeweils 2 LEDs.
Zwischen der Stunden-, Minuten- und Sekunden-Anzeige liegen jeweils 3 LEDs.

Mit dem Einschalten des Systems startet die Stoppuhr.
Viel Spass damit!
LG AlexEberth
