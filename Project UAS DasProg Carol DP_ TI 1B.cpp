/*	

	PROJECT UAS DASAR PEMROGRAMMAN		
	
	NAMA	:	CAROL DWI PUTRA		
	PRODI	:	TEKNIK INFORMATIKA 1-B
	NIM		:	2230511084
	JUDUL	:	"Paimon's Bargain Shop" PROGRAM TOPUP ITEM GAME GENSHIN IMPACT

*/

#include <iostream>
#include <string>

using namespace std;

struct Outfit
{
	string diluc;
	string ayaka;
	string barbara;
	string keqing;
	string jean;
	string ningguang;
	string fischl;
	string lisa;
};

int main() 
{
	Outfit skin;
	skin.diluc = "Red Dead of Night";
	skin.keqing = "Opulent Splendor";
	skin.ayaka = "Springbloom Missive";
	skin.jean = "Sea Breeze Dandelion";
	skin.barbara = "Summertime Sparkle";
	skin.fischl = "Ein Immernachtstraum";
	skin.lisa = "A Sobriquet Under Shade";
	skin.ningguang = "Orchid's Evening Gown";
	
	
	int genesis_crystal [6] = {16000, 79000, 249000, 479000, 799000, 1599000};
	int character_outfit [2] = {400000, 550000};
	int battle_pass [1] = {329000};
	int welkin_moon [1] = {79000};
	
	int price, amount, total, purchasetotal, cash, change, discount;
	char nickname[1];
	string input, kode, server;
	int admin = 2500;
	int uid[2];
	
	do 
	{
		system ("cls");
		
		cout << "|===============================================|" << endl;
		cout << "|	     PAIMON'S BARGAIN SHOP		|			  " << endl;
		cout << "|===============================================|" << endl;
		cout << "|						|						  " << endl;
		cout << "| 	1.	Genesis Crystal			|				  " << endl;
		cout << "| 	2.	Battle Pass			|					  " << endl;
		cout << "| 	3.	Blessing of The Welkin Moon	|			  " << endl;
		cout << "|	4.	Chatacter's Outfit		|				  " << endl;
		cout << "|						|						  " << endl;
		cout << "|===============================================|" << endl << endl;
		
		cout << " Hello Traveler! Paimon Is Here [> v <] !! Please Enter Your Account Information Below! " << endl << endl;
		cout << " Nickname	: ";
		cin >> nickname;
		cout << " UID 		: ";
		cin >> uid[0];
		cout << " Server  	: ";
		cin >> server;
		cout << endl;
		
		cout << "|==========================================================|" << endl;
		cout << "|     	   	List of Paimonial Bargain's  	  	   |" << endl;
		cout << "|==========================================================|" << endl;
		cout << "|						           |" << endl;
		cout << "| 1. 60 Genesis Crystal = Rp." << genesis_crystal[1] << " 	  	  	   |"<< endl;
		cout << "| 2. 300 Genesis Crystal = Rp." << genesis_crystal[2] << " 	  	  	   |"<< endl;
		cout << "| 3. 980 Genesis Crystal = Rp." << genesis_crystal[3] << " 	  	  	   |" << endl;
		cout << "| 4. 1980 Genesis Crystal = Rp." << genesis_crystal[4] << " 	  	  	   |" << endl;
		cout << "| 5. 3280 Genesis Crystal = Rp." << genesis_crystal[5] << " 	  	  	   |" << endl;
		cout << "| 6. 6480 Genesis Crystal = Rp." << genesis_crystal[6] << " 	  	  	   |" << endl;
		cout << "|==========================================================|" << endl;
		cout << "| 7. Gnostic Chorus Battle Pass = Rp." << battle_pass[0] << " 	  	   |" <<endl;
		cout << "| 8. Blessing of The Welkin Moon = Rp." << welkin_moon[0] << " 	  	   |" << endl;
		cout << "|==========================================================|" << endl;
		cout << "| 9. Diluc - " << skin.diluc << " = Rp." << character_outfit[1] << " 	  	   |" << endl;
		cout << "| 10. Keqing - "  << skin.keqing << " = Rp." << character_outfit[0] << " 	  	   |" << endl;
		cout << "| 11. Ayaka - "  << skin.ayaka << " = Rp." << character_outfit[0] << " 	  	   |" << endl;
		cout << "| 12. Jean - "  << skin.jean << " = Rp." << character_outfit[0] << " 	  	   |" << endl;
		cout << "| 13. Barbara - "  << skin.barbara << " = Rp." << character_outfit[0] << " 	  	   |" << endl;
		cout << "| 14. Fischl - "  << skin.fischl << " = Rp." << character_outfit[0] << " 	   |" << endl;
		cout << "| 15. Lisa - "  << skin.lisa << " = Rp." << character_outfit[0] << " 	   |" << endl;
		cout << "| 16. Ningguang - "  << skin.ningguang << " = Rp." << character_outfit[0] << " 	   |" << endl;
		cout << "|						           |" << endl;
		cout << "|==========================================================|" << endl << endl;
		
		cout << endl;
		cout << " Traveler! Which One Would Yo Like To Choose (1-16) : ";
		cin >> kode;
		cout << " Amount of Order	: ";
		cin >> amount;
		cout << endl;
		
		if (kode == "1")
		{
			cout << " [60 Genesis Crystal] " << endl;
			price = 16000;
		} 
		else if (kode == "2")
		{
			cout << " [300 Genesis Crystal] " << endl;
			price = 79000;
		} 
		else if (kode == "3")
		{
			cout << " [980 Genesis Crystal] " << endl;
			price = 249000;
	    } 
		else if (kode == "4")
		{
			cout << " [1980 Genesis Crystal] " << endl;
			price = 479500;
		} 
		else if (kode == "5")
		{
			cout << " [3280 Genesis Crystal] " << endl;
			price = 799000;
		} 
		else if (kode == "6")
		{
			cout << " [6480 Genesis Crystal] " << endl;
			price = 1599000;
		} 
		else if (kode == "7")
		{
			cout << " [Gnostic Chorus Battle Pass] " << endl;
			price = 329000;
	    } 
		else if (kode == "8")
		{
			cout << " [Blessing of The Welkin Moon] " << endl;
			price = 79000; 
	    }
		else if (kode == "9")
		{
			cout <<  "[ Diluc - " << skin.diluc << " ]" << endl;
			price = 550000; 
	    }
		else if (kode == "10")
		{
			cout <<  "[ Keqing - " << skin.keqing << " ]" << endl;
			price = 400000; 
	    }
	    else if (kode == "11")
		{
			cout <<  "[ Ayaka - " << skin.ayaka << " ]" << endl;
			price = 400000; 
	    }
	    else if (kode == "12")
		{
			cout <<  "[ Jean - " << skin.jean << " ]" << endl;
			price = 400000; 
	    }
	    else if (kode == "13")
		{
			cout <<  "[ Barbara - " << skin.barbara << " ]" << endl;
			price = 400000; 
	    }
	    else if (kode == "14")
		{
			cout <<  "[ Fischl - " << skin.fischl << " ]" << endl;
			price = 400000; 
	    }
	    else if (kode == "15")
		{
			cout <<  "[ Lisa - " << skin.lisa << " ]" << endl;
			price = 400000; 
	    }
	    else if (kode == "16")
		{
			cout <<  "[ Ningguang - " << skin.ningguang << " ]" << endl;
			price = 400000; 
	    }
		else {
	    	cout << " Whoopsie, Traveler. You Are Either Choosed A Number That Are None On The List Nor You Just Entered Something Else! " << endl;
	    	break;
	    	return 0;
	    }
	    
	    
	    cout << endl;
	    cout << "==================================================== "  << endl;
	    cout << "                   PAYMENT RECEIPT                  " << endl;
	    cout << "==================================================== "  << endl;
	    cout << " Nickname	  	: " << nickname << endl;
	    cout << " UID (Server)     	: " << uid[0] << " (" << server << ")" << endl; 
	    cout << " Amount           	: " << amount << endl;
	    cout << " Admin Fee        	: Rp. " << admin << endl;
	    cout << " Price            	: Rp. " << price << endl; 
	    total = price * amount + admin;
	    cout << " Total            	: Rp. " << total << endl;
	    cout << endl;
	    
	    
	    if (total >= 100000) 
		{
	        discount = 0.05 * total; 
	    }
		else if ( total >= 500000)
		{
	    	discount = 0.10 * total;
	    }
		else
		{
	    	discount = 0;
	    }
	    
	    cout << " Discount     	  	: Rp. " << discount << endl;
	    cout << "==================================================== "  << endl;
	    
	    purchasetotal = total - discount;
	    
	    cout << " Total of Purchase	: Rp. " << purchasetotal << endl;
	    cout << " Cash			: Rp. ";
	    cin >> cash;
	    
	    change = cash - purchasetotal;
	    cout <<" Change			: Rp. " << change << endl;
	    cout << "==================================================== "  << endl << endl;
	  
	  
	    cout <<" Traveler! Your Order Has Sucessfully Completed! Would You Like To Order Another Paimon's Bargain? [Y/N] : ";
	    cin >> input;
		
	} while  (input == "y"  || input == "Y");
	
	cout << endl;
	
	for (int a = 1; a <= 5; a++)
	{
	  cout << " Traveler! Thank You So Much For Your Order! Paimon Will Wait For Your Next Order! >w<" << endl;
	}
	  
	return 0;
}
