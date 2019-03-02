# Created by ali at 3/1/2019
print('use dll')
from ctypes import *
myDll = cdll.LoadLibrary("C:\\Users\\ali\\Documents\\C-Free\\Projects\\HelloWorldDll\\TestDll.dll")
myDll.showHelloWorldMessage()
