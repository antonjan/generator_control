# Generator Control

This repository will have the details on the hardware and software of the generator control.
# Project status.
Not compleet yet just started 1 Feb 2019<br>
![Generator Control](Generator_Controle.png?raw=true "Generator Contol")<br>

Arduino Program

1) Pin 0 Input
2) Pin 1 Output
3) Pin 2 Output
4) Pin 3 as Input
5) Trigger mode 3 keeping this mode.
6) Wait for trigger on Pin 0 (Start generator)
7) If Pin 3 is high Cant Start Generator
8) Trigger mode 1 1S and then back to mode 3
9) Trigger mode 2 1S and then back to mode 3


Relay Logic for Choke Acuator


1) Mode Chock Activated 1 Second (01)
2) Mode Chock Deactivated 1 Second (10)
3) N Action (00)

