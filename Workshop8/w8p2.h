/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
Full Name  : Taehwa Hong
Student ID#: 132546227
Email      : thong14@myseneca.ca
Section    : IPC144NAA

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/


// ----------------------------------------------------------------------------
// defines/macros
#define MAX_PRODUCT 3
#define SUGGEST_GRAM 64
#define LBS_TO_KG 2.20462


// ----------------------------------------------------------------------------
// structures
struct catFoodInfo
{
    int sku;
    double price;
    int calories;
    double weight;
};

struct reportData
{
    int sku;
    double price;
    int calories;
    double lbsWeight;
    double kgWeight;
    int gramWeight;
    double serving;
    double servingCost;
    double caloriesCost;
};

// ----------------------------------------------------------------------------
// function prototypes

// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* intNumber);


// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* floatNumber);


// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int product, const int gram);


// 4. Get user input for the details of cat food product
struct catFoodInfo getCatFoodInfo(const int productCount);


// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(const int sku, const double* price, const double* weight, const int calories);


// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* weightLbs, double* lbsToKg);


// 9. convert lbs: g
int convertLbsG(const double* weightLbs, int* lbsToG);


// 10. convert lbs: kg / g
void convertLbs(const double* weightPound, double* weightKg, int* weightG);


// 11. calculate: servings based on gPerServ
double calculateServings(const int servingGram, const int totalGram, double* totalServing);


// 12. calculate: cost per serving
double calcultaeCostPerServing(const double price, const double serving, double* costServeResult);


// 13. calculate: cost per calorie
double calculateCostPerCal(const double price, const double calorie, const double serving, double* costCalorieResult);


// 14. Derive a reporting detail record based on the cat food product data
struct reportData calculateReportData(const struct catFoodInfo productInfo);


// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
void displayReportData(struct reportData report);


// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct reportData report);


// ----------------------------------------------------------------------------

// 7. Logic entry point 
void start(void);