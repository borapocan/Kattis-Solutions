import sys


def mark_for_sale(min_cost, items):
    items = sorted(items)
    no_items = len(items)
    i = 1

    for i in range(1, no_items):
        if items[i] + items[i - 1] > min_cost:
            return i
    return no_items


if __name__ == "__main__":
    data = [n.strip().split() for n in sys.stdin.readlines()]
    min_cost = int(data[0][1])
    items = list(map(int, data[1]))
    print(mark_for_sale(min_cost, items))
