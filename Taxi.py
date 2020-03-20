'''
After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the i-th group consists of si friends (1 ≤ si ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

Input
The first line contains integer n (1 ≤ n ≤ 105) — the number of groups of schoolchildren. The second line contains a sequence of integers s1, s2, ..., sn (1 ≤ si ≤ 4). The integers are separated by a space, si is the number of children in the i-th group.

Output
Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.
'''
n = int(input())
arr = input().split(' ')
group_dict = dict()
for i in arr:
    try:
        group_dict[i] += 1
    except:
        group_dict[i] = 1
total_count = 0
if '4' in group_dict:
    total_count +=  group_dict['4']
if '3' in group_dict:
    if '1' in group_dict:
        if group_dict['1'] >= group_dict['3']:
            total_count += group_dict['3']
            group_dict['1'] = group_dict['1'] - group_dict['3']
        else:
            total_count += group_dict['3']
            group_dict['1'] = 0
    else:
        total_count += group_dict['3']
if '2' in group_dict:
    total_count += int(group_dict['2']/2)
    group_dict['2'] = group_dict['2']%2
    if group_dict['2'] != 0:
        total_count += 1
        if '1' in group_dict and group_dict['1'] > 0:
            group_dict['1'] -= 2
if '1' in group_dict and group_dict['1'] > 0:
    total_count += group_dict['1']/4
    group_dict['1'] = group_dict['1']%4
    if group_dict['1'] != 0:
        total_count += 1
print(int(total_count))
            
        
            
