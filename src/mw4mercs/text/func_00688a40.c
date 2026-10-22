/*
 * FUN_00688a40 (43 B) — __thiscall wrapper.
 *
 * Calls FUN_00689410(param_1, param_2, param_3) then
 * FUN_006b0790(param_1, param_2, param_3). RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00689410(void);
extern void __cdecl FUN_006b0790(void);

__declspec(naked) void FUN_00688a40(void)
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
        call    FUN_00689410
        push    edi
        push    ebx
        push    ebp
        mov     ecx, esi
        call    FUN_006b0790
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
