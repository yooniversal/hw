# Quiz
# 파일 입출력
# N주차 보고서를 텍스트 파일로 생성

import pickle

for i in range(1, 6):
    with open(str(i)+"주차_보고서.txt", "w", encoding="utf8") as report:
        report.write("- {0} 주차 주간 보고 -".format(i))
        report.write("\n부서 : ")
        report.write("\n이름 : ")
        report.write("\n업무 요약 : ")  