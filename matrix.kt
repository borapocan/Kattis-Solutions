package com.borapocan.kattis

import java.io.IOException

class MatrixInverse {
}


fun main() {

    try {


        var count = 1

        while (true) {

            val (a, b) = readLine()!!.split(' ').map { it.toInt() }

            val (c, d) = readLine()!!.split(' ').map { it.toInt() }

            println("")

            val determinant = 1 / ((a * d) - (b * c))

            println("Case ${count++}:")

            println("${d * determinant} ${(-b) * determinant}")

            println("${(-c) * determinant} ${a * determinant}")

        }

    }catch (e: IOException) {

        e.printStackTrace()

    }
    
}
