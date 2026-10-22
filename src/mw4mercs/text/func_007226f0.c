/*
 * FUN_007226f0 (53 B) — Array element setter (__stdcall, RET 0xC).
 *
 * If DAT_0085b4a0 != 1: stores param_2 (byte) into DAT_00858058[param_1],
 * stores param_3 (float) into DAT_00858068[param_1], calls
 * FUN_00707e70(0) and stores its float result as a double into
 * DAT_008580a8[param_1].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_85b4a0;                 /* DAT_0085b4a0 */
extern char g_858058;                /* DAT_00858058 (byte array base) */
extern float g_858068;               /* DAT_00858068 (float array base) */
extern double g_8580a8;              /* DAT_008580a8 (double array base) */
extern float __stdcall FUN_00707e70(int a);

__declspec(naked) void __stdcall FUN_007226f0(void)
{
    __asm {
        cmp     dword ptr [g_85b4a0], 1
        jz      done
        mov     al, byte ptr [esp + 8]
        fld     dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     byte ptr [esi + g_858058], al
        /* __emit: MSVC6 encodes [esi*4+abs] FSTP with EBX base (D9 9C B3) instead of no-base disp32 (D9 1C B5) */
        __emit 0xD9
        __emit 0x1C
        __emit 0xB5
        __emit 0x68
        __emit 0x80
        __emit 0x85
        __emit 0x00
        push    0
        call    FUN_00707e70
        /* __emit: MSVC6 encodes [esi*8+abs] FSTP with EBX base (DD 9C F3) instead of no-base disp32 (DD 1C F5) */
        __emit 0xDD
        __emit 0x1C
        __emit 0xF5
        __emit 0xA8
        __emit 0x80
        __emit 0x85
        __emit 0x00
        pop     esi
done:
        ret     0xc
    }
}
