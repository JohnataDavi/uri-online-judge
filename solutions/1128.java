import java.io.IOException;
 
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
  Scanner sc = new Scanner(System.in);
        int n, m, v, w, p;
        n = sc.nextInt();
        m = sc.nextInt();
        while(n > 0 && m > 0){
            Grafo g = new Grafo();
            addVertices(g, n);
            for(int i=0; i<m; i++){
                v = sc.nextInt();
                w = sc.nextInt();
                p = sc.nextInt();
                
                if(p == 1)
                    g.addAresta(g.vertices.get(v-1), g.vertices.get(w-1));
                else
                    g.add2Aresta(g.vertices.get(v-1), g.vertices.get(w-1));
                
            }
            if(fezCaminho(g, n))
                System.out.println(1);
            else 
                System.out.println(0);
                
            n = sc.nextInt();
            m = sc.nextInt();
        }
 
    }
    
    public static void addVertices(Grafo g, int tam){
        for(int i=1; i<=tam; i++)
            g.addVertice(i);
    }
    
    public static boolean fezCaminho(Grafo g, int qtdVertices){
        for(int i=0; i<qtdVertices; i++)
                if(!(g.bfs(g.vertices.get(i), qtdVertices)))
                    return false;
        return true;
    }
    
    public static class Grafo {

    public class Vertice {
        public int nome;
        public ArrayList<Aresta> adj;

        Vertice(int nome) {
            this.nome = nome;
            this.adj = new ArrayList<Aresta>();
        }

        void addAdj(Aresta e) {
            adj.add(e);
        }
    }

    public class Aresta {
        Vertice origem;
        Vertice destino;

        Aresta(Vertice origem, Vertice destino) {
            this.origem = origem;
            this.destino = destino;
        }
    }

    public ArrayList<Vertice> vertices;
    public ArrayList<Aresta> arestas;

    public Grafo() {
        vertices = new ArrayList<Vertice>();
        arestas = new ArrayList<Aresta>();
    }

    public Vertice addVertice(int nome) {
        Vertice v = new Vertice(nome);
        vertices.add(v);
        return v;
    }

    public void addAresta(Vertice origem, Vertice destino) {
        Aresta e = new Aresta(origem, destino);
        origem.addAdj(e);
        arestas.add(e);
    }
    
    public void add2Aresta(Vertice origem, Vertice destino) {
        Aresta e1 = new Aresta(origem, destino);
        Aresta e2 = new Aresta(destino, origem);
        origem.addAdj(e1);
        destino.addAdj(e2);
        arestas.add(e1);
        arestas.add(e2);
    }

    public String toString() {
        String r = "";
        for (Vertice u : vertices) {
            r += u.nome + " -> ";
            for (Aresta e : u.adj) {
                Vertice v = e.destino;
                r += v.nome + ", ";
            }
            r += "\n";
        }
        return r;
    }
    
    public boolean bfs(Vertice inicio, int qtd){
        int vertice = inicio.nome;
        boolean visitado[] = new boolean[qtd]; 
        LinkedList<Integer> fila = new LinkedList<Integer>(); 
  
        visitado[vertice-1]=true;
        fila.add(vertice); 
  
        while (fila.size() != 0) 
        { 
            vertice = fila.poll(); 
  
            Iterator<Grafo.Aresta> i = this.vertices.get(vertice-1).adj.iterator(); 
            while (i.hasNext()) 
            { 
                Aresta are = i.next(); 
                int n = are.destino.nome;
                if (!visitado[n-1]) 
                { 
                    visitado[n-1] = true; 
                    fila.add(n); 
                } 
            } 
        }
        for(boolean v : visitado){
            if(!v)
                return false;
        }
            
        return true;
    }
}
}