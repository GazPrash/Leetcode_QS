from typing import List


def sincreasing(nums: List):
    # nums.sort()
    # nums = list(set(nums))
    #     last = None
    #     removed = []
    #     # nums = list(set(nums))

    #     if len(nums) == 2:
    #         if nums[0] == nums[1]:
    #             return True

    #     if list(set(nums)) == sorted(nums) and len(set(nums)) >1:
    #         return True

    #     for x in nums:
    #         print(x, last)
    #         if not last:
    #             last = x

    #         elif x < last:
    #             nums.remove(last)
    #             removed.append(last)
    #             last = None

    #         else:
    #             last = x

    #     print(nums, removed)

    #     # if len(removed) == 1 and :
    #     #     return True

    #     if len(removed) <= 1  and sorted(nums) == nums:
    #         seen = []
    #         for x in nums:
    #             if x not in seen:
    #                 seen.append(x)
    #             else:
    #                 return False

    #         return True

    #     return False

    # print(sincreasing(
    # [97,389,668]))

    # alt strat

    i = 0
    while i < len(nums):

        store = nums[i]
        if store == 169:
            print(nums)
        del nums[i:i+1]
        # print(i, store)
        if store == 169:
            print(nums)
        # if store == 169:
            # print(nums, sorted(list(set(nums))), (nums == sorted(list(set(nums)))))
        if nums == sorted(list(set(nums))):
            # print(store)
            return True

        else:
            nums.insert(i, store)

        i += 1

    return False


print(
    sincreasing(
        [
            42,
            50,
            54,
            74,
            84,
            86,
            88,
            93,
            104,
            127,
            143,
            160,
            164,
            169,
            170,
            181,
            209,
            223,
            225,
            231,
            247,
            257,
            262,
            274,
            282,
            306,
            307,
            320,
            346,
            357,
            378,
            381,
            387,
            392,
            394,
            404,
            423,
            437,
            444,
            456,
            476,
            491,
            507,
            524,
            527,
            528,
            537,
            558,
            566,
            574,
            169,
            584,
            585,
            609,
            621,
            626,
            632,
            644,
            653,
            661,
            662,
            670,
            676,
            698,
            704,
            710,
            718,
            719,
            730,
            735,
            737,
            746,
            748,
            755,
            776,
            782,
            785,
            795,
            802,
            812,
            822,
            828,
            863,
            866,
            870,
            872,
            877,
            899,
            905,
            909,
            919,
            929,
            940,
            944,
            961,
            963,
            980,
            981,
        ]
    )

)




















a = [
    42,
    50,
    54,
    74,
    84,
    86,
    88,
    93,
    104,
    127,
    143,
    160,
    164,
    170,
    181,
    209,
    223,
    225,
    231,
    247,
    257,
    262,
    274,
    282,
    306,
    307,
    320,
    346,
    357,
    378,
    381,
    387,
    392,
    394,
    404,
    423,
    437,
    444,
    456,
    476,
    491,
    507,
    524,
    527,
    528,
    537,
    558,
    566,
    574,
    169,
    584,
    585,
    609,
    621,
    626,
    632,
    644,
    653,
    661,
    662,
    670,
    676,
    698,
    704,
    710,
    718,
    719,
    730,
    735,
    737,
    746,
    748,
    755,
    776,
    782,
    785,
    795,
    802,
    812,
    822,
    828,
    863,
    866,
    870,
    872,
    877,
    899,
    905,
    909,
    919,
    929,
    940,
    944,
    961,
    963,
    980,
    981,
]

b = [
    42,
    50,
    54,
    74,
    84,
    86,
    88,
    93,
    104,
    127,
    143,
    160,
    164,
    169,
    170,
    181,
    209,
    223,
    225,
    231,
    247,
    257,
    262,
    274,
    282,
    306,
    307,
    320,
    346,
    357,
    378,
    381,
    387,
    392,
    394,
    404,
    423,
    437,
    444,
    456,
    476,
    491,
    507,
    524,
    527,
    528,
    537,
    558,
    566,
    574,
    584,
    585,
    609,
    621,
    626,
    632,
    644,
    653,
    661,
    662,
    670,
    676,
    698,
    704,
    710,
    718,
    719,
    730,
    735,
    737,
    746,
    748,
    755,
    776,
    782,
    785,
    795,
    802,
    812,
    822,
    828,
    863,
    866,
    870,
    872,
    877,
    899,
    905,
    909,
    919,
    929,
    940,
    944,
    961,
    963,
    980,
    981,
]

# i = 0
# a.remove(169)
# b.remove(169)
# while i < len(a):
#     if a[i] != b[i]:
#         print(a[i], b[i])

#     i += 1


    