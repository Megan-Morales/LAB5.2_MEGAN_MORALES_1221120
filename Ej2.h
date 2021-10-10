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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G7;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->G1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"PLAY FLOLALIA", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(256, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(578, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BIENVENIDO AL SOLITARIO SIMPLE";
			// 
			// btRegresar
			// 
			this->btRegresar->Location = System::Drawing::Point(939, 24);
			this->btRegresar->Name = L"btRegresar";
			this->btRegresar->Size = System::Drawing::Size(75, 33);
			this->btRegresar->TabIndex = 1;
			this->btRegresar->Text = L"Regresar";
			this->btRegresar->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(12, 93);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1002, 358);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->G1, this->G2,
					this->G3, this->G4, this->G5, this->G6, this->G7
			});
			this->dataGridView1->Location = System::Drawing::Point(35, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(928, 150);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Ej2::dataGridView1_CellContentClick);
			// 
			// G1
			// 
			this->G1->HeaderText = L"G1";
			this->G1->MinimumWidth = 6;
			this->G1->Name = L"G1";
			this->G1->ReadOnly = true;
			this->G1->Width = 125;
			// 
			// G2
			// 
			this->G2->HeaderText = L"G2";
			this->G2->MinimumWidth = 6;
			this->G2->Name = L"G2";
			this->G2->ReadOnly = true;
			this->G2->Width = 125;
			// 
			// G3
			// 
			this->G3->HeaderText = L"G3";
			this->G3->MinimumWidth = 6;
			this->G3->Name = L"G3";
			this->G3->ReadOnly = true;
			this->G3->Width = 125;
			// 
			// G4
			// 
			this->G4->HeaderText = L"G4";
			this->G4->MinimumWidth = 6;
			this->G4->Name = L"G4";
			this->G4->ReadOnly = true;
			this->G4->Width = 125;
			// 
			// G5
			// 
			this->G5->HeaderText = L"G5";
			this->G5->MinimumWidth = 6;
			this->G5->Name = L"G5";
			this->G5->ReadOnly = true;
			this->G5->Width = 125;
			// 
			// G6
			// 
			this->G6->HeaderText = L"G6";
			this->G6->MinimumWidth = 6;
			this->G6->Name = L"G6";
			this->G6->ReadOnly = true;
			this->G6->Width = 125;
			// 
			// G7
			// 
			this->G7->HeaderText = L"G7";
			this->G7->MinimumWidth = 6;
			this->G7->Name = L"G7";
			this->G7->ReadOnly = true;
			this->G7->Width = 125;
			// 
			// Ej2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1051, 616);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btRegresar);
			this->Controls->Add(this->label1);
			this->Name = L"Ej2";
			this->Text = L"Ej2";
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
};
}
