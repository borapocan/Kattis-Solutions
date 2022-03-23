package com.borapocan.faktor

class Faktor {}

fun main(args: Array<String>) {

    val (A,I) = readLine()!!.split(' ').map { it.toInt() }

    val scientistToBribe = A * I - (A - 1)

    println(scientistToBribe)
    
}
