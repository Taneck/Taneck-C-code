uint64_t bit_swap(uint64_t value){
    uint64_t even_bits = value & 0xaaaaaaaaaaaaaaaa;
    uint64_t odd_bits = value & 0x5555555555555555;

    even_bits >>= 1;
    odd_bits <<= 1;
    
    
    return(even_bits|odd_bits);
}

 
 
 
 
 
 
 
 
 
