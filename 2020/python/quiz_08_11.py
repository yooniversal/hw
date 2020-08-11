# Quiz
# 표준 체중 구하기
# 남자는 키(m) x 키(m) x 22
# 여자는 키(m) x 키(m) x 21

def std_weight(height, gender):
    height *= 0.01
    if gender == "남자" :
        return height*height*22
    else:
        return height*height*21

height = 175
gender = "남자"
weight = round(std_weight(height, gender), 2)

print("키 {0}cm {1}의 표준 체중은 {2}kg 입니다.".format(height, gender, weight))