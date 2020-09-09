import tkinter.messagebox as msgbox
from tkinter import *

root = Tk()
root.title("Yoon GUI")
root.geometry("640x480") # 가로 * 세로

def create_new_file():
    print("새 파일을 만듭니다.")

# 기차 예매 시스템이라 가정
def info():
    msgbox.showinfo("알림", "정상적으로 예매 완료되었습니다.")

def warn():
    msgbox.showwarning("경고", "해당 좌석은 매진되었습니다.")

def error():
    msgbox.showwarning("에러", "결제 오류가 발생했습니다.")

def okcancel():
    msgbox.askokcancel("확인 / 취소", "해당 좌석을 선택하시겠습니까?")

def retrycancel():
    msgbox.askretrycancel("재시도 / 취소", "재시도 하시겠습니까?")

def yesno():
    msgbox.askyesno("예 / 아니오", "예매 하시겠습니까?")

def yesnocancel():
    response = msgbox.askyesnocancel(title=None, message="예매 내용이 저장되지 않았습니다.\n저장 후 프로그램을 종료하시겠습니까?")
    # 예 : 1 / 아니오 : 0 / 취소 : 그 외
    if response == 1:
        print("예")
    elif response == 0:
        print("아니오")
    else:
        print("취소")

    

Button(root, command=info, text="알림").pack()
Button(root, command=warn, text="경고").pack()
Button(root, command=error, text="에러").pack()

Button(root, command=okcancel, text="확인 취소").pack()
Button(root, command=retrycancel, text="재시도").pack()
Button(root, command=yesno, text="예 아니오").pack()
Button(root, command=yesnocancel, text="예 아니오 취소").pack()


root.mainloop()