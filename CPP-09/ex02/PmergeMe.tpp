/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulevallo <ulevallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 02:16:24 by ulevallo          #+#    #+#             */
/*   Updated: 2024/09/24 14:25:26 by ulevallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename Container>
void printContainer( Container & container, const char * label ) {
	std::cout << label << ":\t";
	for ( typename Container::iterator it = container.begin(); it != container.end(); ++it ) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

template <typename Container>
void fillContainer( Container & container, char ** av ) {
	for ( int i = 1; av[i]; ++i ) {
		container.push_back( std::atoi( av[i] ) );
	}
}

template <typename Container, typename Compare>
void containerInsert( Container & sorted, const int & nb, Compare comp ) {
	typename Container::iterator it = std::lower_bound( sorted.begin(), sorted.end(), nb, comp );
	sorted.insert( it, nb );
}

template <typename Container>
void containerInsertionSort( Container & container ) {
	Container sorted;

	while ( ! container.empty() ) {
		int nb = container.front();
		container.pop_front();
		containerInsert( sorted, nb, std::less<int>() );
	}

	container.swap( sorted );
}

template <typename Container>
void containerMergeInsertionSort( Container & container ) {
	if ( container.size() <= THRESHOLD ) {
		containerInsertionSort( container );
		return;
	}

	Container left, right;
	int		  middle = container.size() / 2;

	for ( int i = 0; i < middle; ++i ) {
		left.push_back( container.front() );
		container.pop_front();
	}

	right = container;

	containerMergeInsertionSort( left );
	containerMergeInsertionSort( right );

	container.clear();
	std::merge( left.begin(), left.end(), right.begin(), right.end(), std::back_inserter( container ) );
}

template <typename Container>
void sortContainer( Container & container, double & time ) {
	clock_t start = clock();

	containerMergeInsertionSort( container );

	clock_t end = clock();
	time		= ( double ) ( end - start ) / ( ( double ) CLOCKS_PER_SEC / 1000 );
}
