Public Class Form1
    Private Sub Label1_Click(sender As Object, e As EventArgs) Handles Label1.Click

    End Sub

    Private Sub TextBox1_TextChanged(sender As Object, e As EventArgs) Handles TextBox1.TextChanged

    End Sub

    Private Sub Label6_Click(sender As Object, e As EventArgs) Handles Label6.Click

    End Sub

    Private Sub Label5_Click(sender As Object, e As EventArgs) Handles Label5.Click


    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        Dim N As Single ' here i am defining each thing used
        Dim R As Single
        Dim Permutations As Double
        Dim Combinations As Double

        N = Val(TextBox1.Text) 'this maps the value of the txtboxes to one of the letters, ether N or R
        R = Val(TextBox2.Text)

        Dim Solution As New Calc() 'this links the code to the seperate class "Calc.vb" where the answer is produced

        Permutations = Solution.Permutations(N, R)
        'these retreive the answer from "Calc.vb" so it can be displayed on the form
        Combinations = Solution.Combinations(N, R)

        Label5.Text = Permutations 'these display the answers in the txtboxes on the form
        Label6.Text = Combinations
    End Sub

    Private Sub TextBox2_TextChanged(sender As Object, e As EventArgs) Handles TextBox2.TextChanged

    End Sub

    Private Sub Label7_Click(sender As Object, e As EventArgs) Handles Label7.Click

    End Sub
End Class
