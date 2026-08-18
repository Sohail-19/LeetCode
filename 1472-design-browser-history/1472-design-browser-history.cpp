class BrowserHistory {
public:
    struct Node{
        string url;
        Node* next;
        Node* prev;

        Node(string url){
            this->url = url;
            next = NULL;
            prev = NULL;
        }
    };

    Node* currentPage;

    BrowserHistory(string homepage) {
        currentPage = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newPage = new Node(url);
        currentPage->next = newPage;
        newPage->prev = currentPage;
        currentPage = newPage;
    }
    
    string back(int steps) {
        while(steps){
            if(currentPage->prev) currentPage = currentPage->prev;
            else break;
            steps--;
        }
        return currentPage->url;
    }
    
    string forward(int steps) {
        while(steps){
            if(currentPage->next) currentPage = currentPage->next;
            else break;
            steps--;
        }
        return currentPage->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */