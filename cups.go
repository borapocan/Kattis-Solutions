package main

import (
    "bufio"
    "fmt"
    "os"
    "sort"
    "strconv"
    "strings"
)

func main() {

    var n int

    m := make(map[string]int)

    fmt.Scanln(&n)

    for i := 0; i < n; i++ {

        scanner := bufio.NewScanner(os.Stdin)

        scanner.Scan()

        str := scanner.Text()

        ans := strings.Fields(str)

        val, err := strconv.Atoi(ans[1])

        if err != nil {

            res, _ := strconv.Atoi(ans[0])

            m[ans[1]] = res / 2

        } else {

            m[ans[0]] = val * 2

        }

    }

    keys := []string{}

    for key := range m {

        keys = append(keys, key)

    }

    sort.Strings(keys)

    for _, key := range keys {

        fmt.Println(key)

    }

}
