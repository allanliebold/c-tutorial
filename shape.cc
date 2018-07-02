class Shape (
  public
  virtual ~Shape();
  virtual void draw() const = 0
);

Shape *s = getSomeShape(); 
s->draw();

class Rollable (
  public:
  virtual ~Rollable();
  virtual void roll() = 0;
);
