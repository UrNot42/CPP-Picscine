#include <iostream>
#include <sstream>
#include <string>

void convert( std::string str ) {
	std::stringstream a;
	std::cout << "given string: " << str << std::endl;
	a << std::hex <<
}

int main( void ) {
	std::string secret_message
		= "16D85ACC441674FBA2DF65190663F43A243E8FA5424E49143B520D3DF8AF68036E47114F20A16827E1B16612137E59ECD492E468BC6C"
		  "D109F65388DC57A58E8942585C8D193B96732206";

	for ( size_t i = 0; i < secret_message.size(); i += 2 ) {
		convert( secret_message.substr( i, 2 ) );
	}
	std::cout << std::endl;
}
