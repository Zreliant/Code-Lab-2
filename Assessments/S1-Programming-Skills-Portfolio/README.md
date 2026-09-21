# Programming Skills Portfolio

The programming skills portfolio assessment is designed to assess your understanding of the fundamental programming concepts covered in the module. It consists of two main components: a set of coding challenge and multiple-choice quizzes.

### Coding Challenges
You will be given three distinct coding challenges that will test your ability to apply pre-existing skills learned in CodeLab I alongside the techniques introduced in CodeLab II including file handling and object orientation. The challenges will progressively build in complexity, requiring the integration of multiple concepts. The exercises can be found below.

When writing your solutions you should focus on implementing the appropriate techniques from the concepts taught in the module. Code for these challenges should be saved to this folder in your CodeLab II GitHub repository. This repository should be kept neat and organised with clearly named folders for each challenge and effective use of commits when working on your solutions (e.g. regular commits on a per task basis with clear and descriptive messages).

### Written Code Explanations
You must provide a written explanation for each challenge of approximately 200 words. These explanations will be completed during a scheduled class session that will take place after the coding challenges have been submitted.

The explanations should address key questions about your approach to solving each problem, including your design decisions, implementation choices, and any challenges encountered during development. These guiding questions will be provided during the class session.

During the session, you will have access to both the module materials and your submitted code to support the preparation of your explanations. Completion of these written explanations is a mandatory component of the assessment. Failure to complete this element to a satisfactory standard (at least 40%) will result in a failing grade for the assessment.


### Multiple Choice Quizzes
In addition to the coding challenges you are required to complete five multiple choice quizzes. Each quiz focuses on a specific set of foundational topics from the module. These quizzes will be released throughout the module, and you will have one week to complete each one from its release date.


## Deadlines

There are several deadlines for the different components of the programming skills portfolio assessment. These are detailed below:

### Coding Challenges
13 November, 11:59am

### Written Code Explanations
19 November, In class

### Multiple Choice Quizzes
The deadline for each quiz is 5pm on the dates stated below. Each quiz will be accessible 1 week before the deadline

- Quiz 1 - Knowledge Refresher, 2nd Oct
- Quiz 2 - Furthering Functions & Vectors, 9th Oct
- Quiz 3 - Files & Structures, 16th Oct
- Quiz 4 - OOP, 30th Oct
- Quiz 5 - STL, Enumeration & Pointers, 13th Nov

## Marking

The programming skills portfolio assessment will be evaluated against the following criteria.

- **Technical Implementation (50%):** Successful selection and implementation of appropriate programming techniques to solve the coding challenges and adherence to coding conventions.
- **Code Explanation (20%):** Clear explanation of the problem-solving approach taken to solving each challenge and justification for the choice of programming techniques.
- **Repository Presentation (10%):** Organised repository and effective use of version control
- **Multiple Choice Quizzes (20%):** Performance across the multiple choice quizzes

**Please refer to Ultra for the full brief including submission instructions and marking criteria descriptors.**

---

## Challenge 1: Carbon Footprint Calculator

> **Your solution must be no more than 100 lines of code.**

Develop a program that estimates a user's monthly carbon emissions.

The program should contain:

- A function to collect user data.
- A function to calculate total emissions.
- A function to classify the result.

The user should enter:

- Monthly car miles travelled.
- Monthly electricity usage (kWh).

Calculate emissions using the following formula:

```text
(car_miles * 0.25) + (electricity_kwh * 0.20)
```

Classify the result using the following categories:

```text
Less than 100 = Low
100 to 300 = Moderate
Greater than 300 = High
```

Display the total emissions and the classification.

&nbsp;
&nbsp;

## Challenge 2 - Music Streamer

> **Your solution must be no more than 100 lines of code.**

The `songs.txt` file in the resources folder contains a list of song titles, with one song per line.

Example:

```text
Yellow Submarine
Clocks
Enter Sandman
Never Gonna Give You Up
```

Write a program that simulates a music streaming assistant.

The program should:

1. Load all songs from the file.
2. Respond to the command:

```text
Play a random song
```

3. Randomly select and display a song.
4. Keep track of songs that have already been played.
5. Avoid repeating songs until all songs have been played.
6. Allow the user to continue requesting songs or quit the program.


&nbsp;
&nbsp;


## Challenge 3 - Student Grade Manager

> **Your solution must be no more than 250 lines of code.**

Develop a simple student record management system using object-oriented programming principles.

The `studentMarks.txt` file found in the resources folder contains the following information for each student:

```text
StudentID,Name,Coursework,Exam
1001,Alex Smith,65,72
1002,Sam Jones,54,61
```

Create a `Student` class with appropriate attributes and methods.

Your program should:

- Read data from the file using appropriate file handling techniques.
- Create a `Student` object for each record in the file.
- Display a menu that allows users to:
    - View all students.
    - View an individual student.
    - Calculate a student's final module mark.

The final module mark should be calculated using the following formula:

```text
(Coursework * 0.4) + (Exam * 0.6)
```

Display a grade classification using the following scheme:

```text
70+ First
60-69 Upper Second
50-59 Lower Second
40-49 Third
Below 40 Fail
```

### Additional Challenge (optional)

> **Your solution must be no more than 350 lines of code.**

Extend the program to support the following functionality:

- Add a new student record.
- Save updated records back to the file.
- Display the highest-performing student.