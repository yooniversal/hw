from tkinter import *

root = Tk()
root.title("Yoon GUI")
root.geometry("640x480") # 가로 * 세로

listbox = Listbox(root, selectmode="single", height=0)
listbox.insert(0, "사과")
listbox.insert(1, "딸기")
listbox.insert(2, "바나나")
listbox.insert(END, "수박")
listbox.insert(END, "포도")
listbox.pack()

root.resizable(False, False) # x(너비), y(높이) 값 변경 불가 (창 크기 변경 불가)

def btncmd():
    listbox.delete(END) # 맨 뒤에 항목 삭제

    print("리스트에는", listbox.size(), "개가 있어요")

    print("1~3번째 항목 : ", listbox.get(0, 2))

    print("선택된 항목 : ", listbox.curselection())

btn = Button(root, text="클릭", command=btncmd)
btn.pack()


root.mainloop()