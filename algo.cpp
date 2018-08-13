#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream ClusterData("iris1.csv");
    ofstream ClusterWrite("cluster.txt");
    string Id;
    string SepalLengthCm;
    string SepalWidthCm;
    string PetalLengthCm;
    string PetalWidthCm;
    string Species;


    while ( ClusterData.good() )
    {
        getline(ClusterData,Id,',');
        getline(ClusterData,SepalLengthCm,',');
        getline(ClusterData,SepalWidthCm,',');
        getline(ClusterData,PetalLengthCm,',');
        getline(ClusterData,PetalWidthCm,',');
        getline(ClusterData,Species,'\n');

        ClusterWrite<<"\n\t"<<Id<<", "<<SepalLengthCm<<", "<<SepalWidthCm<<", "<<PetalLengthCm<<", "<<PetalWidthCm<<", "<<Species;

    }
    ClusterData.close();
    ClusterWrite.close();

    ifstream TestingData("iris2.csv");
    ofstream TestingWrite("testing.txt");

    while ( TestingData.good() )
    {
        getline(TestingData,Id,',');
        getline(TestingData,SepalLengthCm,',');
        getline(TestingData,SepalWidthCm,',');
        getline(TestingData,PetalLengthCm,',');
        getline(TestingData,PetalWidthCm,',');
        getline(TestingData,Species,'\n');

        TestingWrite<<"\n\t"<<Id<<", "<<SepalLengthCm<<", "<<SepalWidthCm<<", "<<PetalLengthCm<<", "<<PetalWidthCm<<", "<<Species;

    }
    TestingData.close();
    TestingWrite.close();
}
