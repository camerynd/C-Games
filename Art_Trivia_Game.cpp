#include<iostream>
#include<iomanip>
using namespace std;
void display_questions(int& one, int& two, int& three);
void display_results(int& one, int& two, int& three, int& repeat);
void artshow();
const int CORRECT1 = 2, CORRECT2 = 3, CORRECT3 = 3; 

int main()
{   int answerOne, answerTwo, answerThree, repeatGame; 
    cout << "Welcome to the ART TRIVIA game! Enter the number corresponding with your answer to each question.";
    cout << endl << "Answer all questions correctly to win a prize!" << endl << endl;
    cout << "Press enter to start." << endl;
    cin.get();
    display_questions(answerOne, answerTwo, answerThree);
    display_results(answerOne, answerTwo, answerThree, repeatGame);
    do
        {display_questions(answerOne, answerTwo, answerThree);
        display_results(answerOne, answerTwo, answerThree, repeatGame);} while(repeatGame == 1);

    return 0;}

void display_questions(int& one, int& two, int& three)
{   cout << "QUESTION 1: Who painted the Mona Lisa?" << endl << endl;
    cout << "1) Andy Warhol" << endl << "2) Leonardo da Vinci" << endl << "3) Salvador Dali";
    cout << endl << "Answer: ";
    cin >> one;
    cout << endl;
    cout << "QUESTION 2: Who painted Starry Night?" << endl << endl;
    cout << "1) Pablo Picasso" << endl << "2) Henri Matisse" << endl << "3) Vincent van Gogh";
    cout << endl << "Answer: ";
    cin >> two;
    cout << endl;
    cout << "QUESTION 3: Who painted The Creation of Adam?" << endl << endl;
    cout << "1) Edvard Munch" << endl << "2) Jackson Pollock" << endl << "3) Michaelangelo";
    cout << endl << "Answer: ";
    cin >> three;
    cout << endl;}

void display_results(int& one, int& two, int& three, int& repeat)
{   if ((one != CORRECT1 && two == CORRECT2 && three == CORRECT3) 
    || (one == CORRECT1 && two != CORRECT2 && three == CORRECT3)
    || (one == CORRECT1 && two == CORRECT2 && three != CORRECT3))
        {cout << "You answered 2/3 questions correctly, try again? 1 = YES, 2 = NO" << endl;
         cin >> repeat;
         cout << endl;}
    if ((one != CORRECT1 && two != CORRECT2 && three == CORRECT3)
    || (one == CORRECT1 && two != CORRECT2 && three != CORRECT3)
    || (one != CORRECT1 && two == CORRECT2 && three != CORRECT3))
        {cout << "You answered 1/3 questions correctly. Try again? 1 = YES, 2 = NO" << endl;
        cin >> repeat;
        cout << endl;}
    if (one != CORRECT1 && two != CORRECT2 && three != CORRECT3)
        {cout << "You answered 0/3 guestions correctly. Try again? 1 = YES, 2 = NO" << endl;
        cin >> repeat;
        cout << endl;}
    if (one == CORRECT1 && two == CORRECT2 && three == CORRECT3)
        {cout << "CONGRATULATIONS, you answered 3/3 questions correctly!" << endl;
        cout << "Your prize is a virtual art show!" << endl << endl;
        cout << "Press 1 to enter the gallery. Press 2 if you don't like art!" << endl;
        cin >> repeat;
    if (repeat == 1)
        {artshow();
        exit (0);}}
    if (repeat == 2)
        {cout << "Goodbye!" << endl << endl;
        exit(0);}
}

void artshow()
{   cout << endl << endl;
    cout << "Saturn Devouring His Son (1819 - 1823)" << endl << "Artist: Francisco de Goya";
    cout << endl << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━---------------┓" << endl;
    cout << "┃ ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■ ┃" << endl;
    cout << "┃ ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■ ┃" << endl;
    cout << "┃ ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■ ┃" << endl;
    cout << "┃ ■■■■■■▼彡≡ミ▼■.■■l■■■■■■■■■■■■■■■■■■■ ┃" << endl;
    cout << "┃ ■■■■▼《ξζιヽヾﾐﾐ■.■■■■■■■■■■■■■■■■■■■■ ┃" << endl;
    cout << "┃ ■■■■∠彡υ ..(●）丶）ミﾐ■■■■■■▼▼■■lli■■■ ┃" << endl;
    cout << "┃ ■■■■彡//(● ∞　ｿ/巛》ゝ■▼▼-ξ￣￣＼▼■|■■■ ┃" << endl;
    cout << "┃ ■■■■彡/∥┏┻┓ヽ《＃◆▲　＼　　　υζ ＼■||ll■ ┃" << endl;
    cout << "┃ ■■■■ 彡ｿ/. ┃┏┫　ﾐミヽミ)))　　＼ ▲ｿ ミ ▼ ┃" << endl;
    cout << "┃ ■■■■■...彡ﾉ┗＼ヽ､　「ヾﾐﾐ巛ゞ ▲▲■彡..彡ﾐ ▼┃" << endl;
    cout << "┃ ■■■■■▲》》彡ﾉ　＼ヽ- ヘ《ミミミ■■■//巛　..┃" << endl;
    cout << "┃ ■■■■■■ﾉ//ﾉﾉ/. .┃　│　￣)ﾐミ ▼■▼（　　│　 ┃" << endl;
    cout << "┃ ■■■■■■◆《 |ﾉ丿 ┃ │　　/ﾉ ∋巛■■巛　│|.　 ┃" << endl;
    cout << "┃ ■■■■■■■ﾉﾉ/ ┌「⊃ ＿._Ｃ＼ 彡彡■■■　 .ﾉ . ┃" << endl;
    cout << "┃ ■■■■■■　　..Ξ├ --┼ -─　⌒──── 丶 　 i   ┃" << endl;
    cout << "┃ ■■■■■▼　巛▼/　 ─ ⊂　--─ 　　ヾ　　 　》 .┃" << endl;
    cout << "┃ ■■■■▼ 　≪▲／　 イヾヽ＿--──---《《彡／'　┃" << endl;
    cout << "┃ ■■■▼. ━━━　　 │ 　│　＼▼ ▼ 　　▲■■ . 　 ┃" << endl;
    cout << "┃ ■■■　 ﾉミ■■■■■ヽ ▲　 丿▲ ＼彡ﾐ 　　▼ﾐ,　　┃" << endl;
    cout << "┃ ■■■V ■■■■■■▲　▼　　■■■■　彡彡ミ 　      ┃" << endl;
    cout << "┃ ■■■★■■■■■■■　┃　■■■■■■■■》彡彡彡 ,      ┃" << endl;
    cout << "┃ ■■■■■■■■■■■　┃　■■■■■■■■■ 彡　 　      ┃" << endl;
    cout << "┃ ■■■■■■■■■■.■ .┃.. ■■■■■■■■▼ ′　彡     ┃" << endl;
    cout << "┃ ■■■■■■■■■▼／ | .| 　■■■▼　 ▲‡,         ┃" << endl;
    cout << "┃ ■■■■■■■▼＿. 　　 | .| ■■..■▲　　▲■■|,, ,┃" << endl;
    cout << "┃ ■■■■▼　　 ─ 　 　.》》》| | ■■■■■■■■巛,  ┃" << endl;
    cout << "┃ ■■■　　　 ━》》 》▲■■■■■■■■■■■彡ミ '     ┃" << endl;
    cout << "┃ ■■　　　　▲■■■■■■■■■■■■■彡彡巛ﾐ,         ┃" << endl;
    cout << "┃ ■■　　ミ彡》▼　■■■■■■■■■■　　 彡彡,,　　  ┃" << endl;
    cout << "┃ ■■▲　ミ 彡》ﾐミ■■■■■■■■■■ 》》　　　　 　 ┃" << endl;
    cout << "┃ ■■■▲ﾐミ彡》　■■■■■■■■■　　　 　　ミ■■■■■ ┃" << endl;
    cout << "┃ ■■■■▲彡ﾐ ■■■■■■■■■　　　 / ■■■■■■■■■■■ ┃" << endl;
    cout << "┃ ■■■■■《ゞ≡≡■■■■■■■　　　 /　■■■■■■■■■■■ ┃" << endl;
    cout << "┃ ■■■■■彡▲■■■■■■■■　　　　　ミ■■■■■■■■■■■ ┃" << endl;
    cout << "┃ ■■■■■■■■■■■■■■■▲　　▲■■■■■■■■■■■■■■■■■ ┃" << endl;
    cout << "┃ ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■ ┃" << endl;
    cout << "┃ ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■ ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━----------------━━━━━━━┛" << endl << endl << endl;
    cout << "Girl With a Pearl Earring (1665)" << endl << "Artist: Johannes Vermeer";
    cout << endl << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━-------------------------------━━━━━━┓" << endl;
    cout << "┃┌―――――――――――――――――――――――――-------------------------------―┐┃" << endl;
    cout << "┃｜　　　　　　　　　　　　　　　　　 ＿__　　　　　　　　　　　　　　｜┃" << endl;
    cout << "┃｜　　　　　　　　　　　　　　　,-''~∠- ￣`ヽ.,_　　　　　　　 　　｜┃" << endl;
    cout << "┃｜　　　　　　　　　　　 ..,,-=~￣￣｀ﾞ:ヽ､_　-　丶､　　　　　　　 ｜┃" << endl;
    cout << "┃｜　　　　　　 _,, -‐''￣￣~`｀｀ｰ ､_ヾヽ　ヽ、??ヽ:!;;.　　　 　｜┃" << endl;
    cout << "┃｜　　　　 ,／　　　　 ........:::::::::`...、ヽ!ヽ);;;;;;ヽ.　|┃" << endl;
    cout << "┃｜　　　／　　　　　　 ...............ゝ;;;ヽ ヽ;| :|;;;|,;;|　｜┃" << endl;
    cout << "┃｜　　 /　＿　　　　　(::....,､....(;;;;;;;＼|　|;;;|ヽ;;|　　 ｜┃" << endl;
    cout << "┃｜　　|, ´　　 `｀-､_ ( ...,,;;;;;;;;;;;;!　|;;;| .|;;;ヽ　 　|┃" << endl;
    cout << "┃｜　 /　　　　　　　 ｀- ､;;;;;;;;;;;;;;;;;;;| !|;;;| :|ヽ;|. ｜┃" << endl;
    cout << "┃｜　丶_;丶　..:::,-_ 　　`ヽ ､;;;;;;;;;;;;;;| .!|;;;| :!ヽ;!.｜┃" << endl;
    cout << "┃｜　　.､(ﾟ,｀.::: ´‐-｡,､.., ;;;;;;;;;;;;;;;| !|;;|､.|；/ヽ.   |┃" << endl;
    cout << "┃｜　 .!　　.::::　丶ゝノ　　, :;;＼;;;;ﾉ| .! |;;;! ::|ヽ;;;;|  |┃" << endl;
    cout << "┃｜　 !　 .:::::::　　　　　　: : ::;;;:ヽ;;丿| ..! |;;! ;|；|;||┃" << endl;
    cout << "┃｜　 .! 、._::::::.　　　. : : 〆:::ノ;;-'  |　! |;! :|；;;ヽ;|┃" << endl;
    cout << "┃｜　 丶　､ _ _　 　 　　. . . :ヽ_,,／;;r　  |　: |::;! ..:|;;'|┃" << endl;
    cout << "┃｜　　 ヽ　t =‐,-　　 . . . . ::::／,ヽ;;;;;|、　| 　 !;;! |;;;|┃" << endl;
    cout << "┃｜　 　 丶　｀　.::. . . :::::::;／ （ﾟ-=);;;_;ヽ_,--､| :: ! ;｜┃" << endl;
    cout << "┃｜　　　　ヽ._　.::_::_:;; -‐'''　 __,,,,,,-‐'~　,_.._＿,,,)..|┃" << endl;
    cout << "┃｜　　　　　　￣　　 ヽ. .,,-‐'~　,,_,, -ｰ :: :: .:!;!；;ヽヽ| .|┃" << endl;
    cout << "┃｜　　　　　　　　　　 ,)'　　,, | :　:: .!;　 !；) ! ；ヽ:......|┃" << endl;
    cout << "┃｜　　　　　　　　　,!'　,,-'~...|　 .:: ..!;　!；|;;; ; ；|::. |┃" << endl;
    cout << "┃｜　　　　　　　　　!／..............| 　 :: !;;　!；! ; .；；| ｜┃" << endl;
    cout << "┃｜　　　　　　　　, ' . . ........_ - -..;;;;|　 !;　..:::；|..｜┃" << endl;
    cout << "┃｜　　　　　　　/: . . ...:::::. . .ヽ;;;;|:::::;;L_!；_,,,-っ!|┃" << endl;
    cout << "┃｜　　　　　　 !:: . ::: . . . . : : . . . .;;;;;;ノ-',::.　  |┃" << endl;
    cout << "┃｜　　　　　　 >:: ::: . . . . . . :::: :;;;`ー''~;;;;| . .   |┃" << endl;
    cout << "┃｜　　　　　 / : :: : . . . . . ::: ::: : : ::: : :: :;;;| : ｜┃" << endl;
    cout << "┃｜　　　　 / : :: :: . . : :: :: : : :::: : :: : : :;;;|: 　 ｜┃" << endl;
    cout << "┃｜　　　 ./ : :: : : ::::: : : : : ::::: ::: :: : ;;;;;;||. ｜┃" << endl;
    cout << "┃｜　 　／ : : : : : ::::::: : : : : : : :::: :: :: : : ;;ノ　｜┃" << endl;
    cout << "┃｜　　/ :: :: : : : : ::::::::: : : :::::: : ::::;;;;;||.　  |┃" << endl;
    cout << "┃｜　/ ; :: : : : : : : :::::::::: : : : :::::::::::: ::.'/..｜┃" << endl;
    cout << "┃└――――――――――――――――---------------------------------――――――――――┘┃" << endl;
    cout << "┗━━━━━━━━━━━━━---------------------------------━━━━━━━━━━━━━━━┛" << endl;
    cout << endl << endl << endl;
    cout << "The Great Wave Off Kanagawa (1826-1833)" << endl << "Artist: Hokusai Katsushika";
    cout << endl << endl;
    cout << "┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━-------------------------------------━━┓" << endl;
    cout << "┃ 　　　　　　　　　　　　　　　　　　　　　　          　　　　　　　　　　   　　    |" << endl;
    cout << "┃　　　　　　　　_／⌒￣⌒`´￣`～ヽ'ー--､　　　　　　　　 　           　 　        　 ┃" << endl;
    cout << "┃　　　　 　 _／　　　 　ιυっ￣--~つｙへつ　　　　　　　　 　 　                 　　┃" << endl;
    cout << "┃　　　　　 ／　　 フっιつ人´   ／ ／つυ^っへ　っっ　　　 　 　 　                 　┃" << endl;
    cout << "|　　　　　／　　/つつ。ｏ/　/　/　/　　^つっへυっつ　　　　　　                 　 　┃" << endl;
    cout << "┃　　　　_/　　　 〉o°o。  。 /　/　　／°>つっっっつっっ　　　 　 　                 ┃" << endl;
    cout << "┃　　　／　　　　　＼γ､。o  　。 /ｏ。/　／つっっつっつ　　　 　 　                 　┃" << endl;
    cout << "┃＿＿／　　　　　  　　`⌒ヽっ/　。/　　／　っつ）　っつっつ　　　　 　               　┃" << endl;
    cout << "┃＝／　　　　　っっ　　　 τ-っつつっ､。|　　　　つ　　っつつつ　　 　 　               ┃" << endl;
    cout << "┃￣　　　　　っっ　)） ）　  っつつつ。|　　　　　　　　っっつつ                　　  ┃" << endl;
    cout << "┃　 つつっιつ）　⌒つっ)　  っつっつ。 °|　　°　　　　　　　　　　　ｏ　            　 ┃" << endl;
    cout << "┃　　っつっｏ　°。　υつ　っ つっυ。ｏ。°|　°　°　　　　　　　　　　　°。 　            ┃" << endl;
    cout << "┃　っ＼＼っｏっ。　　°° つ。°°。ｏ。ｏ。 ＼ｏ。°　。°°。　　　　　　　。              ┃" << endl;
    cout << "┃　　つっつ　＿ｏ°°。　°　° 。ｏ/⌒＼。ｏ  ＼°°ｏ　　。　　　　 ／ У ＼°　            ┃" << endl;
    cout << "┃　)へ）つ＼///`ー､_　°　°。＿／　 ＼°。   ＼。　。°°　　 　／      |             ┃" << endl;
    cout << "┃　　へ）。°|＼＼＼＼`ー､　,～´　へっυ　　￣￣￣＼°°　　   ／ 　  　  ＼　    .／~ ,  ┃" << endl;
    cout << "┃　（￣ｏ°ｏヽ､＼,Ｏ､／~　　　つっへっ　　 ＼　へ　 ＼￣￣￣￣￣￣￣￣￣￣￣---- 　 　.  |" << endl;
    cout << "┃　 ＼＿＿／￣￣￣￣　　　　っっつ　　　　　　　　　へ　　＼　＼　　 　　 　 　 　　 　　 ┃" << endl;
    cout << "┃　　　　　　　　　　　＼　　っつっっつ　　 　 　 　 　 　 ___　へ ＼＼　　＼　＼　　＼ 　┃" << endl;
    cout << "┃　　　　　　　　っ　　　フつ　　　っ　　つっつっ　　 　 ＼＼　　　　　　　　　　　　　  　┃" << endl;
    cout << "┃　　/つっつつっ　⌒っ⌒つ　　　　つ　　　っ　つ＼。° ＼ヽ＿＿＿＿＿＿＿＿ΟΟΟΟ.／_ .      ┃" << endl;
    cout << "┃　/。　）)　　つっつ　　つっゝ　　つっ　つ つ＼°。 ＼＾/＾/＾/＾＾＾＾　　　　￣.／～　,,┃" << endl;
    cout << "┃　|　|。|。°|°。つっつつつっ　　　っつ　　つ　　っつ＼。° ＼―･――･――･――･.／　 ～　     ┃" << endl;
    cout << "┃,/　|。|°。|。。（°（。（　　フつつ　 　 っフ　 　 つ　　 っ＼.....　￣￣￣.／／～～　 ┃" << endl;
    cout << "┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━--------------------------------------━━━┛" << endl;
    cout << endl << endl;
    }