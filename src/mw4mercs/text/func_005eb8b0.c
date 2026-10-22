/*
 * FUN_005EB8B0 (73 B) — __thiscall (ECX = this), RET 4 (1 float param).
 * Clamps param_1 into [DAT_0076c5b0, DAT_0076d064] and stores into
 * this->field_1d8. If below lower bound stores 0.0f; if above upper
 * bound stores 1.0f; else stores param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_0076c5b0;
extern float DAT_0076d064;

__declspec(naked) void __fastcall FUN_005eb8b0(void)
{
    __asm {
        fld     dword ptr [esp + 4]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jz      l_second
        mov     dword ptr [ecx + 0x1d8], 0
        ret     4
    l_second:
        fld     dword ptr [esp + 4]
        fcomp   dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jnz     l_store
        mov     dword ptr [ecx + 0x1d8], 0x3f800000
        ret     4
    l_store:
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 0x1d8], eax
        ret     4
    }
}
