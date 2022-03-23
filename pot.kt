package com.borapocan.pot

import java.lang.Math.pow

class Pot {}

fun main(args: Array<String>) {

    val x = readLine()!!.toInt()

    var sum = 0

    for (i in 1..x) {

        val n = readLine()!!

        val last = n.last().toString().toDouble()

        val num = n.dropLast(1).toDouble()

        sum += Math.pow(num, last).toInt()

    }

    println(sum)

}
