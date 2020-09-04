from tkinter import *

root = Tk()
root.title("Yoon GUI")
root.geometry("640x480") # 가로 * 세로

label1 = Label(root, text="안녕하세요")
label1.pack()

photo = PhotoImage(file="gui_basic/image.png")
label2 = Label(root, image=photo)
label2.pack()

def change():
    label1.config(text="또 만나요")

    global photo2 # 전역 변수로 선언해야 이미지를 유지함. 안하면 garbage collection이 메모리 해제시킴.
    photo2 = PhotoImage(file="gui_basic/image2.png")
    label2.config(image=photo2)

btn = Button(root, text="클릭", command=change)
btn.pack()

root.mainloop()