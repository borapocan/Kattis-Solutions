package com.borapocan.kattis

fun main() {

    val s = readLine()!!

    val map = mutableMapOf<Char,Int>()

    for (ch in s) {

        if (ch in map.keys) {

            map[ch] = map[ch]!! + 1

        }else {

            map[ch] = 1

        }
    }

    val mapSize = map.size

    if (mapSize <= 2) {

        println(0)

    }else {

        val subtractionNeeded = mapSize - 2

        val newMap = map.toList().sortedBy { (_, value) -> value }.toMap()

        var cnt = 0

        var total = 0

        for ((_,value) in newMap) {

            total ++

            cnt += value

            if (total == subtractionNeeded) {

                break
            }

        }

        println(cnt)

    }

}
