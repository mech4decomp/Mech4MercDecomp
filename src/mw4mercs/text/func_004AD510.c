/*
 * FUN_004AD510 (48 B) — __stdcall(1). Calls FUN_004ACF80 with three args
 * (arg1, a pointer to a local, and a pointer to arg1), then computes
 * (local - arg1) * g_76d070 + arg1 and returns it in st(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004ACF80(void *a, void *b, void *c);

extern float g_76d070;   /* DAT_0076d070 */

__declspec(naked) void FUN_004AD510(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [esp + 8]
        push    eax
        lea     edx, [esp + 4]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_004ACF80
        __emit 0xD9   /* fld dword ptr [esp+0] -- MSVC6 drops the 00 disp byte (D9 04 24 vs ref D9 44 24 00) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fsub    dword ptr [esp + 8]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [esp + 8]
        pop     ecx
        ret     4
    }
}
