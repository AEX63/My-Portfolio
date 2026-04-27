Project Three: Corner Grocer Item Tracker
Project Summary
The Corner Grocer Item Tracker is a C++ application designed to analyze text-based sales data. It reads an input file containing a list of items purchased throughout the day and calculates the frequency of each item. The program provides a menu-driven interface for users to look up specific item totals, view a complete list of frequencies, or display a visual histogram of the data.
What I Did Well
I excelled at implementing the Standard Template Library (STL) Map to store and associate item names with their respective counts. This ensured efficient data retrieval with a time complexity of O(log N). I also focused on Modular Programming by separating the logic into an ItemTracker class, which makes the code more organized and easier to debug.
Enhancements for Efficiency and Security
Efficiency: I could implement a hash map (std::unordered\_map) to achieve faster average lookup times of O(1) if the dataset becomes significantly larger.
Security: I could add more robust file-path validation to ensure the program only accesses intended files, protecting against unauthorized file access or crashes from missing data.
Challenges and Solutions
The most challenging part was correctly formatting the Histogram output. It required nested loops to print the correct number of asterisks (\*) next to each item name. I overcame this by sketching the logic on paper first and then using std::setw to ensure the text aligned neatly in the console.
Transferable Skills
The ability to handle File I/O (Input/Output) and use Object-Oriented Programming (OOP) principles are the most transferable skills. These concepts are foundational in software development and will apply directly to future courses in Java and Python.
Maintainability and Adaptability
I made the program maintainable by using Header Files (.h) to separate declarations from implementations. This makes the code adaptable because the user interface logic in main.cpp is separate from the data processing logic in ItemTracker.cpp, allowing either to be updated without breaking the other.

