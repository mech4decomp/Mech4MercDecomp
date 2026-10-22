/*
 * FUN_00760630 (242 B) — in-.text data block function (block 0x760630).
 * Allocates/initializes an object via FUN_00760e70 / FUN_00760e00 /
 * FUN_00760f90 / FUN_00760e30 and FUN_00769000 (the .txt2 SafeDisc
 * leftover).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00760e70(void);
extern void __cdecl FUN_00760e00(void);
extern void __cdecl FUN_00760f90(void);
extern void __cdecl FUN_00760e30(void);
extern void __cdecl FUN_00769000(void);

__declspec(naked) void FUN_00760630(void)
{
    __asm {
        sub     esp, 0x50
        push    ebx
        mov     ebx, dword ptr [esp + 0x64]
        push    esi
        push    edi
        push    4
        push    ebx
        call    FUN_00760e70
        add     esp, 8
        test    ax, ax
        jne     L0658
        mov     eax, 0x321
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     0x10
L0658:
        push    0xc
        call    FUN_00760e00
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jne     L0676
        mov     eax, 0x191
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     0x10
L0676:
        mov     ecx, esi
        xor     eax, eax
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 4], eax
        mov     dword ptr [ecx + 8], eax
        call    FUN_00760f90
        mov     edi, eax
        test    edi, edi
        je      L06A1
        push    esi
        call    FUN_00760e30
        add     esp, 4
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     0x10
L06A1:
        mov     edx, dword ptr [esp + 0x68]
        mov     ecx, 0x14
        xor     eax, eax
        lea     edi, [esp + 0xc]
        rep stosd
        mov     eax, dword ptr [esp + 0x60]
        mov     ecx, dword ptr [esp + 0x64]
        mov     dword ptr [esp + 0x1c], edx
        lea     edx, [esp + 0xc]
        push    edx
        push    esi
        mov     dword ptr [esp + 0x14], 0xc08a5335
        mov     dword ptr [esp + 0x18], 0x50
        mov     dword ptr [esp + 0x1c], 0x19
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x38], 3
        mov     dword ptr [esp + 0x3c], ecx
        call    FUN_00769000
        mov     edi, eax
        add     esp, 8
        test    edi, edi
        je      L070E
        push    esi
        call    FUN_00760e30
        add     esp, 4
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x50
        ret     0x10
L070E:
        mov     eax, dword ptr [esp + 0x4c]
        pop     edi
        mov     dword ptr [esi + 8], eax
        mov     dword ptr [ebx], esi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x50
        ret     0x10
    }
}
