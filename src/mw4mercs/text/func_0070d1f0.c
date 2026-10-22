/*
 * FUN_0070d1f0 (247 B) — spew-file writer (__stdcall RET 0x4, 1 arg: string).
 * Optionally mirrors to FUN_0070f9a0. If the spew handle is invalid, falls
 * back to OutputDebugStringA. Otherwise it copies the string into a local
 * buffer, expanding '\n' to "\r\n", writes it via WriteFile, and on failure
 * reports + closes the handle. If the append-all flag is set and the 
 * "no flush" byte is clear, calls FlushFileBuffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008aaf44;          /* 0x008aaf44 */
extern int  g_007b70e0;          /* 0x007b70e0 spew file handle */
extern int  g_0085b17c;          /* 0x0085b17c */
extern int  g_0085b180;          /* 0x0085b180 */
extern char g_008aa9e4;          /* 0x008aa9e4 */

extern void *g_76b0e4;           /* IAT: WriteFile */
extern void *g_76b0ec;           /* IAT: CloseHandle */
extern void *g_76b244;           /* IAT: FlushFileBuffers */
extern void *g_76b0fc;           /* IAT: OutputDebugStringA */

extern char g_7a1ab4[];          /* 0x7a1ab4 "Unable to write to Spew file" */

extern void __cdecl FUN_0070f9a0(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_0070d1f0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x400
        cmp     dword ptr [g_008aaf44], 0x1
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        jnz     L20c
        push    ebx
        call    FUN_0070f9a0
L20c:
        mov     eax, dword ptr [g_007b70e0]
        or      ecx, 0xffffffff
        cmp     eax, ecx
        jz      L2d9
        mov     eax, dword ptr [g_0085b17c]
        inc     eax
        push    esi
        push    edi
        mov     dword ptr [g_0085b17c], eax
        xor     eax, eax
        xor     edx, edx
        xor     esi, esi
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        jz      L26a
L238:
        mov     al, byte ptr [esi + ebx*1]
        cmp     al, 0xa
        jnz     L251
        mov     byte ptr [ebp + edx - 0x400], 0xd
        inc     edx
        mov     byte ptr [ebp + edx - 0x400], al
        jmp     L258
L251:
        mov     byte ptr [ebp + edx - 0x400], al
L258:
        inc     edx
        or      ecx, 0xffffffff
        xor     eax, eax
        inc     esi
        mov     edi, ebx
        repne   scasb
        not     ecx
        dec     ecx
        cmp     esi, ecx
        jc      L238
L26a:
        push    0x0
        lea     eax, [ebp + 0x8]
        push    eax
        push    edx
        mov     edx, dword ptr [g_007b70e0]
        lea     ecx, [ebp - 0x400]
        push    ecx
        push    edx
        call    dword ptr [g_76b0e4]   /* WriteFile */
        test    eax, eax
        pop     edi
        pop     esi
        jnz     L2b3
        push    offset g_7a1ab4
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      L29d
        int     3
L29d:
        mov     eax, dword ptr [g_007b70e0]
        push    eax
        call    dword ptr [g_76b0ec]   /* CloseHandle */
        mov     dword ptr [g_007b70e0], 0xffffffff
L2b3:
        mov     eax, dword ptr [g_0085b180]
        test    eax, eax
        jz      L2e0
        mov     al, byte ptr [g_008aa9e4]
        test    al, al
        jnz     L2e0
        mov     ecx, dword ptr [g_007b70e0]
        push    ecx
        call    dword ptr [g_76b244]   /* FlushFileBuffers */
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L2d9:
        push    ebx
        call    dword ptr [g_76b0fc]   /* OutputDebugStringA */
L2e0:
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
