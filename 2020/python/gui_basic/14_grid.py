from tkinter import *

root = Tk()
root.title("Yoon GUI")
root.geometry("640x480") # 가로 * 세로

# btn1 = Button(root, text="버튼1")
# btn2 = Button(root, text="버튼2")

# btn1.grid(row=0, column=0)
# btn2.grid(row=1, column=1)

# 맨 윗줄
btn_f16 = Button(root, text="F16", width=5, height=2)
btn_f17 = Button(root, text="F17", width=5, height=2)
btn_f18 = Button(root, text="F18", width=5, height=2)
btn_f19 = Button(root, text="F19", width=5, height=2)

btn_f16.grid(row=0, column=0, sticky=N+E+W+S, padx=3, pady=3)
btn_f17.grid(row=0, column=1, sticky=N+E+W+S, padx=3, pady=3)
btn_f18.grid(row=0, column=2, sticky=N+E+W+S, padx=3, pady=3)
btn_f19.grid(row=0, column=3, rowspan=2, sticky=N+E+W+S, padx=3, pady=3)

# clear 줄

btn_1 = Button(root, text="1", width=5, height=2)
btn_3 = Button(root, text="3", width=5, height=2)
btn_4 = Button(root, text="4", width=5, height=2)

btn_1.grid(row=1, column=0, columnspan=2, sticky=N+E+W+S, padx=3, pady=3)
btn_3.grid(row=1, column=2, sticky=N+E+W+S, padx=3, pady=3)

root.mainloop()