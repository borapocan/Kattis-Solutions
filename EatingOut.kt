package com.borapocan.kattis

class EatingOut {
}

fun main(args: Array<String>) {

    val (m,a,b,c) = readLine()!!.split(' ').map { it.toInt() }

    if (a + b + c <= 2 * m) println("possible") else println("impossible")
    
}
