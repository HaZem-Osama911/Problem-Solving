# Problem Solving in C++

A personal collection of competitive programming solutions and training exercises, covering C++ fundamentals, STL, searching, sorting, and algorithmic techniques.

**66 problem folders · 67 C++ files · 2 collections · 12 topics**

[Codeforces index](codeforces/README.md) · [Assiut Training index](assiut-training/README.md) · [Browse by topic](docs/TOPICS.md)

## Browse the collection

| Collection | Problem folders | C++ files | Focus |
| --- | ---: | ---: | --- |
| [Codeforces](codeforces/README.md) | 49 | 50 | Contest problems and general practice |
| [Assiut Training](assiut-training/README.md) | 17 | 17 | STL, searching, sorting, and range queries |

## A quick tour

| Technique | Example | What to look for |
| --- | --- | --- |
| Binary search | [Interesting Drink](codeforces/b-interesting-drink/solution.cpp) | Sorting and `upper_bound` for repeated queries |
| Sliding window | [Books](codeforces/b-books/solution.cpp) | Maintaining a running sum with two pointers |
| Prefix sums | [Range Sum Query](assiut-training/e-range-sum-query/solution.cpp) | Preprocessing for range totals |
| Strings & frequency maps | [Letter](codeforces/d-letter/solution.cpp) | Counting available characters |
| STL containers | [Set](assiut-training/a-set/solution.cpp) | Ordered lookup, insertion, and bounds |

For the full list, use the collection indexes or the [topic index](docs/TOPICS.md).

## Repository layout

```text
codeforces/
  b-books/
    solution.cpp
  ...
  README.md
assiut-training/
  e-range-sum-query/
    solution.cpp
  ...
  README.md
docs/
  TOPICS.md
  PATH-MAP.md
README.md
```

Folder names use lowercase words separated by hyphens. The leading letter comes from the original exercise label; it is not a difficulty rating. Each file is a standalone program. An additional implementation, when present, is named `solution-2.cpp`.

## Run a solution

Install a C++ compiler such as GCC, then clone the repository:

```sh
git clone https://github.com/HaZem-Osama911/Problem-Solving.git
cd Problem-Solving
```

Compile one file at a time. For example:

**Windows / PowerShell**

```powershell
g++ -std=c++17 -O2 codeforces/b-books/solution.cpp -o solution.exe
.\solution.exe
```

**Linux / macOS**

```sh
g++ -std=c++17 -O2 codeforces/b-books/solution.cpp -o solution
./solution
```

Enter the input required by the chosen problem. Avoid compiling the whole collection into one executable: the files have separate `main` functions.

## About this collection

These are learning and practice submissions. The indexes document the available code; they do not claim every file is judge-accepted or independently tested. Compiler compatibility can vary between older submissions.

Original solution contents and Git history are preserved. Two byte-identical duplicate files were consolidated, while distinct variants were retained. If you used an older folder link, the [old-to-new path map](docs/PATH-MAP.md) points to its current location.

## Adding a solution

1. Use the matching collection and a folder such as `codeforces/a-problem-name/`.
2. Save the implementation as `solution.cpp`; keep distinct alternatives as `solution-2.cpp`.
3. Add the problem to the collection index and topic index, and update the counts above.
4. Keep generated executables and editor files out of commits.

---

[GitHub profile](https://github.com/HaZem-Osama911) · [.NET projects](https://github.com/HaZem-Osama911/Projects)
