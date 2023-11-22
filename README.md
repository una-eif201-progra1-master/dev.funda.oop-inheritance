# Inheritance

## Documentation

- [Technical](https://una-eif201-progra1-master.github.io/dev.funda.oop-inheritance/)
- [Course](https://mikeguzman.dev/software-development/programming-fundations/object-oriented-programming/)

## Project structure

1. **.github/workflows**: This is a directory typically used in GitHub repositories for storing workflow files. GitHub workflows are part of GitHub Actions, which automate certain processes in a software development workflow, like running tests, deploying code, or other CI/CD (Continuous Integration/Continuous Deployment) tasks. 

2. **docs/html**: This looks like a directory within the `docs` folder, likely used for storing HTML files related to documentation. The commit message "Final changes" tagged as "now" indicates recent updates or finalization of the documentation in HTML format.

3. **include**: This is commonly a directory containing header files in C or C++ projects, but it can also include other types of files in different contexts. 

4. **src**: Short for "source", this directory usually contains the source code of the project. 

5. **.gitignore**: This is a special file used by Git, the version control system. It tells Git which files or directories to ignore in a project, usually things like build outputs, temporary files, or files containing sensitive information. 

6. **.replit**: This file is specific to Repl.it, an online IDE (Integrated Development Environment). It's used to configure the Repl.it environment, such as specifying the language, build, and run commands. 

7. **CMakeLists.txt**: This is a file used by CMake, a build system that manages the build process in an operating system and compiler-independent manner.

8. **README.md**: This file, typically written in Markdown, provides an overview of the project, including instructions on how to install, configure, and use it.

9. **replit.nix**: This is likely a configuration file for Nix, a powerful package manager, used in the context of Repl.it. It specifies dependencies and environment settings for the project. 

## Example

```c++
// Example of Inheritance
class Vehicle {
  public:
    string brand = "Ford";

    void honk() {
        cout << "Tuut, tuut!" << endl;
    }
};

class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
    Car car1;
    car1.honk();  // Output: Tuut, tuut!
    cout << car1.brand + " " + car1.model;  // Output: Ford Mustang
    return 0;
}

```

`Car` is a derived class that inherits from the base class `Vehicle`.
