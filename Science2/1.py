
if __name__ == "__main__":
    dna = input()
    n = len(dna)
    temp = ''
    for i in range(n):
        if dna[n - i - 1] == 'g':
            temp += 'c'
        elif dna[n - i - 1] == 'c':
            temp += 'g'
        elif dna[n - i - 1] == 'a':
            temp += 't'
        elif dna[n - i - 1] == 't':
            temp += 'a'
    rna = ''
    for i in range(n):
        if temp[i] == 't':
            rna += 'u'
        else:
            rna += temp[i]
    print(rna)

    # protein

    # # table = {
    # #     'ATA': 'I', 'ATC': 'I', 'ATT': 'I', 'ATG': 'M',
    # #     'ACA': 'T', 'ACC': 'T', 'ACG': 'T', 'ACT': 'T',
    # #     'AAC': 'N', 'AAT': 'N', 'AAA': 'K', 'AAG': 'K',
    # #     'AGC': 'S', 'AGT': 'S', 'AGA': 'R', 'AGG': 'R',
    # #     'CTA': 'L', 'CTC': 'L', 'CTG': 'L', 'CTT': 'L',
    # #     'CCA': 'P', 'CCC': 'P', 'CCG': 'P', 'CCT': 'P',
    # #     'CAC': 'H', 'CAT': 'H', 'CAA': 'Q', 'CAG': 'Q',
    # #     'CGA': 'R', 'CGC': 'R', 'CGG': 'R', 'CGT': 'R',
    # #     'GTA': 'V', 'GTC': 'V', 'GTG': 'V', 'GTT': 'V',
    # #     'GCA': 'A', 'GCC': 'A', 'GCG': 'A', 'GCT': 'A',
    # #     'GAC': 'D', 'GAT': 'D', 'GAA': 'E', 'GAG': 'E',
    # #     'GGA': 'G', 'GGC': 'G', 'GGG': 'G', 'GGT': 'G',
    # #     'TCA': 'S', 'TCC': 'S', 'TCG': 'S', 'TCT': 'S',
    # #     'TTC': 'F', 'TTT': 'F', 'TTA': 'L', 'TTG': 'L',
    # #     'TAC': 'Y', 'TAT': 'Y', 'TAA': '_', 'TAG': '_',
    # #     'TGC': 'C', 'TGT': 'C', 'TGA': '_', 'TGG': 'W',
    # # }

    # tmp = ''
    # i = 0
    # while i < n:
    #     fg = 0
    #     j = 0
    #     while i < n:
    #         if i < n - 2 and temp[i] == 'a' and temp[i + 1] == 't' and temp[i + 2] == 'g':
    #             fg = 1
    #             break
    # 		i += 1
    # 	if not fg:
    # 		continue
    # 	j = i + 3
    # 	fg = 0
    # 	while j < n:
    # 		if j < n - 2 and temp[i] == 't' and ((temp[i + 1] == 'a' and (temp[i + 2] == 'a' or temp[i + 2] == 'g')) or (temp[i + 1] == 'g' and temp[i + 2] == 'a')):
    # 			fg = 1
    # 			j += 3
    # 			break
    # 		j += 3
    # 	if not fg:
    # 		i += 1
    # 		continue
    # 	while i < j:
    # 		tmp += temp[i]
    # 		i += 1
    # protein = ''
    # for j in range(n):
    # 	if tmp[j] == t:
    # 		protein += 'u':
    # 	else:
    # 		protein += tmp[j]
    # print(protein)
