package main

import (
    "fmt"
    "strconv"
    "strings"
)

func main() {

    var str string

    res := 0

    fmt.Scan(&str)

    slice := strings.Split(str, ";")

    //fmt.Println(slice)

    res += len(slice)

    //fmt.Println(res)

    for i := 0; i < len(slice); i++ {

        if strings.Contains(slice[i], "-") {

            slice2 := strings.Split(slice[i], "-")

            ints := make([]int, len(slice2))

            for x, s := range slice2 {

                ints[x], _ = strconv.Atoi(s)
            }

            //fmt.Printf("%#v\n", ints)

            for j := len(ints) - 1; j > 0; j-- {

                res2 := 0

                res2 += (ints[j] - ints[j-1])

                res += res2
            }

        }

    }

    //fmt.Println(slice)
    fmt.Println(res)
}
