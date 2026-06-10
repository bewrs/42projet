import sys

def main() -> None:
    print("=== Command Quest ===")
    print(f"Program name: {sys.argv[0]}")

    if len(sys.argv) == 1:
        print("No arguments provided!")
    else:
        print(f"Arguments received: {len(sys.argv) - 1}")
        for x, av in enumerate (sys.argv[1:], 1):
            print(f"Argument {x}: {av}")
    print(f"Total arguments: {len(sys.argv)}")

if __name__ =="__main__":
    main()