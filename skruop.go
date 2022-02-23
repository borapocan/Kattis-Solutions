package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {

    var n int

    res := 7

    fmt.Scan(&n)

    for i := 0; i < n; i++ {

        scanner := bufio.NewScanner(os.Stdin)

        scanner.Scan()

        line := scanner.Text()

        if line == "Skru op!" && res < 10 {

            res++

        } else if line == "Skru ned!" && res > 0 {

            res--
        }

    }

    fmt.Println(res)

}
