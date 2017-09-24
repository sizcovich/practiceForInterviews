

vector<pair<int, int>> cartesian_product(vector<int> a,
                                         vector<int> b) {
    vector<pair<int, int> > result;
    for(int i=0;i<a.size();++i){
      for(int j=0;b.size();++j){
        pair<int,int> tempPair = make_pair(a[i],b[j]);
        result.push_back(tempPair);
      }
    }
	return result;
}

a = {1,2,3}
b = {4,3}
result = {(1,4),(1,3),(2,4),(2,3),(3,4),(3,3)}


{{1,2}, {3}, {4,5}}


{{1,2,3}, {4,5}, {6,7,8,9}}
	*        *      *

{0,0,1}



{{1,4,6},{2,4,6},{3,4,6},{1,5,6},{1,4,7},{1,4,8},{1,4,9},{1,5,7},{2,5,7},{}

{(1,3,4), (1,3,5), (2,3,4), (2,3,5)}





bool advance(vector<int> &indices, vector<vector<int>> xs) {
	
}


3, 4, 2
0  0  0
0     



vector<vector<int>>
cartesian_product_2(vector<vector<int>> xs) {
		int size = xs.size();
    vector<int> indices(size, 0);
    
    vector<vector<int>> result;
    
    do {
    	vector<int> temp(size);
    	for(int i=0;i<indices.size();++i){
      	temp[i] = xs[i][indices[i]];
      }
      result.push_back(temp);
    } while(advance(indices, xs));
    
    return result;
}




    
    
    
    
    for(int i=0; i<size; ++i){
      	if(indices[i] == xs[i].size()){
        	indices[i]
        }
      }
    	vector<int> temp;
    	for(int j=0;j<xs[i].size();++j){
      	temp.push_back(xs[j]);
        ++i;
      }
    }
}