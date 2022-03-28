#include <stdio.h>
#include <stdlib.h>



//int busca_binaria (int *V, int K, int B) { 
//	int ESQ, DIR, meio;
//	ESQ =0; DIR =K-1;
//	while (ESQ <= DIR) {  
//		meio= (ESQ + DIR)/ 2;
//		if (B== V[meio]) 
//    		return meio;
//		else
//        	if (B < V[meio]) 
// 				DIR = meio -1;
//            else 
// 				ESQ = meio +1;
//    };
//   return -1;
//}

int busca_binaria (int *V, int begin, int end, int B) { 
	int ESQ, DIR, meio;
	ESQ =begin; DIR =end-1;
	meio= (ESQ + DIR)/ 2;
		if (B == V[meio])
			return meio;
		else if(begin+2 == end)
			return -1;
		else
        	if (B > V[meio]) 
 				return busca_binaria(V, meio, end+1, B);
            else 
 				return busca_binaria(V, begin, meio+1, B);
}

int main(void){
	int n = 10, i=0;
	int vet[n];
	for(i=0; i < n; i++)
		vet[i] = i + i;
	for(i=0; i < n; i++)
		printf("%d\t", vet[i]);
	printf("\n");
	printf("%d\n", busca_binaria(vet, 0, n, 1));
	return 0;
}
