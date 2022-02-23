package main

import "fmt"

func ninetyPercent(weight int) int {

    weight = weight / 100

    weight = weight * 90

    return weight

}

func main() {

    var g, t, n int

    fmt.Scan(&g, &t, &n)

    //var weight = g - t

    items := 0

    for i := 0; i < n; i++ {

        var item int

        fmt.Scan(&item)

        items += item

    }

    capacity := g - t

    maxWeight := float64(capacity)*0.9 - float64(items)

    fmt.Println(maxWeight)

}
