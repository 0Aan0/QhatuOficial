#pragma once
#include "SaleForm.h"

namespace QhatuOficialView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SalesMainForm
	/// </summary>
	public ref class SalesMainForm : public System::Windows::Forms::Form
	{
	public:
		SalesMainForm(void)
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
		~SalesMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ guardarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ realizarVentaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tendenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gráficosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vendedoresToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ productosToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ productosXTiendaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tiendasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ vendedoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ administradoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ chatDeSoporteToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SalesMainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guardarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->realizarVentaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tendenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gráficosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vendedoresToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosXTiendaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tiendasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->vendedoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->administradoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chatDeSoporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->operacionesToolStripMenuItem, this->tendenciasToolStripMenuItem, this->mantenimientosToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(757, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"Archivo";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &SalesMainForm::menuStrip1_ItemClicked);
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->guardarToolStripMenuItem,
					this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// guardarToolStripMenuItem
			// 
			this->guardarToolStripMenuItem->Enabled = false;
			this->guardarToolStripMenuItem->Name = L"guardarToolStripMenuItem";
			this->guardarToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->guardarToolStripMenuItem->Text = L"Guardar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->realizarVentaToolStripMenuItem });
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// realizarVentaToolStripMenuItem
			// 
			this->realizarVentaToolStripMenuItem->Name = L"realizarVentaToolStripMenuItem";
			this->realizarVentaToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->realizarVentaToolStripMenuItem->Text = L"Realizar Venta";
			this->realizarVentaToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesMainForm::realizarVentaToolStripMenuItem_Click);
			// 
			// tendenciasToolStripMenuItem
			// 
			this->tendenciasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->gráficosToolStripMenuItem,
					this->vendedoresToolStripMenuItem1
			});
			this->tendenciasToolStripMenuItem->Name = L"tendenciasToolStripMenuItem";
			this->tendenciasToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->tendenciasToolStripMenuItem->Text = L"Tendencias";
			// 
			// gráficosToolStripMenuItem
			// 
			this->gráficosToolStripMenuItem->Name = L"gráficosToolStripMenuItem";
			this->gráficosToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->gráficosToolStripMenuItem->Text = L"Gráficos";
			// 
			// vendedoresToolStripMenuItem1
			// 
			this->vendedoresToolStripMenuItem1->Name = L"vendedoresToolStripMenuItem1";
			this->vendedoresToolStripMenuItem1->Size = System::Drawing::Size(135, 22);
			this->vendedoresToolStripMenuItem1->Text = L"Vendedores";
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->productosToolStripMenuItem,
					this->clientesToolStripMenuItem, this->tiendasToolStripMenuItem, this->vendedoresToolStripMenuItem, this->administradoresToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->productosToolStripMenuItem1,
					this->productosXTiendaToolStripMenuItem
			});
			this->productosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"productosToolStripMenuItem.Image")));
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->productosToolStripMenuItem->Text = L"Productos";
			// 
			// productosToolStripMenuItem1
			// 
			this->productosToolStripMenuItem1->Name = L"productosToolStripMenuItem1";
			this->productosToolStripMenuItem1->Size = System::Drawing::Size(175, 22);
			this->productosToolStripMenuItem1->Text = L"Productos";
			// 
			// productosXTiendaToolStripMenuItem
			// 
			this->productosXTiendaToolStripMenuItem->Name = L"productosXTiendaToolStripMenuItem";
			this->productosXTiendaToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->productosXTiendaToolStripMenuItem->Text = L"Productos x Tienda";
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clientesToolStripMenuItem.Image")));
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			// 
			// tiendasToolStripMenuItem
			// 
			this->tiendasToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tiendasToolStripMenuItem.Image")));
			this->tiendasToolStripMenuItem->Name = L"tiendasToolStripMenuItem";
			this->tiendasToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->tiendasToolStripMenuItem->Text = L"Tiendas";
			// 
			// vendedoresToolStripMenuItem
			// 
			this->vendedoresToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"vendedoresToolStripMenuItem.Image")));
			this->vendedoresToolStripMenuItem->Name = L"vendedoresToolStripMenuItem";
			this->vendedoresToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->vendedoresToolStripMenuItem->Text = L"Vendedores";
			// 
			// administradoresToolStripMenuItem
			// 
			this->administradoresToolStripMenuItem->Name = L"administradoresToolStripMenuItem";
			this->administradoresToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->administradoresToolStripMenuItem->Text = L"Administradores";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->chatDeSoporteToolStripMenuItem });
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// chatDeSoporteToolStripMenuItem
			// 
			this->chatDeSoporteToolStripMenuItem->Name = L"chatDeSoporteToolStripMenuItem";
			this->chatDeSoporteToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->chatDeSoporteToolStripMenuItem->Text = L"Chat de Soporte";
			// 
			// SalesMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 509);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->Name = L"SalesMainForm";
			this->Text = L"SalesMainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void realizarVentaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaleForm^ saleForm = gcnew SaleForm();
		saleForm->MdiParent = this;
		saleForm->Show();
	}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
};
}
