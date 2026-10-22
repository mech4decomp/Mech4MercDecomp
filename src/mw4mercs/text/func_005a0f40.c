/*
 * FUN_005a0f40 (27 B) — __thiscall function with 1 stack param. Calls
 * FUN_005f3990 then FUN_005a0f00.
 *
 * __thiscall (ECX = this), RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f3990(int param);
extern void __cdecl FUN_005a0f00(int param);

void __declspec(naked) __cdecl FUN_005a0f40(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx

        push    edi
        call    FUN_005f3990

        push    edi
        mov     ecx, esi
        call    FUN_005a0f00

        pop     edi
        pop     esi
        ret     0x4
    }
}
