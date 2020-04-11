        #include <cmrc/cmrc.hpp>
#include <map>
#include <utility>

namespace cmrc {
namespace foo {

namespace res_chars {
// These are the files which are available in this resource library
// Pointers to NAMESPACE
extern const char* const f_7347_NAMESPACE_begin;
extern const char* const f_7347_NAMESPACE_end;
// Pointers to foo
extern const char* const f_acbd_foo_begin;
extern const char* const f_acbd_foo_end;
// Pointers to Glad_fjes.GIF
extern const char* const f_c48e_Glad_fjes_GIF_begin;
extern const char* const f_c48e_Glad_fjes_GIF_end;
}

namespace {

const cmrc::detail::index_type&
get_root_index() {
    static cmrc::detail::directory root_directory_;
    static cmrc::detail::file_or_directory root_directory_fod{root_directory_};
    static cmrc::detail::index_type root_index;
    root_index.emplace("", &root_directory_fod);
    struct dir_inl {
        class cmrc::detail::directory& directory;
    };
    dir_inl root_directory_dir{root_directory_};
    (void)root_directory_dir;
    
    root_index.emplace(
        "NAMESPACE",
        root_directory_dir.directory.add_file(
            "NAMESPACE",
            res_chars::f_7347_NAMESPACE_begin,
            res_chars::f_7347_NAMESPACE_end
        )
    );
    root_index.emplace(
        "foo",
        root_directory_dir.directory.add_file(
            "foo",
            res_chars::f_acbd_foo_begin,
            res_chars::f_acbd_foo_end
        )
    );
    root_index.emplace(
        "Glad_fjes.GIF",
        root_directory_dir.directory.add_file(
            "Glad_fjes.GIF",
            res_chars::f_c48e_Glad_fjes_GIF_begin,
            res_chars::f_c48e_Glad_fjes_GIF_end
        )
    );
    return root_index;
}

}

cmrc::embedded_filesystem get_filesystem() {
    static auto& index = get_root_index();
    return cmrc::embedded_filesystem{index};
}

} // foo
} // cmrc
    