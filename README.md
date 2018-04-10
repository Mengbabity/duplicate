# duplicate

1.数组若有重复数字，返回true
用map<int,int>即可，数组数字为key，出现次数为value，value>1时，返回真

2.数组重复数字之间的间隔<=k时，返回真
用set<int>
for循环：如果i>k，删除nums[i-k-1]，即set中元素个数最多为k个；
        如果set.find(nums[i])!=set.end()，即在set中找到了数字nums[i]，返回真；//若find函数没有找到，将指向set.end()
        将nums[i]插入到set中，即set.insert()
