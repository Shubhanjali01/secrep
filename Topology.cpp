// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     printf("Enter the number of devices: ");
//     scanf("%d", &n);

//     // Full mesh topology
//     int connections_fullmesh = (n * (n-1)) / 2;
//     int ports_fullmesh = n;
//     printf("Full Mesh Topology:\n");
//     printf("Number of connections: %d\n", connections_fullmesh);
//     printf("Number of ports per device: %d\n", ports_fullmesh);

//     // Star topology

//     int connections_star = n - 1;
//     int ports_star = 1;
//     printf("Star Topology:\n");
//     printf("Number of connections: %d\n", connections_star);
//     printf("Number of ports per device: %d\n", ports_star);

//     // Bus topology
//     int connections_bus = n - 1;
//     int ports_bus = 2;
//     printf("Bus Topology:\n");
//     printf("Number of connections: %d\n", connections_bus);
//     printf("Number of ports per device: %d\n", ports_bus);

//     // Ring topology
//     int connections_ring = n;
//     int ports_ring = 2;
//     printf("Ring Topology:\n");
//     printf("Number of connections: %d\n", connections_ring);
//     printf("Number of ports per device: %d\n", ports_ring);
//     return 0;
// }

// reverse the array
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> reverse(vector<int> v){
//     int start=0,end=v.size()-1;
//     while(start>end){
//         swap(v[start],v[end]);
//         start++;end--;

//     }
//     return v;
// }

// void print(vector<int>v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     // making a vector
//     vector<int> v;
//     v.push_back(4);
//     v.push_back(12);
//     v.push_back(3);
//     v.push_back(7);
//     v.push_back(11);

//     // print array element before reverse
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     //print array element after reverse

//     vector<int> ans=reverse(v);
//     print(ans);

//     return 0;

// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// // merging the array
// int merge(int arr1 [],int n,int arr2 [],int m,int arr3[]){
//     int i=0,j=0,k=0;
//     while(i<n&&j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k]=arr1[i];
//             k++;i++;
//         }
//         else{
//             arr3[k]=arr2[j];
//             k++;j++;
//         }
//     }
//     // copying the remaining k element from the first array
//     while(i<n){
//         arr3[k]=arr1[i];
//         k++;i++;
//     }
//     // copying the ramining k element from the second array
//     while(j<m){
//         arr3[k]=arr1[i];
//         k++;i++;
//     }

// }
// // print the merge array
// void print(int ans[] ,int n){
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;

// }
// int main(){
//   int arr1 [6]={1,3,5,7,7,9};
//   int arr2 [4]={2,4,6,8};
//   int arr3 [9]={0};

//   merge(arr1,6,arr2,4,arr3);
//   print(arr3,10);

//     return 0;
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     printf("Enter the number of devices: ");
//     scanf("%d", &n);

//     // Full mesh topology
//     int connections_fullmesh = (n * (n-1)) / 2;
//     int ports_fullmesh = n;
//     printf("........Full Mesh Topology..........:\n");
//     printf("Number of connections: %d\n", connections_fullmesh);
//     printf("Number of ports per device: %d\n", ports_fullmesh);

//     // Star topology

//     int connections_star = n-1 ;
//     int ports_star = 1;
//     printf("...........Star Topology..............:\n");
//     printf("Number of connections: %d\n", connections_star);
//     printf("Number of ports per device: %d\n", ports_star);

//     // Bus topology
//     int connections_bus = n ;
//     int ports_bus = 2;
//     printf("..............Bus Topology..................:\n");
//     printf("Number of connections: %d\n", connections_bus);
//     printf("Number of ports per device: %d\n", ports_bus);

//     // Ring topology
//     int connections_ring = n;
//     int ports_ring = 2;
//     printf("..................Ring Topology..................:\n");
//     printf("Number of connections: %d\n", connections_ring);
//     printf("Number of ports per device: %d\n", ports_ring);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    cout << "Enter number of devices :";

    // bus topo
    int connection_bus = n;
    int port_bus = 1;
    cout << ".....bus topology.....";
    cout << "Number of connection in bus :" << connection_bus << endl;
    cout << "Number of ports in bus :" << port_bus << endl;
    // star topo
    int connection_star = n;
    int port_star = 1;
    cout << ".....star topology....." << endl;
    cout << "Number of connection in star :" << connection_star << endl;
    cout << "Number of ports in star:" << port_star << endl;
    ;
    // mesh topo
    int connection_mesh = n * (n - 1) / 2;
    int port_mesh = n - 1;
    cout << "......mesh topology......" << endl;
    cout << "Number of connection in mesh :" << connection_mesh << endl;
    cout << "Number of ports in mesh :" << port_mesh << endl;
    // ring topo
    int connection_ring = n;
    int port_ring = 2;
    cout << ".......ring topology........" << endl;
    cout << "Number of connection in ring:" << connection_ring << endl;
    cout << "Number of ports in ring :" << port_ring << endl;
    return 0;
}