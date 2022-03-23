package com.borapocan.oddities

class Oddities {}

fun main(args: Array<String>) {

    val n = readLine()!!.toInt()

    val list = ArrayList<String>()

    for (i in 1..n) {

        val x = readLine()!!.toInt()

        when {

            x % 2 == 0 -> list.add("$x is even")

            else -> list.add("$x is odd")

        }

    }

    for (i in 1..n) {

        println(list[i-1])

    }

}
