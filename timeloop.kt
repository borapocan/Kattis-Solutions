package com.borapocan.timeloop

class StuckInATimeLoop {}

fun main(args: Array<String>) {

    val N = readLine()!!.toInt()

    for (i in 1..N) {

        println("$i Abracadabra")

        if (i == 101) {

            break

        }

    }

}
