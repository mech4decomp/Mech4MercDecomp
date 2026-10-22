/*
 * FUN_005a0fe0 (43 B) — __thiscall function with 2 stack params. Conditionally
 * calls FUN_005a1460, then calls FUN_005f3ff0.
 *
 * __thiscall (ECX = this), RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005a1460(void);
extern void __cdecl FUN_005f3ff0(int param1, int param2);

void __declspec(naked) __cdecl FUN_005a0fe0(void)
{
    __asm {
        push    esi
        mov     esi, ecx

        mov     eax, dword ptr [esi + 0xe0]
        cmp     dword ptr [eax + 0x14], 0x10
        jnz     skip_call

        mov     ecx, esi
        call    FUN_005a1460

skip_call:
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_005f3ff0

        pop     esi
        ret     0x8
    }
}
