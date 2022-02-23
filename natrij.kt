package com.borapocan.kattis

class Natrij {
}

fun main() {

    val first = readLine()!!.split(':').map { it.toInt() }

    val second = readLine()!!.split(':').map { it.toInt() }

    var firstH = first[0]
    var firstM = first[1]
    var firstS = first[2]

    var secondH = second[0]
    var secondM = second[1]
    var secondS = second[2]

    fun hourDifference(a: Int, b: Int): Int {

        if (a > b) {

            return (b + 24) - a

        } else {

            return b - a
        }
    }

    fun minDifference(a: Int, b: Int): Int {

        if (a > b) {

            return (b + 60) - a

        } else {

            return b - a
        }
    }

    fun secDifference(a: Int, b: Int): Int {

        if (a > b) {

            return (b + 60) - a

        } else {

            return b - a
        }
    }

    if (firstH in 0..23 && secondH in 0..23 && firstM in 0..59 && secondM in 0..59 && firstS in 0..59 && secondS in 0..59) {

        if (secondS - firstS < 0) {

            secondM -= 1

        }

        if (secondM - firstM < 0) {

            secondH -= 1

        }

        val resultH = hourDifference(firstH, secondH)
        val resultM = minDifference(firstM, secondM)
        val resultS = secDifference(firstS, secondS)

        val outputH = resultH.toString().padStart(2, '0')
        val outputM = resultM.toString().padStart(2, '0')
        val outputS = resultS.toString().padStart(2, '0')

        if (resultH == 0 && resultM == 0 && resultS == 0) {

            println("24:00:00")

        }else {

            println("$outputH:$outputM:$outputS")
        }

    }

}
