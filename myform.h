#pragma once

namespace cognitive {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::IO;




	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			DateTime datetime = DateTime::Now;
			this->label23->Text = datetime.ToShortDateString();
		}
		
	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  Starting_panel;
	protected:


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;



	private: System::Windows::Forms::Panel^  panel2;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;


	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer2;
	private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape3;


	private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainertrapezoid;


	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label12;





	private: System::Windows::Forms::Label^  label8;




















	private: System::Windows::Forms::Panel^  Resultpanel;


	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::Label^  label23;

	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label32;

	
	
	private: int exercise;
	private: int tristart_x, tristart_y, cirstart_x, cirstart_y, trapstart_x, trapstart_y, squastart_x, squastart_y;
	private: int x, y;
	private: float correct_selection;
	private: float incorrect_selection;
	private: float score;
	private: float total=0;
	private: String^ patient;
	private: String^ language;
	private: bool drag = false;
	private: bool squaredrag = false;
	private: bool squaremove = false;
	private: bool ovaldrag = false;
	private: bool ovalmove = false;
	private: bool trapdrag = false;
	private: bool trapmove = false;
	private: bool tridrag = false;
	private: bool trimove = false;
	



private: System::Windows::Forms::PictureBox^  pictureBox19_drag;



private: System::Windows::Forms::ComboBox^  comboBox2;

private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  button2;

private: System::Windows::Forms::Button^  Download;

private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

private: System::Media::SoundPlayer^ correct = (gcnew::System::Media::SoundPlayer("correct.wav"));
private: System::Media::SoundPlayer^ incorrect = (gcnew::System::Media::SoundPlayer("incorrect.wav"));
private: System::Media::SoundPlayer^ correcto = (gcnew::System::Media::SoundPlayer("correcto.wav"));
private: System::Media::SoundPlayer^ incorrecto = (gcnew::System::Media::SoundPlayer("icorrecto.wav"));
private: System::Media::SoundPlayer^ moveshape = (gcnew::System::Media::SoundPlayer("move the shapes.wav"));
private: System::Media::SoundPlayer^ moveshapespanish = (gcnew::System::Media::SoundPlayer("voicespanish.wav"));

private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Panel^  panel5;
private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer1;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangle2;

private: System::Drawing::Graphics^ triangle;

private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainer3;
private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContaineryellowbox;


private: Microsoft::VisualBasic::PowerPacks::OvalShape^  ovalShape1;
private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::Panel^  panel8;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape4;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape2;




private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape5;
private: System::Windows::Forms::PictureBox^  pictureBox9;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::PictureBox^  pictureBox11;
private: System::Windows::Forms::PictureBox^  pictureBox12;
private: System::Windows::Forms::PictureBox^  pictureBox13;

private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainerOval;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Panel^  exercise_panel;
private: System::Windows::Forms::Panel^  panel6;
private: Microsoft::VisualBasic::PowerPacks::ShapeContainer^  shapeContainertriangle;
private: Microsoft::VisualBasic::PowerPacks::RectangleShape^  rectangleShape1;






private: System::ComponentModel::IContainer^  components;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Starting_panel = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer2 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape3 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->shapeContainer1 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangle2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->rectangleShape5 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->ovalShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::OvalShape());
			this->shapeContainertrapezoid = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape4 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->shapeContainer3 = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape2 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Resultpanel = (gcnew System::Windows::Forms::Panel());
			this->Download = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->shapeContainerOval = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->exercise_panel = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->shapeContainertriangle = (gcnew Microsoft::VisualBasic::PowerPacks::ShapeContainer());
			this->rectangleShape1 = (gcnew Microsoft::VisualBasic::PowerPacks::RectangleShape());
			this->Starting_panel->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->Resultpanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->exercise_panel->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// Starting_panel
			// 
			this->Starting_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Starting_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->Starting_panel->Controls->Add(this->panel4);
			this->Starting_panel->Controls->Add(this->button1);
			this->Starting_panel->Controls->Add(this->label2);
			this->Starting_panel->Controls->Add(this->label1);
			this->Starting_panel->Controls->Add(this->pictureBox1);
			this->Starting_panel->Location = System::Drawing::Point(0, 0);
			this->Starting_panel->Name = L"Starting_panel";
			this->Starting_panel->Size = System::Drawing::Size(1004, 733);
			this->Starting_panel->TabIndex = 0;
			this->Starting_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->label19);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Location = System::Drawing::Point(26, 260);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(952, 362);
			this->panel4->TabIndex = 14;
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::White;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(55, 258);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(830, 34);
			this->label19->TabIndex = 18;
			this->label19->Text = L"be asked to redo the exercise in case of an incorrect score.";
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(55, 221);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(853, 34);
			this->label18->TabIndex = 17;
			this->label18->Text = L"Each exercises has an automatic scoring and the patient will";
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(55, 156);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(493, 34);
			this->label17->TabIndex = 16;
			this->label17->Text = L"command in each screen/exercise.";
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(55, 121);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(876, 34);
			this->label16->TabIndex = 15;
			this->label16->Text = L"The patient will be required to follow the verbal and or written ";
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(55, 71);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(287, 34);
			this->label15->TabIndex = 14;
			this->label15->Text = L"therapeutic values. ";
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(55, 37);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(783, 34);
			this->label14->TabIndex = 13;
			this->label14->Text = L"This application consists of many exercises of different";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(809, 657);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 57);
			this->button1->TabIndex = 13;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(555, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 37);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Systems";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(270, 672);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(418, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Copyrights © APEX Systems Inc.  all rights reserved ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(295, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(408, 256);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1004, 740);
			this->panel2->TabIndex = 7;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// panel9
			// 
			this->panel9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel9->Location = System::Drawing::Point(0, 701);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1005, 40);
			this->panel9->TabIndex = 30;
			// 
			// panel8
			// 
			this->panel8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel8->Location = System::Drawing::Point(0, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1005, 40);
			this->panel8->TabIndex = 29;
			// 
			// panel7
			// 
			this->panel7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel7->Controls->Add(this->comboBox2);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Controls->Add(this->textBox5);
			this->panel7->Controls->Add(this->textBox6);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->label20);
			this->panel7->Controls->Add(this->shapeContainer2);
			this->panel7->Location = System::Drawing::Point(506, 182);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(460, 431);
			this->panel7->TabIndex = 28;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ENGLISH", L"SPANISH" });
			this->comboBox2->Location = System::Drawing::Point(96, 318);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(237, 37);
			this->comboBox2->TabIndex = 25;
			this->comboBox2->Text = L"LANGUAGE";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(42, 215);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(157, 39);
			this->label11->TabIndex = 18;
			this->label11->Text = L"EXERCISES";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Red;
			this->textBox5->Location = System::Drawing::Point(209, 214);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(72, 40);
			this->textBox5->TabIndex = 19;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::Red;
			this->textBox6->Location = System::Drawing::Point(209, 146);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(202, 37);
			this->textBox6->TabIndex = 17;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(42, 146);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(143, 39);
			this->label12->TabIndex = 16;
			this->label12->Text = L"PATIENT :";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(75, 68);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(310, 39);
			this->label8->TabIndex = 10;
			this->label8->Text = L"EXERCISE SELECTIONS";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(74, 2);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(307, 44);
			this->label20->TabIndex = 8;
			this->label20->Text = L"COORDINATION";
			// 
			// shapeContainer2
			// 
			this->shapeContainer2->Location = System::Drawing::Point(0, 0);
			this->shapeContainer2->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer2->Name = L"shapeContainer2";
			this->shapeContainer2->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) { this->rectangleShape3 });
			this->shapeContainer2->Size = System::Drawing::Size(460, 431);
			this->shapeContainer2->TabIndex = 8;
			this->shapeContainer2->TabStop = false;
			// 
			// rectangleShape3
			// 
			this->rectangleShape3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->rectangleShape3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->rectangleShape3->BorderWidth = 7;
			this->rectangleShape3->CornerRadius = 70;
			this->rectangleShape3->Location = System::Drawing::Point(7, 54);
			this->rectangleShape3->Name = L"rectangleShape3";
			this->rectangleShape3->Size = System::Drawing::Size(447, 370);
			// 
			// panel5
			// 
			this->panel5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->panel5->AutoSize = true;
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->comboBox1);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->shapeContainer1);
			this->panel5->Location = System::Drawing::Point(26, 184);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(460, 431);
			this->panel5->TabIndex = 27;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Red;
			this->textBox2->Location = System::Drawing::Point(209, 214);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(72, 40);
			this->textBox2->TabIndex = 36;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(75, 68);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(310, 39);
			this->label7->TabIndex = 32;
			this->label7->Text = L"EXERCISE SELECTIONS";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ENGLISH", L"SPANISH" });
			this->comboBox1->Location = System::Drawing::Point(96, 318);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(237, 37);
			this->comboBox1->TabIndex = 37;
			this->comboBox1->Text = L"LANGUAGE";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Red;
			this->textBox1->Location = System::Drawing::Point(209, 146);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(202, 37);
			this->textBox1->TabIndex = 34;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(42, 146);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(143, 39);
			this->label9->TabIndex = 33;
			this->label9->Text = L"PATIENT :";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(74, 2);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(305, 44);
			this->label5->TabIndex = 25;
			this->label5->Text = L"DEVELOPMENT";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(42, 215);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(157, 39);
			this->label10->TabIndex = 35;
			this->label10->Text = L"EXERCISES";
			// 
			// shapeContainer1
			// 
			this->shapeContainer1->Location = System::Drawing::Point(0, 0);
			this->shapeContainer1->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer1->Name = L"shapeContainer1";
			this->shapeContainer1->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) { this->rectangle2 });
			this->shapeContainer1->Size = System::Drawing::Size(460, 431);
			this->shapeContainer1->TabIndex = 32;
			this->shapeContainer1->TabStop = false;
			// 
			// rectangle2
			// 
			this->rectangle2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->rectangle2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->rectangle2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->rectangle2->BorderWidth = 7;
			this->rectangle2->CornerRadius = 70;
			this->rectangle2->Location = System::Drawing::Point(7, 54);
			this->rectangle2->Name = L"rectangle2";
			this->rectangle2->Size = System::Drawing::Size(441, 370);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(452, 619);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 50);
			this->button2->TabIndex = 26;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(333, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(355, 39);
			this->label4->TabIndex = 5;
			this->label4->Text = L" EXERCISE  SETUP  MENU ";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(238, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(491, 59);
			this->label3->TabIndex = 4;
			this->label3->Text = L"COGNITIVE FUNCTIONS";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(822, 40);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(157, 141);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 3;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(0, 40);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(220, 107);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 2;
			this->pictureBox5->TabStop = false;
			// 
			// rectangleShape5
			// 
			this->rectangleShape5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rectangleShape5.BackgroundImage")));
			this->rectangleShape5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rectangleShape5->Location = System::Drawing::Point(0, 523);
			this->rectangleShape5->Name = L"rectangleShape5";
			this->rectangleShape5->Size = System::Drawing::Size(1004, 180);
			// 
			// ovalShape1
			// 
			this->ovalShape1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ovalShape1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->ovalShape1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ovalShape1->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->ovalShape1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->ovalShape1->BorderWidth = 2;
			this->ovalShape1->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(56)), static_cast<System::Int32>(static_cast<System::Byte>(93)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->ovalShape1->Location = System::Drawing::Point(445, 18);
			this->ovalShape1->Name = L"ovalShape1";
			this->ovalShape1->Size = System::Drawing::Size(148, 143);
			this->ovalShape1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::ovalShape1_MouseDown_1);
			this->ovalShape1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::ovalShape1_MouseMove);
			this->ovalShape1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::ovalShape1_MouseUp);
			this->ovalShape1->Move += gcnew System::EventHandler(this, &MyForm::ovalShape1_Move);
			// 
			// shapeContainertrapezoid
			// 
			this->shapeContainertrapezoid->Location = System::Drawing::Point(0, 0);
			this->shapeContainertrapezoid->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainertrapezoid->Name = L"shapeContainertrapezoid";
			this->shapeContainertrapezoid->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) { this->rectangleShape4 });
			this->shapeContainertrapezoid->Size = System::Drawing::Size(1004, 180);
			this->shapeContainertrapezoid->TabIndex = 30;
			this->shapeContainertrapezoid->TabStop = false;
			// 
			// rectangleShape4
			// 
			this->rectangleShape4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->rectangleShape4->BackColor = System::Drawing::Color::Transparent;
			this->rectangleShape4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rectangleShape4.BackgroundImage")));
			this->rectangleShape4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rectangleShape4->BorderStyle = System::Drawing::Drawing2D::DashStyle::Custom;
			this->rectangleShape4->Location = System::Drawing::Point(649, 30);
			this->rectangleShape4->Name = L"rectangleShape4";
			this->rectangleShape4->Size = System::Drawing::Size(140, 116);
			this->rectangleShape4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::rectangleShape4_MouseDown);
			this->rectangleShape4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::rectangleShape4_MouseMove);
			this->rectangleShape4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::rectangleShape4_MouseUp);
			// 
			// shapeContainer3
			// 
			this->shapeContainer3->Location = System::Drawing::Point(0, 0);
			this->shapeContainer3->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainer3->Name = L"shapeContainer3";
			this->shapeContainer3->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) { this->rectangleShape2 });
			this->shapeContainer3->Size = System::Drawing::Size(1004, 180);
			this->shapeContainer3->TabIndex = 31;
			this->shapeContainer3->TabStop = false;
			this->shapeContainer3->Move += gcnew System::EventHandler(this, &MyForm::shapeContainer3_Move);
			// 
			// rectangleShape2
			// 
			this->rectangleShape2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->rectangleShape2->BackColor = System::Drawing::Color::Transparent;
			this->rectangleShape2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rectangleShape2.BackgroundImage")));
			this->rectangleShape2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->rectangleShape2->BorderStyle = System::Drawing::Drawing2D::DashStyle::Custom;
			this->rectangleShape2->Location = System::Drawing::Point(49, 25);
			this->rectangleShape2->Name = L"rectangleShape2";
			this->rectangleShape2->Size = System::Drawing::Size(157, 133);
			this->rectangleShape2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::rectangleShape2_MouseDown);
			this->rectangleShape2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::rectangleShape2_MouseMove);
			this->rectangleShape2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::rectangleShape2_MouseUp);
			// 
			// Resultpanel
			// 
			this->Resultpanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Resultpanel->BackColor = System::Drawing::Color::White;
			this->Resultpanel->Controls->Add(this->Download);
			this->Resultpanel->Controls->Add(this->button4);
			this->Resultpanel->Controls->Add(this->label32);
			this->Resultpanel->Controls->Add(this->label31);
			this->Resultpanel->Controls->Add(this->label30);
			this->Resultpanel->Controls->Add(this->label29);
			this->Resultpanel->Controls->Add(this->label28);
			this->Resultpanel->Controls->Add(this->label27);
			this->Resultpanel->Controls->Add(this->label26);
			this->Resultpanel->Controls->Add(this->label25);
			this->Resultpanel->Controls->Add(this->label24);
			this->Resultpanel->Controls->Add(this->label23);
			this->Resultpanel->Controls->Add(this->pictureBox18);
			this->Resultpanel->Controls->Add(this->label22);
			this->Resultpanel->Controls->Add(this->label21);
			this->Resultpanel->Controls->Add(this->pictureBox17);
			this->Resultpanel->Controls->Add(this->pictureBox16);
			this->Resultpanel->Controls->Add(this->pictureBox15);
			this->Resultpanel->Location = System::Drawing::Point(0, 0);
			this->Resultpanel->Name = L"Resultpanel";
			this->Resultpanel->Size = System::Drawing::Size(1004, 733);
			this->Resultpanel->TabIndex = 11;
			this->Resultpanel->Visible = false;
			// 
			// Download
			// 
			this->Download->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Download->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Download.BackgroundImage")));
			this->Download->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Download->FlatAppearance->BorderSize = 0;
			this->Download->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Download->Location = System::Drawing::Point(548, 642);
			this->Download->Name = L"Download";
			this->Download->Size = System::Drawing::Size(130, 45);
			this->Download->TabIndex = 19;
			this->Download->UseVisualStyleBackColor = true;
			this->Download->Click += gcnew System::EventHandler(this, &MyForm::Download_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(340, 642);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 45);
			this->button4->TabIndex = 18;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label32
			// 
			this->label32->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::Red;
			this->label32->Location = System::Drawing::Point(124, 274);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(0, 39);
			this->label32->TabIndex = 17;
			// 
			// label31
			// 
			this->label31->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(803, 485);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(39, 31);
			this->label31->TabIndex = 16;
			this->label31->Text = L"%";
			// 
			// label30
			// 
			this->label30->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(516, 485);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(39, 31);
			this->label30->TabIndex = 15;
			this->label30->Text = L"%";
			// 
			// label29
			// 
			this->label29->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::Red;
			this->label29->Location = System::Drawing::Point(678, 485);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(0, 33);
			this->label29->TabIndex = 14;
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Red;
			this->label28->Location = System::Drawing::Point(719, 432);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(0, 33);
			this->label28->TabIndex = 13;
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Red;
			this->label27->Location = System::Drawing::Point(719, 383);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 33);
			this->label27->TabIndex = 12;
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Red;
			this->label26->Location = System::Drawing::Point(390, 485);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 33);
			this->label26->TabIndex = 11;
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label25->Location = System::Drawing::Point(446, 432);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 33);
			this->label25->TabIndex = 10;
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Red;
			this->label24->Location = System::Drawing::Point(446, 383);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 33);
			this->label24->TabIndex = 9;
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Calibri", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Location = System::Drawing::Point(400, 274);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(80, 39);
			this->label23->TabIndex = 8;
			this->label23->Text = L"Date";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(35, 221);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(931, 382);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 6;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &MyForm::pictureBox18_Click);
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(300, 125);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(443, 29);
			this->label22->TabIndex = 5;
			this->label22->Text = L"SESSION PERFORMANCE SUMMARY";
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(305, 58);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(378, 45);
			this->label21->TabIndex = 4;
			this->label21->Text = L"COGNITIVE FUNCTIONS";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(0, 40);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(220, 107);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 3;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(-1, 693);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(1005, 40);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 2;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(0, 0);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(1005, 40);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 1;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(0, 40);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(220, 107);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 3;
			this->pictureBox9->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1005, 40);
			this->panel1->TabIndex = 28;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(0, 701);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1005, 40);
			this->panel3->TabIndex = 29;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(452, 200);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(140, 133);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 5;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(725, 187);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(162, 146);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 6;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(118, 200);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(157, 133);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 7;
			this->pictureBox13->TabStop = false;
			// 
			// shapeContainerOval
			// 
			this->shapeContainerOval->Location = System::Drawing::Point(0, 0);
			this->shapeContainerOval->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainerOval->Name = L"shapeContainerOval";
			this->shapeContainerOval->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) { this->ovalShape1 });
			this->shapeContainerOval->Size = System::Drawing::Size(1004, 180);
			this->shapeContainerOval->TabIndex = 29;
			this->shapeContainerOval->TabStop = false;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::Yellow;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(868, 46);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 82);
			this->button3->TabIndex = 27;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// exercise_panel
			// 
			this->exercise_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->exercise_panel->BackColor = System::Drawing::Color::White;
			this->exercise_panel->Controls->Add(this->pictureBox13);
			this->exercise_panel->Controls->Add(this->pictureBox12);
			this->exercise_panel->Controls->Add(this->pictureBox11);
			this->exercise_panel->Controls->Add(this->panel1);
			this->exercise_panel->Controls->Add(this->pictureBox9);
			this->exercise_panel->Controls->Add(this->panel6);
			this->exercise_panel->Controls->Add(this->panel3);
			this->exercise_panel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exercise_panel->ForeColor = System::Drawing::Color::White;
			this->exercise_panel->Location = System::Drawing::Point(0, 0);
			this->exercise_panel->Name = L"exercise_panel";
			this->exercise_panel->Size = System::Drawing::Size(1004, 733);
			this->exercise_panel->TabIndex = 22;
			this->exercise_panel->Visible = false;
			this->exercise_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::exercise_panel_Paint);
			// 
			// panel6
			// 
			this->panel6->AllowDrop = true;
			this->panel6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Controls->Add(this->shapeContainer3);
			this->panel6->Controls->Add(this->shapeContainerOval);
			this->panel6->Controls->Add(this->shapeContainertriangle);
			this->panel6->Controls->Add(this->shapeContainertrapezoid);
			this->panel6->Controls->Add(this->button3);
			this->panel6->Location = System::Drawing::Point(0, 523);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1004, 180);
			this->panel6->TabIndex = 30;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel6_Paint);
			// 
			// shapeContainertriangle
			// 
			this->shapeContainertriangle->Location = System::Drawing::Point(0, 0);
			this->shapeContainertriangle->Margin = System::Windows::Forms::Padding(0);
			this->shapeContainertriangle->Name = L"shapeContainertriangle";
			this->shapeContainertriangle->Shapes->AddRange(gcnew cli::array< Microsoft::VisualBasic::PowerPacks::Shape^  >(1) { this->rectangleShape1 });
			this->shapeContainertriangle->Size = System::Drawing::Size(1004, 180);
			this->shapeContainertriangle->TabIndex = 28;
			this->shapeContainertriangle->TabStop = false;
			// 
			// rectangleShape1
			// 
			this->rectangleShape1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->rectangleShape1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(189)));
			this->rectangleShape1->BackStyle = Microsoft::VisualBasic::PowerPacks::BackStyle::Opaque;
			this->rectangleShape1->BorderWidth = 2;
			this->rectangleShape1->Location = System::Drawing::Point(260, 20);
			this->rectangleShape1->Name = L"rectangleShape1";
			this->rectangleShape1->Size = System::Drawing::Size(140, 133);
			this->rectangleShape1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::rectangleShape1_MouseDown);
			this->rectangleShape1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::rectangleShape1_MouseMove);
			this->rectangleShape1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::rectangleShape1_MouseUp);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1004, 733);
			this->Controls->Add(this->exercise_panel);
			this->Controls->Add(this->Resultpanel);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Starting_panel);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Cognitive";
			this->TransparencyKey = System::Drawing::Color::Maroon;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Starting_panel->ResumeLayout(false);
			this->Starting_panel->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->Resultpanel->ResumeLayout(false);
			this->Resultpanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->exercise_panel->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	language = comboBox1->SelectedItem->ToString();
}

private: System::Void rectangleShape1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Starting_panel->Visible = false;
	panel2->Visible = true;
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	Starting_panel->Visible = false;
	panel2->Visible = true;
}
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	this->rectangle2->BorderColor = rectangle2->BorderColor.LightGreen;
	this->rectangle2->BorderWidth = 12;
	this->rectangleShape3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int64>(static_cast<System::Byte>(102)),
		static_cast<System::Int64>(static_cast<System::Byte>(153)), static_cast<System::Int64>(static_cast<System::Byte>(255)));
	this->rectangleShape3->BorderWidth = 7;
	patient = textBox1->Text;
	label32->Text = patient;
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	this->rectangle2->BorderColor = rectangle2->BorderColor.LightGreen;
	this->rectangle2->BorderWidth = 12;
	this->rectangleShape3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int64>(static_cast<System::Byte>(102)),
		static_cast<System::Int64>(static_cast<System::Byte>(153)), static_cast<System::Int64>(static_cast<System::Byte>(255)));
	this->rectangleShape3->BorderWidth = 7;

}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	this->rectangle2->BorderColor = rectangle2->BorderColor.LightGreen;
	this->rectangle2->BorderWidth = 12;
	this->rectangleShape3->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int64>(static_cast<System::Byte>(102)),
		static_cast<System::Int64>(static_cast<System::Byte>(153)), static_cast<System::Int64>(static_cast<System::Byte>(255)));
	this->rectangleShape3->BorderWidth = 7;
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	this->rectangleShape3->BorderColor = rectangleShape3->BorderColor.LightGreen;
	this->rectangleShape3->BorderWidth = 12;
	this->rectangle2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int64>(static_cast<System::Byte>(102)),
		static_cast<System::Int64>(static_cast<System::Byte>(153)), static_cast<System::Int64>(static_cast<System::Byte>(255)));
	this->rectangle2->BorderWidth = 7;
	patient = textBox6->Text;
	label32->Text = patient;
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	this->rectangleShape3->BorderColor = rectangleShape3->BorderColor.LightGreen;
	this->rectangleShape3->BorderWidth = 12;
	this->rectangle2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int64>(static_cast<System::Byte>(102)),
		static_cast<System::Int64>(static_cast<System::Byte>(153)), static_cast<System::Int64>(static_cast<System::Byte>(255)));
	this->rectangle2->BorderWidth = 7;
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	this->rectangleShape3->BorderColor = rectangleShape3->BorderColor.LightGreen;
	this->rectangleShape3->BorderWidth = 12;
	this->rectangle2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int64>(static_cast<System::Byte>(102)),
		static_cast<System::Int64>(static_cast<System::Byte>(153)), static_cast<System::Int64>(static_cast<System::Byte>(255)));
	this->rectangle2->BorderWidth = 7;
	
}

private: System::Void exercise_panel_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	
}
private: System::Void rectangleShape4_Click(System::Object^  sender, System::EventArgs^  e) {
	exercise_panel->Visible = false;
	Resultpanel->Visible = true;
}
private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ovalShape1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		
}
private: System::Void pictureBox14_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {

}
private: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void ovalShape1_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void ovalShape1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	
}


private: System::Void pictureBox19_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	
}

private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
	label24->Text = correct_selection.ToString();
	label25->Text = incorrect_selection.ToString();
	total = correct_selection + incorrect_selection;
	if (total >= 0) {
		score = correct_selection / total;
		int perc = score * 100;
		label26->Text = perc.ToString();
	}
	exercise_panel->Visible = false;
	Resultpanel->Visible = true;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
	label24->Text = correct_selection.ToString();
	label25->Text = incorrect_selection.ToString();
	total = correct_selection + incorrect_selection;
	if (total > 0) {
		score = correct_selection / total;
		int perc = score * 100;
		label26->Text = perc.ToString();
	}
	exercise_panel->Visible = false;
	Resultpanel->Visible = true;
	shapeContainer3->Visible = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = false;
	exercise_panel->Visible = true;
	if (language == "ENGLISH") {
		moveshape->Play();
	}
	if (language == "SPANISH") {
		moveshapespanish->Play();
	}
}

private: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
	panel2->Visible = false;
	exercise_panel->Visible = true;
}
private: System::Void pictureBox19_Click_1(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (trapmove == true) {
		panel6->Controls->Add(this->shapeContainertrapezoid);
		rectangleShape4->Top = trapstart_y;
		rectangleShape4->Left = trapstart_x;
	}
	if (ovalmove == true) {
		panel6->Controls->Add(this->shapeContainerOval);
		ovalShape1->Top = cirstart_y;
		ovalShape1->Left = cirstart_x;
	}
	if (squaremove == true) {
		panel6->Controls->Add(this->shapeContainertriangle);
		rectangleShape1->Top = squastart_y;
		rectangleShape1->Left = squastart_x;
	}
	if (trimove == true) {
		panel6->Controls->Add(this->shapeContainer3);
		rectangleShape2->Top = tristart_y;
		rectangleShape2->Left = tristart_x;
	}

	incorrect_selection = 0;
	correct_selection = 0;
	total = 0;
	score = 0;
	Resultpanel->Visible = false;
	panel2->Visible = true;
}
private: System::Void Download_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->Filter = "Word document|*.doc";
	saveFileDialog1->ShowDialog();
	 
	if (saveFileDialog1->FileName != "") {
		//System::IO::FileStream^ fs = (System::IO::FileStream^)saveFileDialog1->OpenFile();
	
	
	}

}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void rectangleShape2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	trimove = true;
	tristart_x = this->rectangleShape2->Location.X;
	tristart_y = this->rectangleShape2->Location.Y;
	
	exercise_panel->Controls->Add(this->shapeContainer3);
	rectangleShape2->Location = Point(49,553);
	
	
	x = e->X;
	y = e->Y;
	tridrag = true;
}
private: System::Void rectangleShape2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if(tridrag == true) {
		rectangleShape2->Top += e->Y - y;
		rectangleShape2->Left += e->X - x;
		
		shapeContainer3->BringToFront();
		MyForm::shapeContainer3->Invalidate();
		MyForm::panel6->Invalidate();
		MyForm::shapeContainerOval->Invalidate();
		MyForm::shapeContainertrapezoid->Invalidate();
		MyForm::shapeContainertriangle->Invalidate();
		//MyForm::panel6->Refresh();
		MyForm::pictureBox13->Invalidate();
		MyForm::pictureBox12->Invalidate();
		MyForm::pictureBox11->Invalidate();
		

	}
}
private: System::Void rectangleShape2_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	tridrag = false;
	bool rigthchoice = false;
	MyForm::panel6->Refresh();
	int y = pictureBox13->Top - 26;
	int y2 = pictureBox13->Top + 157;
	int x = pictureBox13->Left - 40;
	int x2 = pictureBox13->Left + 203;
	if (rectangleShape2->Top >= y && rectangleShape2->Top <= y2 && rectangleShape2->Left >= x && rectangleShape2->Left <= x2) {
		rigthchoice = true;
	}
	else
	{
		rigthchoice = false;
		if (language == "ENGLISH") {
			incorrect->Play();
		}
		if (language == "SPANISH") {
			incorrecto->Play();
		}
	}
	if (rigthchoice == true) {
		shapeContainer3->Visible = false;
		//shapeContainer3->SendToBack();
		rectangleShape2->Top = pictureBox13->Top;
		rectangleShape2->Left = pictureBox13->Left;
		if (language == "ENGLISH") {
			correct->Play();
		}
		if (language == "SPANISH") {
			correcto->Play();
		}
		correct_selection++;
	}

	if (rigthchoice == false) {
		incorrect_selection++;
		panel6->Controls->Add(shapeContainer3);
		rectangleShape2->Top = tristart_y;
		rectangleShape2->Left = tristart_x;
		
	}
}
private: System::Void rectangleShape1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {	
	squaremove = true;
	squastart_x = this->rectangleShape1->Location.X;
	squastart_y = this->rectangleShape1->Location.Y;
	
	exercise_panel->Controls->Add(this->shapeContainertriangle);
	rectangleShape1->Location = Point(260, 553);
	//shapeContainertriangle->Location.Y = 553;
	
	x = e->X;
	y = e->Y;
	squaredrag = true;
}
private: System::Void rectangleShape1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (squaredrag == true) {
		rectangleShape1->Top += e->Y - y;
		rectangleShape1->Left += e->X - x;
		shapeContainertriangle->BringToFront();

		MyForm::panel6->Invalidate();
		MyForm::shapeContainerOval->Invalidate();
		MyForm::shapeContainertrapezoid->Invalidate();
		MyForm::shapeContainer3->Invalidate();
		MyForm::pictureBox13->Invalidate();
		MyForm::pictureBox12->Invalidate();
		MyForm::pictureBox11->Invalidate();
		

	}
}
private: System::Void rectangleShape1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	squaredrag = false;
	MyForm::panel6->Refresh();
	int y = pictureBox11->Top - 26;
	int y2 = pictureBox11->Top + 157;
	int x = pictureBox11->Left - 40;
	int x2 = pictureBox11->Left + 180;
	bool rigthchoice = false;
	if (rectangleShape1->Top >= y && rectangleShape1->Top <= y2 && rectangleShape1->Left >= x && rectangleShape1->Left <= x2) {
		rigthchoice = true;
		if (language == "ENGLISH") {
			correct->Play();
		}
		if (language == "SPANISH") {
			correcto->Play();
		}
	}
	else
	{
		rigthchoice = false;
		if (language == "ENGLISH") {
			incorrect->Play();
		}
		if (language == "SPANISH") {
			incorrecto->Play();
		}
	}

	if (rigthchoice == true) {
		rectangleShape1->Top = pictureBox11->Top;
		rectangleShape1->Left = pictureBox11->Left;
		correct_selection++;

	}
	if (rigthchoice == false) {
		incorrect_selection++;
		panel6->Controls->Add(shapeContainertriangle);
		rectangleShape1->Top = squastart_y;
		rectangleShape1->Left = squastart_x;
	}
}
private: System::Void ovalShape1_MouseDown_1(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	ovalmove = true;
	cirstart_x = this->ovalShape1->Location.X;
	cirstart_y = this->ovalShape1->Location.Y;
	
	exercise_panel->Controls->Add(this->shapeContainerOval);
	
	
	ovalShape1->Location = Point(445, 553);

	x = e->X;
	y = e->Y;
	
	ovaldrag = true;
}
private: System::Void ovalShape1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (ovaldrag == true) {     
		ovalShape1->Top += e->Y - y;
		ovalShape1->Left += e->X - x;
		shapeContainerOval->BringToFront();
		                                                                
		MyForm::panel6->Invalidate();
		MyForm::shapeContainer3->Invalidate();
		MyForm::shapeContainertrapezoid->Invalidate();
		MyForm::shapeContainertriangle->Invalidate();
		MyForm::pictureBox13->Invalidate();
		MyForm::pictureBox12->Invalidate();
		MyForm::pictureBox11->Invalidate();
	
		

	}
}
private: System::Void ovalShape1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	ovaldrag = false;
	MyForm::panel6->Refresh();
	bool rigthchoice = false;
	int y = pictureBox12->Top - 26;
	int y2 = pictureBox12->Top + 157;
	int x = pictureBox12->Left - 30;
	int x2 = pictureBox12->Left + 180;
	if (ovalShape1->Top >= y && ovalShape1->Top <= y2 && ovalShape1->Left >= x && ovalShape1->Left <= x2) {
		rigthchoice = true;
		
		if (language == "ENGLISH") {
			correct->Play();
		}
		if (language == "SPANISH") {
			correcto->Play();
		}
	}
	else
	{
		rigthchoice = false;
		if (language == "ENGLISH") {
			incorrect->Play();
		}
		if (language == "SPANISH") {
			incorrecto->Play();
		}
	}
	if (rigthchoice == true) {
		shapeContainerOval->SendToBack();
		ovalShape1->Top = pictureBox12->Top;
		ovalShape1->Left = pictureBox12->Left;
		correct_selection++;

	}
	if (rigthchoice == false) {
		incorrect_selection++;
		panel6->Controls->Add(this->shapeContainerOval);
		ovalShape1->Top = cirstart_y;
		ovalShape1->Left = cirstart_x;
		
	}
	
}
private: System::Void rectangleShape4_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	trapmove = true;
	trapstart_x = this->rectangleShape4->Location.X;
	trapstart_y = this->rectangleShape4->Location.Y;

	exercise_panel->Controls->Add(this->shapeContainertrapezoid);
	rectangleShape4->Location = Point(649, 553);

	x = e->X;
	y = e->Y;
	trapdrag = true;
}
private: System::Void rectangleShape4_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (trapdrag == true) {
		rectangleShape4->Top += e->Y - y;
		rectangleShape4->Left += e->X - x;
		shapeContainertrapezoid->BringToFront();
		
		MyForm::panel6->Invalidate();
		/*MyForm::shapeContainerOval->Invalidate();
		MyForm::shapeContainer3->Invalidate();
		MyForm::shapeContainertriangle->Invalidate();*/
		MyForm::pictureBox13->Invalidate();
		MyForm::pictureBox12->Invalidate();
		MyForm::pictureBox11->Invalidate();
		
	
	}
}
private: System::Void rectangleShape4_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	trapdrag = false;
	MyForm::panel6->Refresh();
	bool rigthchoice = false;
	if (rectangleShape4->Top >= 174 && rectangleShape4->Top <= 357 && rectangleShape4->Left >= 704 && rectangleShape4->Left <= 904) {
		rigthchoice = false;
		if (language == "ENGLISH") {
			incorrect->Play();
		}
		if (language == "SPANISH") {
			incorrecto->Play();
		}
	}
	if (rectangleShape4->Top >= 174 && rectangleShape4->Top <= 357 && rectangleShape4->Left >= 78 && rectangleShape4->Left <= 321) {
		rigthchoice = false;
		if (language == "ENGLISH") {
			incorrect->Play();
		}
		if (language == "SPANISH") {
			incorrecto->Play();
		}

	}
	if (rectangleShape4->Top >= 174 && rectangleShape4->Top <= 357 && rectangleShape4 ->Left >= 425 && rectangleShape4->Left <= 625) {
		rigthchoice = false;
		if (language == "ENGLISH") {
			incorrect->Play();
		}
		if (language == "SPANISH") {
			incorrecto->Play();
		}
	}
	if (rigthchoice == false) {
		incorrect_selection++;
		panel6->Controls->Add(this->shapeContainertrapezoid);
		rectangleShape4->Top = trapstart_y;
		rectangleShape4->Left = trapstart_x;
		incorrect->Play();
	}
}

private: System::Void ovalShape1_Move(System::Object^  sender, System::EventArgs^  e) {
	
}		 		 
private: System::Void shapeContainer3_Move(System::Object^  sender, System::EventArgs^  e) {
	if (tridrag == true) {

		shapeContainer3->BringToFront();
	}
}
private: System::Void panel6_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}


