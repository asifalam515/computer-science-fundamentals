import pyautogui
from time import sleep
sleep(3)    
for i in range(0,5):
    pyautogui.write('I love you Eva ',interval=0.25)
pyautogui.press('enter')