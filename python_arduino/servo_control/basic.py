import serial
import time

ser = serial.Serial('/dev/ttyUSB0') 
ser.timeout = 1

while True:

    user_input = input("Servo angle >>")

    if user_input == "done":
        break

    ser.write(user_input.encode("ascii"))
    time.sleep(0.5)

ser.close()
print("Done")