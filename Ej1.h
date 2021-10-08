#include "List.h"
#pragma once

namespace LAB52MEGANMORALES1221120 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Ej1
	/// </summary>
	public ref class Ej1 : public System::Windows::Forms::Form
	{
	public:

		List* myList;

		Ej1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			myList = new List();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Ej1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(558, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Regresar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ej1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingresar un número: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::RosyBrown;
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->button11);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(29, 101);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(419, 189);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Operaciones de inserción";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(345, 126);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(55, 22);
			this->textBox5->TabIndex = 3;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(15, 126);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(313, 23);
			this->button11->TabIndex = 2;
			this->button11->Text = L"Remplazar el elemento de la posición";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Ej1::button11_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(15, 77);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(313, 23);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Insertar en la posición";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Ej1::button7_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(15, 36);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(313, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Insertar al final";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Ej1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(345, 78);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(55, 22);
			this->textBox2->TabIndex = 0;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(494, 101);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(108, 724);
			this->listBox1->TabIndex = 4;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::RosyBrown;
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button9);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(29, 339);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(419, 200);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Operaciones de extracción";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(345, 87);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(55, 22);
			this->textBox4->TabIndex = 6;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(15, 87);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(313, 23);
			this->button10->TabIndex = 3;
			this->button10->Text = L"Eliminar en la posición";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Ej1::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(15, 41);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(313, 23);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Eliminar la primera ocurrencia";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(15, 133);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(313, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Vaciar lista";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Ej1::button3_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::RosyBrown;
			this->groupBox4->Controls->Add(this->button12);
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Controls->Add(this->button8);
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox4->Location = System::Drawing::Point(29, 589);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(419, 251);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Operaciones de búsqueda";
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button12->Location = System::Drawing::Point(15, 152);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(313, 23);
			this->button12->TabIndex = 7;
			this->button12->Text = L"Obtener la última posición del elemento";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(345, 196);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(55, 22);
			this->textBox3->TabIndex = 6;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Location = System::Drawing::Point(15, 196);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(313, 23);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Obtener el valor en la posición";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Ej1::button8_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(15, 113);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(313, 23);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Obtener la primera posición del elemento";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(15, 35);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(313, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Verificar si el número se encuentra";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Ej1::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(15, 75);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(313, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Contar la cantidad de elementos";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Ej1::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(488, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Posición";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(555, 81);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ítem";
			// 
			// Ej1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(661, 987);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"Ej1";
			this->Text = L"Ejercicio 1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		try {
			int value = Convert::ToInt32(textBox1->Text);
			myList->Add(value);
			fillListBox();
			/*MessageBox::Show("El número fue agregado con éxito ", "Operación correcta", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);*/
		}
		catch (Exception^ e) {
			MessageBox::Show("Error encontrado: " + e->Message, "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	//Metodo para llenar y actualizar la lista :D
	void fillListBox() {
		List::Node* temp = myList->GetItem(0);
		listBox1->Items->Clear();
		int count=0;
		while (temp != nullptr) {
			listBox1->Items->Add(count+"---------------"+temp->data);
			temp = temp->next;
			count++;
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		myList->Clear();
		fillListBox();
		MessageBox::Show("Lista vaciada con éxito ", "Operación correcta", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		 myList->Count();
		MessageBox::Show("La cantidad de elementos es: " + myList->Count(), "Operación correcta", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int value = Convert::ToInt32(textBox1->Text);
			int posicion = Convert::ToInt32(textBox2->Text);
			myList->Insert(posicion, value);
			fillListBox();
			/*MessageBox::Show("El número fue agregado con éxito ", "Operación correcta", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);*/
		}
		catch (Exception^ e) {
			MessageBox::Show("Error encontrado: " + e->Message, "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int value = Convert::ToInt32(textBox1->Text);
			if (myList->Contains(value) == true) {

				MessageBox::Show("El número si se encuentra en la lista ", "Operación correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("El número no fue encontrado", "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Error encontrado: " + e->Message, "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}	
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int value = Convert::ToInt32(textBox1->Text);
			int posicion = Convert::ToInt32(textBox5->Text);
			if (posicion <= (myList->Count()-1) && posicion>=0) {
				myList->SetItem(posicion, value);
				fillListBox();
				MessageBox::Show("El número fue agregado con éxito ", "Operación correcta", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
			else {
				MessageBox::Show("La posición indicada no existe ", "Operación incorrecta", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Error encontrado: " + e->Message, "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			int posicion = Convert::ToInt32(textBox3->Text);
			List::Node* temp = myList->GetItem(posicion);
			MessageBox::Show("El número en la posición  "+posicion +"  es:  "+temp->data, "Operación correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ e) {
			MessageBox::Show("Error encontrado: " + e->Message, "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			int posicion = Convert::ToInt32(textBox4->Text);
			if (posicion <= (myList->Count() - 1) && posicion >= 0) {
				myList->RemoveAt(posicion);
				fillListBox();
				MessageBox::Show("El número fue eliminado con éxito  ", "Operación correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("La posición indicada no existe ", "Operación incorrecta", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Error encontrado: " + e->Message, "Operación fallida", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}	
	}
};
}
