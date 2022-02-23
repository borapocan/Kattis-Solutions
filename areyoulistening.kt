package com.borapocan.kattis

import kotlin.math.max

class AreYouListening {
}

fun main() {

    val (cx, cy, n) = readLine()!!.split(' ').map { it.toInt() }

    val maxRanges = arrayListOf<Int>()

    for (i in 1..n) {

        val (dx, dy, r) = readLine()!!.split(' ').map { it.toInt() }

        val distance = (Math.sqrt(Math.pow(dx.toDouble() - cx.toDouble(), 2.toDouble())+ Math.pow(dy.toDouble() - cy.toDouble(), 2.toDouble())) - r.toDouble()).toInt()

        maxRanges.add(distance)

    }

    val outputArray = maxRanges.sorted()


    if (outputArray[2] < 0) {

        println(0)

    }else {

        println(outputArray[2])
    }
}
