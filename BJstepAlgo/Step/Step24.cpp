//#include<iostream>
//using namespace std;
//
//// 24-1단계 1260번 DFS와 BFS
////void Reset() {
////
////}
////void DFSandBFS() {
////	int n, m, v;
////	int a, b;
////
////	cin >> n >> m >> v;
////
////	int **arr = new int*[n];
////	int *answerArr = new int [n] {};
////	answerArr[0] = v;
////
////	for (int i = 0; i < n; i++) {
////		arr[i] = new int[n];
////	}
////	for (int i = 0; i < n; i++){
////		for (int j = 0; j < n; j++) {
////			arr[i][j] = 0;
////		}
////	}
////
////	for (int i = 0; i < m; i++) {
////		cin >> a >> b;
////		if (a > b) {
////			arr[a - 1][b - 1] = 1;
////		}
////		else {
////			arr[b - 1][a - 1] = 1;
////
////		}
////	}
////
////	int adjacent = v, indexAnswer = 1;
////	for (int j = 1; j < n; j++) {
////		for (int i = 0; i < n; i++) {
////			if (adjacent - 1 < i) {
////				if (arr[adjacent - 1][i] == 1) {
////					answerArr[indexAnswer] = i+1;
////					adjacent = answerArr[indexAnswer];
////					indexAnswer++;
////					break;
////				}
////			}
////
////		}
////	}
////	for (int i = 0; i < n; i++) {
////		cout << answerArr[i] <<" ";
////	}
////
////	for (int i = 0; i < n; i++) {
////		delete[] arr[i];
////	}
////	delete[] arr;
////	
////	return;
////}
////
////int main() {
////	DFSandBFS();
////}
//
//
//
//
//#define MAX 1001
//
//int N, M, V; //정점개수, 간선개수, 시작정점
//int map[MAX][MAX] = { { 0, }, { 0, } };; //인접 행렬 그래프
//bool visited[MAX] = { 0, }; //정점 방문 여부
//
//void reset() {
//    for (int i = 1; i <= N; i++) {
//        visited[i] = 0;
//    }
//}
//
//void DFS(int v) {
//    visited[v] = true;
//    cout << v << " ";
//
//    for (int i = 1; i <= N; i++) {
//        if (map[v][i] == 1 && visited[i] == 0) { //현재 정점과 연결되어있고 방문되지 않았으면
//            DFS(i);
//        }
//    }
//}
//
//void BFS(int v) {
//    q.push(v);
//    visited[v] = true;
//    cout << v << " ";
//
//    while (!q.empty()) {
//        v = q.front();
//        q.pop();
//
//        for (int w = 1; w <= N; w++) {
//            if (map[v][w] == 1 && visited[w] == 0) { //현재 정점과 연결되어있고 방문되지 않았으면
//                q.push(w);
//                visited[w] = true;
//                cout << w << " ";
//            }
//        }
//    }
//}
//
//int test() {
//    cin >> N >> M >> V;
//
//    for (int i = 0; i < M; i++) {
//        int a, b;
//        cin >> a >> b;
//        map[a][b] = 1;
//        map[b][a] = 1;
//    }
//
//    reset();
//    DFS(V);
//
//    cout << '\n';
//
//    reset();
//    BFS(V);
//
//    return 0;
//}
