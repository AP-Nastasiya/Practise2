#pragma once
#include <math.h>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 414);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(293, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(360, 414);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 262);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 296);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 329);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 366);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(336, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(314, 296);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(417, 296);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"label7";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 262);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"-1.7";
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(95, 296);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"2.6";
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(95, 329);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 11;
			this->textBox3->Text = L"0.25";
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(95, 366);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"4";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(271, 326);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(403, 326);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 14;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(240, 220);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(280, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(240, 246);
			this->dataGridView1->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(525, 460);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double xn, xk, xh, x, y, a, ymax, ymin, yt;
		int  i;
		//Проверка ввода данных в компоненты textBox 
		if ((textBox1->Text != "") && (textBox2->Text != "") &&
			(textBox3->Text != "") && (textBox4->Text != ""))
		{
			//Преобразование введенных данных в mun double 
			xn = Convert::ToDouble(textBox1->Text);
			xk = Convert::ToDouble(textBox2->Text);
			xh = Convert::ToDouble(textBox3->Text);
			a = Convert::ToDouble(textBox4->Text);
			//Очистка столбцов таблицы
			dataGridView1->Columns->Clear();
			//Создание двух столбцов в таблице
			dataGridView1->ColumnCount = 2;
			//Создание в таблице строк 
			dataGridView1->Rows->Add(ceil((xk - xn) / xh) + 1);
			////Занесение в верхнюю строку таблицы в первую ячейку текст «Х», во вторую текст «У»
			dataGridView1->Columns[0]->Name = " X";
			dataGridView1->Columns[1]->Name = " Y";
			i = 0;
			x = xn;
			ymax = -1.8e307; ymin = 1.8e307;
			while (x <= xk)
			{
				if (x <= 0) { y = log10(fabs(x+1))+sqrt(3*fabs(x)); }
				else
					if (x <= a) { y = sin(pow(x,2)+3*x); }
					else
					{
						y = pow(log10(fabs(x)),2)+sqrt(x+3);
					}
				//Занесение в первый столбец значений аргумента Х
				dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
				//Переменной yt присваивает округленное до двух знаков после запятой значение у
				yt = ceil(y * 100) / 100;
				//Вывод во втором столбце таблицы значение функции У 
				dataGridView1->Rows[i]->Cells[1]->Value
					= Convert::ToString(yt);
				//находит максимальное и минимальное значение и округляет до двух знаков после запятой
				if (y > ymax) ymax = ceil(y * 100) / 100; if
					(y < ymin) ymin = ceil(y * 100) / 100;
				x = x + xh;
				i++;
			}
			//выводит в компоненты textbox максимальное и минимальное значение функции
			textBox5->Text = Convert::ToString(ymax);
			textBox6->Text = Convert::ToString(ymin);
		}
		else {
			MessageBox::Show("Заполните, пожалуйста, данные",
				"Ошибка ввода данных",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251  ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',' || str[t] == '.') { a = false; } while (t < l)
	{
		if (str[t] == ',' || str[t] == '.')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà 
		{
			if (t == l - 1 || k > 0) { a = false; } k++;
		}
		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9' 
		else if (str[t] < '0' ||
			str[t] > '9') {
			a = false;
		}
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ 
		this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251  ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',' || str[t] == '.') { a = false; } while (t < l)
	{
		if (str[t] == ',' || str[t] == '.')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà 
		{
			if (t == l - 1 || k > 0) { a = false; } k++;
		}
		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9' 
		else if (str[t] < '0' ||
			str[t] > '9') {
			a = false;
		}
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ 
		this->textBox1->Focus();
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251  ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') { t++; }
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',' || str[t] == '.') { a = false; } while (t < l)
	{
		if (str[t] == ',' || str[t] == '.')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà 
		{
			if (t == l - 1 || k > 0) { a = false; } k++;
		}
		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9' 
		else if (str[t] < '0' ||
			str[t] > '9') {
			a = false;
		}
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ 
		this->textBox1->Focus();
	}
}
};
}
