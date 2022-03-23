package com.borapocan.isithalloween

import java.util.*

class IsItHalloweenDotCom {
}

fun main(args: Array<String>) {

//    val m = readLine()!!.toString()
//
//    val d = readLine()!!.toInt()

    val input = readLine()!!.split(' ')

    val m = input[0]

    val d = input[1].toInt()


    if (m == "OCT" && d == 31 || m == "DEC" && d == 25) {

        println("yup")

    }else{

        println("nope")

    }



}
