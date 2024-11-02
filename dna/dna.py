import csv
import sys

def main():

    # TODO: Check for command-line usage
    if len(sys.argv) != 3:
        print("Use uma url correta.")
        sys.exit(1)

    # TODO: Read database file into a variable
    rows = []
    with open(sys.argv[1]) as file:
        reader = csv.DictReader(file)
        # print(reader.fieldnames)
        reader = csv.DictReader(file)
        for row in reader:
            rows.append(row)
    # TODO: Read DNA sequence file into a variable

    with open(sys.argv[2]) as txt:
        sequence = txt.read().strip()
        # print(sequence)
    # TODO: Find longest match of each STR in DNA sequence

    sequences_big = ['AGATC', 'TTTTTTCT', 'AATG', 'TCTAG', 'GATA', 'TATC' ,'GAAA' ,'TCTG']
    count_big = {}
    sequences_small = ["AGATC", "AATG", "TATC"]
    count_small = {}
    # for i in sequences:
    #     count[i] = sequence.count(i)

    # for sequence, occurrences in count.items():
    #     print(f"A sequência '{sequence}' aparece {occurrences} vezes no arquivo.")

    for seq in sequences_big:
        count_big[seq] = longest_match(sequence, seq)
    for seq in sequences_small:

        count_small[seq] = longest_match(sequence, seq)

    for row in rows:
        if sys.argv[1] == "large.csv":
            if (int(row["AGATC"]) == count_big["AGATC"] and
                int(row["TTTTTTCT"]) == count_big["TTTTTTCT"] and
                int(row["AATG"]) == count_big["AATG"] and
                int(row["TCTAG"]) == count_big["TCTAG"] and
                int(row["GATA"]) == count_big["GATA"] and
                int(row["TATC"]) == count_big["TATC"] and
                int(row["GAAA"]) == count_big["GAAA"] and
                int(row["TCTG"]) == count_big["TCTG"]):
                print(row["name"])
                return
        elif sys.argv[1] == "small.csv":
            if (int(row["AGATC"]) == count_small["AGATC"] and int(row["AATG"]) == count_small["AATG"] and int(row["TATC"]) == count_small["TATC"]):
                print(row["name"])
                return


    print("No match\n")


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
