#pragma once

namespace LAB52MEGANMORALES1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ej2
	/// </summary>
	public ref class Ej2 : public System::Windows::Forms::Form
	{
	public:
		Ej2(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Ej2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btRegresar;
	private: System::Windows::Forms::DataGridView^ dgv;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btR;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ btMazo;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btMover;
	private: System::Windows::Forms::Button^ btIniciar;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btRegresar = (gcnew System::Windows::Forms::Button());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btIniciar = (gcnew System::Windows::Forms::Button());
			this->btMover = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btR = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->btMazo = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"PLAY FLOLALIA", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(42, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(520, 49);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BIENVENIDO AL SOLITARIO SIMPLE";
			// 
			// btRegresar
			// 
			this->btRegresar->Location = System::Drawing::Point(969, 34);
			this->btRegresar->Name = L"btRegresar";
			this->btRegresar->Size = System::Drawing::Size(75, 30);
			this->btRegresar->TabIndex = 1;
			this->btRegresar->Text = L"Regresar";
			this->btRegresar->UseVisualStyleBackColor = true;
			this->btRegresar->Click += gcnew System::EventHandler(this, &Ej2::btRegresar_Click);
			// 
			// dgv
			// 
			this->dgv->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Location = System::Drawing::Point(13, 144);
			this->dgv->Name = L"dgv";
			this->dgv->RowHeadersWidth = 51;
			this->dgv->RowTemplate->Height = 24;
			this->dgv->Size = System::Drawing::Size(690, 530);
			this->dgv->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->btIniciar);
			this->groupBox1->Controls->Add(this->btMover);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->btR);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->btMazo);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->dgv);
			this->groupBox1->Location = System::Drawing::Point(38, 103);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1006, 701);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label11->Location = System::Drawing::Point(619, 121);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 20);
			this->label11->TabIndex = 20;
			this->label11->Text = L"G7";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label10->Location = System::Drawing::Point(523, 121);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 20);
			this->label10->TabIndex = 19;
			this->label10->Text = L"G6";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label9->Location = System::Drawing::Point(432, 121);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(33, 20);
			this->label9->TabIndex = 18;
			this->label9->Text = L"G5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label8->Location = System::Drawing::Point(342, 121);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 20);
			this->label8->TabIndex = 17;
			this->label8->Text = L"G4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label7->Location = System::Drawing::Point(236, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 20);
			this->label7->TabIndex = 16;
			this->label7->Text = L"G3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label6->Location = System::Drawing::Point(144, 121);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 20);
			this->label6->TabIndex = 15;
			this->label6->Text = L"G2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label5->Location = System::Drawing::Point(51, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 20);
			this->label5->TabIndex = 14;
			this->label5->Text = L"G1";
			// 
			// btIniciar
			// 
			this->btIniciar->Location = System::Drawing::Point(868, 21);
			this->btIniciar->Name = L"btIniciar";
			this->btIniciar->Size = System::Drawing::Size(117, 52);
			this->btIniciar->TabIndex = 13;
			this->btIniciar->Text = L"Iniciar juego";
			this->btIniciar->UseVisualStyleBackColor = true;
			this->btIniciar->Click += gcnew System::EventHandler(this, &Ej2::btIniciar_Click);
			// 
			// btMover
			// 
			this->btMover->Location = System::Drawing::Point(826, 295);
			this->btMover->Name = L"btMover";
			this->btMover->Size = System::Drawing::Size(108, 23);
			this->btMover->TabIndex = 12;
			this->btMover->Text = L"Mover";
			this->btMover->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(781, 247);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 24);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Destino: ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(790, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 24);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Origen: ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Papyrus", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(781, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 24);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Posición: ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btR
			// 
			this->btR->Location = System::Drawing::Point(116, 29);
			this->btR->Name = L"btR";
			this->btR->Size = System::Drawing::Size(51, 23);
			this->btR->TabIndex = 8;
			this->btR->Text = L"R";
			this->btR->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(90, 58);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 7;
			// 
			// btMazo
			// 
			this->btMazo->Location = System::Drawing::Point(13, 58);
			this->btMazo->Name = L"btMazo";
			this->btMazo->Size = System::Drawing::Size(71, 24);
			this->btMazo->TabIndex = 6;
			this->btMazo->Text = L"MAZO: ";
			this->btMazo->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(885, 249);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 22);
			this->textBox3->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(885, 207);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(80, 22);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(885, 168);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(80, 22);
			this->textBox1->TabIndex = 3;
			// 
			// Ej2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1084, 846);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btRegresar);
			this->Controls->Add(this->label1);
			this->Name = L"Ej2";
			this->Text = L"Ej2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void ReestablecerMatriz() {
		dgv->Rows->Clear();
		dgv->Columns->Clear();
		dgv->ColumnHeadersVisible = false;
		dgv->RowHeadersVisible = false;
	};

	private: System::Void btIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		int numFilas = 0;
		int numColumnas = 0;
		try {
			numFilas = 40;
			numColumnas = 7;
		}
		catch (Exception^ e) {
			MessageBox::Show("Error detectado: " + e->Message
				, "Valores incorrectos"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Error);
		}
		ReestablecerMatriz();	//Método que borra el contenido de la matriz
		//Se crean las columnas de la matriz
		if (numColumnas > 0) {
			for (int i = 0; i < numColumnas; i++) {
				//Se crea una columna
				DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				nuevacolumna->Width = 71;

				//Se le agrega el tipo de columna que será
				DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				nuevacolumna->CellTemplate = cellTemplate;


				//Se agrega la columna al Datagrid
				dgv->Columns->Add(nuevacolumna);
			}
		}
		//Se agregan las filas a la matriz
		if (numFilas > 0) {
			for (int i = 0; i < numFilas; i++) {
				dgv->Rows->Add();
			}
		}



	}
private: System::Void btRegresar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
