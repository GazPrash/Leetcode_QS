class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
        if (s3 == "" and s1 == "" and s2 == "") : return 1
        if (s3 == "") : return 0
        cstr = s3[0]
        str_on = 1
        for char in s3:
            cstr += char

            if cstr in s1:
                str_on = 1
            else:
                cstr = char
                str_on = 2

            if cstr in s2:
                str_on = 2
            elif (str_on == 2):
                return False
            else:
                str_on = 1


        return True
        