# Corner Grocer Item Tracker

## Project Summary

The **Corner Grocer Item Tracker** is a C++ console application designed to help the Corner Grocer analyze daily purchase records. The program reads a text file containing items purchased throughout the day and calculates how frequently each item appears. By providing this information, the store can optimize the layout of its produce section and make data-driven decisions to improve customer experience and sales. The program also generates a backup file (`frequency.dat`) to preserve item frequency data.

---

## Reflection

### What did you do particularly well?

I implemented an **object-oriented approach** using the `ItemTracker` class to encapsulate all data handling, file I/O, and reporting functionality. Using a `map` to store item frequencies made counting efficient and easy to access. I also included input validation and error handling in the menu to ensure the program is robust for user interaction. Additionally, I followed **industry-standard practices** like inline comments, descriptive variable names, and clear separation of logic between `main.cpp` and the `ItemTracker` class.

### Where could you enhance your code?

* **Sorting Output:** Currently, the frequency list is displayed in arbitrary order. Sorting alphabetically or by frequency would make the output more user-friendly.
* **Flexible File Handling:** Allowing users to specify the input file at runtime would make the program more adaptable.
* **Enhanced Histogram:** Adding color or graphical representation could improve readability.
* **Security Improvements:** Checking for invalid or malicious file content could prevent potential crashes.

These enhancements would improve usability, adaptability, and security.

### Which pieces of the code did you find most challenging, and how did you overcome them?

The **histogram display and frequency mapping** were the most challenging because they required iterating through the map while dynamically generating visual output. I overcame this by researching C++ `map` iteration patterns and practicing nested loops to produce the correct number of asterisks. I also used **zyBooks examples and online C++ documentation** to reinforce my understanding.

### What skills from this project are transferable?

* **File I/O:** Reading from and writing to files is useful in almost every programming project.
* **Data Structures:** Using `map` for key-value storage is broadly applicable for counting, caching, and organizing data.
* **Object-Oriented Design:** Encapsulation of logic into a class promotes reusability and maintainability.
* **Error Handling & Input Validation:** Ensuring programs handle unexpected input gracefully is a transferable professional skill.

### How did you make this program maintainable, readable, and adaptable?

* I separated logic into a **dedicated class** (`ItemTracker`) and kept `main.cpp` focused on the menu.
* Used **descriptive variable and function names** to clearly convey purpose.
* Included **inline comments** for critical logic sections.
* Applied **input validation and error handling** to make the program robust.
* Designed output files (`frequency.dat`) and display methods to be **extensible** for future enhancements, such as additional reporting or data analytics.
