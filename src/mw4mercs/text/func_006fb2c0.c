/*
 * FUN_006fb2c0 (380 B) — File/background-file cleanup (shutdown).
 *
 * Walks three linked lists (0x8566f8 mapped files, 0x8566fc files,
 * 0x856710 background files), closing handles / unmapping / freeing
 * each node via fn-ptr globals (0x76b0ec CloseHandle, 0x76b17c
 * UnmapViewOfFile, 0x76b2d0 free) and IAT calls (SetEvent 0x76b168,
 * WaitForSingleObject 0x76b0f4, DeleteCriticalSection 0x76b10c).
 * Asserts via FUN_006fabf0 when objects are still open.
 *
 * __cdecl, 1 arg (char), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_006f4230(void);

extern void *g_76b0ec;   /* CloseHandle fn ptr */
extern void *g_76b17c;   /* UnmapViewOfFile fn ptr */
extern void *g_76b2d0;   /* free fn ptr */
extern void *g_76b168;   /* SetEvent IAT */
extern void *g_76b0f4;   /* WaitForSingleObject IAT */
extern void *g_76b10c;   /* DeleteCriticalSection IAT */

extern int g_8566f8;
extern int g_8566f4;
extern int g_8566fc;
extern int g_856700;
extern int g_8566f0;
extern int g_8566d0;
extern int g_8566d4;
extern int g_856710;
extern int g_859278;

__declspec(naked) void __cdecl FUN_006fb2c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        mov     esi, dword ptr [g_8566f8]
        test    esi, esi
        push    edi
        mov     edi, dword ptr [g_76b0ec]
        jz      L6FB320
        mov     ebx, dword ptr [g_76b17c]
L6FB2DC:
        mov     al, byte ptr [ebp + 8]
        test    al, al
        jnz     L6FB2F9
        lea     eax, [esi + 0x1C]
        push    eax
        push    0x7A0268
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L6FB2F9
        int     3
L6FB2F9:
        mov     ecx, dword ptr [esi + 0x10]
        push    ecx
        call    ebx
        mov     edx, dword ptr [esi + 0xC]
        push    edx
        call    edi
        mov     eax, dword ptr [esi + 8]
        push    eax
        call    edi
        mov     eax, esi
        mov     dword ptr [esi], 0
        mov     esi, dword ptr [esi + 4]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jnz     L6FB2DC
L6FB320:
        mov     esi, dword ptr [g_8566fc]
        xor     eax, eax
        cmp     esi, eax
        mov     dword ptr [g_8566f4], eax
        mov     dword ptr [g_8566f8], eax
        jz      L6FB36B
L6FB336:
        mov     al, byte ptr [ebp + 8]
        test    al, al
        jnz     L6FB353
        lea     ecx, [esi + 8]
        push    ecx
        push    0x7A0250
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L6FB353
        int     3
L6FB353:
        mov     edx, dword ptr [esi + 4]
        push    edx
        call    edi
        mov     eax, esi
        mov     esi, dword ptr [esi + 0x10C]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jnz     L6FB336
L6FB36B:
        mov     ecx, dword ptr [g_8566f0]
        xor     eax, eax
        cmp     ecx, eax
        mov     dword ptr [g_856700], eax
        mov     dword ptr [g_8566fc], eax
        jz      L6FB3CB
        mov     eax, dword ptr [g_8566d0]
        push    eax
        call    dword ptr [g_76b168]
        mov     ecx, dword ptr [g_8566f0]
        push    -1
        push    ecx
        call    dword ptr [g_76b0f4]
        mov     edx, dword ptr [g_8566f0]
        push    edx
        call    edi
        push    0x8566D8
        call    dword ptr [g_76b10c]
        mov     eax, dword ptr [g_8566d4]
        push    eax
        call    edi
        mov     ecx, dword ptr [g_8566d0]
        push    ecx
        call    edi
        mov     dword ptr [g_8566f0], 0
L6FB3CB:
        mov     esi, dword ptr [g_856710]
        test    esi, esi
        jz      L6FB42B
        mov     edi, dword ptr [g_76b2d0]
        mov     ebx, 2
L6FB3E0:
        mov     al, byte ptr [ebp + 8]
        test    al, al
        jnz     L6FB3FD
        lea     edx, [esi + 8]
        push    edx
        push    0x7A022C
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L6FB3FD
        int     3
L6FB3FD:
        mov     eax, dword ptr [esi + 0x110]
        test    eax, eax
        jz      L6FB41C
        cmp     dword ptr [g_859278], ebx
        push    eax
        jz      L6FB417
        call    edi
        add     esp, 4
        jmp     L6FB41C
L6FB417:
        call    FUN_006f4230
L6FB41C:
        mov     eax, esi
        mov     esi, dword ptr [esi + 4]
        push    eax
        call    FUN_006f4230
        test    esi, esi
        jnz     L6FB3E0
L6FB42B:
        pop     edi
        pop     esi
        mov     dword ptr [g_856710], 0
        pop     ebx
        pop     ebp
        ret     4
    }
}
