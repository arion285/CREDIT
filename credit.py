from math import trunc


def main():
    while True:
        CCN = get_int("Credit Card Number: ")
        if CCN > 0:
            break

    a = CCN % pow(10, 1)
    b3 = trunc((CCN % pow(10, 2)) / pow(10, 1))
    c = trunc((CCN % pow(10, 3)) / pow(10, 2))
    d3 = trunc((CCN % pow(10, 4)) / pow(10, 3))
    e = trunc((CCN % pow(10, 5)) / pow(10, 4))
    f3 = trunc((CCN % pow(10, 6)) / pow(10, 5))
    g = trunc((CCN % pow(10, 7)) / pow(10, 6))
    h3 = trunc((CCN % pow(10, 8)) / pow(10, 7))
    i = trunc((CCN % pow(10, 9)) / pow(10, 8))
    j3 = trunc((CCN % pow(10, 10)) / pow(10, 9))
    k = trunc((CCN % pow(10, 11)) / pow(10, 10))
    l3 = trunc((CCN % pow(10, 12)) / pow(10, 11))
    m = trunc((CCN % pow(10, 13)) / pow(10, 12))
    o3 = trunc((CCN % pow(10, 14)) / pow(10, 13))
    p = trunc((CCN % pow(10, 15)) / pow(10, 14))
    q3 = trunc((CCN % pow(10, 16)) / pow(10, 15))

    b = b3 * 2
    d = d3 * 2
    f = f3 * 2
    h = h3 * 2
    j = j3 * 2
    l = l3 * 2
    o = o3 * 2
    q = q3 * 2

    b1 = trunc(b / pow(10, 1))
    b2 = trunc(b % pow(10, 1))
    d1 = trunc(d / pow(10, 1))
    d2 = trunc(d % pow(10, 1))
    f1 = trunc(f / pow(10, 1))
    f2 = trunc(f % pow(10, 1))
    h1 = trunc(h / pow(10, 1))
    h2 = trunc(h % pow(10, 1))
    j1 = trunc(j / pow(10, 1))
    j2 = trunc(j % pow(10, 1))
    l1 = trunc(l / pow(10, 1))
    l2 = trunc(l % pow(10, 1))
    o1 = trunc(o / pow(10, 1))
    o2 = trunc(o % pow(10, 1))
    q1 = trunc(q / pow(10, 1))
    q2 = trunc(q % pow(10, 1))

    lunn = (b1 + b2 + d1 + d2 + f1 + f2 + h1 + h2 + j1 + j2 + l1 + l2 + o1 + o2 + q1 + q2) + (a + c + e + g + i + k + m + p)

    if lunn % 10 == 0:
        if trunc(CCN / pow(10, 14)) > 50 and trunc(CCN / pow(10, 14)) < 56 and trunc(CCN / pow(10, 16)) == 0:
            print("MASTERCARD")

        elif trunc(CCN / pow(10, 15)) == 0 and (trunc(CCN / pow(10, 13)) == 34 or trunc(CCN / pow(10, 13)) == 37):
            print("AMEX")

        elif (trunc(CCN / pow(10, 13)) == 0 and trunc(CCN / pow(10, 12)) == 4) or (trunc(CCN / pow(10, 16)) == 0 and trunc(CCN / pow(10, 15)) == 4):
            print("VISA")

        else:
            print("INVALID")

    else:
        print("INVALID")


def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            pass


main()
