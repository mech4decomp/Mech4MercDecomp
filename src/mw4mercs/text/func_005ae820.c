/*
 * FUN_005ae820 (96 B) — __thiscall, RET 0x8 (2 params).
 *
 * Mirrors FUN_005ae7c0 but writes to a different field block:
 *   [this+0x2c1] = 1 (byte)
 *   [this+0x2e8] = local_4
 *   [this+0x2e0] = 0
 *   [this+0x2ec] = local_4
 *   [this+0x2f0] = param_1
 *   [this+0x2e4] = param_2
 *   [this+0x2dc] = 1 (byte)
 * and calls FUN_0041acb0([this+0xd8] + 0x80).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041acb0(int);

__declspec(naked) void __cdecl func_005ae820(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x8]
        mov     byte ptr [esi + 0x2c1], 0x1
        call    FUN_0041acb0
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x2e8], ecx
        mov     edx, ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x2e0], 0x0
        mov     dword ptr [esi + 0x2ec], edx
        mov     dword ptr [esi + 0x2f0], eax
        mov     dword ptr [esi + 0x2e4], ecx
        mov     byte ptr [esi + 0x2dc], 0x1
        pop     esi
        add     esp, 0xc
        ret     0x8
    }
}
