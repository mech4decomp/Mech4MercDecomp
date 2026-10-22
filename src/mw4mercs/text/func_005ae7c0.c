/*
 * FUN_005ae7c0 (96 B) — __thiscall, RET 0x8 (2 params).
 *
 * Stores a small set of fields on the object (this = ECX):
 *   [this+0x2c2] = 1 (byte)
 *   [this+0x300] = local_4 (from stack)
 *   [this+0x2f8] = 0
 *   [this+0x304] = local_4
 *   [this+0x308] = param_1
 *   [this+0x2fc] = param_2
 *   [this+0x2f4] = 1 (byte)
 * and calls FUN_0041acb0([this+0xd8] + 0x80).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041acb0(int);

__declspec(naked) void __cdecl func_005ae7c0(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x8]
        mov     byte ptr [esi + 0x2c2], 0x1
        call    FUN_0041acb0
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x300], ecx
        mov     edx, ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x2f8], 0x0
        mov     dword ptr [esi + 0x304], edx
        mov     dword ptr [esi + 0x308], eax
        mov     dword ptr [esi + 0x2fc], ecx
        mov     byte ptr [esi + 0x2f4], 0x1
        pop     esi
        add     esp, 0xc
        ret     0x8
    }
}
