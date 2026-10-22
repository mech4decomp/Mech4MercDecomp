/*
 * FUN_0051fb70 (756 B) — Campaign pilot directory scanner.
 *
 * __thiscall (ECX = this). Scans "Resource\\Pilots\\" for .mw4 files,
 * processes each entry, tracks the "best" one via FUN_006fbce0
 * comparison, then calls FUN_00520f80 and FUN_0051fe70.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_00412570(const char *str);
extern int __cdecl FUN_006fc4d0(int param);
extern int __cdecl FUN_006fb780(int param);
extern int __cdecl FUN_004125e0(int a, int b);
extern int __cdecl FUN_00412740(int param);
extern int __cdecl FUN_0040d9b0(int param);
extern void * __cdecl FUN_004084d0(int size);
extern int __cdecl FUN_0041d890(int param, int flag);
extern int __cdecl FUN_0041db80(int param);
extern int __cdecl FUN_0041dc10(int param);
extern int __cdecl FUN_0041dac0(int param);
extern int __cdecl FUN_0041dbe0(int param);
extern int __cdecl FUN_00412780(int param);
extern void __cdecl FUN_004084e0(void *ptr);
extern __int64 __cdecl FUN_006fbce0(int param);
extern int __cdecl FUN_00520f80(const char *a, const char *b, int c, int d, int e, int f);
extern int __cdecl FUN_0051fe70(int param);

__declspec(naked) void __fastcall FUN_0051fb70(int this)
{
    __asm {
        sub     esp, 0x34
        push    edi
        mov     edi, ecx                      ; this

        ; Init string with "Resource\\Pilots\\"
        push    0x77a0c8
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x30], edi
        mov     byte ptr [esp + 0x0b], 0x0
        call    FUN_00412570

        ; Check if directory exists
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        call    FUN_006fc4d0
        test    al, al
        jnz     l_dir_exists

        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_006fb780
        mov     byte ptr [esp + 0x07], 0x1

    l_dir_exists:
        mov     edx, dword ptr [esp + 0x10]
        push    ebx
        push    esi

        ; Build path with "\\*.mw4" pattern
        push    0x772548
        push    edx
        lea     ecx, [esp + 0x2c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412740
        lea     ecx, [esp + 0x24]
        call    FUN_0040d9b0

        ; Allocate 0x38-byte struct
        push    0x38
        call    FUN_004084d0
        xor     esi, esi
        add     esp, 0x4
        cmp     eax, esi
        jz      l_alloc_fail1

        mov     ecx, dword ptr [esp + 0x18]
        push    0x1
        push    ecx
        mov     ecx, eax
        call    FUN_0041d890
        mov     ebx, eax
        jmp     l_got_struct1

    l_alloc_fail1:
        xor     ebx, ebx

    l_got_struct1:
        mov     ecx, ebx
        call    FUN_0041db80
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412570

        ; Initialize loop state
        cmp     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x38], esi   ; best_lo
        mov     dword ptr [esp + 0x3c], esi   ; best_hi
        jz      l_loop_done_outer

        push    ebp

    l_loop_start:
        ; Init string with "Resource\\Pilots\\"
        push    0x77a0c8
        lea     ecx, [esp + 0x18]
        call    FUN_00412570

        ; Build path: base + filename
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    eax
        lea     ecx, [esp + 0x34]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x2c]
        call    FUN_0040d9b0

        ; Build path with "\\*.mw4" pattern
        mov     ecx, dword ptr [esp + 0x14]
        push    0x77a150
        push    ecx
        lea     ecx, [esp + 0x38]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x30]
        call    FUN_0040d9b0

        ; Allocate 0x38-byte struct
        push    0x38
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_alloc_fail2

        mov     edx, dword ptr [esp + 0x14]
        push    0x0
        push    edx
        mov     ecx, eax
        call    FUN_0041d890
        mov     ebp, eax
        jmp     l_got_struct2

    l_alloc_fail2:
        xor     ebp, ebp

    l_got_struct2:
        ; Get name string from struct+4, increment refcount
        mov     eax, dword ptr [ebp + 0x4]
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jz      l_no_refcount_inc
        inc     byte ptr [eax - 0x1]

    l_no_refcount_inc:
        mov     ecx, ebp
        call    FUN_0041dc10
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00412570

        ; Check if we have a filename to compare
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jz      l_skip_entry

        ; Build comparison path
        push    eax
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x3c]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00412740

        ; Decrement refcount on previous comparison string
        mov     eax, dword ptr [esp + 0x34]
        test    eax, eax
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
        ; Compare entries via FUN_006fbce0
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        call    FUN_006fbce0
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x40]
        mov     edi, edx
        cmp     edi, eax
        jl      l_skip_entry
        jg      l_new_best
        cmp     esi, dword ptr [esp + 0x3c]
        jbe     l_skip_entry

    l_new_best:
        lea     edx, [esp + 0x18]
        push    edx
        lea     ecx, [esp + 0x28]
        call    FUN_00412740
        mov     dword ptr [esp + 0x3c], esi
        mov     dword ptr [esp + 0x40], edi

    l_skip_entry:
        ; Cleanup struct
        test    ebp, ebp
        jz      l_no_cleanup1
        mov     ecx, ebp
        call    FUN_0041dac0
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4

    l_no_cleanup1:
        ; Get next filename
        mov     ecx, ebx
        call    FUN_0041dbe0
        mov     ecx, ebx
        call    FUN_0041db80
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00412780

        ; Decrement refcount on filename
        mov     eax, dword ptr [esp + 0x28]
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
        ; Decrement refcount on name
        mov     eax, dword ptr [esp + 0x20]
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
        ; Decrement refcount on base path
        mov     eax, dword ptr [esp + 0x14]
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
        ; Check if more entries
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jnz     l_loop_start

        mov     esi, dword ptr [esp + 0x3c]
        mov     edi, dword ptr [esp + 0x38]
        pop     ebp

    l_loop_done_outer:
        ; Cleanup first struct
        test    ebx, ebx
        jz      l_no_cleanup2
        mov     ecx, ebx
        call    FUN_0041dac0
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4

    l_no_cleanup2:
        ; Check if we found a best entry
        or      esi, dword ptr [esp + 0x3c]
        pop     esi
        pop     ebx
        jz      l_use_default

        mov     al, byte ptr [esp + 0x07]
        test    al, al
        jz      l_use_best

    l_use_default:
        push    0x0
        push    0x0
        push    0x1
        push    0x13ec
        push    0x772c5c
        push    0x772c5c
        mov     ecx, edi
        call    FUN_00520f80
        push    0x772c5c
        jmp     l_call_fe70

    l_use_best:
        mov     eax, dword ptr [esp + 0x18]
        push    eax

    l_call_fe70:
        mov     ecx, edi
        call    FUN_0051fe70

        ; Decrement refcount on best name
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        pop     edi
        jz      l_no_refcount_dec5
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount_dec5
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount_dec5:
        ; Decrement refcount on base path
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        jz      l_no_refcount_dec6
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount_dec6
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount_dec6:
        ; Decrement refcount on dir path
        mov     eax, dword ptr [esp + 0x0c]
        test    eax, eax
        jz      l_no_refcount_dec7
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_no_refcount_dec7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4

    l_no_refcount_dec7:
        add     esp, 0x34
        ret
    }
}
