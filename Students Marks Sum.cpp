int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int bo=0,gr=0;
  for(int i=0;i<number_of_students;i++) 
  {
      if(i%2==0)
      bo+=marks[i];
      else
      gr+=marks[i];
  } 
  if(gender=='b')
  return bo;
  else
  return gr;
}
