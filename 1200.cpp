#include <bits/stdc++.h>

using namespace std;

struct node {
  char v;
  node *left, *right;
  node(){};
  node(char v):v(v) {
    left = NULL;
    right = NULL;
  };
};

void prefixa(node *raiz, bool b) {
  if(raiz == NULL) return;
  if(b) {
    printf(" ");
  }
  printf("%c", raiz->v);
  prefixa(raiz->left, true);
  prefixa(raiz->right, true);
  return;
}

bool infixa(node *raiz, bool b) {
  if(raiz == NULL) return false;
  bool a = infixa(raiz->left, b);
  if(b || a) {
    printf(" ");
  }
  printf("%c", raiz->v);
  infixa(raiz->right, true);
  return true;
}

bool posfixa(node *raiz, bool b) {
  if(raiz == NULL) return false;
  bool a = posfixa(raiz->left, b);
  bool c = posfixa(raiz->right, b || a);
  if(b || a || c) {
    printf(" ");
  }
  printf("%c", raiz->v);
  return true;
}

bool search(node *raiz, char c) {
  if(raiz == NULL) {
    return false;
  }
  if(c < raiz->v) {
    return search(raiz->left, c);
  } else if(c > raiz->v) {
    return search(raiz->right, c);
  } else {
    return true;
  }
}

int main(){
  char s[15];
  char c;
  
  node *raiz;
  raiz = NULL;

  while(scanf("%s", s) != EOF) {
    getchar();
    if (strcmp(s, "I") == 0) {
      scanf("%c", &c);
      if (raiz == NULL) {
	raiz = new node(c);
      } else {
	node *temp;
	temp = raiz;
	while(temp != NULL) {
	  if (c < temp->v) {
	    if(temp->left == NULL) {
	      temp->left = new node(c);
	      break;
	    }
	    temp = temp->left;
	  } else {
	    if(temp->right == NULL) {
	      temp->right = new node(c);
	      break;
	    }
	    temp = temp->right;
	  }
	}
      }
    } else if(strcmp(s, "INFIXA") == 0) {
      infixa(raiz, false);
      putchar('\n');
    } else if(strcmp(s, "POSFIXA") == 0) {
      posfixa(raiz, false);
      putchar('\n');
    } else if(strcmp(s, "P") == 0) {
      scanf("%c", &c);
      printf("%c %s\n", c, (search(raiz, c))? "existe" : "nao existe");
    } else {
      prefixa(raiz, false);
      putchar('\n');
    }
  }
}
