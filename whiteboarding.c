0x09 - Netflix interview

Mock interviews are multi-purpose:

    It helps you and the staff understand where you stand in terms of general knowledge
    It helps you and the staff understand where you stand in terms of technical skills
    It is a training for interviews

Mock interviews - How-to

Before starting the mock interview, please read these instructions. Don't share this page with the candidate

When you are done, please click on "I'm ready!" and let's start the mock interview.

Whiteboarding

Plants need water

You are the new owner of a wheat farm and you want to put in place an automated water distribution. You have multiple wheat fields and water towers dispatched in your farm. You want to know what’s the maximum distance between a field and a water tower for buying the right water pump: not too powerful because too expensive and also not too weak.

You can modelize fields and water towers by 2 lists of integers, each integer representing the position. You can assume field and water towers are in the same “line”. The maximum distance between a field and a tower will be the pump power needed.

Write a function that returns the max power needed for the list of fields and water towers.

Example:

    Fields = [1, 2, 3]
    Towers = [2] => Max distance: 1

What you should not tell the candidate, however if they ask any of the below questions you have permission to clarify:

    Each list are sorted
    List can’t be empty
    Positions are non-negative integer
    The max value of a position is 10^9
    Examples below if the candidate needs more cases

Example 1:

    Fields = [1, 2, 3, 4]
    Towers = [1, 4] => Max distance: 1

Example 2:

    Fields = [1, 5]
    Towers = [10] => Max distance: 9

Instructions:
Naive solution

You compute for each field the distance between each tower. You keep the smallest distance for each field. The result will be the maximum value of these distances.

Follow-up questions:

    What is the time complexity of this algorithm? O(nm) - n = number of fields / m = number of towers ; if the same => O(n^2)
    Can you find a faster solution?

Score: If this is the best solution the candidate can find: max 10%
Binary search for finding the smallest distance

You search for each field the smallest distance to a tower by using binary search:

    Take the position of the middle of the list of towers
    If the position is equal to the field => distance = 0
    Save the distance between the tower and the field if it’s the smallest
    If the position is lower to the field => take the right part of the list of towers and repeat
    Otherwise => take the left part of the list of towers and repeat
    Stop when the list is empty.

The result will be the maximum value of these distances.

Follow-up questions:

    What is the time complexity of this algorithm? O(nlog(m)) - n = number of fields / m = number of towers
    Can you find a solution using less space?

Score: If this is the best solution the candidate can find: max 50%
Ordered distances

The goal is to find the nearest tower for each field based on the smallest left distance and right distance. How? by computing the distance between fields and water from left right and right to left!

    Define lf the list of fields and lt the list of towers
    Create a list called res of n times 10^9 (n = number of fields)
    Create 2 pointers for each list: i for the list of fields / j for the list of towers and set them to 0
    Loop while i < size of lf and j < size of lt
        If lf[i] <= lt[j]
            res[i] = lt[j] - lf[i] and i ++
        Else
            j ++
    Reuse i and j:
        i = size of lf - 1
        j = size of lt - 1
        Loop while i >= 0 and j >= 0
            If lf[i] >= lt[j]
                res[i] = lf[i] - lt[i] if this new value is under the one presents in res[i]
                i --
            Else
                j --
    Return the max value of res

Follow-up questions:

    What is the time complexity of this algorithm? O(n)
