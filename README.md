# 🧪 C++ Unit Test Generator using LLM (LLaMA3)

This project uses a local LLM (LLaMA3 via Ollama) to automatically generate Google Test unit tests for given C++ functions based on YAML configuration rules.

---

## 📁 Folder Structure

cpp_test_generator/

│

├── main.cpp # Your sample C++ function

├── instructions.yaml # YAML rule describing test framework and expectations

├── prompt.txt # Combined prompt file used as input to the LLM

└── tests/

└── test_main.cpp # Generated test file using Google Test


---

## 🧠 How it Works

1. **Write your C++ function** in `main.cpp`
2. **Define test rules** in `instructions.yaml`
3. **Combine content** into `prompt.txt`
4. **Run local LLaMA3 model** using Ollama:
   ```bash
   ollama run llama3 < prompt.txt
Copy the generated test code into tests/test_main.cpp

Compile and run tests using Google Test.

## 🛠️ Running the Tests
Make sure g++ and Google Test are set up.

Compile:

bash
g++ -std=c++11 -isystem ./gtest/include -I./gtest/include/gtest-all.cc -pthread tests/test_main.cpp -o test_main

### Run the test:
./test_main
🔧 If Google Test is not installed locally, consider cloning Google Test into your project directory or installing via package manager.

## ✅ Requirements
C++

Ollama installed and running

LLaMA3 model pulled (ollama pull llama3)

g++ compiler

Google Test (gtest)

## ✍️ Author
### Ankita Raj

B.Tech CSE, KIIT University

GitHub: https://github.com/Ankitaraj15






