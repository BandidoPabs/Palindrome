//Pablo Salinas
//COSC 2436(20583)
//Assignment 1: Palindrome
//Due Date : 10/12/2016

//Declaring my headers
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string word);	// prototyping my function

int main() {
	// Declaring my string variables to store the word and the reverse of the word
	string pword, mword;

	// Prompting the user to enter a word
	cout << "Enter a word: ";
	cin >> pword;
	// Making the word to all lowercase to avoid any issues with uppercase or lower case not reading as palidromes
	for (int i = 0; i < pword.length(); i++) {
		pword[i] = towlower(pword[i]);
	}

	//	// Checking if the word is a palindrome and providing an if statement to determine if it is or not.
	if (isPalindrome(pword)) {
			
		cout << pword << " is a palindrome. True" << endl;
	}
	else {
		cout << pword << " is not a palidrome. False" << endl;
	}
	
	system("pause");
	return 0;
}

bool isPalindrome(string word) { // Defining my recursive function

	if (word.length() <= 1) {
		return true;
	}
	return (word[0] == word[word.length() - 1] && isPalindrome(word.substr(1, word.length() - 2)));

}