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

    sequences = ["AGATC", "AATG", "TATC"]
    count = {}
    # for i in sequences:
    #     count[i] = sequence.count(i)

    # for sequence, occurrences in count.items():
    #     print(f"A sequência '{sequence}' aparece {occurrences} vezes no arquivo.")

     for seq in sequences:
        count[seq] = longest_match(sequence, seq)

    for row in rows:
        if (int(row["AGATC"]) == count["AGATC"] and int(row["AATG"]) == count["AATG"] and int(row["TATC"]) == count["TATC"]):
            print(row["name"])
            return
        else:
            print("Não há correspondência")





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
