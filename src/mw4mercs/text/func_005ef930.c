/*
 * FUN_005ef930 (47 B) — __thiscall (ECX = this), no stack params, RET.
 *
 * Calls FUN_005F07C0(this); if [ret+0x3B0] != 0, calls
 * FUN_005F07C0(this, 0) then FUN_00559BE0([ret+0x3B0]). Finally
 * calls FUN_005F09D0(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__stdcall FUN_005f07c0(void);
extern void __stdcall FUN_00559be0(int param);
extern void __stdcall FUN_005f09d0(void);

__declspec(naked) void __stdcall FUN_005ef930(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3B0]
        test    ecx, ecx
        jz      l_956
        push    0x0
        mov     ecx, esi
        call    FUN_005f07c0
        mov     ecx, dword ptr [eax + 0x3B0]
        call    FUN_00559be0
    l_956:
        mov     ecx, esi
        call    FUN_005f09d0
        pop     esi
        ret
    }
}
