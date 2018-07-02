class Shape (
  public
  virtual ~Shape();
  virtual void draw() const = 0
);

Shape *s = getSomeShape(); 
s->draw();
