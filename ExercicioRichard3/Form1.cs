using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ExercicioRichard3
{
    public partial class Form1: Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void btnCalcular_Click(object sender, EventArgs e)
        {
            if (ValidarEntradas(out double salarioBruto, out double acrescimo, out double imposto))
            {
                double salarioComAcrescimo = salarioBruto + (salarioBruto * (acrescimo / 100));
                double salarioLiquido = salarioComAcrescimo - (salarioComAcrescimo * (imposto / 100));

                lblResultado.Text = $"Salário Líquido: R$ {salarioLiquido:F2}";
            }
        }
        private bool ValidarEntradas(out double salarioBruto, out double acrescimo, out double imposto)
        {
            salarioBruto = 0;
            acrescimo = 0;
            imposto = 0;

            bool valido = double.TryParse(txtSalarioBruto.Text, out salarioBruto) &&
                          double.TryParse(txtAcrescimo.Text, out acrescimo) &&
                          double.TryParse(txtImposto.Text, out imposto);

            if (!valido)
            {
                MessageBox.Show("Por favor, insira valores numéricos válidos!", "Erro de entrada", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }

            return valido;
        }
    }
}
