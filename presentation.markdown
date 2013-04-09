title: Do It Yourself : Arduino, Raspberry PI et Processing
subtitle: Les outils du bidouilleur
author: Sébastien NEDJAR


# À propos
- Sébastien NEDJAR (@nedseb)
    + Maître de conférences au Département Info de l'IUT  d'Aix. Enseignant spécialiste des Bases de données et chercheur en OLAP Mining au LIF. 
    + Membre fondateur du pré-hacker space : Laboratoire
      d'Aixpérimentation et de bidouille.
    + Co-animateur de l'ICTUG #iutagile.

# Déroulement de la soirée
- Présentation générale: 
    - DIY, Open Hardware
    - Physical computing et Internet of things
    - Introduction à Arduino.
- Live coding arduino pour apprendre à mettre des objets en mouvement.
- Live coding Raspberry pi.
- Exemple d'interactions physiques grâce à Processing et Kinect.

# Contexte : Open Hardware
- Du "hardware" dont les plans sont accessibles
  - Plans mécaniques
  - Schéma électronique
  - Procédés de fabrication
- Le tout sous une licence libre
  - Constructible par tous
  - Intégrable dans d'autres objets
  - Modifiable par tous
  
# Open Hardware
"Les bons artistes copient, les grands artistes volent" Picasso   
"Nous n’avons jamais eu honte de voler les excellentes idées" Steve Jobs   

L'humanité a toujours innové en commençant par copier. Exemples :  
  - La roue  
  - Le feu  
  - La pierre taillée  
  
# DIY
Avec Internet la connaissance est accessible à tous. Et qu'y a t'il de mieux pour apprendre que de faire par soi même.

![voiture open source](rallyfighter.jpg)

# DIY
- Émergence des Hackerspaces dans les monde entier
- Principaux types de hardware open source
  - Électronique
  - Impression 3D
  - Personal fabbing (Laser cuter, CNC, Pick and place, Egg bot, ...)
  ![personal fabbing](diy.jpg)

# Hackerspace ?
- Communautés ouverte de passionnés
- Projets variés autour de science et technologie
    - Conception d'objet
    - Installation technico-artistiques
    - Réparation et détournement d'objets
    - Et bien pire encore

# Laboratoire d'Aixpérimentation et de bidouille
![labaix](lab02.png)


# Laboratoire d'Aixpérimentation et de bidouille
- Hackerspace Aixois totalement ouvert à tous (*i.e* même au marseillais)
- Soirées Geekbidouilles tous les 3 mois (Pizza, démos et bricolage)
- Beaucoup d'étudiants de l'IUT et de plus en plus d'extérieurs

Pour avoir plus d'info :  
  - Twitter : @LabAixBidouille  
  - Github : https://github.com/LabAixBidouille  
  - Google groups : lab-aix@googlegroups.com  

# Internet des objets
  - De plus en plus d'objet sont connecté au réseau (Téléphone, Télé, Voiture, Console de jeux, Montre, ...)
  - Cette profusion d'appareils connectés est une aubaine pour imaginer de nouvelles applications
  - Pourquoi pas créer soi même ses appareils connectés ? 
  
# Physical computing
  - Avec le multi-touch, les accéleromètres, la kinnect et autres, de nouvelles interactions homme-machine émergent.
  - L'interaction peut avoir lieu avec n'importe quel type d'objets.
  - Comment faire pour créer ces objets en interaction avec le monde physique ?
  
[physical rickroll](http://www.youtube.com/watch?v=e-l3jg13Pdk)

# Arduino
Brique de base pour le prototypage électronique.
![arduino de face](ArduinoUNO_Front.jpg)

# Arduino
  - Plate-forme de prototypage électronique.
  - Open source et simple à utiliser.
  - Fait à la base pour des artistes.
  - S'adresse à toute personne ayant un ordi et 20€.

# Arduino
Brique de base pour le prototypage électronique.
![arduino de face](ArduinoUNO_Front2.png)

# Déclinaisons
![variantes arduino](variantes.png)

# Déclinaisons
![variantes arduino rigolote](skelduino.jpg)

#Plate-forme Arduino
- Matériel :
  - Une famille de carte avec un micro-contrôleur ATMega
  - Des I/O numériques, analogiques et des périphériques (Série, I2C, SPI,...)  
- Logiciel :
  - Un IDE
  - Un ensemble très riche de bibliothèques
- Et surtout une communauté absolument énorme !

#Il y a un shield pour absolument tout
[Il y a une application](https://www.youtube.com/watch?v=1uKtSQC06m4)

#Il y a un shield pour absolument tout
![Il y a une application](shield.png)

#Programmation Arduino
- Assembleur AVR, C/C++ de papy, C++ arduino
- Bibliothèque standard
  - EEPROM
  - Ethernet
  - Serial
  - Firmdata
  - LiquidCrystal
  - Servo
  - ...
  
#Programmation Arduino : IDE
![IDE Arduino](ide.png)

#Programmation Arduino : IDE
- Simple :
   - Un éditeur pas très intelligent
   - Deux boutons (Compiler, Téléverser)
- Faisons un Helloword

#Que faire de plus ?
- L'arduino a l'intelligence d'une machine à laver (CPU 8bits@16MHz).
- Des capacités de communication énormes (Wifi, Bluetooth, XBee, Ethernet, 433MHz, ...)
- Pour aller plus loin il faudra un vrai ordinateur (Raspberry Pi ?).
- Maintenant les démos 


