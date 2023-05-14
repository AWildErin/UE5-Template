

/// @brief     An Example Class
/// @author    Maurice D Biggs
/// @date      21/08/22
/// @details
///	Used to show common doxygen Tags
///
/// @version   1.0.0
/// @note      Blocks like Note,Bug,etc also work on Classes
///
class ExampleClass
{


	/// <summary>
	/// Short Example Description
	/// </summary>
	/// <param name="parameter1">Parameter Description</param>
	/// <returns> Return Description </returns>
	/// @details
	///	This function just servers the purpose of showing off different documentation tags.
	/// @link ExampleClass @endlink is the same just for a class
	/// @code{.cpp}
	///		// Code Segment
	///		bool result = exampleFunction(10);
	/// @endcode
	/// @todo This is a todo Block
	/// @warning This is a warning Block
	/// @pre This is a precondition Block
	/// @note This is a note block
	/// @deprecated This is a deprecated Block
	/// @bug This is a bug block
	/// @attention this is a attention block
	bool exampleFunction(int parameter1);

	/// <summary>
	/// Variable Documentation
	/// </summary>
	int variable = 10;

	/// <summary>
	/// A Custom region grouping variables/functions
	/// </summary>
#pragma region Custom Region

	/// <summary>
	/// A Variable inside a Region.
	/// </summary>
	int regionVar1;
	/// <summary>
	/// A Variable inside a Region.
	/// </summary>
	int regionVar2;

	/// <summary>
	/// A Function inside a Region
	/// </summary>
	void regionFunc1();
	/// <summary>
	/// A Function inside a Region
	/// </summary>
	void regionFunc2();

#pragma endregion

};
