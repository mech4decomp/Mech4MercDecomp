/*
 * FUN_00417b00 (27 B) — __thiscall. Inserts a node into the container at
 * [ESI+4] via FUN_00417a60, storing the returned node into [ESI+8].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417a60(void);

__declspec(naked) void FUN_00417b00(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0x4]
        call    FUN_00417a60
        mov     dword ptr [esi + 0x8], eax
        pop     esi
        ret     0x4
    }
}
