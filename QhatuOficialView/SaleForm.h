#pragma once
#include "TicketForm.h"
namespace QhatuOficialView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace QhatuOficialModel;
//	using namespace QhatuOficialController;
	/// <summary>
	/// Summary for SaleForm
	/// </summary>
	public ref class SaleForm : public System::Windows::Forms::Form
	{
	public:
		SaleForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SaleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegisterSale;
	protected:
	private: System::Windows::Forms::GroupBox^ radioGroup;
	private: System::Windows::Forms::RadioButton^ rbtnCompany;
	private: System::Windows::Forms::RadioButton^ rbtnPerson;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnDeleteProduct;
	private: System::Windows::Forms::Label^ Total;
	private: System::Windows::Forms::TextBox^ txtTotal;
	private: System::Windows::Forms::DataGridView^ dgvDetails;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ productName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ unitPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ subTotal;
	private: System::Windows::Forms::Button^ btnAddProduct;
	private: System::Windows::Forms::DateTimePicker^ dtpSaleDate;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ cmbCustomers;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
		   double total;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnRegisterSale = (gcnew System::Windows::Forms::Button());
			this->radioGroup = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnCompany = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnPerson = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteProduct = (gcnew System::Windows::Forms::Button());
			this->Total = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->dgvDetails = (gcnew System::Windows::Forms::DataGridView());
			this->productId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->productName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->unitPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->subTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAddProduct = (gcnew System::Windows::Forms::Button());
			this->dtpSaleDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbCustomers = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioGroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRegisterSale
			// 
			this->btnRegisterSale->Location = System::Drawing::Point(30, 358);
			this->btnRegisterSale->Name = L"btnRegisterSale";
			this->btnRegisterSale->Size = System::Drawing::Size(161, 23);
			this->btnRegisterSale->TabIndex = 26;
			this->btnRegisterSale->Text = L"Registrar Venta";
			this->btnRegisterSale->UseVisualStyleBackColor = true;
			this->btnRegisterSale->Click += gcnew System::EventHandler(this, &SaleForm::btnRegisterSale_Click);
			// 
			// radioGroup
			// 
			this->radioGroup->Controls->Add(this->rbtnCompany);
			this->radioGroup->Controls->Add(this->rbtnPerson);
			this->radioGroup->Location = System::Drawing::Point(182, 31);
			this->radioGroup->Name = L"radioGroup";
			this->radioGroup->Size = System::Drawing::Size(211, 44);
			this->radioGroup->TabIndex = 25;
			this->radioGroup->TabStop = false;
			// 
			// rbtnCompany
			// 
			this->rbtnCompany->AutoSize = true;
			this->rbtnCompany->Location = System::Drawing::Point(95, 16);
			this->rbtnCompany->Name = L"rbtnCompany";
			this->rbtnCompany->Size = System::Drawing::Size(66, 17);
			this->rbtnCompany->TabIndex = 2;
			this->rbtnCompany->Text = L"Empresa";
			this->rbtnCompany->UseVisualStyleBackColor = true;
			// 
			// rbtnPerson
			// 
			this->rbtnPerson->AutoSize = true;
			this->rbtnPerson->Checked = true;
			this->rbtnPerson->Location = System::Drawing::Point(4, 16);
			this->rbtnPerson->Name = L"rbtnPerson";
			this->rbtnPerson->Size = System::Drawing::Size(64, 17);
			this->rbtnPerson->TabIndex = 1;
			this->rbtnPerson->TabStop = true;
			this->rbtnPerson->Text = L"Persona";
			this->rbtnPerson->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(73, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 13);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Cliente :";
			// 
			// btnDeleteProduct
			// 
			this->btnDeleteProduct->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDeleteProduct->ImageIndex = 1;
			this->btnDeleteProduct->Location = System::Drawing::Point(320, 147);
			this->btnDeleteProduct->Name = L"btnDeleteProduct";
			this->btnDeleteProduct->Size = System::Drawing::Size(141, 23);
			this->btnDeleteProduct->TabIndex = 20;
			this->btnDeleteProduct->Text = L"Eliminar producto";
			this->btnDeleteProduct->UseVisualStyleBackColor = true;
			this->btnDeleteProduct->Click += gcnew System::EventHandler(this, &SaleForm::btnDeleteProduct_Click);
			// 
			// Total
			// 
			this->Total->AutoSize = true;
			this->Total->Location = System::Drawing::Point(325, 363);
			this->Total->Name = L"Total";
			this->Total->Size = System::Drawing::Size(52, 13);
			this->Total->TabIndex = 22;
			this->Total->Text = L"Total: S/.";
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(381, 360);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(74, 20);
			this->txtTotal->TabIndex = 21;
			this->txtTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// dgvDetails
			// 
			this->dgvDetails->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDetails->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->productId,
					this->productName, this->unitPrice, this->quantity, this->subTotal
			});
			this->dgvDetails->Location = System::Drawing::Point(18, 185);
			this->dgvDetails->Name = L"dgvDetails";
			this->dgvDetails->Size = System::Drawing::Size(443, 169);
			this->dgvDetails->TabIndex = 23;
			// 
			// productId
			// 
			this->productId->HeaderText = L"Id";
			this->productId->Name = L"productId";
			this->productId->ReadOnly = true;
			this->productId->Width = 40;
			// 
			// productName
			// 
			this->productName->HeaderText = L"Nombre";
			this->productName->Name = L"productName";
			this->productName->ReadOnly = true;
			this->productName->Width = 180;
			// 
			// unitPrice
			// 
			this->unitPrice->HeaderText = L"P.U. (S/.)";
			this->unitPrice->Name = L"unitPrice";
			this->unitPrice->ReadOnly = true;
			this->unitPrice->Width = 50;
			// 
			// quantity
			// 
			this->quantity->HeaderText = L"Cantidad";
			this->quantity->Name = L"quantity";
			this->quantity->Width = 50;
			// 
			// subTotal
			// 
			this->subTotal->HeaderText = L"Subtotal (S/.)";
			this->subTotal->Name = L"subTotal";
			this->subTotal->ReadOnly = true;
			this->subTotal->Width = 80;
			// 
			// btnAddProduct
			// 
			this->btnAddProduct->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAddProduct->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddProduct->ImageIndex = 0;
			this->btnAddProduct->Location = System::Drawing::Point(18, 147);
			this->btnAddProduct->Name = L"btnAddProduct";
			this->btnAddProduct->Size = System::Drawing::Size(139, 23);
			this->btnAddProduct->TabIndex = 19;
			this->btnAddProduct->Text = L"Agregar producto";
			this->btnAddProduct->UseVisualStyleBackColor = true;
			this->btnAddProduct->Click += gcnew System::EventHandler(this, &SaleForm::btnAddProduct_Click);
			// 
			// dtpSaleDate
			// 
			this->dtpSaleDate->Location = System::Drawing::Point(182, 115);
			this->dtpSaleDate->Name = L"dtpSaleDate";
			this->dtpSaleDate->Size = System::Drawing::Size(211, 20);
			this->dtpSaleDate->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(73, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Fecha :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Tipo de Cliente :";
			// 
			// cmbCustomers
			// 
			this->cmbCustomers->FormattingEnabled = true;
			this->cmbCustomers->Location = System::Drawing::Point(182, 81);
			this->cmbCustomers->Name = L"cmbCustomers";
			this->cmbCustomers->Size = System::Drawing::Size(211, 21);
			this->cmbCustomers->TabIndex = 17;
			this->cmbCustomers->SelectedIndexChanged += gcnew System::EventHandler(this, &SaleForm::cmbCustomers_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(634, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 27;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(634, 131);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 28;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(634, 185);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 29;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(584, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SaleForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(529, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Nombre:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(529, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Precio:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(529, 185);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 13);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Cantidad:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(182, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 23);
			this->button2->TabIndex = 34;
			this->button2->Text = L"Buscar Producto";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// SaleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(777, 416);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnRegisterSale);
			this->Controls->Add(this->radioGroup);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnDeleteProduct);
			this->Controls->Add(this->Total);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->dgvDetails);
			this->Controls->Add(this->btnAddProduct);
			this->Controls->Add(this->dtpSaleDate);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbCustomers);
			this->Name = L"SaleForm";
			this->Text = L"SaleForm";
			this->radioGroup->ResumeLayout(false);
			this->radioGroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDetails))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		array<String^>^ fila = gcnew array<String^>(4);
		fila[0] = "N/A";
		fila[1] = this->textBox1->Text;
		fila[2] = this->textBox2->Text;
		fila[3] = this->textBox3->Text;
		double price = Convert::ToDouble(fila[2]);
		int quantity = Convert::ToInt16(fila[3]);
		double subtotal = price * quantity;
		this->total = this->total + subtotal;

		fila[4] = Convert::ToString(subtotal);
		this->dgvDetails->Rows->Add(fila);
		this->txtTotal->Text =Convert::ToString(total);

	}
private: System::Void cmbCustomers_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDeleteProduct_Click(System::Object^ sender, System::EventArgs^ e) {
	int selectedRows = dgvDetails->SelectedRows->Count;
	if (selectedRows == 1) {
		dgvDetails->Rows->RemoveAt(dgvDetails->SelectedRows[0]->Index);
	}
	else {
		MessageBox::Show("Para eliminar un producto debe seleccionar todo el registro");
	}
}
private: System::Void btnRegisterSale_Click(System::Object^ sender, System::EventArgs^ e) {
	TicketForm^ ticketForm = gcnew TicketForm();
	
	ticketForm->Show();
}
private: System::Void btnAddProduct_Click(System::Object^ sender, System::EventArgs^ e) {


}

};
}
