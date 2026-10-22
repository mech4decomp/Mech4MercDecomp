/*
 * FUN_00688a00 (51 B) - __thiscall. Calls FUN_006b0780(param_1, param_2,
 * param_3), zeroes this->0x2c and this->0x30, then calls
 * FUN_00689410(param_1, param_2, param_3).
 *
 * __thiscall (ECX = this), RET 0xc (three stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b0780(void);
extern void __cdecl FUN_00689410(void);

__declspec(naked) void __stdcall FUN_00688a00(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        push    edi
        push    ebx
        mov     esi, ecx
        push    ebp
        call    FUN_006b0780
        push    edi
        xor     eax, eax
        push    ebx
        mov     dword ptr [esi + 0x2c], eax
        push    ebp
        mov     ecx, esi
        mov     dword ptr [esi + 0x30], eax
        call    FUN_00689410
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
