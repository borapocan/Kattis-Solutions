package main

import "fmt"

func diff(slice1 []byte, slice2 []byte) []byte {

    var res = make([]byte, len(slice1))

    for i := 0; i < len(slice1); i++ {

        if (slice1[i] == slice2[i]) {

            res[i] = '.'
        
        } else {

            res[i] = '*'

        }

    }

    return res

}


func main() {

    var n int

    fmt.Scanln(&n)

    for i := 0; i < n; i++ {

        var line1 []byte

        var line2 []byte

        fmt.Scanln(&line1)
        
        fmt.Scanln(&line2)

        res := diff(line1, line2)


        fmt.Printf("%s\n", line1)

        fmt.Printf("%s\n", line2)

        fmt.Printf("%s\n", res)

        fmt.Println("")
    }

}
