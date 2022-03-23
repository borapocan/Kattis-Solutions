package com.borapocan.pet

class Pet {}

fun main(args: Array<String>) {


    var maximumI = 0

    var max = 0

    val contestants = 5

    for (i in 1..contestants) {

        val juries = readLine()!!.split(' ').map{it.toInt()}

        var sum = 0

        juries.forEach { sum += it }

        //println(sum)

        if (sum > max) {

            max = sum

            maximumI = i


        }

    }

    println("$maximumI $max")

}
