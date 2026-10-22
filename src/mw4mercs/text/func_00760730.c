/*
 * FUN_00760730 (222 B @ 0x760730) - __stdcall, RET 8. Allocates and
 * initializes an object, queries it, and on failure builds a small struct on
 * the stack and calls FUN_00769000. (Block 0x760630 is 262 B and contains a
 * second function at 0x760810.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_00760e70(void);
extern void __cdecl FUN_00760e00(void);
extern void __cdecl FUN_00760f90(void);
extern void __cdecl FUN_00760e30(void);
extern void __cdecl FUN_00769000(void);

__declspec(naked) void FUN_00760730(void)
{
    __asm {
        sub     esp, 0x50
        push    ebx
        mov     ebx, dword ptr [esp + 0x5c]
        push    esi
        push    edi
        push    4
        push    ebx
        call    FUN_00760e70
        add     esp, 8
        test    ax, ax
        jne     L_760758
        mov     eax, 0x321
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     8
L_760758:
        push    0xc
        call    FUN_00760e00
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jne     L_760776
        mov     eax, 0x191
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     8
L_760776:
        mov     ecx, esi
        xor     eax, eax
        push    esi
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [ecx + 8], eax
        call    FUN_00760f90
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        je      L_7607a5
        push    esi
        call    FUN_00760e30
        add     esp, 4
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     8
L_7607a5:
        mov     edx, dword ptr [esp + 0x60]
        mov     ecx, 0x14
        xor     eax, eax
        lea     edi, [esp + 0xc]
        rep     stosd
        lea     eax, [esp + 0xc]
        mov     dword ptr [esp + 0xc], 0xc08a5335
        push    eax
        push    esi
        mov     dword ptr [esp + 0x18], 0x50
        mov     dword ptr [esp + 0x1c], 5
        mov     dword ptr [esp + 0x24], edx
        call    FUN_00769000
        mov     edi, eax
        add     esp, 8
        test    edi, edi
        je      L_7607fa
        push    esi
        call    FUN_00760e30
        add     esp, 4
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     8
L_7607fa:
        mov     ecx, dword ptr [esp + 0x4c]
        pop     edi
        mov     dword ptr [esi + 8], ecx
        mov     dword ptr [ebx], esi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x50
        ret     8
    }
}
