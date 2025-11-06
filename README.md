# 🧩 Outline Name Generator (C Language)

## 🧠 Overview
**Outline Name Generator** is a fun C program that lets you print any name using special characters as an outline.
Each letter (A–Z) is drawn in a grid using the characters provided by the user.

---

## ⚙️ Features
✅ Supports **all English letters (A–Z)**  
✅ Users can enter **any name or word**  
✅ Users can choose **any set of special characters**  
✅ Generates clean ASCII-style outlines for each letter  
✅ Lightweight and beginner-friendly  

---

## 💻 How It Works
1. The program asks you to **enter your name**.  
2. You can enter **one or more special characters** (e.g., `# @ $ * +`).  
3. The output displays your name as a stylized **outline**, made using those characters.  

---

## 🧠 Example

**Input:**
```
Enter your name: ALI
Enter special characters: # * +
```

**Output:**
```
##****##
#      #
########
#      #
#      #
#      #
#      #
```

*(Pattern continues for each letter...)*

---

## 🏗️ How to Run

**Step 1:** Save the file as `outline_name_generator.c`  
**Step 2:** Compile the program  
```bash
gcc outline_name_generator.c -o outline_name_generator
```  
**Step 3:** Run it  
```bash
./outline_name_generator
```

---

## 📂 File Structure
```
outline-name-generator/
│
├── outline_name_generator.c   # Main program file
└── README.md                  # Project documentation
```

---

## 📜 License
This project is **open-source** and free to use under the **MIT License**.
