package com.borapocan.autori

class Autori {}

fun main(args: Array<String>) {

    val input = readLine()!!.toString()

    val (upperCase, NotUpperCase) = input.partition { it.isUpperCase() }

    print(upperCase)

}
