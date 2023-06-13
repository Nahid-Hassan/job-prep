# Therap Interview Preparation

- [Therap Interview Preparation](#therap-interview-preparation)
  - [Difference Between Stack and Queue](#difference-between-stack-and-queue)
  - [Introduce Yourself](#introduce-yourself)
  - [Access Modifiers in Java](#access-modifiers-in-java)
  - [What data structure do you use for a implementing a social network like facebook?](#what-data-structure-do-you-use-for-a-implementing-a-social-network-like-facebook)


## Difference Between Stack and Queue


In computer science, a stack and a queue are both abstract data types used to organize 
and manage collections of elements. They differ in terms of their underlying principles, 
behavior, and the order in which elements are accessed. Let's delve into the details 
and explore real-life examples in C++.

Stack:
A stack is a Last-In-First-Out (LIFO) data structure, meaning that the most recently 
added element is the first one to be removed. It operates on the principle of 
"last in, first out." Imagine a stack of plates where you can only add or remove plates from the top.

Queue:
A queue is a First-In-First-Out (FIFO) data structure, meaning that the first element added 
is the first one to be removed. It operates on the principle of "first in, first out." 
Imagine a queue of people waiting in line, where the person who arrived first is 
the first one to be served.

```c++
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    stack<int> st;   // example: browser back button
    st.push(10);
    st.push(20);
    st.push(30);

    while (!st.empty()) {
        int elem = st.top(); // return top element from the stack
        cout << elem << " ";
        st.pop(); // remove top element from the stack
    }

    cout << endl; // for prettier output

    queue<int> q;  // example: printer queue.
    q.push(10);
    q.push(20);
    q.push(30);

    while (!q.empty()) {
        int elem = q.front(); // in stack we use top() and in queue we use front()
        cout << elem << " ";
        q.pop();
    }

    return 0;
}
```

## Introduce Yourself

```
When introducing yourself in a software engineering interview as a fresh graduate from the Computer Science and Engineering (CSE) department, you can highlight relevant aspects of your background, education, and any relevant projects or experiences you have had. Here's a sample response:

"Hello! My name is [Your Name], and I recently graduated from the Computer Science and Engineering department. I am passionate about software engineering and have a strong foundation in programming languages such as C++, Java, and Python.

During my time in university, I had the opportunity to work on various projects that allowed me to apply my theoretical knowledge to practical scenarios. For example, in my final year, I collaborated with a team to develop a web application for managing a library system. This project involved designing the database schema, implementing the front-end using HTML/CSS and JavaScript, and building the back-end using Node.js and Express.

Additionally, I had the chance to complete internships where I gained hands-on experience in software development. I interned at [Company Name], where I worked on a team responsible for developing a mobile application using React Native. This experience helped me understand the importance of collaboration, code quality, and meeting project deadlines.

During my studies, I also focused on enhancing my problem-solving and algorithmic skills, participating in programming competitions and solving coding challenges on platforms like LeetCode and HackerRank.

I am excited about joining a dynamic and innovative team where I can continue to learn and contribute to real-world software projects. I am eager to apply my knowledge, adaptability, and enthusiasm to contribute to the success of the company. Thank you for considering my application."

Remember to personalize and expand on these points based on your own experiences and projects. It's also essential to practice your introduction beforehand, so you feel confident and articulate during the interview. Good luck!
```

## Access Modifiers in Java

```
In Java, access modifiers are keywords that control the visibility and accessibility of classes, methods, variables, and constructors within a program. There are four types of access modifiers in Java:

Public: The public access modifier allows the associated class, method, or variable to be accessed from anywhere within the program, including other classes and packages.

Protected: The protected access modifier allows the associated class, method, or variable to be accessed within the same package and by subclasses (even if they are in a different package).

Default (Package-private): If no access modifier is specified, the default access modifier is applied. It allows the associated class, method, or variable to be accessed only within the same package. It is not accessible outside the package.

Private: The private access modifier restricts the visibility of the associated method or variable to only the enclosing class. It is not accessible from any other class or package.

Here's a summary of the differences between these access modifiers:

Access Modifier	Visibility
Public	Accessible from anywhere within the program.
Protected	Accessible within the same package and by subclasses.
Default	Accessible only within the same package.
Private	Accessible only within the enclosing class.
It's important to choose the appropriate access modifier based on the desired level of encapsulation and visibility for your classes, methods, and variables. By properly using access modifiers, you can control access to your code and ensure better encapsulation and maintainability.
```

## What data structure do you use for a implementing a social network like facebook?

```
Implementing a social network like Facebook involves managing a large number of users, connections between users, posts, comments, and various other interactions. Several data structures are typically used in combination to build the necessary functionalities. Here are some key data structures that can be employed:

1. Graph: A graph is a fundamental data structure for representing connections between users in a social network. Each user is represented as a node, and the connections between users (friendships or follow relationships) are represented as edges between the nodes. Graph algorithms can be used to traverse the network, find connections, recommend friends, etc.

2. Hash Table: Hash tables can be used to store user profiles and provide efficient retrieval based on unique identifiers like user IDs or usernames. This allows quick access to user information, such as name, profile picture, and other attributes.

3. Array/List: Arrays or lists can be used to store posts, comments, and other content created by users. Each post or comment can be represented as an object, and the array/list provides a structure to store and organize these objects.

4. Priority Queue: A priority queue can be used to handle news feeds and display the most relevant content to users. Each post can have a priority based on factors like recency, popularity, or relevance, and the priority queue ensures that the most important posts are displayed prominently.

5. Trie: Tries can be used to implement autocomplete or search functionality for user names or content within the social network. Tries allow efficient prefix-based searching and can enhance the user experience when searching for users or posts.

These are just a few examples of data structures that can be used in implementing a social network like Facebook. The actual implementation may involve combining multiple data structures and employing various algorithms and optimizations to handle the scale and performance requirements of a real-world social network.
```

Certainly! Here's the same information presented as a Markdown table:

| Data Structure | Usage and Functionality                                     |
|----------------|------------------------------------------------------------|
| Graph          | Represent connections between users (friendships, follows) |
| Hash Table     | Efficient storage and retrieval of user profiles            |
| Array/List     | Store and organize posts, comments, and other content       |
| Priority Queue | Handle news feeds, display relevant and important content   |
| Trie           | Implement autocomplete and search functionality             |

The table provides a clear and organized representation of the data structures used in implementing a social network like Facebook.

## Graph vs Tree 

Here's the comparison between a tree and a graph presented as a Markdown table:

| Property     | Tree                                      | Graph                                        |
|--------------|-------------------------------------------|----------------------------------------------|
| Structure    | Hierarchical branching structure          | General structure with nodes and edges       |
| Connectivity | Single path from root to any other node   | Arbitrary connections between nodes          |
| Cycles       | No cycles or loops                        | Cycles and loops possible                    |
| Usage        | Hierarchical data structures (file systems, organization charts) | Modeling complex relationships (social networks, networks) |

This table summarizes the key differences between trees and graphs in a concise format.