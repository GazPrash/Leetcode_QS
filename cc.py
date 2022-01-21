try:
    count_list = []
    for i in range(int(input())):
        count = 0
        teams, k = map(int, input().split(" "))
        team_score = list(map(int, input().split(" ")))
        team_score.sort()
        team_score.reverse()
        max_teams = team_score[0]
        
        for i in team_score:
            if i == max_teams:
                count += 1
                k -= 1
            else:
                if k <= 0:
                    break
                else:
                    count += 1
                    k -= 1
            
                           
        count_list.append(count)
            
    for j in count_list:
        print(str(j))
        
        
except:
    pass