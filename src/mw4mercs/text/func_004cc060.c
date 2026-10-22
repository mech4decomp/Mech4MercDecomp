/*
 * FUN_004cc060 (93 B) — FreeLibrary wrapper: if a module handle is
 * currently loaded (DAT_007dac4c != 0), zero a block of globals and
 * call FreeLibrary on the stored handle, then clear the flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007dac4c;
extern int  g_007dac48;
extern int  g_007dac50;
extern int  g_007dac54;
extern int  g_007dac58;
extern int  g_007dac5c;
extern int  g_007dac60;
extern int  g_007dac64;
extern int  g_007dac68;
extern int  g_007dac6c;
extern int  g_007dac70;
extern void *g_0076b0b8;                 /* FreeLibrary IAT slot */
extern void __cdecl FUN_004c94f0(void);

__declspec(naked) void FUN_004cc060(void)
{
    __asm {
        push    ebx
        call    FUN_004c94f0
        mov     al, byte ptr [g_007dac4c]
        xor     ebx, ebx
        cmp     al, bl
        jz      done
        mov     eax, dword ptr [g_007dac48]
        push    eax
        mov     dword ptr [g_007dac50], ebx
        mov     dword ptr [g_007dac54], ebx
        mov     dword ptr [g_007dac58], ebx
        mov     dword ptr [g_007dac5c], ebx
        mov     dword ptr [g_007dac60], ebx
        mov     dword ptr [g_007dac64], ebx
        mov     dword ptr [g_007dac68], ebx
        mov     dword ptr [g_007dac6c], ebx
        mov     dword ptr [g_007dac70], ebx
        call    dword ptr [g_0076b0b8]
        mov     byte ptr [g_007dac4c], bl
    done:
        mov     al, 1
        pop     ebx
        ret
    }
}
