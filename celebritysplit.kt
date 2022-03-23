package com.borapocan.celebritysplit

import java.io.*

import java.math.*

import java.util.*



class Reader {

    private val In: BufferedReader

    private var st: StringTokenizer? = null

    constructor(inputStream: InputStream) {

        In = BufferedReader(InputStreamReader(inputStream))

    }

    constructor(fileName: String) {

        In = BufferedReader(FileReader(fileName))

    }

    fun next(): String {

        while (st == null || !st!!.hasMoreTokens()) {

            st = StringTokenizer(In.readLine().trim())

        }

        return st!!.nextToken()

    }

    fun nextLine(): String {

        st = null

        return In.readLine()

    }

    fun nextChar(): Char = next()[0]

    fun nextDouble(): Double = next().toDouble()

    fun nextInt(): Int = next().toInt()

    fun nextLong(): Long  = next().toLong()

    fun close() : Unit = In.close()

} // Reader class



val INPUT_FILE_NAME = "input.txt"

val OUTPUT_FILE_NAME = "output.txt"



val In: Reader = Reader(System.`in`)

val Out: PrintWriter = PrintWriter(System.out)

//val In: Reader = Reader(INPUT_FILE_NAME)

//val Out: PrintWriter = PrintWriter(OUTPUT_FILE_NAME)



var NUM_OF_TEST_CASES: Int = 1

val crash: Boolean = true

val flush: Boolean = false



fun main(args: Array<String>) {

    for (i in 1..NUM_OF_TEST_CASES) {

        try {

            run(i)

        } catch (e : Exception) {

            Out.println("Exception thrown on test case $i")

            e.printStackTrace(Out)

            Out.flush()

            if (crash) throw Exception()

        }

        if (flush) Out.flush()

    }

    In.close()

    Out.close()

}



var N = 25

var A = Array<Long>(N, {0})

var suf = LongArray(N)

var ans = Long.MAX_VALUE



tailrec fun solve(i: Int, a: Long, b: Long, c: Long) {

    if (c >= ans || Math.abs(a - b) > suf[i]) return

    if (a == b) ans = Math.min(ans, c + suf[i])

    if (i == N) return

    if (a != b && a > 0) solve(i + 1, a, b + A[i], c)

    solve(i + 1, a + A[i], b, c)

    solve(i + 1, a, b, c + A[i])

}



fun run(testCaseNum: Int) {

    while (true) {

        N = In.nextInt()

        if (N == 0) return

        ans = Long.MAX_VALUE

        for (i in 0 until N) A[i] = In.nextLong()

        Arrays.sort(A, 0, N) { a, b -> b.compareTo(a) }

        suf[N] = 0

        for (i in N - 1 downTo 0) suf[i] = suf[i + 1] + A[i]

        solve(0, 0, 0, 0)

        Out.println(ans)

    }

}
