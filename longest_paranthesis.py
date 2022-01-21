rec_list = []
string = "(()"
def longestValidParentheses(s):
    rec_list = []
    # half_true = False
    # tail_true = False
    top = 0
    store = 0
    valid = 0
    chain_broken = False
    
    if s != "":
        for index, i in enumerate(s):      
            if i == '(':
                rec_list.append('(')
                top += 1
                # half_true = True
                # tail_true = False
                if index <= len(s)-2:      
                    if s[index+1] == ')':
                        if top > 0:
                            rec_list.pop()
                            top -= 1
                        # print("yex", top)


            if top == 0:
                # print("yex", top)
                valid += 1
            else:
                # chain_broken = True
                if valid > store:
                    store = valid
                    # print(store, valid)
                    valid = 0
                else:
                    valid = 0



    else:
        return 0

    if store > valid:
        # print("YES")
        return store*2
    else:
        return valid*2

print(longestValidParentheses(string))
# longestValidParentheses(string)

# string  = 'abc'
# conv_next = iter(string)

# for index, i in enumerate(s):
#     if index <= len(s)-2:
#         print(i, string[index+1])