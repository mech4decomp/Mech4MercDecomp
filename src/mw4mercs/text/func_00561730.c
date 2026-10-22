/*
 * FUN_00561730 (263 B) — __thiscall destructor-like cleanup function.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __cdecl FUN_004084e0(void *ptr);
extern int __cdecl FUN_0041fc90(void);
extern int __cdecl FUN_0055f500(void);
extern int __cdecl FUN_0055fd00(void);
extern int __cdecl FUN_00561a20(void);
extern int __cdecl FUN_00561a70(void);
extern int __cdecl FUN_00561ab0(void);
extern int __cdecl FUN_00561e30(void);
extern int __cdecl FUN_005621b0(void);

__declspec(naked) void FUN_00561730(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, [esi + 0x38]
        mov     eax, [ecx + 8]
        lea     ebx, [esi + 0x38]
        xor     ebp, ebp
        cmp     eax, ecx
        mov     [esp + 0x14], esi
        mov     dword ptr [esi], 0x0077dfc4
        mov     [esp + 0xc], eax
        jz      second_loop
    first_loop:
        mov     esi, [eax + 0x14]
        cmp     esi, ebp
        jz      first_skip_free
        mov     ecx, esi
        call    FUN_0055f500
        push    esi
        call    FUN_004084e0
        mov     eax, [esp + 0x10]
        add     esp, 4
    first_skip_free:
        mov     [eax + 0x14], ebp
        lea     eax, [esp + 0xc]
        push    eax
        call    FUN_005621b0
        mov     eax, [esp + 0x10]
        mov     ecx, [ebx]
        add     esp, 4
        cmp     eax, ecx
        jnz     first_loop
        mov     esi, [esp + 0x14]
    second_loop:
        mov     ecx, [esi + 0x44]
        mov     eax, [ecx + 8]
        add     esi, 0x44
        cmp     eax, ecx
        mov     [esp + 0x10], eax
        jz      check_count
        push    edi
    second_loop_inner:
        mov     edi, [eax + 0x14]
        cmp     edi, ebp
        jz      second_skip_free
        mov     ecx, edi
        call    FUN_0055fd00
        push    edi
        call    FUN_004084e0
        mov     eax, [esp + 0x18]
        add     esp, 4
    second_skip_free:
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     [eax + 0x14], ebp
        call    FUN_005621b0
        mov     eax, [esp + 0x18]
        mov     ecx, [esi]
        add     esp, 4
        cmp     eax, ecx
        jnz     second_loop_inner
        pop     edi
    check_count:
        cmp     [esi + 4], ebp
        jz      check_count2
        mov     edx, [esi]
        mov     eax, [edx + 4]
        push    eax
        mov     ecx, esi
        call    FUN_00561e30
        mov     eax, [esi]
        mov     [eax + 8], eax
        mov     [eax + 4], ebp
        mov     [eax + 0xc], eax
        mov     [esi + 4], ebp
    check_count2:
        mov     ecx, esi
        call    FUN_00561a70
        cmp     [ebx + 4], ebp
        jz      cleanup_sub
        mov     ecx, [ebx]
        mov     edx, [ecx + 4]
        push    edx
        mov     ecx, ebx
        call    FUN_00561ab0
        mov     eax, [ebx]
        mov     [eax + 8], eax
        mov     [eax + 4], ebp
        mov     [eax + 0xc], eax
        mov     [ebx + 4], ebp
    cleanup_sub:
        mov     ecx, ebx
        call    FUN_00561a20
        mov     eax, [esp + 0x14]
        lea     ecx, [eax + 0xc]
        call    FUN_0041fc90
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xc
        ret
    }
}
