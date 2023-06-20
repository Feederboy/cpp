#ifndef BITCOINEXCHANGE_HPP_
#define BITCOINEXCHANGE_HPP_

#include <string>
#include <map>

class BitcoinExchange {
public:
	BitcoinExchange(const std::string &filename);
	void ProcessInput(const std::string &filename);
private:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &rhs);

	std::map<std::string, double> data_;
	double GetExchangeRate(const std::string &date);
	bool checkDate(const std::string &date);
	bool ValidateValue(const double &value);
};

#endif