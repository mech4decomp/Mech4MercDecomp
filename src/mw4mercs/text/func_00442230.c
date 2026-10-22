/*
 * FUN_00442230 (42 B) — MLR mesh/render helper (__thiscall).
 * Calls FUN_00458660(param), then a virtual method (slot 0x18) on param,
 * and copies 6 dwords from the result into this+0x6c. Returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00458660(void *p);

__declspec(naked) void FUN_00442230(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_00458660
        mov     eax, dword ptr [edi]
        push    0x1
        mov     ecx, edi
        call    dword ptr [eax + 0x18]
        lea     edi, [esi + 0x6c]
        mov     esi, eax
        mov     ecx, 0x6
        rep movsd
        pop     edi
        mov     al, 0x1
        pop     esi
        ret     0x4
    }
}
