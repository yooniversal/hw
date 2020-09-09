# Quiz

from random import *

users = range(1, 21) # 1~20 할당
users = list(users) # class를 range에서 list로 변경
shuffle(users) # 무작위 추첨을 위해 리스트를 섞어주기

#당첨자 : 치킨 1명, 커피 3명
sub = sample(users, 4)

print(" -- 당첨자 발표 -- ")
print("치킨 당첨자 : {0} ".format(sub[0]))
print("커피 당첨자 : {0} ".format(sub[1:]))
print(" -- 축하합니다 -- ")