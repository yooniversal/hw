import time
import tkinter.ttk as ttk
from tkinter import *

root = Tk()
root.title("Yoon GUI")
root.geometry("640x480") # 가로 * 세로

# progressbar = ttk.Progressbar(root, maximum=100, mode="determinate")
# progressbar.start(10) # 10ms 마다 움직임
# progressbar.pack()

# root.resizable(False, False) # x(너비), y(높이) 값 변경 불가 (창 크기 변경 불가)

# def btncmd():
#     progressbar.stop()

# btn = Button(root, text="중지", command=btncmd)
# btn.pack()

p_var2 = DoubleVar()
progressbar2 = ttk.Progressbar(root, maximum=100, length=150, variable=p_var2)
progressbar2.pack()

def btncmd2():
    for i in range(1, 101):
        time.sleep(0.01) # 0.01초 대기

        p_var2.set(i) # progress bar 값 설정
        progressbar2.update() # ui 업데이트
        print(p_var2.get())

btn = Button(root, text="시작", command=btncmd2)
btn.pack()

root.mainloop()