package com.borapocan.kattis

import java.util.*
import kotlin.math.abs

class DifferentProblem {
}

fun main() {

    val sc = Scanner(System.`in`)

    while (sc.hasNextLong()) {

        println(abs(sc.nextLong() - sc.nextLong()))

    }
