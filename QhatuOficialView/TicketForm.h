#pragma once

namespace QhatuOficialView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TicketForm
	/// </summary>
	public ref class TicketForm : public System::Windows::Forms::Form
	{ 
	public:
		TicketForm(void)
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
		~TicketForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;

	protected:

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			this->richTextBox1->Location = System::Drawing::Point(27, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(408, 333);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->button1->Location = System::Drawing::Point(183, 363);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Aceptar";
			this->button1->UseVisualStyleBackColor = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 398);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"TicketForm";
			this->Text = L"Detalle Boleta";
			this->Load += gcnew System::EventHandler(this, &TicketForm::TicketForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void txtMessages_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TicketForm_Load(System::Object^ sender, System::EventArgs^ e) {
		

	}
	};
}
