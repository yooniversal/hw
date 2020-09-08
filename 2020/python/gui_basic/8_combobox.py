import tkinter.ttk as ttk
from tkinter import *

root = Tk()
root.title("Yoon GUI")
root.geometry("640x480") # 가로 * 세로

values = [str(i)+"일" for i in range(1, 32)]
combobox = ttk.Combobox(root, height=5, values=values, state="readonly")
combobox.pack()
combobox.set("카드 결제일") # 최초 목록 제목 설정

root.resizable(False, False) # x(너비), y(높이) 값 변경 불가 (창 크기 변경 불가)

def btncmd():
    print(combobox.get())

btn = Button(root, text="선택", command=btncmd)
btn.pack()


root.mainloop()