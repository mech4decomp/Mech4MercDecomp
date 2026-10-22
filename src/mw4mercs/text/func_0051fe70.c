/*
 * FUN_0051fe70 (1040 B) — Campaign screen initialization.
 *
 * __thiscall (ECX = this, saved to EBP). Sets up player options,
 * control options, and pilot data for the campaign screen.
 * Opens/creates "Resource\\Pilots\\" directory, loads .mw4 files,
 * initializes database entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_00412780(int param);
extern int __cdecl FUN_00412570(const char *str);
extern int __cdecl FUN_006fc4d0(int param);
extern int __cdecl FUN_006fb780(int param);
extern int __cdecl FUN_004125e0(int a, int b);
extern int __cdecl FUN_00412740(int param);
extern void __cdecl FUN_004084e0(void *ptr);
extern void * __cdecl FUN_004084d0(int size);
extern int __cdecl FUN_004d2d00(int a, int b, int c, int d, int e, int f, int g);
extern int __cdecl FUN_004d2110(const char *name, int db, int flag);
extern int __cdecl FUN_004d21c0(int param);
extern int __cdecl FUN_0041ee70(int param);
extern int __cdecl FUN_0061a510(int a, int b);
extern int __cdecl FUN_004d2680(int a, int b);
extern int __cdecl FUN_0061a160(int param);
extern int __cdecl FUN_0050aba0(void);
extern int __cdecl FUN_0050a5c0(int param);
extern int __cdecl FUN_004d2a90(int param);
extern int __cdecl FUN_0041ef60(int param);
extern int __cdecl FUN_004d2310(int param);
extern int __cdecl FUN_0050a730(int param);

__declspec(naked) int __fastcall FUN_0051fe70(int this, int param1)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007dab40;
extern int DAT_007dab44;
extern int DAT_007db0b8;
extern int DAT_007dd230;
__asm {
; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov eax, dword ptr [DAT_007dab40]
        sub     esp, 0x188
        push    ebp
        mov     ebp, ecx                      ; this
        ; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov ecx, dword ptr [DAT_007dab44]
        push    esi
        mov     esi, dword ptr [esp + 0x194]  ; param1 (stack param)
        push    edi
        xor     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0x0c]
        xor     ecx, 0x85739531
        push    esi
        add     ecx, 0xb0
        call    FUN_00412780

        ; Init "Resource\\Pilots\\"
        push    0x77a0c8
        lea     ecx, [esp + 0x10]
        call    FUN_00412570

        ; Check if directory exists
        mov     edx, dword ptr [esp + 0x0c]
        push    edx
        call    FUN_006fc4d0
        test    al, al
        jnz     l_dir_exists1
        mov     eax, dword ptr [esp + 0x0c]
        push    eax
        call    FUN_006fb780

    l_dir_exists1:
        ; Build path: base + pilot_name
        mov     ecx, dword ptr [esp + 0x0c]
        push    esi
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        ; Decrement refcount on previous path
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_no_refcount1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount1:
        ; Build path with "\\*.mw4" pattern
        mov     edx, dword ptr [esp + 0x0c]
        push    0x76c5a8
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740

        ; Decrement refcount
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_no_refcount2
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount2:
        ; Close previous database if open
        mov     ecx, dword ptr [ebp + 0x40ee4]
        test    ecx, ecx
        jz      l_no_close_db
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]

    l_no_close_db:
        ; Increment refcount on base path
        mov     eax, dword ptr [esp + 0x0c]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      l_no_refcount_inc
        inc     byte ptr [eax - 0x1]

    l_no_refcount_inc:
        ; Build "options.mw4" path
        mov     ecx, dword ptr [esp + 0x10]
        push    0x77a0bc
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740

        ; Decrement refcount
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      l_no_refcount3
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount3:
        mov     edx, dword ptr [esp + 0x10]
        push    ebx
        push    edx
        mov     bl, 0x1
        call    FUN_006fc4d0
        test    al, al
        jz      l_options_not_found

        ; Options file exists - open it
        mov     eax, dword ptr [esp + 0x14]
        ; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov ecx, dword ptr [DAT_007db0b8]
        push    0x0
        push    0x0
        push    0x0
        push    0x3f
        push    0x7
        push    0x0
        push    eax
        call    FUN_004d2d00
        mov     esi, eax
        push    0x0
        push    esi
        push    0x77a0a8
        lea     ecx, [esp + 0x50]
        mov     dword ptr [ebp + 0x40ee4], esi
        call    FUN_004d2110

        ; Check if options data is valid
        mov     eax, dword ptr [esp + 0x80]
        test    eax, eax
        jz      l_close_options_db
        mov     eax, dword ptr [esp + 0x60]
        test    eax, eax
        jbe     l_close_options_db
        xor     bl, bl                        ; bl = 0 (found valid options)
        jmp     l_after_options_check

    l_close_options_db:
        test    esi, esi
        jz      l_after_options_check
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]

    l_after_options_check:
        lea     ecx, [esp + 0x44]
        call    FUN_004d21c0
        test    bl, bl
        jz      l_after_options_block

    l_options_not_found:
        ; Options file doesn't exist or is invalid - create new
        mov     eax, dword ptr [esp + 0x14]
        ; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov ecx, dword ptr [DAT_007db0b8]
        push    0x0
        push    0x1
        push    0x0
        push    0x3f
        push    0x7
        push    0x0
        push    eax
        call    FUN_004d2d00
        mov     esi, eax
        push    0x0
        lea     ecx, [esp + 0x48]
        mov     dword ptr [ebp + 0x40ee4], esi
        call    FUN_0041ee70
        lea     ecx, [esp + 0x44]
        push    ecx
        push    0x0
        call    FUN_0061a510
        add     esp, 0x8
        push    0x0
        push    esi
        push    0x77a0a8
        lea     ecx, [esp + 0x11c]
        call    FUN_004d2110
        mov     edx, dword ptr [esp + 0x44]
        push    0x0
        lea     ecx, [esp + 0x48]
        call    dword ptr [edx + 0x0c]
        push    0x0
        lea     eax, [esp + 0x48]
        mov     edi, 0xffffffec
        push    eax
        lea     ecx, [esp + 0x118]
        mov     dword ptr [esp + 0x54], edi
        call    FUN_004d2680

        ; Allocate player options struct
        push    0x88c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_alloc_fail1
        lea     ecx, [esp + 0x110]
        push    ecx
        mov     ecx, eax
        call    FUN_0061a160
        jmp     l_got_alloc1

    l_alloc_fail1:
        xor     eax, eax

    l_got_alloc1:
        ; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov ecx, dword ptr [DAT_007dd230]
        mov     dword ptr [ebp + 0x40ee8], eax
        call    FUN_0050aba0

        ; Set up control options
        push    0x0
        push    esi
        push    0x77a158
        lea     ecx, [esp + 0x160]
        call    FUN_004d2110
        push    0x0
        lea     ecx, [esp + 0x20]
        call    FUN_0041ee70
        ; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov ecx, dword ptr [DAT_007dd230]
        lea     edx, [esp + 0x1c]
        push    edx
        call    FUN_0050a5c0
        mov     eax, dword ptr [esp + 0x1c]
        push    0x0
        lea     ecx, [esp + 0x20]
        call    dword ptr [eax + 0x0c]
        push    0x0
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x15c]
        mov     dword ptr [esp + 0x2c], edi
        call    FUN_004d2680
        mov     ecx, esi
        call    FUN_004d2a90
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ef60
        lea     ecx, [esp + 0x154]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x110]
        call    FUN_004d21c0
        lea     ecx, [esp + 0x44]
        call    FUN_0041ef60

    l_after_options_block:
        ; Check if player options struct exists
        mov     ecx, dword ptr [ebp + 0x40ee8]
        test    ecx, ecx
        pop     ebx
        jz      l_no_player_options
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]

    l_no_player_options:
        ; Set up player options from database
        mov     eax, dword ptr [ebp + 0x40ee4]
        push    0x0
        push    eax
        push    0x77a0a8
        lea     ecx, [esp + 0xd4]
        call    FUN_004d2110
        lea     ecx, [esp + 0xc8]
        call    FUN_004d2310

        ; Allocate new player options struct
        push    0x88c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_alloc_fail2
        lea     ecx, [esp + 0xc8]
        push    ecx
        mov     ecx, eax
        call    FUN_0061a160
        jmp     l_got_alloc2

    l_alloc_fail2:
        xor     eax, eax

    l_got_alloc2:
        ; XOR globals to get pointer
        ; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov ecx, dword ptr [DAT_007dab44]
        mov     edi, dword ptr [ecx]
        ; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x74]
        xor     edx, edi
        mov     edx, dword ptr [edx + 0x0c]
        mov     dword ptr [ebp + 0x40ee8], eax
        mov     eax, dword ptr [eax + 0x5c]
        xor     edx, 0x85739531
        test    eax, eax
        mov     dword ptr [edx + 0xb4], ecx
        jz      l_no_name_copy

        ; Copy pilot name string
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebp + 0x40988]
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb

    l_no_name_copy:
        ; Set up control options from database
        mov     eax, dword ptr [ebp + 0x40ee4]
        push    0x0
        push    eax
        push    0x77a158
        lea     ecx, [esp + 0x90]
        call    FUN_004d2110
        lea     ecx, [esp + 0x84]
        call    FUN_004d2310
        lea     ecx, [esp + 0x84]
        push    ecx
        ; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov ecx, dword ptr [DAT_007dd230]
        call    FUN_0050a730
        lea     ecx, [esp + 0x84]
        call    FUN_004d21c0
        lea     ecx, [esp + 0xc8]
        call    FUN_004d21c0

        ; Decrement refcount on base path
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        jz      l_no_refcount4
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount4:
        ; Decrement refcount on base path (again)
        ; __emit: MSVC6 encodes mov eax,[esp] as 8B 04 24, not 8B 44 24 00
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00   ; mov eax, [esp]
        test    eax, eax
        jz      l_no_refcount5
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount5:
        mov     eax, 0x1
        add     esp, 0x188
        ret     0x4
    }


}
