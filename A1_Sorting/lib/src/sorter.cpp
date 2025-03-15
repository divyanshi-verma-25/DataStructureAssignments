#include "sorter.hpp"

/********************************************************
 * User code starts here
 ********************************************************/

template <typename T>
std::vector<T> bubble_sort<T>::sort(const std::vector<T>& input) {
  std::vector<T> result;
  bool swapped;
        
        for (size_t i = 0; i < result.size() - 1; ++i) {
            swapped = false;
            for (size_t j = 0; j < result.size() - i - 1; ++j) {
                if (result[j] > result[j + 1]) {
                    std::swap(result[j], result[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped) break;
  return result;
}

template <typename T>
std::vector<T> insertion_sort<T>::sort(const std::vector<T>& input) {
  std::vector<T> result;
 for (size_t i = 1; i < result.size(); ++i) {
            T key = result[i];
            int j = i - 1;

            // Move elements that are greater than key one position ahead
            while (j >= 0 && result[j] > key) {
                result[j + 1] = result[j];
                --j;
            }
            result[j + 1] = key;
  return result;
}

template <typename T>
std::vector<T> merge_sort<T>::sort(const std::vector<T>& input) {
  std::vector<T> result;
  if (input.size() <= 1) {
            return input;
        }
        
        size_t mid = input.size() / 2;
        std::vector<T> left(input.begin(), input.begin() + mid);
        std::vector<T> right(input.begin() + mid, input.end());
        
        left = sort(left);
        right = sort(right);
        
        return merge(left, right);
    }
  return result;
}

template <typename T>
std::vector<T> quick_sort<T>::sort(const std::vector<T>& input) {
  std::vector<T> result;
 quickSort(result, 0, result.size() - 1);
  return result;
}

// Explicit template instantiation
template class bubble_sort<int>;
template class insertion_sort<int>;
template class merge_sort<int>;
template class quick_sort<int>;

template class bubble_sort<std::string>;
template class insertion_sort<std::string>;
template class merge_sort<std::string>;
template class quick_sort<std::string>;
