/*
 * FUN_005b2360 (20 B) — __thiscall (ECX=this). Calls a virtual method at
 * vtable+0x1c4, then FUN_005dbb10(this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005dbb10(void);

__declspec(naked) void FUN_005b2360(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        call    dword ptr [eax + 0x1c4]
        mov     ecx, esi
        call    FUN_005dbb10
        pop     esi
        ret
    }
}
