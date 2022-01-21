array = [[1,1],[3,2],[5,3],[4,1],[2,3],[1,4]]


def maxPoints(points):
    refer = {}
    big_slopes_list = []
    counter_list = []
    points_used = []

    for point in points:
        i = 0
        while i < len(array):
            if i != points.index(point):
                print(f"before refactoring :  {point, points[i]}\n")
                if (point, points[i]) not in points_used or (points[i], point) not in points_used: 
                    print(f"after refactoring :  {point, points[i]}")
                    if (point[0] - points[i][0] == 0):
                        big_slopes_list.append("infinity")
                    else:
                        slope = (point[1] - points[i][1]) / (point[0] - points[i][0])
                        print(slope)
                        big_slopes_list.append(slope)

                    
                    points_used.append((point, points[i]))
                    points_used.append((points[i], point))

            i+=1 

    print(big_slopes_list)        

    for i in big_slopes_list:
        counter_list.append(big_slopes_list.count(i))

    print(max(counter_list))


maxPoints(array)