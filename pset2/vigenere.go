package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {

	argsWithProg := os.Args
	vigenere := os.Args[1]

	var inputString string
	finalString := ""

	_, err := strconv.Atoi(os.Args[1])

	if len(argsWithProg) < 2 || len(argsWithProg) > 2 || err == nil {
		fmt.Println("Usage: ./vigenere keyword")
	} else {
		fmt.Print("plaintext: ")
		scanner := bufio.NewScanner(os.Stdin)
		if scanner.Scan() {
			inputString = scanner.Text()

		}

		lengthVigenere := len(vigenere)

		counter := 0
		inputString = strings.ToLower(inputString)
		for _, val := range inputString {
			if val == ' ' {
				finalString += " "
				continue
			}
			fmt.Println(counter, lengthVigenere)
			if counter%lengthVigenere == 0 {
				counter = 0
			}
			fmt.Println("*****")
			fmt.Println(val-60+96, rune(vigenere[counter])-60+96)
			fmt.Println(string(val), string(vigenere[counter]))

			finalString += string(((val - 71 + rune(vigenere[counter]) - 71) % 26) + 97)
			counter++
		}

	}
	fmt.Println(finalString)
}
