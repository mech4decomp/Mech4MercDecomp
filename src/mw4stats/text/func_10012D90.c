/*
 * FUN_10012D90 (96 B, __stdcall, 1 param) - Thread shutdown: marks state,
 * calls FUN_1001de20, closes two handles, then _endthreadex(0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001de20(void);
extern void *g_1002102c;   /* CloseHandle */
extern void *g_10021110;   /* _endthreadex */

__declspec(naked) void __cdecl FUN_10012D90(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, 1
        push    edi
        cmp     dword ptr [esi + 0x1c], eax
        jz      L_12da3
        mov     dword ptr [esi + 0x1c], eax
    L_12da3:
        push    eax
        push    esi
        call    FUN_1001de20
        mov     eax, dword ptr [esi + 0x98]
        mov     edi, dword ptr [g_1002102c]      /* CloseHandle */
        test    eax, eax
        jz      L_12dc7
        push    eax
        call    edi
        mov     dword ptr [esi + 0x98], 0
    L_12dc7:
        mov     eax, dword ptr [esi + 0x9c]
        test    eax, eax
        jz      L_12dde
        push    eax
        call    edi
        mov     dword ptr [esi + 0x9c], 0
    L_12dde:
        push    0
        call    dword ptr [g_10021110]      /* _endthreadex */
        add     esp, 4
        xor     eax, eax
        pop     edi
        pop     esi
        ret     4
    }
}
