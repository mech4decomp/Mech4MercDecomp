/*
 * FUN_004d8e10 (63 B) — compares param_1 against "VideoRenderer" (returns 1)
 * and "AudioRenderer" (returns 2), else 0. __stdcall RET 0x4 (1 arg).
 * _stricmp loaded into EDI via IAT 0x0076b2ac.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int (__cdecl *g_76b2ac)(void);   /* IAT: _stricmp */

__declspec(naked) void FUN_004d8e10(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+0x8]   /* param_1 */
        push    edi
        mov     edi, dword ptr [g_76b2ac]  /* _stricmp */
        push    0x7730dc                    /* "VideoRenderer" */
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     audio
        pop     edi
        mov     eax, 0x1
        pop     esi
        ret     0x4
audio:
        push    0x7730cc                    /* "AudioRenderer" */
        push    esi
        call    edi
        add     esp, 0x8
        neg     eax
        sbb     eax, eax
        and     eax, 0xfffffffe
        pop     edi
        add     eax, 0x2
        pop     esi
        ret     0x4
    }
}
