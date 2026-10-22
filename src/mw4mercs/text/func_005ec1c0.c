/*
 * FUN_005ec1c0 (72 B) — __fastcall initializer (ECX = this), RET 4.
 *
 * Zeroes several fields, sets a float constant at this+0x1d4,
 * calls FUN_0041fcb0() on the sub-object at this+0x220, then
 * calls a virtual method (slot 1) on the object at this+0x78
 * and stores a field from its result into this+0x1d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fcb0(void *p);

__declspec(naked) void __stdcall FUN_005ec1c0(void *param)
{
    __asm {
        xor     eax, eax
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x220]
        mov     byte ptr [esi + 0x1cc], al
        mov     dword ptr [esi + 0x1d8], eax
        mov     dword ptr [esi + 0x1dc], eax
        mov     dword ptr [esi + 0x1d4], 0x3c23d70a
        mov     dword ptr [esi + 0x1c8], eax
        call    FUN_0041fcb0
        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax + 0x6c]
        mov     dword ptr [esi + 0x1d0], ecx
        pop     esi
        ret     4
    }
}
