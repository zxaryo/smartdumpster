
void rdelay(int k)
{
    for(int q=0; q<k; q++)
    {
      measure();
      tempr();
      gas();
    }
    
}

