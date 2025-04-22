# HelloWorld

## Overview
HelloWorld is a simple project designed to demonstrate basic programming concepts. It includes a main program, header files, and test cases.

## Current Workspace Structure
```
HelloWorld/
	doctest.h
	HelloWorld.cpp
	HelloWorld.exe
	HelloWorld.h
	README.md
	test_HelloWorld.cpp
	test_HelloWorld.exe
```

## Features
- Basic "Hello, World!" program.
- Includes test cases for validation.
- Demonstrates the use of header files and modular programming.

## How to Run
1. Compile the `HelloWorld.cpp` file.
2. Run the resulting executable to see the output.
3. Use `test_HelloWorld.cpp` to validate the program's functionality.

# Travis: A Classic Eliza-Style Chatbot in C++

## Project Overview
This project demonstrates how a simple cross-platform C++ "Hello, World!" program was transformed into a classic Eliza-style chatbot, reimagined as "Travis, your digital therapist." The chatbot runs in the terminal, engaging users in conversation using pattern-matching and reflection techniques inspired by the original Eliza program.

## Conversational Patterns Used in Development

The creation of Travis was itself a conversational, iterative process. Here’s how our dialogue shaped the project:

1. **Goal Clarification and Iterative Requests**
   - The process began with a clear, simple request: create a cross-platform "Hello, World!" program in C++.
   - Each new feature or change was prompted by a conversational request, such as "add unit tests," "make it a chatbot," or "replicate the original Eliza experience."
   - The conversation naturally flowed from basic functionality to more advanced, user-driven requirements.

2. **Stepwise Enhancement**
   - Each step built on the last, with the user providing feedback or new goals after seeing results.
   - For example, after the basic chatbot was implemented, the user asked for more authentic Eliza logic, then for a more engaging opening, and finally for a persona change from Eliza to Travis.

3. **Pattern Matching and Reflection (in Code and Conversation)**
   - The chatbot’s logic mirrors the development process: both use pattern matching and reflection.
   - The code uses regular expressions and pronoun reflection to generate responses.
   - The development process used conversational reflection—restating goals, clarifying intent, and iteratively refining the solution based on user feedback.

4. **Rapid Prototyping and Feedback Loops**
   - Each change was quickly implemented and tested, with the user providing immediate feedback.
   - This conversational loop allowed for rapid prototyping and continuous improvement.

5. **Documentation and Transparency**
   - At each stage, the reasoning and process were documented in the README and through conversational summaries.
   - The final README reflects not just the technical solution, but the collaborative, conversational approach that led to it.

## How Travis Works

- Travis greets the user and asks how they are feeling.
- The user types any message; Travis analyzes the input and responds using classic Eliza-style rules:
  - Pattern matching: Recognizes phrases like "I need...", "Why can't I...", "I feel...", etc., and responds with contextually appropriate questions.
  - Pronoun reflection: Flips pronouns in user statements to make responses more natural (e.g., "I am" → "you are").
  - Fallback responses: If no pattern matches, Travis selects a generic response to keep the conversation going.
- The conversation continues until the user types "bye" or "exit".

## Example Session
```
TRAVIS: Hello. I am Travis, your digital therapist. How are you feeling today?
YOU: I feel anxious about my job.
TRAVIS: Do you often feel anxious about my job?
YOU: My boss is very demanding.
TRAVIS: Why do you say your boss is very demanding?
YOU: Because he gives me too much work.
TRAVIS: Is that the real reason?
YOU: bye
TRAVIS: Goodbye. It was nice talking to you.
```

## Building and Running
- To build: `g++ -std=c++11 -I. HelloWorld.cpp -o HelloWorld.exe`
- To run: `HelloWorld.exe` (on Windows)

## Notes
- The chatbot logic is contained in `HelloWorld.cpp`.
- The program is designed for educational and demonstration purposes, showcasing classic AI techniques in C++.

---
Feel free to explore, modify, and extend Travis to create your own conversational agents!
