package com.borapocan.kattis

import kotlin.math.ceil
import kotlin.math.floor

class Parket {
}

fun main() {

    val input = readLine()!!.split(' ').map { it.toInt() }

    val r = input[0]

    val b = input[1]

    val area = r + b

    var output = arrayListOf<Int>()

    for (i in 2..Math.ceil(Math.sqrt(area.toDouble())).toInt() + 1) {

        if (area % i == 0) {

            val y = floor(area.toDouble() / i.toDouble())

            if ((2 * y).toInt() + (2 * i ) - 4 == r) {

                output.add(i)

                output.add(floor(area.toDouble() / i.toDouble()).toInt())


            }
        }
    }

//    println(output)

    println("${output.sortedDescending()[0]} ${output.sortedDescending().last()}")

}
