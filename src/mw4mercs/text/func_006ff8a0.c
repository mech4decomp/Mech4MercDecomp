/*
 * FUN_006ff8a0 (248 B) — Network game lookup helper.
 *
 * Enters a critical section, looks up a game by name, resolves its
 * server IP address + port, and stores the result. Returns 1 on
 * success, 0 on failure. __stdcall, RET 4 (one param).
 *
 * Contains an obfuscated dead "return 0" block after the first INT3
 * (0x006FF8E4) that is byte-identical to the live block at 0x006FF923.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b110;   /* EnterCriticalSection (IAT) */
extern void *g_76b100;   /* LeaveCriticalSection (IAT) */
extern void *g_76b318;   /* atoi (IAT) */
extern char g_8aaa20;    /* critical section object */
extern char g_79fa10;    /* "GName" */
extern char g_79fa18;    /* "IpAddr" */
extern char g_79fa54;    /* "ServerPort" */
extern char g_7a0ed8;    /* "Unable to find game %s on the network." */
extern char g_7a0e98;    /* "Unable to find server ip address for serverID %d, gamename %s." */
extern int  g_8aaaf4;    /* DAT_008aaaf4 */

extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f5e50(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006f5b80(void);
extern void __cdecl FUN_00701de0(void);
extern void __cdecl FUN_00740580(void);

__declspec(naked) void __stdcall FUN_006ff8a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x200
        push    ebx
        push    esi
        push    offset g_8aaa20
        call    dword ptr [g_76b110]
        mov     esi, dword ptr [ebp + 8]
        push    esi
        push    offset g_79fa10
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5e50
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_f8f9
        push    esi
        push    offset g_7a0ed8
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L_f923
        int     3
        /* dead "return 0" block (0x006FF8E4) after INT3 */
        push    offset g_8aaa20
        call    dword ptr [g_76b100]
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_f8f9:
        push    offset g_79fa18
        push    ebx
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        test    eax, eax
        jnz     L_f938
        push    esi
        push    ebx
        push    offset g_7a0e98
        call    FUN_006fabf0
        add     esp, 0xC
        test    eax, eax
        jz      L_f923
        int     3
L_f923:
        push    offset g_8aaa20
        call    dword ptr [g_76b100]
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
L_f938:
        push    edi
        or      ecx, 0xFFFFFFFF
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        lea     edx, [ebp - 0x200]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        push    offset g_79fa54
        and     ecx, 3
        push    ebx
        rep     movsb
        call    FUN_006f89f0
        mov     ecx, eax
        call    FUN_006f5b80
        push    eax
        call    dword ptr [g_76b318]
        add     esp, 4
        push    offset g_8aaa20
        call    dword ptr [g_76b100]
        call    FUN_00701de0
        push    0
        lea     ecx, [ebp - 0x200]
        push    ecx
        call    FUN_00740580
        pop     edi
        pop     esi
        mov     dword ptr [g_8aaaf4], 5
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
