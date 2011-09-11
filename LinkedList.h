struct Node {
	int val;
	struct Node *next;
};

struct LinkedList {
	struct Node *first;
};

struct Node* returnLastNode(struct LinkedList *ll);
struct Node* createNode();
void insert(struct LinkedList *ll, int val);
void create(struct LinkedList *ll);
void print(struct LinkedList *ll);

void insert(struct LinkedList *ll, int val) {
	if(ll->first == NULL) {
		ll->first->val = val;
		ll->first->next = NULL;
	} else {
		struct Node *lastNode = returnLastNode(ll);
		lastNode->next = createNode();
		lastNode->next->val = val;
		lastNode->next->next = NULL;
	}
}

void create(struct LinkedList *ll) {
	ll->first = NULL;
}

struct Node* createNode() {
	return (struct Node*)malloc(sizeof(struct Node));
}

struct Node* returnLastNode(struct LinkedList *ll) {
	struct Node *n = ll->first;
	struct Node *result;
	while(1) {
		if(n->next == NULL) {
			result = n;
			break;
		} else {
			n = n->next;
		}
	}
	return result;
}

void print(struct LinkedList *ll) {
	struct Node *n = ll->first;
	while(1) {
		if(n == NULL) {
			break;
		}
		printf("%d\n", n->val);
		
		if(n->next = NULL) {
			break;
		} else {
			n = n->next;
		}
	}
}