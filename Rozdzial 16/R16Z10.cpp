// vect3.cpp -- using STL functions
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
#include <cstring>

struct Review {
    std::string title;
    int rating;
    double price;
};

bool operator<(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);  // title
bool ratingup(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2); // rating ascending
bool ratingdown(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2); // rating descending
bool priceup(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2); // price ascending
bool pricedown(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2); // pricedescending
bool FillReview(std::shared_ptr<Review> & rr);
void ShowReview(const std::shared_ptr<Review> & rr);
char show_menu();

int main()
{
    using namespace std;
    vector<shared_ptr<Review> > books;
    shared_ptr<Review> temp (new Review);

    while (FillReview(temp))
        books.push_back(temp);

    if (books.size() > 0)
    {   
        vector<shared_ptr<Review> > booksini(books);
        char choice;
        while((choice = show_menu()) != 'k')
        {
            switch (choice)
            {
                case 'a' :  cout << "Thank you. You entered the following " << booksini.size() << " ratings:\n"
                            << "Rating\tBook\n";
                            for_each(booksini.begin(), booksini.end(), ShowReview);
                            break;
                case 'b' :  sort(books.begin(), books.end());
                            cout << "Sorted by title:\nRating\tBook\n";
                            for_each(books.begin(), books.end(), ShowReview);       
                            break;
                case 'c' :  sort(books.begin(), books.end(), ratingup);
                            cout << "Sorted by rating ascending:\nRating\tBook\n";
                            for_each(books.begin(), books.end(), ShowReview); 
                            break;
                case 'd' :  sort(books.begin(), books.end(), ratingdown);
                            cout << "Sorted by rating descending:\nRating\tBook\n";
                            for_each(books.begin(), books.end(), ShowReview); 
                            break;
                case 'e' :  sort(books.begin(), books.end(), priceup);
                            cout << "Sorted by price ascending:\nRating\tBook\n";
                            for_each(books.begin(), books.end(), ShowReview); 
                            break;
                case 'f' :  sort(books.begin(), books.end(), pricedown);
                            cout << "Sorted by price descending:\nRating\tBook\n";
                            for_each(books.begin(), books.end(), ShowReview); 
                            break;       
                default :   cout << "Nieznany blad\n";

            }
        }
    }
    else
        cout << "No entries. ";
    
    cout << "Bye.\n";
    return 0;
}


bool operator<(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if (r1->title < r2->title)
        return true;
    else if (r1->title == r2->title && r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool ratingup(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if (r1->rating < r2->rating)
        return true;
    else
        return false;
}

bool ratingdown(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if (r1->rating > r2->rating)
        return true;
    else
        return false;
}


bool priceup(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if (r1->price < r2->price)
        return true;
    else
        return false;
}

bool pricedown(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
    if (r1->price > r2->price)
        return true;
    else
        return false;
}

bool FillReview(std::shared_ptr<Review> & rr)
{
    rr = std::shared_ptr<Review> (new Review);

    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin,rr->title);
    if (rr->title == "quit")
        return false;

    std::cout << "Enter book rating: ";
    std::cin >> rr->rating;

    std::cout << "Enter book price: ";
    std::cin >> rr->price;

    if (!std::cin)
        return false;

    // get rid of rest of input line
    while (std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const std::shared_ptr<Review> & rr)
{
    std::cout << rr->rating << "\t" << rr->title << "\t" << rr->price << std::endl;
}

char show_menu()
{
    using namespace std;
    char choice;

    cout << "Wybierz jedna z ponizszych opcji wyswietlania danych\n";
    cout << "a) w kolejnosci wprowadzania\n";
    cout << "b) w kolejnosci alfabetycznej\n";
    cout << "c) wedlug ocen rosnaco\n";
    cout << "d) wedlug ocen malejaco\n";
    cout << "e) wedlug ceny rosnaco\n";
    cout << "f) wedlug ceny malejaco\n";
    cout << "k) koniec\n";
    
    cin.get(choice);
    while (!strchr("abcdefk",choice))
    {
        cout << "Podaj poprawna litere\n";
        cout << "Wybierz jedna z ponizszych opcji wyswietlania danych\n";
        cout << "a) w kolejnosci wprowadzania\n";
        cout << "b) w kolejnosci alfabetycznej\n";
        cout << "c) wedlug ocen rosnaco\n";
        cout << "d) wedlug ocen malejaco\n";
        cout << "e) wedlug ceny rosnaco\n";
        cout << "f) wedlug ceny malejaco\n";
        cout << "k) koniec\n";
        cin.get(choice);
    }
    
    // get rid of rest of input line
    while (std::cin.get() != '\n')
        continue;

    return choice;
}