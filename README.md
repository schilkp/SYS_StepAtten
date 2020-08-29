# SYS StepAtten

### Philipp Schilk

A 127 Step Relay Step-Attenuator and 4-way input switcher designed to fit into a [Schiit SYS](https://www.schiit.com/products/sys) enclosure.

![PCB Render](https://raw.githubusercontent.com/TheSchilk/SYS_StepAtten/master/Doc/pcb_render.jpg)

## Status
WIP

## Specifications

| **Spec**                 | **Value**                                 |
|--------------------------|-------------------------------------------|
| Inputs                   | 2x Stereo 3.5mm, 2x Stereo RCA            |
| Attenuator Type          | Constant input impedance                  |
| Expected Input Impedance | 10K (can be adjusted)                     |
| Steps                    | 127 + Relay Mute                          |
| Power Input              | 9Vdc, center positive barrel jack. 500mA+ |
| Power Consumption        | Max 2.25W (250mA at 9VDc)                 |
| Control                  | Internal controls or wired remote control |

## Grounding
All inputs are fully isolated from each other.
RCA grounds can be kept seperate or joined. (Internal Jumper)
Audio ground can be kept seperate or joined to digital ground (Internal Jumper)

## Remote Control
Remote Control connector pinout (looking at connector from back of unit):

| 3V    | GND  |
|-------|------|
| **Sense** | **Poti** |

A remote consists of a potentiometer between 3V and GND with wiper connected to 'Poti'
A 10K resistor has to be placed between GND and Sense for the remote to be detected.
If the remote features a switch, it should short Sense to GND.

## Riser Board
Design files for Connector Riser board:
https://github.com/TheSchilk/3.5mm_RiserPCB/releases/tag/v0.0
