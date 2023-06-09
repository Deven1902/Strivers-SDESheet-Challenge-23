from os import *
from sys import *
from collections import *
from math import *

def nextPermutation(nums, n):
    # Write your code here.
    # Return a list.
    # pass

    i=len(nums)-1
    while i>0 and nums[i-1]>=nums[i]:
        i=i-1
    if i<1:
        nums[:]=nums[::-1]
    else:
        j=len(nums)-1 #last element 
        #we have to find element from last that is greater than nums[i-1]
        while nums[j]<=nums[i-1]:
            j=j-1
        nums[i-1], nums[j]= nums[j], nums[i-1]
        nums[i:]=reversed(nums[i:])
    return nums
