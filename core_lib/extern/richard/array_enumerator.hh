#pragma once

#include <tuple>


namespace array_helpers {
	namespace enumaration_itt_hidden {


		template <size_t N>
		struct enumaration_itt_helper {

			template <typename TUPLE_T>
			static size_t decompose(TUPLE_T& output, const TUPLE_T& input_tuple, size_t current_position) {
				if constexpr (N + 1 < std::tuple_size<TUPLE_T>{}) {
					current_position = enumaration_itt_helper<N + 1>::decompose(output, input_tuple, current_position);
				}
				size_t i = current_position % std::get<N>(input_tuple);
				std::get<N>(output) = current_position % std::get<N>(input_tuple);
				return current_position / std::get<N>(input_tuple);
			}

			template <typename TUPLE_T>
			static size_t size(const TUPLE_T& input_tuple) {
				auto size_next = 1;
				if constexpr (N + 1 < std::tuple_size<TUPLE_T>{}) {
					size_next = enumaration_itt_helper<N + 1>::size(input_tuple);
				}
				size_next *= std::get<N>(input_tuple);
				return size_next;
			}
		};

		template <typename T>
		class enumaration_itt {

		public:
			using this_itterator_T = enumaration_itt<T>;
			enumaration_itt(size_t current, const T& enumTuple) :m_current(current), m_enum_tuple(enumTuple) {

			}

			enumaration_itt& operator++() {
				++m_current;
				return *this;
			}
			bool operator==(const this_itterator_T& rhs) const {
				return m_current == rhs.m_current;
			}
			bool operator!=(const this_itterator_T& rhs) const {
				return m_current != rhs.m_current;
			}
			T operator*() {
				T ret;
				enumaration_itt_helper<0>::decompose(ret, m_enum_tuple, m_current);
				return ret;
			}


			size_t m_current = 0;
			T m_enum_tuple;
		};

		template <typename T>
		class ArrayEnumerator {
		public:
			ArrayEnumerator(const T& b, const T& e) :m_begin(b), m_end(e) {}

			auto begin() const {
				return m_begin;
			}

			auto end() const {
				return m_end;
			}
		private:
			T m_begin;
			T m_end;
		};

		template <typename T, size_t N >
		auto size_to_tuple(const std::array<T, N>& arr) {
			std::tuple<size_t> ret(N);
			return ret;

		}

		template <typename T1, size_t N1, size_t N2 >
		auto size_to_tuple(const std::array<std::array<T1, N1>, N2>& arr) {
			auto tuple1 = size_to_tuple(arr[0]);
			auto t2 = std::tuple_cat(std::make_tuple(N2), tuple1);
			return t2;
		}
	}
	template <typename T, size_t N>
	auto enumarate(const std::array<T, N>& arr) {

		auto en = enumaration_itt_hidden::size_to_tuple(arr);
		return enumaration_itt_hidden::ArrayEnumerator(enumaration_itt_hidden::enumaration_itt(0, en), enumaration_itt_hidden::enumaration_itt(enumaration_itt_hidden::enumaration_itt_helper<0>::size(en), en));
	}

	template <typename... T>
	auto enumarate(T... n_args) {

		auto en = std::make_tuple(n_args...);
		return enumaration_itt_hidden::ArrayEnumerator(enumaration_itt_hidden::enumaration_itt(0, en), enumaration_itt_hidden::enumaration_itt(enumaration_itt_hidden::enumaration_itt_helper<0>::size(en), en));
	}
}