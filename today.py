#어제꺼해결!
N = int(input())
c = 1
d = 1
e = 2
for i in range(2*N):
    f = N-i
    g = i-N
    c = 2*i-1 #9
    if c > 2*N-1:
        d = 2*(i-e)-1 
        print(" "*g+"*"*d)
        e += 2
    else:
        print(" "*f+"*"*c)


#백준 문제1)

# Mississipi => ?
# zZa => Z
# z => Z
# baaa => A


# n = "Mississipi"
# m = dict(i, n)
# # for i in n:
# #     x = n.count(i)
# #     print(x)
# print(m)

# 딕셔너리로 넣으면은 {숫자, 문자} 빈도수 큰 숫자 = 문자가 뜨고 그 문자를 출력.

words = "Canddy"
unique_words = list(set(words)) # 입력받은 문자열에서 중복값을 제거 candy

cnt_list = []
for x in unique_words : #candy
    cnt = words.count(x) #c1 a1 n1 d2 y1
    cnt_list.append(cnt)  # count 숫자를 리스트에 append [1,1,1,2,1]

if cnt_list.count(max(cnt_list)) > 1 :  # count 숫자 최대값이 중복되면
    print('?')
else :
    max_index = cnt_list.index(max(cnt_list))  # count 숫자 최대값 인덱스(위치) [3]
    print(unique_words[max_index])


#백준 문제2)

test_num= 5
score_num = 9
score = 100, 99, 98, 97, 96, 95, 94, 93, 91

# #각 케이스마다 한줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째자리까지 출력한다

aver = sum(score) / len(score)
passer = []
for i in score:
    if i > aver:
        passer.append(i)
    

percent = len(passer) / len(score) * 100
print("{:.3f}%".format(percent))

# 패서/전체 len


# 백준 문제로 만들기

n = int(input())
score = list(map(int, input().split()))
aver = sum(score[1:]) / score[0]
passer = []
for i in score[1:]:
    if i > aver:
        passer.append(i)
    
percent = len(passer) / score[0] * 100
print("{:.3f}%".format(percent))