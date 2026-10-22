/*
 * FUN_0068BB60 (93 B) — Object state update.
 *
 * __thiscall (ECX = this), RET 0xC (three stack params).
 * Resolves an index into a table, conditionally sets this->+0x30,
 * calls FUN_00686790 and a virtual method at +0x1C8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00686790(void);

__declspec(naked) void __fastcall FUN_0068bb60(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     al, byte ptr [edi + 0x30]
        test    al, al
        jz      l_b8
        mov     eax, dword ptr [edi + 0x4c]
        cmp     eax, -1
        jnz     l_78
        mov     esi, dword ptr [edi + 0x14]
        jmp     l_7e
    l_78:
        mov     ecx, dword ptr [edi + 0x40]
        mov     esi, dword ptr [ecx + eax * 4]
    l_7e:
        mov     al, byte ptr [esi + 0xc]
        test    al, al
        jnz     l_8e
        mov     byte ptr [edi + 0x30], 1
        pop     edi
        pop     esi
        ret     0xc
    l_8e:
        mov     edx, dword ptr [esi + 0x18]
        push    ebp
        mov     ebp, dword ptr [esi + 0x10]
        push    edx
        mov     ecx, ebp
        call    FUN_00686790
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx]
        push    0
        push    ebp
        mov     dword ptr [esi + 0x10], 0
        call    dword ptr [eax + 0x1c8]
        mov     byte ptr [edi + 0x30], 0
        pop     ebp
    l_b8:
        pop     edi
        pop     esi
        ret     0xc
    }
}
