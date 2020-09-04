from tkinter import *

root = Tk()
root.title("Yoon GUI")
root.geometry("640x480") # 가로 * 세로

btn1 = Button(root, text="버튼1")
btn1.pack() 

btn2 = Button(root, padx=5, pady=10, text="버튼2") # 여백
btn2.pack()

btn3 = Button(root, width=10, height=3, text="버튼3") # 크기 고정
btn3.pack()

btn4 = Button(root, fg="red", bg="yellow", text="버튼5")
btn4.pack()

photo = PhotoImage(file="gui_basic/image.png")
btn5 = Button(root, image=photo)
btn5.pack()

def btncmd():
    print("버튼이 클릭됐어요")

btn6 = Button(root, text="동작하는 버튼", command=btncmd)
btn6.pack()

root.mainloop()