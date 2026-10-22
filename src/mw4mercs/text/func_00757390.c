/*
 * FUN_00757390 (37 B) — __stdcall wrapper. Stores param at this+0xBC,
 * calls FUN_00758060(*this, param, 1), sets byte at this+0xE8 to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00758060(unsigned int a, unsigned int b, int c);

__declspec(naked) void __stdcall FUN_00757390(unsigned int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, eax
        push    ecx
        push    edx
        mov     dword ptr [esi + 0xbc], eax
        call    FUN_00758060
        mov     byte ptr [esi + 0xe8], 0x1
        pop     esi
        ret     4
    }
}
