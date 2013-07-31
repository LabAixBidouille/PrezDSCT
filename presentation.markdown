title: Do It Yourself : Arduino, Raspberry PI et Processing
subtitle: Les outils du bidouilleur
author: Sébastien NEDJAR

# Disclaimer
Cette présentation se veut non sérieuse et pourra donc contenir du second degré et de l'humour de mauvaise qualité. 
  Veuillez ne pas jeter des tomates (ou tout autre objet) sur l'orateur s'il heurte par moment votre sensibilité.

# À propos
- Sébastien NEDJAR (@nedseb)
![nedseb au travail](chemestrycat.jpg)


# À propos
- Sébastien NEDJAR (@nedseb)
    + Maître de conférences au Département Info de l'IUT  d'Aix. Enseignant spécialiste des Bases de données et chercheur en OLAP Mining au LIF. 
    + Membre fondateur du Fab Lab du Pays d'Aix en émergence : Laboratoire
      d'Aixpérimentation et de bidouille.
    + Co-animateur de l'ICTUG #iutagile.
    + Et bien d'autres activités étranges (pour avoir plus de détails faire une psychanalyse d'un étudiant m'ayant subi).

# Déroulement de la soirée (Qui commence à 14h30 cc @legeeky)
- Présentation générale: 
    - DIY, Open Hardware
    - Physical computing et Internet of things
    - Introduction à Arduino.
- Live coding arduino pour apprendre à mettre des objets en mouvement.
- Live coding Raspberry pi.
- Exemple d'interactions physiques grâce à Processing et Kinect.

# Contexte : Open Source
- Un logiciel est Open Source quand ses sources sont accessibles.
- Disposant des sources, on est libre de les étudier, les modifier pour adapter 
  le logiciel à ses besoins.
- Depuis plus de 30 ans, de nombreuses licences Open Source sont apparues pour 
  diffuser les logiciels Open Source tout en se protégeant (GPL, BSD, MIT, ...).

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
- Émergence des Hackerspaces/Fab Lab dans les monde entier
- Principaux types de hardware open source
  - Électronique
  - Impression 3D
  - Personal fabbing (Laser cuter, CNC, Pick and place, Egg bot, ...)
  ![personal fabbing](diy.jpg)
  
# DIY : Makers
- Une personne qui pratique le DIY. Elle fabrique ses propres outils/instrument/objets en s'appuyant sur une communauté 
avec qui elle repartage ses projets.
- L'objectif de ce repartage est de rendre à la communauté l'aide qu'elle nous a apporté.
- Un exemple d'émergence d'une communauté auto-organisée qui fait du travail collaboratif et de l'open-innovation.
- Moteur de ce que l'on appelle la troisième révolution industrielle.

# DIY : Effet de mode ou mouvement de fond ?
- Le mouvement des makers est une forme de passage de la bidouille informatique à la bidouille des objets physiques.
- Nous somme à un instant particulier dans l'histoire : la révolution de la fabrication numérique pour tous.
- Comme pour l'informatique dans les années 80, on est à un moment d'effervescence qu'il faut péréniser.

# DIY : Effet de mode ou mouvement de fond ?
![Apple I](APPLEI.GIF)

# Hackerspace/Fab Lab ?
- Communautés ouverte de passionnés
- Projets variés autour de science et technologie
    - Conception d'objet
    - Installation technico-artistiques
    - Réparation et détournement d'objets
    - Et bien pire encore

# Laboratoire d'Aixpérimentation et de bidouille
![labaix](lab02.png)


# Laboratoire d'Aixpérimentation et de bidouille
- Fab Lab Aixois totalement ouvert à tous (*i.e* même au marseillais pour vous dire)
- Pour l'instant situé dans le département Informatique de l'IUT d'Aix
- Soirées Geekbidouilles tous les mois (Pizza, démos et bricolage)
- Beaucoup d'étudiants et de plus en plus de pro
- Notre credo, être un Fab Lab qui essaime des Fab Labs dans un maximum d'endroit

# Laboratoire d'Aixpérimentation et de bidouille : But
- Avoir un lieu ouvert et collaboratif qui décloisonne (inverse du silotage).
- Personnes qui se retrouvent dans une ambiance conviviale autour d'un projet.
- Tout le monde peut venir tant qu'il a envie de participer et d'apporter à la communauté.
- Lieu ressource sur son territoire.
- Créer de la recherche ouverte et participative.
- Dynamiser une nouvelle économie.

# Laboratoire d'Aixpérimentation et de bidouille
Pour avoir plus d'info :  
  - Site Web : http://www.labaixbidouille.com/  
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

# Physical computing
  - Objets interactifs et/ou intelligents (plus largement objets programmables).
  - Détournement d'objets (réappropriation de la technologie et lutte contre l'obsolescence programmée).
  - Collecte de données ouvertes (open data citoyen).
  - Objets connectés (Le fameux internet des objets).
  
# Physical computing
![Pong avec des bananes](bananapong.jpg)

# Physical computing
![Pong avec des bananes](bananapong1.jpg)

# Arduino
Brique de base pour le prototypage électronique.
![arduino de face](ArduinoUNO_Front.jpg)

# Arduino
  - Plate-forme de prototypage électronique.
  - Open source et simple à utiliser.
  - Fait à la base pour des artistes.
  - S'adresse à toute personne ayant un ordinateur et 20€.

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

#Programmation Arduino : IDE
![breadboard](bb.png)

#Que faire de plus ?
- L'arduino a l'intelligence d'une machine à laver (CPU 8bits@16MHz).
- Des capacités de communication énormes (Wifi, Bluetooth, XBee, Ethernet, 433MHz, ...)
- Pour aller plus loin il faut juste un peu de motivation et de temps.
- Maintenant les démos !!!

# Conclusion
[Exemple de réalisation](http://www.youtube.com/watch?v=0Q06-8cvejc)


