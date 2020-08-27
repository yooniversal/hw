# Quiz
# 예외 처리

class SoldOutError(Exception):
    def __init__(self, msg):
        self.msg = msg
    def __str__(self):
        return self.msg

chicken = 10
waiting = 1
while(True):
    print("[남은 치킨 : {0}]".format(chicken))
    try:
        order = int(input("치킨을 몇 마리 주문하시겠습니까?"))
        if(order < 1):
            raise ValueError
        elif(order > chicken):
            print("재료가 부족합니다.")
        else:
            print("[대기번호 {0}] {1} 마리 주문이 완료되었습니다.".format(waiting, order))
            waiting += 1
            chicken -= order
            if(chicken == 0):
                raise SoldOutError("재고가 소진되어 더 이상 주문을 받지 않습니다.")
    except ValueError:
        print("잘못된 값을 입력하였습니다")
    except SoldOutError as err:
        print(err)
        break