# Linked-list-app
Bull
 - weight: int
 - liftCapacity: int
 - name: std::string

 + Bull(weight: int, liftCapacity: int, name: std::string)
 + to_string(): std::string
 ----

Node
 - data: Bull*
 - next: Node*

 Node(data: Bull*)

 -------

LinkedList
 
 + get(index: int)
 + to_string()