#include "HelloWorld.h"
#include <iostream>
#if defined(_WIN32) || defined(_WIN64)
#include <conio.h>
#else
#include <termios.h>
#include <unistd.h>
#endif
#include <string>
#include <algorithm>
#include <regex>
#include <deque>

void print_hello() {
    std::cout << "Hello, World!" << std::endl;
}

void wait_for_key() {
#if defined(_WIN32) || defined(_WIN64)
    _getch();
#else
    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
#endif
}

std::string reflect(const std::string& input) {
    std::string result = input;
    std::vector<std::pair<std::string, std::string>> reflections = {
        {" am ", " are "},
        {" was ", " were "},
        {" i ", " you "},
        {" i'd ", " you would "},
        {" i've ", " you have "},
        {" i'll ", " you will "},
        {" my ", " your "},
        {" are ", " am "},
        {" you have ", " I have "},
        {" you'll ", " I'll "},
        {" your ", " my "},
        {" yours ", " mine "},
        {" you ", " me "},
        {" me ", " you "}
    };
    for (const auto& pair : reflections) {
        std::regex word(pair.first, std::regex_constants::icase);
        result = std::regex_replace(result, word, pair.second);
    }
    return result;
}

std::string eliza_response(const std::string& input) {
    static std::deque<std::string> conversation_memory;
    const size_t MEMORY_LIMIT = 5; // Remember last 5 user statements
    if (!input.empty()) {
        if (conversation_memory.size() >= MEMORY_LIMIT) conversation_memory.pop_front();
        conversation_memory.push_back(input);
    }
    static std::vector<std::string> recent_topics; // Short-term memory
    std::string lower = input;
    std::transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    if (lower.find("bye") != std::string::npos || lower.find("exit") != std::string::npos) {
        return "Goodbye. It was nice talking to you. Remember, you're not alone.";
    }
    // Advanced conversation flow: refer to previous topics
    if (conversation_memory.size() > 1 && rand() % 5 == 0) {
        std::string prev = conversation_memory[conversation_memory.size() - 2];
        return "Earlier you mentioned: '" + prev + "'. Can you tell me more about that?";
    }
    // Patterns for classic Eliza with more empathy and variety
    std::smatch match;
    if (std::regex_search(input, match, std::regex("I need (.*)", std::regex_constants::icase))) {
        std::vector<std::string> responses = {
            "Why do you need " + match[1].str() + "?",
            "Would having " + match[1].str() + " help you feel better?",
            "What would it mean to you if you got " + match[1].str() + "?"
        };
        return responses[rand() % responses.size()];
    } else if (std::regex_search(input, match, std::regex("I feel (.*)", std::regex_constants::icase))) {
        std::vector<std::string> responses = {
            "I'm sorry you're feeling " + match[1].str() + ". Would you like to talk more about it?",
            "Do you often feel " + match[1].str() + "?",
            "What do you think causes you to feel " + match[1].str() + "?"
        };
        return responses[rand() % responses.size()];
    } else if (std::regex_search(input, match, std::regex("I am (.*)", std::regex_constants::icase))) {
        std::vector<std::string> responses = {
            "How long have you been " + match[1].str() + "?",
            "What makes you say you are " + match[1].str() + "?",
            "It takes courage to share that you're " + match[1].str() + "."
        };
        return responses[rand() % responses.size()];
    } else if (std::regex_search(input, match, std::regex("Because (.*)", std::regex_constants::icase))) {
        std::vector<std::string> responses = {
            "Is that the real reason?",
            "Thank you for explaining. Does that help you understand your feelings?",
            "Sometimes reasons are complicated. Would you like to explore this more?"
        };
        return responses[rand() % responses.size()];
    } else if (std::regex_search(input, match, std::regex("My (.*)", std::regex_constants::icase))) {
        std::vector<std::string> responses = {
            "Why do you say your " + match[1].str() + "?",
            "How does your " + match[1].str() + " affect you?",
            "Would you like to talk more about your " + match[1].str() + "?"
        };
        return responses[rand() % responses.size()];
    } else if (std::regex_search(input, match, std::regex("Why don'?t you ([^\?]*)\??", std::regex_constants::icase))) {
        return "Do you really think I don't " + match[1].str() + "?";
    } else if (std::regex_search(input, match, std::regex("Why can'?t I ([^\?]*)\??", std::regex_constants::icase))) {
        return "What makes you think you can't " + match[1].str() + "?";
    } else if (std::regex_search(input, match, std::regex("I can'?t (.*)", std::regex_constants::icase))) {
        return "How do you know you can't " + match[1].str() + "?";
    } else if (std::regex_search(input, match, std::regex("I have (.*)", std::regex_constants::icase))) {
        return "Why do you tell me you have " + match[1].str() + "?";
    } else if (std::regex_search(input, match, std::regex("You (.*)", std::regex_constants::icase))) {
        return "We are discussing you, not me.";
    } else if (std::regex_search(input, match, std::regex("Can you ([^\?]*)\??", std::regex_constants::icase))) {
        return "What makes you think I can't " + match[1].str() + "?";
    } else if (std::regex_search(input, match, std::regex("Can I ([^\?]*)\??", std::regex_constants::icase))) {
        return "Perhaps you don't want to " + match[1].str() + ".";
    } else if (std::regex_search(input, match, std::regex("You are (.*)", std::regex_constants::icase))) {
        return "Why do you think I am " + match[1].str() + "?";
    } else if (std::regex_search(input, match, std::regex("I want (.*)", std::regex_constants::icase))) {
        return "What would it mean if you got " + match[1].str() + "?";
    } else if (std::regex_search(input, match, std::regex("What (.*)", std::regex_constants::icase))) {
        std::vector<std::string> responses = {
            "Why do you ask?",
            "What are your thoughts about that?",
            "Is that something important to you?"
        };
        return responses[rand() % responses.size()];
    } else if (std::regex_search(input, match, std::regex("How (.*)", std::regex_constants::icase))) {
        std::vector<std::string> responses = {
            "What answer would please you most?",
            "How would you answer that yourself?",
            "Why do you wonder about that?"
        };
        return responses[rand() % responses.size()];
    } else if (std::regex_search(input, match, std::regex("(.*)\\?", std::regex_constants::icase))) {
        std::vector<std::string> responses = {
            "Why do you ask that?",
            "What makes you curious about that?",
            "Is there a reason you ask?"
        };
        return responses[rand() % responses.size()];
    } else if (std::regex_search(input, match, std::regex("(.*)\\.", std::regex_constants::icase))) {
        std::vector<std::string> responses = {
            "Please tell me more.",
            "How does that make you feel?",
            "Would you like to elaborate on that?"
        };
        return responses[rand() % responses.size()];
    }
    // Reflection fallback
    std::string reflected = reflect(input);
    if (reflected != input) {
        std::vector<std::string> responses = {
            "Why do you say '" + input + "'?",
            "It sounds like that's important to you. Can you tell me more?",
            "How does saying '" + input + "' make you feel?"
        };
        return responses[rand() % responses.size()];
    }
    // Default fallback with more empathy and variety
    static const std::vector<std::string> generic = {
        "I'm here for you. Please tell me more.",
        "Let's change focus a bit... Tell me about something that makes you happy.",
        "Can you elaborate on that?",
        "Why do you say that?",
        "I see. That must be difficult.",
        "Very interesting. How does that affect you?",
        "I see. And what does that tell you?",
        "How does that make you feel?",
        "How do you feel when you say that?",
        "Thank you for sharing that with me."
    };
    return generic[rand() % generic.size()];
}

#ifndef HELLOWORLD_TEST_BUILD
int main() {
    std::cout << "TRAVIS: Hello. I am Travis, your digital therapist. How are you feeling today?" << std::endl;
    std::string user_input;
    while (true) {
        std::cout << "YOU: ";
        std::getline(std::cin, user_input);
        if (user_input.empty()) {
            std::cout << "TRAVIS: Please, go on. I'm listening." << std::endl;
            continue;
        }
        std::string response = eliza_response(user_input);
        std::cout << "TRAVIS: " << response << std::endl;
        if (user_input.find("bye") != std::string::npos || user_input.find("exit") != std::string::npos) {
            break;
        }
    }
    return 0;
}
#endif
