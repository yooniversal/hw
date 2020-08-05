# Quiz
# 승객은 50명까지 받으며, 승객별 소요 시간은 5~50분
# 택시 기사는 소요 시간이 5~15분에 해당되는 손님만 받도록 한다 \

from random import *

result = 0 # 총 탑승 승객 수
for i in range(1, 51):
    person = randrange(5, 51)
    if 5 <= person <= 15:
        print("[O] {0}번째 손님 (소요시간 : {1}분)".format(i, person))
        result += 1
    else:
        print("[ ] {0}번째 손님 (소요시간 : {1}분)".format(i, person))
    
print("총 탑승 승객은 " + str(result) + "입니다.")