import time
import keyboard
from PIL import ImageGrab

def screenshot():
    # 2020.06.01. 10시 20분 20초 -> _20200601_102020
    curr_time = time.strftime("_%Y%m%d_%H%M%S")
    img = ImageGrab()
    img.save("image{}.png".format(curr_time))

keyboard.add_hotkey("F9", screenshot) # F9 누르면 시작

keyboard.wait("esc") # esc 누를 때까지 수행