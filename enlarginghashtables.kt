ackage com.borapocan.kattis

fun main(args: Array<String>) {

    while (true) {

        val list = arrayListOf<Int>()

        val n =readLine()!!.toInt()

        if (n >= 2 && n < Math.pow(2.0,30.0)) {

            var low = 2

            val high = 100

            while (low < high) {

                if (checkPrimeNumber(low)) {

//            print("$low ")

                    list.add(low)
                }

                ++low

            }

        }

//        println(list)

        if (n in list) {

            println(list.filter { it > 2 * n }.first())


        }else if (!checkPrimeNumber(n)) {

            println("${list.filter { it > 2 * n }.first()} ($n is not prime)")

        }

        if (n == 0) {

            break

        }

    }

}

fun checkPrimeNumber(num: Int): Boolean {

    var flag = true

    for (i in 2..num / 2) {

        if (num % i == 0) {

            flag = false

            break
        }
    }

    return flag

}
