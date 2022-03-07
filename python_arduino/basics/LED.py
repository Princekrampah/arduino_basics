import serial
import time


ser = serial.Serial('/dev/ttyUSB0') 
ser.timeout = 1

print(ser.name)


while True:
    user_input = input("Input >> ")

    if user_input == "done":
        break

    ser.write(user_input.encode())

    # wait some time for the arduino to responde
    time.sleep(0.5)
    # ignore the first line read, cause its what was input
    ser.readline()
    # read the second line, this is our interest
    arduino_msg = ser.readline().decode("ascii")

    print(arduino_msg)

ser.close() 

print("Done")