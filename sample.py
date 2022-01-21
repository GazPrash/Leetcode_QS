string = """
Books
APM-001-Advanced Potion-Making
GWG-001-Gadding With Ghouls
APM-002-Advanced Potion-Making
DMT-001-Defensive Magical Theory
DMT-093-Defensive Magical Theory
GWG-002-Gadding With Ghouls
DMT-002-Defensive Magical Theory
Borrowers
SLY2301~Hannah Abbott
SLY2302-Euan Abercrombie
SLY2303-Stewart Ackerley
SLY2304--Bertram Aubrey
SLY2305-Avery
SLY2306-Malcolm Baddock
SLY2307-Marcus Belby
SLY2308-Katie Bell
SLY2309-Sirius Orion Black
Checkouts
SLY2304~DMT-02-2019-03-27
SLY2301~GWG-001-2019-03-27
SLY2308~APM-002-2019-03-14
SLY2303~DMT-001--2019-04-03
SLY2301~GWG-002-2019-04-03
EndofInput

"""


books_ = string.split("Books")
book_strings = ""




for index1, i in enumerate(books_[1]):
    if index1 != books_[1].find("Borrowers"):
        book_strings += i
    else:
        break

print(book_strings)



borrowers_ = string.split("Borrowers")
borrower_strings = ""


for index, j in enumerate(borrowers_[1]):
    if index != borrowers_[1].find("Checkouts"):
        borrower_strings += j
    else:
        break


print(borrower_strings)




dues_ = string.split("Checkouts")
due_strings = ""


for index, k in enumerate(dues_[1]):
    # print(index, dues_.find("End"))
    if index != dues_[1].find("EndofInput"):
        due_strings += k
    else:
        break

print(due_strings)


due_strings_new = due_strings.split('~')
house = due_strings_new[0]
id = due_strings_new[1]
due_dates = due_strings_new[2]





# print(string.split("Books"))
