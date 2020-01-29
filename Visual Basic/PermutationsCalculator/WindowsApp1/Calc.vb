Public Class Calc
    Private N As Double 'here i am jst defining everything so that the program doesnt get confused and gives me errors.
    Private R As Double
    Private Solution As Double

    Public Property NProperty() As Single 'this property accesses N
        Get
            Return N
        End Get
        Set(value As Single)

        End Set
    End Property

    Public Property RProperty() As Single 'this property accesses R
        Get
            Return R
        End Get
        Set(value As Single)

        End Set
    End Property

    Public Function Permutations(ByVal N As Single, ByVal R As Single)
        Solution = facto(N) / facto(N - R)
        Return Solution
    End Function
    'each one of these uses the facto formuala to produce their outcome. the formula can be seen next to "Solution".
    Public Function Combinations(ByVal N As Single, ByVal R As Single)
        Solution = facto(N) / (facto(N - R) * facto(R))
        Return Solution
    End Function

    Function facto(ByVal a As Double) 'this the formula that makes the program work, it is called factorial hence the facto. factorial is when a number is timesed by all the numbers bellow it for example the factorial for 3 would be 6 because i times 3 by 2 which equals 6 then 6 by 1 which equals 6.

        If a = 0 Then
            Return 1
        End If

        Dim k As Double
        For k = a - 1 To 1 Step -1
            a *= k
        Next k

        Return a

    End Function
End Class
