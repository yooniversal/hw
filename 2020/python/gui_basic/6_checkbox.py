from tkinter import *

root = Tk()
root.title("Yoon GUI")
root.geometry("640x480") # 가로 * 세로

chkvar = IntVar() # chkbar에 int형으로 값을 저장
chkbox = Checkbutton(root, text="오늘 하루 보지 않기", variable=chkvar)
#chkbox.select() # 자동 체크
#chkbox.deselect() # 자동 선택 해제
chkbox.pack()

chkvar2 = IntVar()
chkbox2 = Checkbutton(root, text="일주일동안 보지 않기", variable=chkvar2)
chkbox2.pack()

root.resizable(False, False) # x(너비), y(높이) 값 변경 불가 (창 크기 변경 불가)

def btncmd():
    print(chkvar.get()) # 0 : 체크 해제, 1 : 체크
    print(chkvar2.get())

btn = Button(root, text="클릭", command=btncmd)
btn.pack()


root.mainloop()