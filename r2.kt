package com.borapocan.r2

class R2 {
}
fun main(args: Array<String>) {

    val (R,S) = readLine()!!.split(' ').map { it.toInt() }

    var R2 : Int? = null

    R2 = 2*S - R

    if (R in -1000..1000 && S in -1000..1000) {

        print(R2)


    }


}
