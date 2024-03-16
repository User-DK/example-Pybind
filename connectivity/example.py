import connectivity

print(connectivity.__doc__)

print(connectivity.print_scc.__doc__)

num_nodes = int (input("Enter the number of vertices: "))
adjacency_list = []
for i in range(num_nodes):
    neighbors = list(map(int,input(f"Enter the neighbors of vertex {i} seperated by commas: ").split(',')))
    adjacency_list.append(neighbors)

print(connectivity.print_scc(adjacency_list))
