Tube HV PSU info
================

LEDs
----

Based on watching them whilst doing different things with the machine:

*  Green = Data/Control   
   Will be lit when the PSU thinks it should be on based on the serial control
   data
*  Amber = Interlock closed   
   Will be lit when the front guard is closed or water flow sensor does not
   detect water flow, will not power on if this LED is not lit
*  Red (dim) = HV Armed?   
   Seems to be dim when there is control data turning the supply on but the
   enable signal is high
*  Red (bright) = HV On   
   Indicates the HV output is active

Abridged
--------

*  Input voltage: 220V AC (47- 440Hz)
*  Max output voltage: 50kV
*  Max output current: 23mA
*  Overcurrent protection: 130% of max = 29.9mA
*  Efficiency: 91%
*  Operating temperature: -30 to 65 degC
*  Operating humidity: 20 to 85 %RH

Original
--------

Some very badly Chinese translated info about the tube PSU.   
Originally found [here](http://zevele.com/201304/carbon-dioxide-laser-power-myjg-60w.html)

```
MYJG-60W

This power adopts the soft switching circuit of zero-current semi-bridge, it   
is high in efficiency to make the power have, the quick characteristic of the   
speed of response, it is very apt to cooperate with the laser tubes of   
different producers.

Port control is simple, meet two kinds of signals of level level, can control   
the opening, stopping of laser with TTL level, plus the unusual protective   
switch at the same time and find whether the outside is the water-flowing,   
ventilates etc..

Laser power regulation can input 0 analog signal in 5V, all right for control   
magnitude of laser power signal, PWM of input.

The power opens a way to protect the function: In good in protection ground   
cases, power can short time work on state of opening a way, so can avoid   
causing the damage of the laser power by the fact that the laser tube burst.

Factory's degradation testing happens:

Each power will be through being fully loaded with degradation testing of 12   
hours of 60 degrees of high temperature under the state, the open and close   
of 7 seconds power is tested for 500 times

Main technical parameter:

Exchange the input voltage 
AC220V or AC110V 
Direct-flow input voltage 
DC300V or DC150V 
Frequency of ac input 
47- 440Hz 
Voltage output of maximum 
50KV 
Maximum current 
23mA look at the laser tubes of different producers 
Efficiency 
91% 
Overcurrent protection 
130% of the maximum current 
Open a way and protect 
Have short time 
Structure 
The air blower is cooled 
Voltage range of high level control 
Greater than or equal to 3V 
Voltage range of low level control 
Less than or equal to 0.8V 
Operating temperature 
-30 - 65 
Relative humidity 
20- 85% RH no moisture condensation 
Withstand voltage 
Input
```
