/*
 * FUN_00674dd0 (25 B) — virtual call: (**(**p + 0x14))(0x74) then
 * FUN_00674770(p).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00674770(void *p);

__declspec(naked) void FUN_00674dd0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    0x74
        call    dword ptr [eax+0x14]
        push    esi
        call    FUN_00674770
        add     esp, 0x4
        pop     esi
        ret
    }
}
