/*
 * FUN_1001b160 (28 B) - __thiscall, RET 0x4. Calls FUN_1001b180(this,
 * param_1, param_1+0x84) and returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001b180(void);   /* rel32 call */

__declspec(naked) void FUN_1001b160(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        lea     ecx, [eax + 0x84]
        push    ecx
        push    eax
        mov     ecx, esi
        call    FUN_1001b180
        mov     eax, esi
        pop     esi
        ret     4
    }
}
