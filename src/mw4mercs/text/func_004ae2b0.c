/*
 * FUN_004AE2B0 (70 B) — __thiscall float range check.
 *   Computes (param3 - param2) / param4, stores in [ecx+4].
 *   Returns 1 if |result*param4 + param2 - param3| <= DAT_007b220c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_007b220c;

__declspec(naked) int __stdcall FUN_004ae2b0(void)
{
    __asm {
        fld     dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 4]
        fsub    dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 8], edx
        fdiv    dword ptr [esp + 0x10]
        fst     dword ptr [ecx + 4]
        fmul    dword ptr [esp + 0x10]
        fadd    dword ptr [esp + 8]
        fsub    dword ptr [esp + 0xc]
        fabs
        fld     dword ptr [DAT_007b220c]
        fcompp
        fnstsw  ax
        test    ah, 1
        jnz     l_return_0
        mov     eax, 1
        ret     0x10
    l_return_0:
        xor     eax, eax
        ret     0x10
    }
}
