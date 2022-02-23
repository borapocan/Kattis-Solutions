package com.borapocan.kattis

fun main() {

    val (n,c) = readLine()!!.split(' ').map { it.toInt() }

    val fruit = readLine()!!.split(' ').map { it.toInt() }

    var maxDiffFruit = 0

    var i = 0

    while (i < fruit.size) {

        var j = i

        var currentMax = 0

        var total = 0

        while (total < c && j < fruit.size) {

            if (fruit[j] + total <= c) {

                total += fruit[j]

                currentMax += 1
            }

            j += 1
        }

        if (currentMax > maxDiffFruit) {

            maxDiffFruit = currentMax
        }

        i += 1
    }

    println(maxDiffFruit)


}
