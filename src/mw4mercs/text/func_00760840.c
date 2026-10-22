/*
 * FUN_00760840 (228 B) — in-.text data block function (block 0x760630).
 * Validates up to three pointers via FUN_00760e70, then calls
 * FUN_00769000 (the .txt2 SafeDisc leftover) to fill a result struct.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00760e70(void);
extern void __cdecl FUN_00769000(void);

__declspec(naked) void FUN_00760840(void)
{
    __asm {
        sub     esp, 0x50
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x68]
        test    esi, esi
        push    edi
        je      L086E
        push    4
        push    esi
        call    FUN_00760e70
        add     esp, 8
        test    ax, ax
        jne     L086E
        mov     eax, 0x322
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x14
L086E:
        mov     ebp, dword ptr [esp + 0x70]
        test    ebp, ebp
        je      L0895
        push    4
        push    ebp
        call    FUN_00760e70
        add     esp, 8
        test    ax, ax
        jne     L0895
        mov     eax, 0x322
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x14
L0895:
        mov     ebx, dword ptr [esp + 0x74]
        test    ebx, ebx
        je      L08BC
        push    4
        push    ebx
        call    FUN_00760e70
        add     esp, 8
        test    ax, ax
        jne     L08BC
        mov     eax, 0x322
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x14
L08BC:
        mov     edx, dword ptr [esp + 0x64]
        mov     ecx, 0x14
        xor     eax, eax
        lea     edi, [esp + 0x10]
        rep stosd
        mov     eax, dword ptr [esp + 0x68]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x18], 0xc08a5335
        mov     dword ptr [esp + 0x1c], 0x50
        mov     dword ptr [esp + 0x20], 0xa
        mov     dword ptr [esp + 0x28], eax
        call    FUN_00769000
        add     esp, 8
        test    esi, esi
        je      L0905
        mov     ecx, dword ptr [esp + 0x50]
        mov     dword ptr [esi], ecx
L0905:
        test    ebp, ebp
        je      L0910
        mov     edx, dword ptr [esp + 0x54]
        mov     dword ptr [ebp], edx
L0910:
        test    ebx, ebx
        je      L091A
        mov     ecx, dword ptr [esp + 0x58]
        mov     dword ptr [ebx], ecx
L091A:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x14
    }
}
