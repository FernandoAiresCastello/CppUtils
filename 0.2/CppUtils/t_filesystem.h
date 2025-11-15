#pragma once
#include "t_string.h"
#include "t_list.h"
#include "t_record_file.h"

struct t_filesystem_entry
{
	t_string name;
	bool directory = false;
};

class t_filesystem
{
public:

	// Validation
	static t_list<t_string> illegal_filenames;
	static bool is_valid_filename(const t_string& filename);
	static bool file_exists(const t_string& filename);

	// Listing
	static t_list<t_filesystem_entry> list(const t_string& directory);
	static t_list<t_string> list_files(const t_string& directory, const char* prefix = nullptr);
	static t_list<t_string> find_files(const t_string& directory, const t_string& namepart);
	static t_list<t_string> list_directories(const t_string& directory);

	// Write/read hex format
	static void write_hex_file(const t_string& data, const t_string& filename, int bytes_per_line);
	static t_string read_hex_file(const t_string& filename, int bytes_per_line);

	// Write/read plaintext format
	static t_string read_all_text(const t_string& filename);
	static t_list<t_string> read_all_lines(const t_string& filename);
	static void write_all_text(const t_string& text, const t_string& filename);
	static void write_all_lines(const t_list<t_string>& lines, const t_string& filename);
	
	// Rename/delete
	static bool rename_file(const t_string& old_name, const t_string& new_name);
	static bool delete_file(const t_string& name);
	static bool rename_directory(const t_string& old_name, const t_string& new_name);
	static bool delete_directory(const t_string& name);

	// Record files
	static const char read_mode = 'R';
	static const char write_mode = 'W';

	static bool is_record_file_open();
	static char get_record_file_mode();
	static int open_record_file(const t_string& filename, char mode);
	static void close_record_file();
	static void write_record_file(const t_string& data);
	static t_string read_record_file();
	static bool is_record_file_eof();
};
