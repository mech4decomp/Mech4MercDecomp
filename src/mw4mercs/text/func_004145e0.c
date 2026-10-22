/*
 * FUN_004145E0 — archive_open (primary file-backed archive opener).
 *
 * __thiscall (ecx = this = DirPopulateCtx*), 3 DWORD params (name, flags, hdr),
 * ret 0x0C.
 *
 * Callees (all reloc-masked):
 *   FUN_00412780 — archive_set_name
 *   FUN_006F4710 — refcount_helper
 *   _mbsrchr     — MSVCRT IAT
 *   FUN_006F4950 — some_init
 *   FUN_006FC4D0 — file_exists
 *   FUN_00708930 — reg_read_CDPath
 *   FUN_00412570 — path_manip
 *   FUN_004125E0 — path_manip2
 *   FUN_00412740 — string_release
 *   FUN_004084E0 — archive_free
 *   FUN_0052B440 — callback_thunk
 *   FUN_0070C960 — cd_not_found_handler
 *   FUN_006FC400 — file_open
 *   FUN_004084C0 — archive_alloc
 *   FUN_00413E90 — archive_init_empty
 *   FUN_00413EE0 — reader_open
 *   FUN_006F49A0 — some_cleanup
 *   FUN_006FAB90 — show_error
 */

#include <mw4/archive.h>

extern void archive_set_name(void);
extern void refcount_helper(void);
extern void file_open(void);
extern void __cdecl archive_alloc(void);
extern void archive_init_empty(void);
extern void reader_open(void);
extern void some_init(void);
extern void some_cleanup(void);
extern void file_exists(void);
extern void reg_read_cdpath(void);
extern void path_manip(void);
extern void path_manip2(void);
extern void string_release(void);
extern void archive_free(void);
extern void callback_thunk(void);
extern void cd_not_found_handler(void);
extern void show_error(void);

extern volatile long g_archive_refcount;   /* 0x007B880C */
extern void *g_archive_global;             /* 0x007B8800 */
extern void *g_archive_seed;               /* 0x007B8814 */
extern void *g_cd_callback;                /* 0x007B8804 */
extern volatile long g_cd_not_found_flag;  /* 0x00849EB8 */
extern volatile long g_save_state_44;      /* 0x00858A44 */
extern volatile long g_save_state_48;      /* 0x00858A48 */

extern unsigned long __imp___mbsrchr;

__declspec(naked) void archive_open(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x110
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp+8]
        mov     esi, ecx
        lea     ecx, [esi+0x0c]
        xor     ebx, ebx
        push    edi
        mov     [ecx], ebx
        call    archive_set_name
        mov     eax, dword ptr [g_archive_refcount]
        mov     ecx, eax
        inc     eax
        test    ecx, ecx
        mov     dword ptr [g_archive_refcount], eax
        jne     skip_global_init
        mov     edx, dword ptr [g_archive_seed]
        push    edx
        push    ebx
        push    0x0076D2A4
        call    refcount_helper
        mov     dword ptr [g_archive_global], eax
skip_global_init:
        push    0x5c
        push    edi
        call    dword ptr [__imp___mbsrchr]
        add     esp, 8
        cmp     eax, ebx
        jne     found_slash
        mov     eax, edi
        jmp     after_slash
found_slash:
        inc     eax
after_slash:
        mov     ecx, dword ptr [g_archive_global]
        push    ecx
        push    ebx
        push    eax
        call    refcount_helper
        mov     ecx, dword ptr [g_save_state_48]
        mov     edx, [ebp+0x10]
        mov     edi, eax
        mov     eax, dword ptr [g_save_state_44]
        push    edi
        mov     [esi+0x24], edi
        mov     [esi+0x28], bl
        mov     [esi+0x20], edx
        mov     [ebp-8], eax
        mov     dword ptr [g_save_state_44], ebx
        mov     [ebp-0xc], ecx
        mov     dword ptr [g_save_state_48], ebx
        call    some_init
        mov     eax, [ebp+8]
        mov     dl, [ebp+0xc]
        push    eax
        mov     [esi+0x29], dl
        mov     [esi+0x1c], ebx
        mov     [esi+0x14], ebx
        mov     [esi+0x18], ebx
        mov     [esi+0x10], ebx
        call    file_exists
        test    al, al
        jz      file_not_found
        mov     ecx, [ebp+8]
        push    ebx
        push    ecx
        jmp     do_open
file_not_found:
        cmp     [ebp+0xc], bl
        jz      no_cdpath
        push    0x1
        lea     eax, [ebp-4]
        push    eax
        lea     ecx, [ebp-0x110]
        push    ecx
        push    0x0076C6AC
        mov     dword ptr [ebp-4], 0x100
        call    reg_read_cdpath
        mov     eax, [ebp-4]
        cmp     eax, ebx
        jbe     cdpath_fail
        lea     edx, [ebp-0x110]
        dec     eax
        push    edx
        lea     ecx, [ebp-0x10]
        mov     [ebp-4], eax
        call    path_manip
        mov     ecx, [esi+0x0c]
        mov     edx, [eax]
        lea     edi, [esi+0x0c]
        push    ecx
        push    edx
        lea     ecx, [ebp+0xc]
        call    path_manip2
        lea     eax, [ebp+0xc]
        push    eax
        mov     ecx, edi
        call    string_release
        mov     eax, [ebp+0xc]
        cmp     eax, ebx
        jz      skip_free1
        mov     cl, [eax-1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jnz     skip_free1
        push    eax
        call    archive_free
        add     esp, 4
skip_free1:
        mov     eax, [ebp-0x10]
        cmp     eax, ebx
        jz      skip_free2
        mov     cl, [eax-1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jnz     skip_free2
        push    eax
        call    archive_free
        add     esp, 4
skip_free2:
        mov     edi, [edi]
        push    edi
        mov     [ebp+0xf], 1
        call    file_exists
        test    al, al
        jnz     cd_found
cd_loop_check:
        cmp     [ebp+0xf], bl
        jz      cd_found
        cmp     dword ptr [g_cd_callback], ebx
        jz      cd_callback_done
        mov     ecx, [ebp+8]
        push    ecx
        call    callback_thunk
        push    eax
        call    dword ptr [g_cd_callback]
        add     esp, 8
        mov     [ebp+0xf], al
cd_callback_done:
        cmp     [ebp+0xf], bl
        jz      cd_set_not_found
        cmp     dword ptr [g_cd_callback], ebx
        jne     cd_retry
cd_set_not_found:
        mov     dword ptr [g_cd_not_found_flag], 1
        call    cd_not_found_handler
cd_retry:
        push    edi
        call    file_exists
        test    al, al
        jz      cd_loop_check
cd_found:
        push    ebx
        push    edi
do_open:
        lea     edi, [esi+0x10]
        push    edi
        call    file_open
        mov     edx, [esi+0x24]
        push    edx
        push    0x2000
        call    archive_alloc
        add     esp, 8
        cmp     eax, ebx
        jz      alloc_fail
        mov     ecx, [edi]
        mov     edx, [ebp+0x10]
        push    ecx
        push    edx
        push    esi
        mov     ecx, eax
        call    reader_open
        jmp     store_result
cdpath_fail:
        mov     eax, [ebp+8]
        push    eax
        push    0x0076D294
        call    show_error
        add     esp, 8
        test    eax, eax
        jz      cleanup
        int     3
        jmp     cleanup
no_cdpath:
        push    edi
        push    0x2000
        call    archive_alloc
        add     esp, 8
        cmp     eax, ebx
        jz      alloc_fail
        mov     ecx, [ebp+0x10]
        push    ecx
        push    esi
        mov     ecx, eax
        call    archive_init_empty
        jmp     store_result
alloc_fail:
        xor     eax, eax
store_result:
        mov     [esi], eax
cleanup:
        call    some_cleanup
        mov     eax, [ebp-0xc]
        mov     edx, [ebp-8]
        pop     edi
        mov     dword ptr [g_save_state_48], eax
        mov     eax, esi
        pop     esi
        mov     dword ptr [g_save_state_44], edx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
