/*
 * FUN_00709e80 (150 B) — checks window/iconic state and tears down a
 * rendering surface when appropriate. Returns 0/1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_007352d0(void *p);
extern void __cdecl FUN_0070abe0(void);
extern void __cdecl FUN_0070a920(void);

extern void *g_0076b4f0;   /* IAT: IsIconic */

extern char g_00858954;
extern char g_00858ae0;
extern int g_00858bf8;
extern int g_0085a210;
extern int g_008aaef0;
extern int g_0085a264;
extern int g_0085a260;

__declspec(naked) unsigned int FUN_00709e80(void)
{
    __asm {
        mov     al, byte ptr [g_00858954]
        test    al, al
        jz      loc_9e95
        mov     al, byte ptr [g_00858ae0]
        test    al, al
        jnz     loc_9e95
        xor     al, al
        ret
loc_9e95:
        mov     eax, dword ptr [g_00858bf8]
        push    eax
        call    dword ptr [g_0076b4f0]
        test    eax, eax
        jz      loc_9ea8
        xor     al, al
        ret
loc_9ea8:
        mov     eax, dword ptr [g_0085a210]
        test    eax, eax
        jz      loc_9ebe
        push    eax
        call    FUN_007352d0
        cmp     eax, 0x887601c2
        jz      loc_9ec7
loc_9ebe:
        mov     eax, dword ptr [g_008aaef0]
        test    eax, eax
        jz      loc_9f13
loc_9ec7:
        mov     al, byte ptr [g_00858954]
        test    al, al
        mov     dword ptr [g_008aaef0], 0x0
        jz      loc_9eea
        mov     eax, dword ptr [g_0085a264]
        test    eax, eax
        jnz     loc_9efa
        call    FUN_0070abe0
        jmp     loc_9eff
loc_9eea:
        mov     eax, dword ptr [g_0085a260]
        test    eax, eax
        jz      loc_9efa
        call    FUN_0070abe0
        jmp     loc_9eff
loc_9efa:
        call    FUN_0070a920
loc_9eff:
        mov     dword ptr [g_0085a260], 0x0
        mov     dword ptr [g_0085a264], 0x0
loc_9f13:
        mov     al, 0x1
        ret
    }
}
