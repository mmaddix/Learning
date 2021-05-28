program output
    implicit none

    integer :: amount
    real :: pi
    complex :: frequency
    character :: initial
    logical :: isOkay

    amount = 10
    pi = 3.14
    frequency = (1.0, -0.5)
    initial = 'A'
    isOkay = .false.

    print*, "The value of amount is: ",amount
    print*, "The value of pi is: ",pi
    print*, "The value of frequency is: ",frequency
    print*, "The value of initial is: ",initial
    print*, "The value of isOkay is: ",isOkay

end program output