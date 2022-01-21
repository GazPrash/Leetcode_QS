class Solution:
    def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
        running_length = 0
        lengths = []
        out = []
        wordss = []
        strr = ""
        countt = 0
        total_length = 0
        last_string = False
        for x in words:
            total_length += len(x)

        for word in words:
            if i < len(words)-1:
                if running_length < maxWidth:
                    running_length += len(word)
                    wordss.append(word)

            else:
                total_length -= running_length
                if total_length < maxWidth:
                    last_string = True

                empty = " " * (maxWidth - running_length)
                if not last_string:
                    strr = empty.join(wordss)
                else:
                    strr = ' '.join(wordss) + " " * (maxWidth - total_length)

                out.append(strr)


                wordss = []
                #lengths.append((running_length, countt))
                countt = 0
                running_length = 0

        return out
        