import serial
import time

arduinData= serial.Serial('com5',9600,timeout=0.1)
time.sleep(1)

while(1==1):
    
    dataPacket =arduinData.readline()
    dataPacket=str(dataPacket,'utf-8')
    print(dataPacket)