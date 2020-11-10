
def find(num_list, asker):
    while True:
        if len(num_list) < 4:
            for v in num_list:
                s = asker.ask(v)
                if s == 'E':
                    return v
        m = len(num_list)
        bound1 = m // 3
        bound2 = 2 * bound1
        s1 = asker.ask(num_list[bound1])
        if s1 == 'E':
            return num_list[bound1]
        s2 = asker.ask(num_list[bound2])
        if s2 == 'E':
            return num_list[bound2]
        elif s1 == 'L' and s2 == 'L':
            num_list = num_list[:bound2]
            continue
        elif s1 == 'G' and s2 == 'G':
            num_list = num_list[bound1 + 1:]
            continue
        s3 = asker.ask(num_list[bound2])
        if s2 == 'L' and s3 == 'L':
            num_list = num_list[:bound2]
            continue
        elif s2 == 'G' and s3 == 'G':
            num_list = num_list[bound2 + 1:]
            continue
        s4 = asker.ask(num_list[bound1])
        if s3 == 'L' and s4 == 'L':
            num_list = num_list[:bound2]
        elif s3 == 'G' and s4 == 'G':
            num_list = num_list[bound1 + 1:]
        else:
            num_list = num_list[:bound1] + num_list[bound2 + 1:]

class Gamer:
    def ask(self, val):
        print(val)
        return input()
def main():
    n = int(input())
    find(list(range(1, n + 1)), Gamer())

main()
