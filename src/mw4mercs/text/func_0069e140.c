/*
 * FUN_0069e140 (24 B) — __fastcall, ECX = this.
 *
 * Returns (this[0x14] - this[0x10]) * 8, plus (this[0x8] - 8) unless
 * this[0x8] == -0x14. HUD element size/offset helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_0069e140(int param_1)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14]
        mov     edx, dword ptr [ecx + 0x10]
        mov     ecx, dword ptr [ecx + 0x8]
        sub     eax, edx
        shl     eax, 0x3
        cmp     ecx, -0x14
        jz      L_done
        lea     eax, [eax + ecx*1 - 0x8]
L_done:
        ret
    }
}
