package main

import "fmt"

func bus(k int) int64 {

    res := 0.0

    for i:= 1; i < k+1; i++ {

        res += 0.5

        res *= 2

    }

    return int64(res)

}

func main() {

    var n int

    fmt.Scan(&n)

    for i := 0; i < n; i++ {

        var k int

        fmt.Scan(&k)

        fmt.Println(bus(k))
    }

}
