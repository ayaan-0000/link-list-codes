<h1 align="center">🔗 Linked List Lab Exercises</h1>

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
  <img src="https://img.shields.io/badge/Data%20Structures-Linked%20List-blueviolet?style=for-the-badge" />
</p>

<p align="center"><b>A hand-built singly linked list class implemented from scratch for a Data Structures lab.</b></p>

---

## 📖 Project Explanation

A custom `ll` (linked list) class manages `node` structures, each holding a data value and a pointer to the next node. The class supports node creation, emptiness checks, and the operations covered across the lab's practical tasks — all implemented without relying on `std::list`.

| File | Description |
|---|---|
| `task1.cpp` | Linked list construction and basic operations |
| `task3.cpp` | List manipulation exercise |
| `task4.cpp` | List manipulation exercise |

## 🛠️ Tech Stack

<p>
  <img src="https://img.shields.io/badge/Language-C%2B%2B-00599C?style=flat-square&logo=c%2B%2B" />
</p>

## 🧩 Things Used

- **Custom `node` struct** — holds data and a `next` pointer
- **Custom `ll` class** — wraps node management with head/tail tracking

## 🚀 Build & Run

```bash
g++ task1.cpp -o task1 && ./task1
g++ task3.cpp -o task3 && ./task3
g++ task4.cpp -o task4 && ./task4
```

## ⭐ Honest Review

**Strengths:** The linked list is implemented cleanly from first principles, with proper head/tail tracking and an emptiness check — solid fundamentals that show the underlying mechanics are understood, not just memorized.

**Areas for improvement:** As three separate lab-answer files, this reads more as homework than as a portfolio piece. Combining it with other data-structure exercises into a single "Data Structures Lab Work" repository, organized by topic in subfolders, would present the same work in a way that's easier for a reviewer to browse and more representative of a body of work rather than isolated tasks.

## 👤 Author

Ayaan Amir — Data Structures coursework.

## 📄 License

MIT
