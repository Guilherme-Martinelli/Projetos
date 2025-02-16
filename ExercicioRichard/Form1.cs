using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ExercicioRichard
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnSoma_Click(object sender, EventArgs e)
        {
            if (ValidarEntradas(out double num1, out double num2))
            {
                lblResultado.Text = $"Resultado: {num1 + num2}";
            }
        }

        private void btnSubtracao_Click(object sender, EventArgs e)
        {
            if (ValidarEntradas(out double num1, out double num2))
            {
                lblResultado.Text = $"Resultado: {num1 - num2}";
            }
        }

        private void btnMultiplicacao_Click(object sender, EventArgs e)
        {
            if (ValidarEntradas(out double num1, out double num2))
            {
                lblResultado.Text = $"Resultado: {num1 * num2}";
            }
        }

        private void btnDivisao_Click(object sender, EventArgs e)
        {
            if (ValidarEntradas(out double num1, out double num2))
            {
                if (num2 != 0)
                {
                    lblResultado.Text = $"Resultado: {num1 / num2}";
                }
                else
                {
                    MessageBox.Show("Erro: Divisão por zero não é permitida!", "Erro", MessageBoxButtons.OK, MessageBoxIcon.Error);
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            {
                this.Close();
            }
        }
        private bool ValidarEntradas(out double num1, out double num2)
        {
            num1 = 0;
            num2 = 0;

            bool valido = double.TryParse(txtNumero1.Text, out num1) && double.TryParse(txtNumero2.Text, out num2);
            if (!valido)
            {
                MessageBox.Show("Por favor, insira números válidos!", "Entrada inválida", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
            return valido;
        }
    }
}
