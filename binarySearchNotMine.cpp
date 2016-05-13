//! \brief A recursive binary search using STL vectors
//! \param vec The vector whose elements are to be searched
//! \param start The index of the first element in the vector
//! \param end The index of the last element in the vector
//! \param key The value being searched for
//! \return The index into the vector where the value is located,
//! or -1 if the value could not be found.
#include <vector>
#include <iostream>

using namespace std;
template<typename T>
int binary_search(const std::vector<T>& vec, int start, int end, const T& key)
{
    // Termination condition: start index greater than end index
    if(start > end)
    {
       throw "The int is not present";
    }

    // Find the middle element of the vector and use that for splitting
    // the array into two pieces.
    const int middle = start + ((end - start) / 2);

    if(vec[middle] == key)
    {
        return middle;
    }
    else if(vec[middle] > key)
    {
        return binary_search(vec, start, middle - 1, key);
    }

    return binary_search(vec, middle + 1, end, key);
}

int main(){
    int myints[] = {2,5,16,29,34,77};

    std::vector<int> v (myints, myints + sizeof(myints) / sizeof(int) );

    int n = v.size() - 1;
    cout<< binary_search(v,0,n,34) <<endl;
    return 0;
}