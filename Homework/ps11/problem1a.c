boolean testGraphForCycle (Graph G, Vertex v)
    S = stack.initialize()
    S.push(v)
    while (!s.isEmpty())
        v = S.pop()
        if (v.label == 'white')
            v.label = 'gray'
            for all edges from v to w in G.adjacentEdges(v)
                if edge is not visited && vertex is gray
                    // Cycle is detected, so exits
                    return true
                else
                    S.push(w)
            endFor
        endIf
    endWhile
    // No cycle is detected
    return false
END testGraph
