package com.borapocan.planina

import kotlin.math.pow

class Planina {
}

fun main(args: Array<String>) {

    val iteration = readLine()!!.toInt()

    var n = 2

    for (i in 1..iteration) {

        n = 2 * n - 1

    }

    println(Math.pow(n.toDouble(),2.0).toInt())

}
