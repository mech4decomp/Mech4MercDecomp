/*
 * FUN_0060dea0 (126 B) — Stream lookup with retry loop.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * Builds a buffer at this+4+0x384, then loops calling FUN_005b6f90
 * until it succeeds or the iterator is exhausted.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_005b6f90(void);
extern void __cdecl FUN_00416c60(void);

__declspec(naked) int __stdcall FUN_0060dea0(int param_1, int param_2)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [ecx + 4]
        push    ebx
        push    esi
        push    edi
        add     eax, 0x384
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0xc], 0x783f04
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      l_f8
        mov     edi, dword ptr [esp + 0x28]
        mov     ebx, dword ptr [esp + 0x24]
    l_d7:
        push    0
        push    0
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_005b6f90
        cmp     eax, -2
        lea     ecx, [esp + 0xc]
        jg      l_0d
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     l_d7
    l_f8:
        lea     ecx, [esp + 0xc]
        call    FUN_00416c60
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        add     esp, 0x14
        ret     8
    l_0d:
        call    FUN_00416c60
        mov     eax, dword ptr [esi + 0x3c]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     8
    }
}
