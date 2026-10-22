/*
 * FUN_004d7250 (152 B) — network/socket setup helper. Calls a virtual
 * method (slot 0x1c), strncpy's a 0x50-byte buffer from FUN_004d79d0,
 * then calls FUN_004ff210 / FUN_004ff330 / FUN_004ff300 to configure a
 * connection. Returns whether handle at [esi+0x15c] is non-zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d79d0(void);
extern void __cdecl FUN_004ff210(void);
extern void __cdecl FUN_004ff330(void);
extern void __cdecl FUN_004ff300(void);
extern void *g_0076b320;                 /* IAT: strncpy */
extern char g_004d72f0[];                /* format string */
extern char g_00772ec4[];                /* string literal */

__declspec(naked) void FUN_004d7250(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        mov     eax, dword ptr [esi]
        push    edi
        push    esi
        call    dword ptr [eax+1ch]
        push    50h
        lea     edi, [esi+104h]
        call    FUN_004d79d0
        push    eax
        push    edi
        call    dword ptr [g_0076b320]
        push    0
        push    1
        push    offset g_004d72f0
        push    0ah
        push    edi
        push    offset g_00772ec4
        push    offset g_00772ec4
        call    FUN_004ff210
        add     esp, 28h
        test    eax, eax
        mov     dword ptr [esi+15ch], eax
        jz      L72D6
        mov     ecx, dword ptr [esi+154h]
        push    ecx
        lea     edx, [esi+4]
        push    edx
        push    1
        push    eax
        call    FUN_004ff330
        add     esp, 10h
        test    eax, eax
        jz      L72D6
        mov     eax, dword ptr [esi+15ch]
        push    eax
        mov     dword ptr [esi+158h], 7
        call    FUN_004ff300
        add     esp, 4
        mov     dword ptr [esi+15ch], 0
    L72D6:
        mov     ecx, dword ptr [esi+15ch]
        xor     eax, eax
        test    ecx, ecx
        pop     edi
        setnz   al
        pop     esi
        ret     4
    }
}
