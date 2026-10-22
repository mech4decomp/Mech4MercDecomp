/*
 * FUN_006803f0 (43 B) — __thiscall wrapper.
 *
 * Calls FUN_006801b0(param_1, param_2), stores result at this+0x5c, then
 * calls FUN_00680290(param_1, param_2, param_1). RET 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006801b0(void);
extern void __cdecl FUN_00680290(void);

__declspec(naked) void FUN_006803f0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    edi
        mov     esi, ecx
        push    ebx
        call    FUN_006801b0
        mov     dword ptr [esi + 0x5c], eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    edi
        push    ebx
        mov     ecx, esi
        call    FUN_00680290
        pop     edi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
