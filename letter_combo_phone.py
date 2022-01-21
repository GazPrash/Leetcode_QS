def letterCombinations(str):
    str_1 = ""
    str_2 = ""
    str_3 = ""
    str_4 = ""
    str_5 = ""
    str_6 = ""
    str_7 = ""
    str_8 = ""
    str_9 = ""
    
    
    for i in str:
        if i == '2':
            str_1 += "a"
            str_2 += "b"
            str_3 += "c"
            str_4 += "b"
            str_5 += "c"
            str_6 += "a"
            str_7 += "c"
            str_8 += "a"
            str_9 += "b"
        elif i == '3':
            str_1 += "d"
            str_2 += "e"
            str_3 += "f"
            str_4 += "e"
            str_5 += "f"
            str_6 += "d"
            str_7 += "f"
            str_8 += "d"
            str_9 += "e"
        elif i == '4':
            str_1 += "g"
            str_2 += "h"
            str_3 += "i"
            str_4 += ""
        elif i == '5':
            str_1 += "j"
            str_2 += "k"
            str_3 += "l"
            str_4 += ""
        elif i == '6':
            str_1 += "m"
            str_2 += "n"
            str_3 += "o"
            str_4 += ""
        elif i == '7':
            str_1 += "p"
            str_2 += "q"
            str_3 += "r"
            str_4 += "s"
        elif i == '8':
            str_1 += "t"
            str_2 += "u"
            str_3 += "v"
            str_4 += ""   
        elif i == '9':
            str_1 += "w"
            str_2 += "x"
            str_3 += "y"
            str_4 += "z"


    return str_1, str_2, str_3, str_4, str_5, str_6, str_7, str_8, str_9



str = '23'


print(letterCombinations(str))