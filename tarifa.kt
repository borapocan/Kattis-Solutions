package com.borapocan.tarifa

class Tarifa() {}

fun main(args: Array<String>) {

    val X = readLine()!!.toInt()

    val N = readLine()!!.toInt()

    var R = 0

    for (i in 1..N) {

        val p = readLine()!!.toInt()

        R += (X - p)

    }

    print(R + X)

}
