`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: Politechnika Wroc�awska
// Engineer: Rados�aw Sawicki 243153
//
// Create Date:   11:35:04 05/12/2020
// Design Name:   napoje_beh
// Module Name:   E:/PWR/sem 6/WSC/PROJEKT/Projekt/WSC/napoje_tb.v
// Project Name:  WSC
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: napoje_beh
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module napoje_tb;

	// Inputs
	reg user_ok;
	reg user_break;
	reg user_sel;
	reg clk;
	reg reset;
	reg nr_w;
	reg [2:0] adres;
	reg [7:0] dane_we;
	reg moneta_in;
	//zmienne pomocnicze
	reg debug_configure; //okresla poczatek procesu konfiguracji rejestrow
	reg setup_registry; //informuje o trwajacym zapisie do rejestru
	reg read_registry; //informuje o trwajacym odczycie z rejestru
	integer iterator; //iterator wykorzystywany we wszystkich petlach
	reg debug_buy; //okresla poczatek procesu zakupu napoju
	reg debug_podajnik;//okresla poczatek procesu zliczania ilo�ci sygna��w ,,podajnik_trig". jest to podproces aktywowany wewn�trz debug_buy
	reg debug_reszta_trig; //informuje o stanie ,,reszta_out"
	reg [7:0] debug_ile_before; //ilo�� napoju w zasobniku przed zakupem
	reg [1:0] debug_napoj; //wybrany nap�j
	reg [1:0] debug_moc; //wybrana moc
	reg [4:0] debug_coins;//dysponowane monety
	reg [2:0] debug_price;//cena wybranego napoju odczytana z rejestru maszyny
	reg [4:0] debug_price_power; //cena wybranego napoju * wybrana moc (debug_napoj*debug_moc)
	reg [2:0] debug_podajnik_count;//ilo�� zliczonych aktywacji ,,podajnik_trig". wykorzystywana wewn�trz procesu aktywowanego przez debug_podajnik
	reg debug_final; //okresla poczatek procesu wy�wietlania informacji ko�cowych o procesie. aktywowany wewn�trz debug_podajnik
	reg debug_clear_debug;//okresla poczatek procesu zerowania zmiennych pomocniczych i przywr�cenia maszyny do stanu pocz�tkowego
	integer f; //zmienna pozwalaj�ca na obs�ug� plik�w tekstowych

	// Outputs
	wire [7:0] dane_wy;
	wire podajnik_trig;
	wire [1:0] nr_podajnika;
	wire reszta_out;

	// Instantiate the Unit Under Test (UUT)
	napoje_beh uut (
		.user_ok(user_ok), 
		.user_break(user_break), 
		.user_sel(user_sel), 
		.clk(clk), 
		.reset(reset), 
		.nr_w(nr_w), 
		.adres(adres), 
		.dane_we(dane_we), 
		.dane_wy(dane_wy), 
		.moneta_in(moneta_in), 
		.podajnik_trig(podajnik_trig), 
		.nr_podajnika(nr_podajnika), 
		.reszta_out(reszta_out)
	);

	initial begin
		// Initialize Inputs
		user_ok = 0;
		user_break = 0;
		user_sel = 0;
		clk = 0;
		reset = 1;
		nr_w = 0;
		adres = 0;
		dane_we = 0;
		moneta_in = 0;
		//zerowanie zmiennych pomocniczych na poczatku testu
		debug_buy =0; 
		debug_podajnik=0;
		debug_reszta_trig=0;
		debug_ile_before=0;
		debug_price_power = 0;
		debug_napoj = 0;
		debug_moc=0;
		debug_coins=0;
		debug_price=0;
		debug_podajnik_count=0;
		debug_final=0;
		debug_configure=0;
		debug_clear_debug=0;
		

																// 100 ns globalny reset
		#100;
		reset = 0;
																//ustawienie warto�ci wszystkich rejestr�w automatu. czas trwania ~500ns
		debug_configure = 1;		
																//okreslenie rodzaju i mocy napoju, ilosci dysponowanych monet oraz rozpoczecie procesu kupowania
		#500 debug_coins = 21;
		debug_moc = 3;
		debug_napoj=3;
		debug_buy = 1;
																//czyszczenie zmiennych pomocniczych oraz ustawienie rejestrow ,,napoj" i ,,moc" do wartosci domyslnej (2'b01)
		#1500 debug_clear_debug = 1;
																//okreslenie rodzaju i mocy napoju, ilosci dysponowanych monet oraz rozpoczecie procesu kupowania
		#200 debug_coins = 20;
		debug_moc = 2;
		debug_napoj=3;
		debug_buy = 1;
		
		
		
	end
	
	always@(posedge debug_configure) //proces aktywowany zboczem narastaj�cym zmiennej debug_configure. wykorzystuje on trzy p�tle:
												//-konfiguracja rejestr�w kawa_ile,sok_ile,herbata_ile
												//-konfiguracja rejestr�w kawa_cena,sok_cena,herbata_cena
												//-wy�wietlenie zawarto�ci wszystkich rejestr�w
	begin
		f = $fopen("output.txt","w");
		$fwrite(f,"----------------------Konfiguracja rejestr�w----------------------\n");
		$display("----------------------Konfiguracja rejestr�w----------------------\n");
		$fclose(f);
		for (iterator=1;iterator<4;iterator=iterator+1) // konfiguracja kawa,herbata,sok ile
			begin
				adres=iterator[2:0];
				dane_we = 8'b0000_1100;
				#10 setup_registry = 1;
				#10 setup_registry=0;
				nr_w = 0;
				dane_we = 0;
				adres = 0;
			end
		for (iterator=5;iterator<8;iterator=iterator+1) // konfiguracja kawa,herbata,sok cena
			begin
				adres=iterator[2:0];
				dane_we = iterator[3:0];
				#10 setup_registry = 1;
				#10 setup_registry=0;
				nr_w = 0;
				dane_we = 0;
				adres = 0;
			end
		f = $fopen("output.txt","a+");
		$fwrite(f,"----------------------Odczyt rejestr�w----------------------\n");
		$display("----------------------Odczyt rejestr�w----------------------\n");
		$fclose(f);
		for (iterator=0;iterator<8;iterator=iterator+1) // odczytanie wartosci wszystkich rejestr�w
			begin
				setup_registry=0;
				adres=iterator[2:0];
				#10 read_registry = 1;
				#10 read_registry = 0;
				nr_w = 0;
				adres = 0;
			end
		#10 debug_configure = 0;
	end
	
	always @(posedge clk) //proces zmieniaj�cy warto�� nr_w w zale�no�ci czy chcemy odczytywa� (nr_w = 1) czy zapisywa� do rejestr�w (nr_w = 0)
		begin
			if(setup_registry) begin
				nr_w = 1;
				f = $fopen("output.txt","a+");
				$fwrite(f,"Zapis do rejestru: adres =%d, dane_we=%b\n",adres, dane_we);
				$display("Zapis do rejestru: adres =%d, dane_we=%b",adres, dane_we);
				$fclose(f);
			end else begin
				if(read_registry) begin
					nr_w = 0;
					f = $fopen("output.txt","a+");
					$fwrite(f,"Odczyt z rejestru: adres =%d, dane_wy=%b\n",adres, dane_wy);
					$display("Odczyt z rejestru: adres =%d, dane_wy=%b",adres, dane_wy);
					$fclose(f);
				end
			end
		end
	
	always@(posedge debug_clear_debug) //czyszczenie zawarto�ci wszystkich zmiennych pomocniczych, aktywowane zboczem narastaj�cym sygna�u debug_clear_debug
		begin
			debug_buy =0; 
			debug_podajnik=0;
			debug_reszta_trig=0;
			debug_ile_before=0;
			debug_price_power = 0;
			if(debug_napoj == 2) begin //je�eli wybrano w poprzednim te�cie nap�j nr 2. to zmiana na nap�j nr.1 przez dwukrotne klikni�cie user_sel
				#20 user_sel = 1;
				#20 user_sel = 0;
				#20 user_sel = 1;
				#20 user_sel = 0;
				#20 user_ok = 1; //przej�cie do wyboru mocy w celu przywr�cenia jej do warto�ci domy�lnej
				#20 user_ok = 0;
			end 
			if(debug_napoj == 3) begin //je�eli wybrano w poprzednim te�cie nap�j nr 3. to zmiana na nap�j nr.1 przez jednokrotne klikni�cie user_sel
				#20 user_sel = 1;
				#20 user_sel = 0;
				#20 user_ok = 1; //przej�cie do wyboru mocy w celu przywr�cenia jej do warto�ci domy�lnej
				#20 user_ok = 0;
			end 
			debug_napoj=0; 
			if(debug_moc == 2) begin //je�eli wybrano w poprzednim te�cie moc = 2 to zmiana na  moc = 1 przez dwukrotne klikni�cie user_sel
				#20 user_sel = 1;
				#20 user_sel = 0;
				#20 user_sel = 1;
				#20 user_sel = 0;
				#20 user_break = 1; //powr�t do stanu 001, czyli wyb�r napoju
				#20 user_break = 0;
			end 
			if(debug_moc == 3) begin //je�eli wybrano w poprzednim te�cie moc = 3 to zmiana na  moc = 1 przez jednokrotne klikni�cie user_sel
				#20 user_sel = 1;
				#20 user_sel = 0;
				#20 user_break = 1; //powr�t do stanu 001, czyli wyb�r napoju
				#20 user_break = 0;
			end
			debug_moc=0;
			debug_coins=0;
			debug_price=0;
			debug_podajnik_count=0;
			debug_final=0;
			debug_configure=0;
			debug_clear_debug=0; //zako�czenie procesu czyszczenia zmiennych pomocniczych przez ustawienie warto�ci debug_clear_debug  = 0
		end
	
	always@(posedge debug_buy) //g��wny proces zakupu napoju
		begin
			nr_w = 0; //okre�lenie nr_w = 0 w celu odczytu interesuj�cych nas warto�ci z rejestr�w
			f = $fopen("output.txt","a+");
			$fwrite(f,"----------------------Rozpocz�cie procesu----------------------\n");
			$display("----------------------Rozpocz�cie procesu----------------------\n");
			$fclose(f);
			case (debug_napoj) //w zale�no�ci od wybranego napoju odczytujemy jego cen� z rejestru o odpowiednim adresie
				1: adres = 5;
				2: adres = 6;
				3: adres = 7;
				default: adres = 5;
			endcase
			#20 debug_price = dane_wy; //zapisanie odczytanej ceny do zmiennej debug_price
			
			debug_price_power = debug_price*debug_moc; //obliczenie spodziewanej ceny napoju na podstawie odczytanej ceny debug_price oraz ��danej mocy debug_moc
			
			case (debug_napoj) //w zale�no�ci od wybranego napoju odczytujemy ilo�� porcji dost�pnych w zasobniku
				1: adres = 1;
				2: adres = 2;
				3: adres = 3;
				default: adres = 1;
			endcase
			#20 debug_ile_before = dane_wy; //zapisanie odczytanej warto�ci porcji do zmiennej debug_ile_before
			
			for(iterator = 1; iterator < debug_napoj; iterator = iterator +1) //p�tla symuluj�ca klikni�cie przycisku user_sel odpowiedni� ilo�� razy w zale�no�ci od wybranego napoju.
																									//w przypadku wybrania domy�lnego napoju nr.1 p�tla nie wykona si� ze wzgl�du na warunek iterator<debug_napoj
				begin
					#20 user_sel = 1;
					#20 user_sel = 0;
				end
			f = $fopen("output.txt","a+");
			$fwrite(f,"Wybrany napoj: %d\n",debug_napoj);
			$display("Wybrany napoj: %d",debug_napoj);
			$fclose(f);
				
			#20 user_ok = 1; //przejscie do stanu wyboru mocy
			#20 user_ok = 0;
			
			for(iterator = 1; iterator < debug_moc; iterator = iterator +1)//p�tla symuluj�ca klikni�cie przycisku user_sel odpowiedni� ilo�� razy w zale�no�ci od wybranej mocy.
																								//w przypadku wybrania domy�lnej mocy = 1 p�tla nie wykona si� ze wzgl�du na warunek iterator<debug_moc
				begin
					#20 user_sel = 1;
					#20 user_sel = 0;
				end
			f = $fopen("output.txt","a+");
			$fwrite(f,"Wybrana moc: %d\n",debug_moc);
			$display("Wybrana moc: %d",debug_moc);
			$fclose(f);
			
			
			
			if(debug_ile_before < debug_moc) begin //w przypadku je�eli ilo�� porcji w zasobniku jest mniejsza od ��danej mocy cofni�cie do stanu wyboru napoju, nast�pnie
																//czyszczenie zmiennych pomocniczych i przywr�cenie maszyny do stanu domy�lnego
				f = $fopen("output.txt","a+");
				$fwrite(f,"Niewystarczaj�ca ilo�� napoju w zasobniku. Obecna ilo��: %d, wymagana ilo��: %d\n",debug_ile_before,debug_moc);
				$display("Niewystarczaj�ca ilo�� napoju w zasobniku. Obecna ilo��: %d, wymagana ilo��: %d",debug_ile_before,debug_moc);
				$fwrite(f,"Powr�t do stanu wyboru 001\n");
				$display("Powr�t do stanu wyboru 001");
				$fwrite(f,"\n----------------------Zako�czenie procesu----------------------\n");
				$display("\n----------------------Zako�czenie procesu----------------------");
				$fclose(f);
				#20 user_break = 1;
				#20 user_break = 0;
				debug_clear_debug = 1;
				
			end else begin
			
				if(debug_coins < debug_price_power) begin//w przypadku je�eli ilo�� przygotowanych monet jest mniejsza od ceny napoju, cofni�cie do stanu wyboru napoju, nast�pnie
																	  // czyszczenie zmiennych pomocniczych i przywr�cenie maszyny do stanu domy�lnego
					f = $fopen("output.txt","a+");
					$fwrite(f,"Zbyt ma�o przygotowanych monet. Potrzebne monety: %d, przygotowane monety: %d\n",debug_price_power,debug_coins);
					$display("Zbyt ma�o przygotowanych monet. Potrzebne monety: %d, przygotowane monety: %d",debug_price_power,debug_coins);
					$fwrite(f,"Powr�t do stanu wyboru 001\n");
					$display("Powr�t do stanu wyboru 001");
					$fwrite(f,"\n----------------------Zako�czenie procesu----------------------\n");
					$display("\n----------------------Zako�czenie procesu----------------------");
					$fclose(f);
					#20 user_break = 1;
					#20 user_break = 0;
					debug_clear_debug = 1;
				end else begin  //je�eli spe�nione zostan� warunki: odpowiednia ilo�� porcji w zasobniku, wystarczaj�ca ilo�� przygotowanych monet
					#20 user_ok = 1; //przej�cie do stanu p�atno�ci
					#20 user_ok = 0;
					
					for(iterator = 0; iterator < debug_coins; iterator = iterator +1) //symulacja wrzucania kolejnych monet do maszyny
						begin
							#20 moneta_in = 1;
							#20 moneta_in = 0;
						end
					f = $fopen("output.txt","a+");
					$fwrite(f,"Wrzucanie %d monet\n",debug_coins);
					$display("Wrzucanie %d monet",debug_coins);
					$fclose(f);
					
					adres = 000; //zmiana adresu odczytywanego rejestru na 000, aby odczyta� aktualny stan maszyny
					#20 user_ok = 1; //przej�cie do stanu przygotowania napoju
					#20 user_ok = 0;
					#20;
					
					if (dane_wy == 6) begin //je�eli aktualny stan = 110, czyli przygotowanie napoju, aktywacja procesu zliczania sygna��w podajnik_trig
						debug_podajnik = 1;
					end
				end
			end

			
		end
	
	always@(posedge clk)
		begin
			if(debug_podajnik) begin //aktywacja procesu nast�puje za pomoc� zbocza narastaj�cego clk, poniewa� przy nim aktywuje si� podajnik_trig
											 //dlatego konieczny jest warunek sprawdzaj�cy czy chcemy wywo�a� ten proces
				if(podajnik_trig) begin //zliczanie sygna��w podajnik_trig
					debug_podajnik_count = debug_podajnik_count + 1; 
				end
				
				if(dane_wy == 4) begin //je�eli nast�pi�o przej�cie do stanu wydawania reszty wy�wietlane s� wiadomo�ci o stanie zakupu
					
					case (debug_napoj) //okre�lenie adresu rejestru przechowuj�cego informacje o pozosta�ych porcjach w zasobniku. wykorzystane w procesie debug_final
						1: adres = 1;
						2: adres = 2;
						3: adres = 3;
					default: adres = 1;
					endcase
					
					
					
					if(nr_podajnika == debug_napoj)begin //sprawdzenie zgodno�ci numeru podajnika z wybranym napojem
						f = $fopen("output.txt","a+");
						$fwrite(f,"Nr. podajnika %d zgodny z napojem %d\n",nr_podajnika, debug_napoj);
						$display("Nr. podajnika %d zgodny z napojem %d",nr_podajnika, debug_napoj);
						$fclose(f);
					end else begin
						f = $fopen("output.txt","a+");
						$fwrite(f,"Nr. podajnika %d zgodny z napojem %d\n",nr_podajnika, debug_napoj);
						$display("Nr. podajnika %d zgodny z napojem %d",nr_podajnika, debug_napoj);
						$fclose(f);
					end
					
					if(debug_podajnik_count == debug_moc)begin//sprawdzenie zgodno�ci ilo�ci otrzymanych porcji z wybran� moc�
						f = $fopen("output.txt","a+");
						$fwrite(f,"Porcje napoju %d zgodne z wybrana moca %d\n",debug_podajnik_count, debug_moc);
						$display("Porcje napoju %d zgodne z wybrana moca %d",debug_podajnik_count, debug_moc);
						$fclose(f);
					end else begin
						f = $fopen("output.txt","a+");
						$fwrite(f,"Porcje napoju %d niezgodne z wybrana moca %d\n",debug_podajnik_count, debug_moc);
						$display("Porcje napoju %d niezgodne z wybrana moca %d",debug_podajnik_count, debug_moc);
						$fclose(f);
					end
					
					if(reszta_out)begin //je�eli reszta out = 1 otrzymujemy informacj� o nale�ytej reszcie
						f = $fopen("output.txt","a+");
						$fwrite(f,"Zwr�cono reszt�\n");
						$display("Zwr�cono reszt�");
						$fclose(f);
						debug_reszta_trig = 1;
						debug_podajnik = 0; //zako�czenie procesu zliczania sygna�u podajnik_trig
						#20 debug_final = 1; //rozpocz�cie procesu finalizacji zakupu
					end else begin
						f = $fopen("output.txt","a+");
						$fwrite(f,"Brak nale�nej reszty\n");
						$display("Brak nale�nej reszty");
						$fclose(f);
						debug_podajnik = 0;
						#20 debug_final = 1;
					end
			
				end
			end
		end
	
	always@(posedge clk)
		begin
			if(debug_final)begin //proces aktywowany zboczem narastaj�cym zegara, wi�c konieczny jest warunek okre�laj�cy czy proces zostanie wykonany
					if(dane_wy == debug_ile_before - debug_moc)begin //sprawdzenie czy z zasobnika uby�a odpowiednia ilo�� porcji
						debug_reszta_trig = 0;
						f = $fopen("output.txt","a+");
						$fwrite(f,"Pozostalo porcji: (%b - %b) = %b\n",debug_ile_before, debug_moc,dane_wy);
						$display("Pozostalo porcji: (%b - %b) = %b ",debug_ile_before, debug_moc,dane_wy);
						$fclose(f);
					end else begin
						debug_reszta_trig = 0;
						f = $fopen("output.txt","a+");
						$fwrite(f,"Blad obliczania pozostalych porcji. Powinno byc (%b - %b) = %b, jest %b\n",debug_ile_before, debug_moc,debug_ile_before - debug_moc,dane_wy);
						$display("Blad obliczania pozostalych porcji. Powinno byc (%b - %b) = %b, jest %b",debug_ile_before, debug_moc,debug_ile_before - debug_moc,dane_wy);
						$fclose(f);
					end
					f = $fopen("output.txt","a+");
					$fwrite(f,"Zakonczono zakup poprawnie, powrot do stanu wyboru 001\n");
					$display("Zakonczono zakup poprawnie, powrot do stanu wyboru 001");
					$fwrite(f,"\n----------------------Zako�czenie procesu----------------------\n");
					$display("\n----------------------Zako�czenie procesu----------------------");
					$fclose(f);
					debug_buy = 0; //zako�czenie procesu zakupu
					debug_final = 0; //zako�czenie procesu finalizacji zakupu
			end
		end
	
	always
		begin
			#10 clk =~clk;
		end
      
endmodule

