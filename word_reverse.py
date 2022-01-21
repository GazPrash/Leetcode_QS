def reverseWords(s):
    words = s.split(" ")
    new_sentence = []
    for word in words:
        new_word = word[::-1]
        new_sentence.append(new_word)
    sent = ""
    for i in new_sentence:
        sent += f"{i} "

    return sent[:-1]

reverseWords("Let's take LeetCode contest") 