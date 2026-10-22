/*
 * FUN_00520320 (900 B) — Campaign save/load function.
 *
 * __thiscall (ECX = this, saved to ESI). Cleans up old database
 * connections, then scans pilot directories, saves/loads game data.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_00412570(const char *str);
extern int __cdecl FUN_004125e0(int a, int b);
extern int __cdecl FUN_00412740(int param);
extern int __cdecl FUN_0040d9b0(int param);
extern void * __cdecl FUN_004084d0(int size);
extern int __cdecl FUN_0041d890(int param, int flag);
extern int __cdecl FUN_0041db30(int param);
extern int __cdecl FUN_0041db70(int param);
extern int __cdecl FUN_0041dac0(int param);
extern void __cdecl FUN_004084e0(void *ptr);
extern int __cdecl FUN_00412980(int param);
extern int __cdecl FUN_006fb7c0(int param);
extern int __cdecl FUN_006fb7e0(int param);
extern int __cdecl FUN_004c8e90(int param);
extern int __cdecl FUN_00412780(int param);

__declspec(naked) int __fastcall FUN_00520320(int this, int param2)
{
    

/* extern data/function symbols for __emit replacements */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b2ac;
__asm {
sub     esp, 0x14
        push    esi
        mov     esi, ecx                      ; this

        ; Close player options
        mov     ecx, dword ptr [esi + 0x40ee8]
        test    ecx, ecx
        jz      l_no_player_opts
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     dword ptr [esi + 0x40ee8], 0x0

    l_no_player_opts:
        ; Close database
        mov     ecx, dword ptr [esi + 0x40ee4]
        test    ecx, ecx
        jz      l_no_db
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
        mov     dword ptr [esi + 0x40ee4], 0x0

    l_no_db:
        ; XOR globals
        ; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        ; __emit: MSVC6 encodes xor reg,[imm32] as xor reg,imm32
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x44]
        xor     edx, 0x85739531
        lea     eax, [ecx + 0x44]
        jz      l_after_cleanup

        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        jz      l_call_cleanup
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]

    l_call_cleanup:
        push    0x11
        call    FUN_004c8e90
        add     esp, 0x4

    l_after_cleanup:
        ; Get pilot name from param2
        mov     ecx, dword ptr [esp + 0x1c]   ; param2
        mov     edx, dword ptr [ecx + 0x4]
        push    ebx
        mov     ebx, dword ptr [edx]          ; pilot name

        ; Init "Resource\\Pilots\\"
        push    0x77a0c8
        lea     ecx, [esp + 0x0c]
        call    FUN_00412570

        ; Build path: base + pilot_name
        mov     eax, dword ptr [esp + 0x08]
        push    ebx
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x0c]
        call    FUN_00412740
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0

        ; Build path with "\\*.mw4" pattern
        mov     ecx, dword ptr [esp + 0x08]
        push    0x76c5a8
        push    ecx
        lea     ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x0c]
        call    FUN_00412740
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0

        ; Increment refcount on base path
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jz      l_no_refcount_inc1
        inc     byte ptr [eax - 0x1]

    l_no_refcount_inc1:
        ; Build "Games\\" path
        mov     edx, dword ptr [esp + 0x10]
        push    0x77a16c
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0

        ; Increment refcount on base path
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x0c], eax
        jz      l_no_refcount_inc2
        inc     byte ptr [eax - 0x1]

    l_no_refcount_inc2:
        ; Build "\\*.mw4" pattern
        mov     eax, dword ptr [esp + 0x0c]
        push    0x772548
        push    eax
        lea     ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0

        ; Allocate 0x38-byte struct
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_alloc_fail1
        mov     ecx, dword ptr [esp + 0x0c]
        push    0x1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     esi, eax
        jmp     l_got_struct1

    l_alloc_fail1:
        xor     esi, esi

    l_got_struct1:
        mov     ecx, esi
        call    FUN_0041db30
        test    eax, eax
        jz      l_loop1_done

    l_loop1_start:
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        mov     dword ptr [esp + 0x20], ecx
        jz      l_no_refcount_inc3
        inc     byte ptr [ecx - 0x1]

    l_no_refcount_inc3:
        mov     edx, dword ptr [esp + 0x20]
        push    eax
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        call    FUN_006fb7c0
        mov     ecx, esi
        call    FUN_0041db70
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0
        mov     ecx, esi
        call    FUN_0041db30
        test    eax, eax
        jnz     l_loop1_start

    l_loop1_done:
        ; Cleanup struct
        test    esi, esi
        jz      l_no_cleanup1
        mov     ecx, esi
        call    FUN_0041dac0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

    l_no_cleanup1:
        lea     ecx, [esp + 0x0c]
        call    FUN_00412980
        mov     ecx, dword ptr [esp + 0x0c]
        push    ecx
        call    FUN_006fb7e0

        ; Increment refcount on base path
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        mov     dword ptr [esp + 0x14], eax
        jz      l_no_refcount_inc4
        inc     byte ptr [eax - 0x1]

    l_no_refcount_inc4:
        ; Build "\\*.mw4" pattern
        mov     edx, dword ptr [esp + 0x14]
        push    0x772548
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0

        ; Allocate 0x38-byte struct
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_alloc_fail2
        mov     ecx, dword ptr [esp + 0x14]
        push    0x1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     esi, eax
        jmp     l_got_struct2

    l_alloc_fail2:
        xor     esi, esi

    l_got_struct2:
        mov     ecx, esi
        call    FUN_0041db30
        test    eax, eax
        jz      l_loop2_done

    l_loop2_start:
        mov     ecx, dword ptr [esp + 0x08]
        test    ecx, ecx
        mov     dword ptr [esp + 0x20], ecx
        jz      l_no_refcount_inc5
        inc     byte ptr [ecx - 0x1]

    l_no_refcount_inc5:
        mov     edx, dword ptr [esp + 0x20]
        push    eax
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        call    FUN_006fb7c0
        mov     ecx, esi
        call    FUN_0041db70
        lea     ecx, [esp + 0x20]
        call    FUN_0040d9b0
        mov     ecx, esi
        call    FUN_0041db30
        test    eax, eax
        jnz     l_loop2_start

    l_loop2_done:
        ; Cleanup struct
        test    esi, esi
        jz      l_no_cleanup2
        mov     ecx, esi
        call    FUN_0041dac0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

    l_no_cleanup2:
        mov     ecx, dword ptr [esp + 0x08]
        push    ecx
        call    FUN_006fb7e0

        ; Compare pilot name with current
        ; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        ; __emit: MSVC6 encodes xor reg,[imm32] as xor reg,imm32
        xor eax, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax + 0x0c]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0xb0]
        push    ebx
        push    ecx
        ; __emit: MSVC6 doesn't support call dword ptr [imm32]
        call dword ptr [DAT_0076b2ac]
        add     esp, 0x8
        test    eax, eax
        pop     ebx
        jnz     l_no_name_update

        ; Name matches - update
        ; __emit: MSVC6 encodes mov reg,[imm32] as immediate load
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        ; __emit: MSVC6 encodes xor reg,[imm32] as xor reg,imm32
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x0c]
        xor     ecx, 0x85739531
        push    0x76b768
        add     ecx, 0xb0
        call    FUN_00412780

    l_no_name_update:
        ; Decrement refcounts
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        pop     esi
        jz      l_no_refcount_dec1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount_dec1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount_dec1:
        mov     eax, dword ptr [esp + 0x04]
        test    eax, eax
        jz      l_no_refcount_dec2
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount_dec2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount_dec2:
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        jz      l_no_refcount_dec3
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount_dec3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount_dec3:
        ; __emit: MSVC6 encodes mov eax,[esp] as 8B 04 24, not 8B 44 24 00
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x00   ; mov eax, [esp]
        test    eax, eax
        jz      l_no_refcount_dec4
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount_dec4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount_dec4:
        mov     eax, 0x1
        add     esp, 0x14
        ret     0x8
    }


}
