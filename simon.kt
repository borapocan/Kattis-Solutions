package com.borapocan.kattis

fun main() {

    val n = readLine()!!.toInt()

    for (i in 1..n) {

        val input = readLine()!!.split(' ')

        val simonSays = input.toList()

       if (input.contains("simon") && input.contains("says")) {

           val ans = simonSays.subList(2, simonSays.lastIndex + 1)

           println(ans.toString().removePrefix("[").removeSuffix("]").replace(",",""))

       }else {

           println("")
       }


    }

}
