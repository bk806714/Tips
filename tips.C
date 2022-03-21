// Reads text FILE WITH VECTOR
// ALSO MEASURE THE DURATION OF TIME FOR PROGRAM
// RETURN 0 EXITS THE PROGRM 

void Read_file_with_vector()
{
 
using namespace std::chrono;
  auto start = high_resolution_clock::now();
  vector<double> a, b, c;
  ifstream inputfile;
  inputfile.open("vector1.txt");
  if(!inputfile)
    {
      cout<<"There is no file "<<endl;
      return 0;
    }
  int iterator=0;
  string line;
   cout<<"he he he "<<endl;
  double ai,bi,ci;
  while(inputfile>>ai>>bi>>ci)
    {
      a.push_back(ai);
      b.push_back(bi);
      c.push_back(ci);
    }
  // for(auto i=a.begin();i!=a.end();i++)
   for(auto i=0;i<4;i++)
    {
      cout<<a.at(i)<<"   "<<b.at(i)<<"   "<<c.at(i)<<endl;
    }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<milliseconds>(stop - start);
  cout << duration.count() << endl;
  
 
    
    /*
  for(int i=0;i<.size();i++)
    {
      inputfile>>gtot[i];
      C[i].push_back(gtot[i]);
    }
  */
}
