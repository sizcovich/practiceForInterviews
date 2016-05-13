#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > modifiedMatrix(vector<vector<int> > m_matrix){
	char row[m_matrix.size()];
	char column[m_matrix[0].size()];
	for(int j = 0; j < m_matrix.size(); ++j){
            row[j] = 0;
        }
 	for(int j = 0; j < m_matrix[0].size(); ++j){
        column[j] = 0;
    }
	for (int i = 0; i < m_matrix.size(); ++i){
		for(int j = 0; j < m_matrix[0].size(); ++j){
			if(m_matrix[i][j] == 0){
				++row[i];
				++column[j];
			}
		}
	}
	for (int i = 0; i < m_matrix.size(); ++i){
		for(int j = 0; j < m_matrix[0].size(); ++j){
			if(row[i] > 0 || column[j] > 0){
				m_matrix[i][j] = 0;
			}
		}
	}
	return m_matrix;
}

int main(){
	std::vector<std::vector<int> > v(5, vector<int>(6));
	for (int i = 0; i < v.size(); ++i){
		for(int j = 0; j < v[0].size(); ++j){
            v[i][j] = 1 ;
        }
    }

    v[0][1] = 0;

    v = modifiedMatrix(v);

    for (int i = 0; i < v.size(); ++i){
		for(int j = 0; j < v[0].size(); ++j){
            cout<<v[i][j] <<"\t" ;
        }
        cout<<endl ;
    }

	return 0;
}