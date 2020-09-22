 ![Language](https://img.shields.io/badge/language-C-blue) [![Contributors][contributors-shield]][contributors-url] [![Forks][forks-shield]][forks-url] [![Stargazers][stars-shield]][stars-url] [![Issues][issues-shield]][issues-url] [![MIT License][license-shield]][license-url] [![LinkedIn][linkedin-shield]][linkedin-url]

<!-- PROJECT LOGO -->
<br />

<p align="center">
  <h3 align="center">Polynomial Arithmetic</h3>
  <p align="center">
    Division of two polynomials 
    <br />
    <a href=https://github.com/vineeths96/Polynomial-arithmetic><strong>Explore the repository»</strong></a>
    <br />
    <br />
    <a href=https://github.com/vineeths96/Polynomial-arithmetic/blob/master/Problem%20Statement.pdf>View Problem Statement</a>
    </p>





</p>

> tags : polynomial arithmetic, linked list, doubly linked list



<!-- ABOUT THE PROJECT -->

## About The Project

This program performs the division of polynomials represented in memory with doubly linked lists. The entire program is written in three files - `client.c`, `header.c`, and `implement.c`. Comments have been added frequently to help in understanding the logic behind implementation. The two polynomials have to inputted as (power, coefficient) pairs. This program performs the division of the first polynomial by the second and outputs the quotient and remainder in (power, coefficient) pairs. This program repeats indefinitely till exited manually. Refer [Problem statement](./Problem%20Statement.pdf) file for detailed information.

The function when executed expects the user to input two polynomials on which division has to be operated. The degree of polynomials has to be inputted first, which should be following by the (power, coefficient) value pairs. No coefficient of polynomial should be zero and the value pairs should be inputted in decreasing order of powers. Failing to adhere to these conditions would result in termination of the program. After both polynomials are inputted the division() performs the division and stores the quotient and remainder in two lists. They are printed on screen as (power, coefficient) pairs and then the lists are deleted to free up used space. 

### Built With
This project was built with 

* C
* Ubuntu 18.04.1 
* gcc version 7.4.0



<!-- GETTING STARTED -->

## Getting Started

Clone the repository into a local machine using

```shell
git clone https://github.com/vineeths96/Polynomial-arithmetic
```

### Instructions to run

Open the terminal, make the program and run it. 

```shell
make
./a.out
```

Enter the values from the file (or custom values) as requested during execution of the program.

### Testcases

The [testcase.txt](./testcase.txt) contains the 5 test cases. Comments have been added to guide through the test case file to identify where to input data.



<!-- LICENSE -->

## License

Distributed under the MIT License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact

Vineeth S - vs96codes@gmail.com

Project Link: [https://github.com/vineeths96/Polynomial-arithmetic](https://github.com/vineeths96/Polynomial-arithmetic)




<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->

[contributors-shield]: https://img.shields.io/github/contributors/vineeths96/Polynomial-arithmetic.svg?style=flat-square
[contributors-url]: https://github.com/vineeths96/Polynomial-arithmetic/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/vineeths96/Polynomial-arithmetic.svg?style=flat-square
[forks-url]: https://github.com/vineeths96/Polynomial-arithmetic/network/members
[stars-shield]: https://img.shields.io/github/stars/vineeths96/Polynomial-arithmetic.svg?style=flat-square
[stars-url]: https://github.com/vineeths96/Polynomial-arithmetic/stargazers
[issues-shield]: https://img.shields.io/github/issues/vineeths96/Polynomial-arithmetic.svg?style=flat-square
[issues-url]: https://github.com/vineeths96/Polynomial-arithmetic/issues
[license-shield]: https://img.shields.io/badge/License-MIT-yellow.svg
[license-url]: https://github.com/vineeths96/Polynomial-arithmetic/blob/master/LICENSE
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat-square&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/vineeths

