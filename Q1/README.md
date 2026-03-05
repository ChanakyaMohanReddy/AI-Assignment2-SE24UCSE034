 Q1 – Turing Test and CAPTCHA Implementation

Student: Maddikunta Chanakya Mohan Reddy
Roll No: SE24UCSE034
Course: Artificial Intelligence

Objective:

To understand how the Turing Test and CAPTCHA can be implemented and to design a basic architecture for both systems.


1. Turing Test

The Turing Test is used to determine whether a machine can imitate human intelligence.
In this implementation, a judge asks a question and the system randomly selects either a bot or a human participant to respond. The judge then guesses whether the response came from a human or a bot.

Architecture


          Judge
            |
            v
     Session Manager
        /        \
       v          v
    Bot AI     Human Interface

File

`turing_test.c` – Simulates a simple Turing Test interaction.



2. CAPTCHA

CAPTCHA (Completely Automated Public Turing test to tell Computers and Humans Apart) is used to distinguish between human users and automated bots by presenting a challenge that is easy for humans but difficult for bots.

Architecture


      CAPTCHA Generator
             |
             v
      CAPTCHA Challenge
             |
             v
          User Input
             |
             v
      Verification Unit
             |
       Success / Failure

 File

`captcha.c` – Generates a random CAPTCHA and verifies the user input.

 Conclusion

The programs demonstrate simple implementations of the Turing Test and CAPTCHA concepts and illustrate how humans and machines can be distinguished through interaction and verification mechanisms.
