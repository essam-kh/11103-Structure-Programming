---
layout: page
title: Mockup Midterm Solutions 1
nav_exclude: true
---

# Mockup Midterm Solutions 1

## Question 1

Output:
```text
k: 21
b: 0
k: 21
a: 1
k: 21
b: 0
k: 21
a: 0
k: 21
b: 0
z: 23
```

## Question 2

```c
void moveZeros(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        if (arr[left] != 0) {
            left++;
        } else if (arr[right] == 0) {
            right--;
        } else {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}
```

## Question 3

<div class="lang-c" markdown="1">
```c
int isEvenPal(char arr[], int size) {
    if (size % 2 != 0) {
        return 0; 
    }
    int freq[26] = {0}; 
    for (int i = 0; i < size; i++) {
        char ch = arr[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; 
        }
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            return 0; 
        }
    }
    return 1;
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
bool isEvenPal(char arr[], int size) {
    if (size % 2 != 0) {
        return false; 
    }
    int freq[26] = {0}; 
    for (int i = 0; i < size; i++) {
        char ch = arr[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; 
        }
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            return false; 
        }
    }
    return true;
}
```
</div>

## Question 4

<div class="lang-c" markdown="1">
```c
int checkSumCondition(int arr[], int size) {
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    if (evenSum >= 2 * oddSum) {
        return 1;
    } else {
        return 0;
    }
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
bool checkSumCondition(int arr[], int size) {
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    if (evenSum >= 2 * oddSum) {
        return true;
    } else {
        return false;
    }
}
```
</div>

## Question 5

```c
int main() {
    int arr[100];
    int size;
    // Assume arr and size are already initialized with input data.

    int mod2[100], mod3[100], mod2_3[100];
    int size2 = 0, size3 = 0, size2_3 = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            mod2[size2++] = arr[i];
        }
        if (arr[i] % 3 == 0) {
            mod3[size3++] = arr[i];
        }
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0) {
            mod2_3[size2_3++] = arr[i];
        }
    }

    return 0;
}
```

## Question 6

**Part A**
<div class="lang-c" markdown="1">
```c
switch (grade) {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Good\n");
        break;
    case 'C':
        printf("Average\n");
        break;
    case 'D':
    case 'F':
        printf("Poor\n");
        break;
    default:
        printf("Invalid grade\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
switch (grade) {
    case 'A':
        cout << "Excellent\n";
        break;
    case 'B':
        cout << "Good\n";
        break;
    case 'C':
        cout << "Average\n";
        break;
    case 'D':
    case 'F':
        cout << "Poor\n";
        break;
    default:
        cout << "Invalid grade\n";
}
```
</div>

**Part B**
<div class="lang-c" markdown="1">
```c
if (day == 1 || day == 7) {
    printf("Weekend\n");
} else if (day >= 2 && day <= 6) {
    printf("Weekday\n");
} else {
    printf("Invalid day\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
if (day == 1 || day == 7) {
    cout << "Weekend\n";
} else if (day >= 2 && day <= 6) {
    cout << "Weekday\n";
} else {
    cout << "Invalid day\n";
}
```
</div>

{% include week-nav.html prev_link="/notes/mockup-midterm-1/exam/" prev_title="Exam" %}
