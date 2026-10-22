/*
 * FUN_005AEB90 (71 B) — __thiscall (this = ECX), RET 0x4 (1 param).
 *
 * Sets [this+0x30c] = 0. If [this+0x328] (byte) is non-zero, calls
 * FUN_00678280 on [this+0x328]. Then copies a float from [this+0x334] to
 * [this+0x334] and [this+0x338], sets [this+0x32c] = 0,
 * [this+0x33c] = 1.0f (0x3f800000), [this+0x330] = param_1,
 * [this+0x328] = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00678280(void);

__declspec(naked) void __cdecl func_005aeb90(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x328]
        test    al, al
        push    esi
        lea     esi, [ecx + 0x328]
        mov     dword ptr [ecx + 0x30c], 0x0
        jz      l_skip

        mov     ecx, esi
        call    FUN_00678280

    l_skip:
        fld     dword ptr [esi + 0xc]
        mov     eax, dword ptr [esp + 0x8]
        fst     dword ptr [esi + 0xc]
        mov     dword ptr [esi + 0x4], 0x0
        fstp    dword ptr [esi + 0x10]
        mov     dword ptr [esi + 0x14], 0x3f800000
        mov     dword ptr [esi + 0x8], eax
        mov     byte ptr [esi], 0x1
        pop     esi
        ret     0x4
    }
}
