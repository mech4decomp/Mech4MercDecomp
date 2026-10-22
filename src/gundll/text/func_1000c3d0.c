/*
 * FUN_1000c3d0 (56 B) — __stdcall, RET 0x4. Critical-section guarded
 * FUN_1000c590 call; returns 0x8007000e on failure.
 */

extern void *g_10049068;
extern void *g_10049064;
extern void __cdecl FUN_1000c590(void);

__declspec(naked) void __stdcall FUN_1000c3d0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0xc]
        lea     esi, [edi+0x24]
        push    esi
        call    dword ptr [g_10049068]
        push    edi
        call    FUN_1000c590
        test    eax, eax
        push    esi
        jnz     L_ok
        call    dword ptr [g_10049064]
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     4
L_ok:
        call    dword ptr [g_10049064]
        pop     edi
        xor     eax, eax
        pop     esi
        ret     4
    }
}
