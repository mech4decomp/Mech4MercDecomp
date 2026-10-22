/*
 * FUN_005ff720 (137 B) — __thiscall. Weapon/mech rendering helper.
 * Computes a capacity/offset, fills a dword array with a sign-extended
 * boolean, then calls FUN_005ff840 / FUN_00602c40 / FUN_005ff860.
 * The JBE at 0x005FF746 tail-jumps into the next function (FUN_005ff7a9).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005ff840(void);
extern void __cdecl FUN_00602c40(void);
extern void __cdecl FUN_005ff860(void);

__declspec(naked) void FUN_005ff720(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        mov     ebx, dword ptr [esp+0x28]
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [esi+0x8]
        mov     edx, dword ptr [esi+0x4]
        sub     eax, ecx
        sar     eax, 0x2
        shl     eax, 0x5
        push    edi
        mov     edi, dword ptr [esi+0xc]
        sub     eax, edx
        add     eax, edi
        cmp     ebx, eax
        jbe     L7a9            ; tail-jump into FUN_005ff7a9 (next fn entry)
        mov     dl, byte ptr [esp+0x38]
        mov     ecx, dword ptr [esi+0x10]
        mov     eax, dword ptr [esi]
        neg     dl
        sbb     edx, edx
        cmp     eax, ecx
        jz      L762
L759:
        mov     dword ptr [eax], edx
        add     eax, 0x4
        cmp     eax, ecx
        jnz     L759
L762:
        mov     edi, dword ptr [esi]
        mov     ecx, dword ptr [esi+0x8]
        mov     eax, dword ptr [esi+0x4]
        mov     ebp, dword ptr [esi+0xc]
        mov     edx, dword ptr [esp+0x38]
        sub     ecx, edi
        sar     ecx, 0x2
        shl     ecx, 0x5
        sub     eax, ecx
        sub     eax, ebp
        push    edx
        add     eax, ebx
        push    eax
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, esi
        call    FUN_005ff840
        sub     esp, 0x8
        mov     ecx, esp
        push    eax
        call    FUN_00602c40
        mov     ecx, esi
        call    FUN_005ff860
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x20
        ret     0x8
L7a9:
    }
}
