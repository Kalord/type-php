/**
 * Integer declaration
 */
//Сontains zero
int $integerOne;
$integerOne = 1;
int $integerTwo = 1;

/**
 * Floating point numbers
 */
float $floatOne = 1.0;
float $floatTwo = 123.99;
float $floatThree = 10.0;

/**
 * Array
 * 
 * Declaration with define of size:
 *      type name[size];        //This array contains zeros
 *      //or 
 *      type name = new Array(size); //This array contains zeros
 *
 * Declaration without define of size:
 *      type name[];
 *      type name = new Array();
 *      type name[] = {1, 2, 3};     //Init list
 *      type name = new Array({1, 2, 3}); //Init list
 *
 * Array is the object
 * @see examples/array
 */
//Declaration with define of size
int $integersOne[10];
int $integersTwo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int $integersThree = new Array(10);
int $integersFour = new Array(10, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10});

//Declaration without define of size
int $integerFive = {1, 2, 3};
int $integerSix = new Array({1, 2, 3});


/**
 * String
 * String is the object
 * @see examples/string
 */
//Empty string
//contains nullObject
//@see examples/nullObject
string $stringOne;
//Declaration with define of value
string $stringTwo = "Hello, World!";

/**
 * Boolean
 */
bool $isTrue = true;
bool $isFalse = false;