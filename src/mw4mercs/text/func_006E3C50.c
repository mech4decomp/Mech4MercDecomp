/*
 * FUN_006E3C50 (172 B true extent; 240 B slice incl. next fn) — in-.text
 * data block function (block 0x6E3AEC). Buffer read loop calling
 * FUN_006e3d00 / FUN_006e2bc0 / FUN_006e2eb0 / FUN_006e2f20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006e3d00(void);
extern void __cdecl FUN_006e2bc0(void);
extern void __cdecl FUN_006e2eb0(void);
extern void __cdecl FUN_006e2f20(void);

__declspec(naked) void FUN_006E3C50(void)
{
    __asm {
        sub     esp, 0x100
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x110]
        push    esi
        push    ebp
        push    0x100
        lea     eax, [esp + 0x14]
        mov     ebx, ecx
        mov     ecx, dword ptr [esp + 0x118]
        push    eax
        push    ecx
        call    FUN_006e3d00
        mov     esi, eax
        mov     edx, 0x100
        sub     edx, esi
        add     esp, 0x10
        cmp     edx, 2
        jbe     L3CAA
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, ebx
        call    FUN_006e2bc0
        xor     eax, eax
        test    esi, esi
        pop     esi
        pop     ebp
        setg    al
        pop     ebx
        add     esp, 0x100
        ret     8
L3CAA:
        push    edi
        mov     esi, 0x100
L3CB0:
        push    ebp
        add     esi, 0x100
        push    esi
        lea     ecx, [esi - 1]
        push    ecx
        mov     ecx, ebx
        call    FUN_006e2eb0
        mov     edx, dword ptr [esp + 0x11c]
        push    eax
        push    edx
        call    FUN_006e3d00
        mov     edi, eax
        mov     eax, esi
        sub     eax, edi
        add     esp, 0x10
        cmp     eax, 2
        jle     L3CB0
        push    -1
        mov     ecx, ebx
        call    FUN_006e2f20
        xor     eax, eax
        test    edi, edi
        pop     edi
        pop     esi
        pop     ebp
        setg    al
        pop     ebx
        add     esp, 0x100
        ret     8
    }
}
