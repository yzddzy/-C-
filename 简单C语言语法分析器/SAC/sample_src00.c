struct list {
  int head;
  struct list * tail;
};

//@ Let listrep(l) = l == 0 || exists t, (l -> tail == t) && listrep(t)

struct list * reverse(struct list * p)
/*@ Require listrep(p)
    Ensure  listrep(__return)
*/
{
  struct list * w;
  struct list * t;
  struct list * v;
  w = 0;
  v = p;
  // Inv listrep(v) && listrep(w)
  while (v) {
    t = v -> tail;
    v -> tail = w;
    w = v;
    v = t;
  }
  return w;
}

