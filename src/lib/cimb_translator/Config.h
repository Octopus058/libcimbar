#pragma once

// probably defaults with a pimpl to read/cache if there's a (yaml?) config locally?
namespace cimbar
{
	namespace Config
	{
		bool dark();

		unsigned color_bits();
		unsigned symbol_bits();
		unsigned bits_per_cell();

		unsigned image_size();
		unsigned anchor_size();

		unsigned cell_size();
		unsigned cell_spacing();
		unsigned num_cells();
		unsigned corner_padding();
	}
}