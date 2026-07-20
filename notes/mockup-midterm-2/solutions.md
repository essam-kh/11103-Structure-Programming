---
layout: page
title: Mockup Midterm Solutions 2
nav_exclude: true
---

# Mockup Midterm Solutions 2

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
void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}
```

## Question 3

<div class="lang-c" markdown="1">
```c
int isAnagram(char str1[], int size1, char str2[], int size2) {
    if (size1 != size2) {
        return 0;
    }
    
    int freq[26] = {0};
    
    for (int i = 0; i < size1; i++) {
        char ch1 = str1[i];
        if (ch1 >= 'A' && ch1 <= 'Z') ch1 += 32;
        if (ch1 >= 'a' && ch1 <= 'z') freq[ch1 - 'a']++;
        
        char ch2 = str2[i];
        if (ch2 >= 'A' && ch2 <= 'Z') ch2 += 32;
        if (ch2 >= 'a' && ch2 <= 'z') freq[ch2 - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }
    
    return 1;
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
bool isAnagram(char str1[], int size1, char str2[], int size2) {
    if (size1 != size2) {
        return false;
    }
    
    int freq[26] = {0};
    
    for (int i = 0; i < size1; i++) {
        char ch1 = str1[i];
        if (ch1 >= 'A' && ch1 <= 'Z') ch1 += 32;
        if (ch1 >= 'a' && ch1 <= 'z') freq[ch1 - 'a']++;
        
        char ch2 = str2[i];
        if (ch2 >= 'A' && ch2 <= 'Z') ch2 += 32;
        if (ch2 >= 'a' && ch2 <= 'z') freq[ch2 - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return false;
        }
    }
    
    return true;
}
```
</div>

## Question 4

```c
char firstUniqueChar(char str[], int size) {
    int freq[256] = {0};
    
    for (int i = 0; i < size; i++) {
        freq[(unsigned char)str[i]]++;
    }
    
    for (int i = 0; i < size; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }
    
    return '\0';
}
```

## Question 5

```c
int main() {
    int arr[100];
    int size;
    // Assume arr and size are already initialized with input data.

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    // Calculate average using floating point to be precise
    double avg = (double)sum / size;

    int aboveAvg[100], belowAvg[100];
    int sizeAbove = 0, sizeBelow = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > avg) {
            aboveAvg[sizeAbove++] = arr[i];
        } else {
            belowAvg[sizeBelow++] = arr[i];
        }
    }

    return 0;
}
```

## Question 6

**Part A**
<div class="lang-c" markdown="1">
```c
switch (choice) {
    case 1:
        printf("Check Balance\n");
        break;
    case 2:
        printf("Withdraw\n");
        break;
    case 3:
        printf("Deposit\n");
        break;
    case 4:
        printf("Exit\n");
        break;
    default:
        printf("Invalid Choice\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
switch (choice) {
    case 1:
        cout << "Check Balance\n";
        break;
    case 2:
        cout << "Withdraw\n";
        break;
    case 3:
        cout << "Deposit\n";
        break;
    case 4:
        cout << "Exit\n";
        break;
    default:
        cout << "Invalid Choice\n";
}
```
</div>

**Part B**
<div class="lang-c" markdown="1">
```c
if (light == 'R' || light == 'r') {
    printf("Stop\n");
} else if (light == 'Y' || light == 'y') {
    printf("Wait\n");
} else if (light == 'G' || light == 'g') {
    printf("Go\n");
} else {
    printf("Invalid Color\n");
}
```
</div>
<div class="lang-cpp" markdown="1">
```cpp
if (light == 'R' || light == 'r') {
    cout << "Stop\n";
} else if (light == 'Y' || light == 'y') {
    cout << "Wait\n";
} else if (light == 'G' || light == 'g') {
    cout << "Go\n";
} else {
    cout << "Invalid Color\n";
}
```
</div>

{% include week-nav.html prev_link="/notes/mockup-midterm-2/exam/" prev_title="Exam" %}
