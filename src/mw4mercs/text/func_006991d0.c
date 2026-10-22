/*
 * FUN_006991D0 (75 B per CSV; compared body 49 B) — Clamp/range float helper.
 *
 * __fastcall (ECX = this). Compares this+0x10 against bounds at
 * (*this+0x18)+4 and returns a difference or a constant in ST0.
 * The two JMP targets (0x00699250 / 0x006992A0) are tail blocks that
 * lie beyond the 75-byte CSV slice (which is 49 code bytes + NOP pad +
 * start of the next function), so they are not transcribed here.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_0076c5b0;

__declspec(naked) void __fastcall FUN_006991d0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x18]
        fld     dword ptr [ecx + 0x10]
        mov     edx, dword ptr [eax + 0x4]
        fcomp   dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_second
        /* __emit: JMP 0x00699250 — tail block outside the transcribed body */
        __emit  0xE9
        __emit  0x68
        __emit  0x00
        __emit  0x00
        __emit  0x00
    l_second:
        fld     dword ptr [ecx + 0x10]
        fcomp   dword ptr [edx + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      l_ret
        /* __emit: JMP 0x006992A0 — tail block outside the transcribed body */
        __emit  0xE9
        __emit  0xA6
        __emit  0x00
        __emit  0x00
        __emit  0x00
    l_ret:
        fld     dword ptr [DAT_0076c5b0]
        ret
    }
}
