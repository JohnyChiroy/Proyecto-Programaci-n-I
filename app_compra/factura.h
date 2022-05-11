#pragma once
#include "conexion.h"
#include "factura.h"

namespace appcompra {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de factura
	/// </summary>
	public ref class factura : public System::Windows::Forms::Form
	{
	public:
		factura(void)
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
		~factura()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtnfactura;
	private: System::Windows::Forms::TextBox^ txtfecha;
	private: System::Windows::Forms::TextBox^ txtcodusuario;
	private: System::Windows::Forms::TextBox^ txtidproducto;
	private: System::Windows::Forms::TextBox^ txtcantidad;
	private: System::Windows::Forms::TextBox^ txtprecio;
	private: System::Windows::Forms::TextBox^ txttotal;

















	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtnfactura = (gcnew System::Windows::Forms::TextBox());
			this->txtfecha = (gcnew System::Windows::Forms::TextBox());
			this->txtcodusuario = (gcnew System::Windows::Forms::TextBox());
			this->txtidproducto = (gcnew System::Windows::Forms::TextBox());
			this->txtcantidad = (gcnew System::Windows::Forms::TextBox());
			this->txtprecio = (gcnew System::Windows::Forms::TextBox());
			this->txttotal = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(429, 133);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(459, 216);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &factura::listView1_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"No.Factura";
			this->columnHeader1->Width = 67;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Fecha";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Cod.Usuario";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 75;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"ID.Producto";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 70;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Cantidad";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Precio";
			this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Total";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(213, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Factura";
			this->label1->Click += gcnew System::EventHandler(this, &factura::label1_Click);
			// 
			// txtnfactura
			// 
			this->txtnfactura->Location = System::Drawing::Point(137, 123);
			this->txtnfactura->Name = L"txtnfactura";
			this->txtnfactura->Size = System::Drawing::Size(250, 20);
			this->txtnfactura->TabIndex = 2;
			// 
			// txtfecha
			// 
			this->txtfecha->Location = System::Drawing::Point(137, 149);
			this->txtfecha->Name = L"txtfecha";
			this->txtfecha->Size = System::Drawing::Size(250, 20);
			this->txtfecha->TabIndex = 3;
			// 
			// txtcodusuario
			// 
			this->txtcodusuario->Location = System::Drawing::Point(137, 178);
			this->txtcodusuario->Name = L"txtcodusuario";
			this->txtcodusuario->Size = System::Drawing::Size(250, 20);
			this->txtcodusuario->TabIndex = 4;
			// 
			// txtidproducto
			// 
			this->txtidproducto->Location = System::Drawing::Point(137, 216);
			this->txtidproducto->Name = L"txtidproducto";
			this->txtidproducto->Size = System::Drawing::Size(250, 20);
			this->txtidproducto->TabIndex = 5;
			// 
			// txtcantidad
			// 
			this->txtcantidad->Location = System::Drawing::Point(137, 257);
			this->txtcantidad->Name = L"txtcantidad";
			this->txtcantidad->Size = System::Drawing::Size(250, 20);
			this->txtcantidad->TabIndex = 6;
			// 
			// txtprecio
			// 
			this->txtprecio->Location = System::Drawing::Point(137, 295);
			this->txtprecio->Name = L"txtprecio";
			this->txtprecio->Size = System::Drawing::Size(250, 20);
			this->txtprecio->TabIndex = 7;
			// 
			// txttotal
			// 
			this->txttotal->Location = System::Drawing::Point(137, 333);
			this->txttotal->Name = L"txttotal";
			this->txttotal->Size = System::Drawing::Size(250, 20);
			this->txttotal->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Número de Factura";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(33, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Fecha";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 181);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Código de Usuario";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(33, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"ID Producto";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(33, 257);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Cantidad";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(33, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Precio";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(33, 336);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Total";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(186, 390);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 47);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Guardar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &factura::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(334, 390);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 47);
			this->button2->TabIndex = 17;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// factura
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 543);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txttotal);
			this->Controls->Add(this->txtprecio);
			this->Controls->Add(this->txtcantidad);
			this->Controls->Add(this->txtidproducto);
			this->Controls->Add(this->txtcodusuario);
			this->Controls->Add(this->txtfecha);
			this->Controls->Add(this->txtnfactura);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Name = L"factura";
			this->Text = L"factura";
			this->Load += gcnew System::EventHandler(this, &factura::factura_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void factura_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
