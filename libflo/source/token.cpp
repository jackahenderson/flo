#include "flo/dev/token.h"

std::string flo::Token::getName()
{
	switch(type)
	{
	case Type::Out:			return "OutStmt";
	case Type::EndStmt:		return "EndStmt";

	case Type::OpenParen:	return "OpParn";
	case Type::CloseParen:	return "ClParen";

	case Type::Plus:		return "Plus";
	case Type::Minus:		return "Minus";
	case Type::Star:		return "Start";
	case Type::Stroke:		return "Stroke";
	case Type::Pipe:		return "Pipe";

	case Type::String:		return "String";
	case Type::Number:		return "Number";
	case Type::Identifier:	return "Id";
	case Type::Error:		return "ERR";
	}
}
