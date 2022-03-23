package com.borapocan.nastyhacks

class NastyHacks {}

fun main() {

    val n = readLine()!!.toInt()

    for (i in 1..n) {

        val (r, e, c) = readLine()!!.split(' ').map { it.toInt() }

        if (e - c > r) println("advertise")

        if (e - c == r) println("does not matter")

        if (e - c < r) println("do not advertise")

    }

}
