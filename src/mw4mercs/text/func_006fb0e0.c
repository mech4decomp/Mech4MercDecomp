/*
 * FUN_006fb0e0 (299 B) — __stdcall, RET 4 (1 param).
 *
 * File-handle close: validates the handle magic, asserts on invalid
 * state (FUN_006fab90 + int 3), then unlinks the node from a linked
 * list (head DAT_00856710) and frees it. When DAT_00859278 != 2 it
 * wraps the unlink in EnterCriticalSection/LeaveCriticalSection
 * (DAT_0076b110 / DAT_0076b100) and uses free (DAT_0076b2d0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_00859278;
extern int DAT_00856710;
extern int DAT_008566d8;   /* CRITICAL_SECTION */
extern int *DAT_0076b110;  /* IAT: EnterCriticalSection */
extern int *DAT_0076b100;  /* IAT: LeaveCriticalSection */
extern int *DAT_0076b2d0;  /* IAT: free */
extern int __cdecl FUN_006fab90(const char *fmt, ...);
extern void __cdecl FUN_006f4230(void *ptr);

__declspec(naked) void __stdcall FUN_006fb0e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 8]
        test    esi, esi
        jz      L_b0f3
        cmp     dword ptr [esi], 0xeef546ad
        jz      L_b105
L_b0f3:
        push    0x7a020c
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_b105
        int     3
L_b105:
        mov     al, byte ptr [esi + 0x120]
        test    al, al
        jnz     L_b121
        push    0x7a01f4
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_b121
        int     3
L_b121:
        cmp     dword ptr [DAT_00859278], 2
        jnz     L_b191
        mov     eax, dword ptr [DAT_00856710]
        cmp     esi, eax
        jnz     L_b156
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [DAT_00856710], eax
        mov     eax, dword ptr [esi + 0x110]
        test    eax, eax
        jz      L_b14b
        push    eax
        call    FUN_006f4230
L_b14b:
        push    esi
        call    FUN_006f4230
        pop     esi
        pop     ebp
        ret     4
L_b156:
        test    eax, eax
        jz      L_b206
L_b15e:
        mov     ecx, dword ptr [eax + 4]
        cmp     ecx, esi
        jz      L_b170
        mov     eax, ecx
        test    eax, eax
        jnz     L_b15e
        pop     esi
        pop     ebp
        ret     4
L_b170:
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [eax + 4], ecx
        mov     eax, dword ptr [esi + 0x110]
        test    eax, eax
        jz      L_b186
        push    eax
        call    FUN_006f4230
L_b186:
        push    esi
        call    FUN_006f4230
        pop     esi
        pop     ebp
        ret     4
L_b191:
        push    0x8566d8
        call    dword ptr [DAT_0076b110]
        mov     eax, dword ptr [DAT_00856710]
        cmp     esi, eax
        jnz     L_b1ba
        mov     eax, dword ptr [esi + 0x110]
        test    eax, eax
        mov     edx, dword ptr [esi + 4]
        mov     dword ptr [DAT_00856710], edx
        jz      L_b1f5
        jmp     L_b1eb
L_b1ba:
        test    eax, eax
        jz      L_b1fb
L_b1be:
        mov     ecx, dword ptr [eax + 4]
        cmp     ecx, esi
        jz      L_b1db
        mov     eax, ecx
        test    eax, eax
        jnz     L_b1be
        push    0x8566d8
        call    dword ptr [DAT_0076b100]
        pop     esi
        pop     ebp
        ret     4
L_b1db:
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [eax + 4], ecx
        mov     eax, dword ptr [esi + 0x110]
        test    eax, eax
        jz      L_b1f5
L_b1eb:
        push    eax
        call    dword ptr [DAT_0076b2d0]
        add     esp, 4
L_b1f5:
        push    esi
        call    FUN_006f4230
L_b1fb:
        push    0x8566d8
        call    dword ptr [DAT_0076b100]
L_b206:
        pop     esi
        pop     ebp
        ret     4
    }
}
