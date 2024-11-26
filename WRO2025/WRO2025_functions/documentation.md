# 1. Initialisation
## 1.1 Power Mechanism
We switch on the switch. `Check.c` is executed, if it returns 0, the robot is running correctly if not `debug.c` is executed. If `debug.c` decides there is too much damage, the robot automatically writes this log error in `logs.csv` and restarts, else the robot continues automatically. 
