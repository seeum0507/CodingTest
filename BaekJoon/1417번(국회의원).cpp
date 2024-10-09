#include<stdio.h>
int main() {
	int vote_number, dasom_vote, others_votes[50], buy_count = 0;
	scanf("%d", &vote_number);
	scanf("%d", &dasom_vote);
	for (int i = 0; i < vote_number - 1; i++) {
		scanf("%d", &others_votes[i]);
	}
	while (1) {
		int max_votes = 0, max_idx = -1;
		for (int i = 0; i < vote_number - 1; i++) {
			if (others_votes[i] > max_votes) {
				max_votes = others_votes[i];
				max_idx = i;
			}
		}
		if (dasom_vote > max_votes) break;
		others_votes[max_idx]--;
		dasom_vote++;
		buy_count++;
	}
	printf("%d", buy_count);

}