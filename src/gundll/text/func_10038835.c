/*
 * FUN_10038835 (185 B) — __stdcall.
 * Parses a '='-separated string list at g_1007549c into an array of malloc'd
 * strings stored at g_100754d4, then frees the source and sets g_10076ba4=1.
 */

extern void __cdecl FUN_1003ca53(void);
extern void __cdecl FUN_1003c5f0(void);   /* strlen */
extern void __cdecl FUN_1003c3c5(void);   /* malloc */
extern void __cdecl FUN_100374e6(void);   /* __amsg_exit */
extern void __cdecl FUN_1003c500(void);   /* strcpy */
extern void __cdecl FUN_1003c2dc(void);   /* free */

extern int g_10076ba8;
extern int g_1007549c;
extern int g_100754d4;
extern int g_10076ba4;

__declspec(naked) void __stdcall FUN_10038835(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_10076ba8], ebx
        push    esi
        push    edi
        jnz     L_847
        call    FUN_1003ca53
    L_847:
        mov     esi, dword ptr [g_1007549c]
        xor     edi, edi
    L_84f:
        mov     al, byte ptr [esi]
        cmp     al, bl
        jz      L_867
        cmp     al, 0x3d
        jz      L_85a
        inc     edi
    L_85a:
        push    esi
        call    FUN_1003c5f0
        pop     ecx
        lea     esi, [esi + eax + 1]
        jmp     L_84f
    L_867:
        lea     eax, [edi*4 + 4]
        push    eax
        call    FUN_1003c3c5
        mov     esi, eax
        pop     ecx
        cmp     esi, ebx
        mov     dword ptr [g_100754d4], esi
        jnz     L_889
        push    9
        call    FUN_100374e6
        pop     ecx
    L_889:
        mov     edi, dword ptr [g_1007549c]
        cmp     byte ptr [edi], bl
        jz      L_8cc
        push    ebp
    L_894:
        push    edi
        call    FUN_1003c5f0
        mov     ebp, eax
        pop     ecx
        inc     ebp
        cmp     byte ptr [edi], 0x3d
        jz      L_8c5
        push    ebp
        call    FUN_1003c3c5
        cmp     eax, ebx
        pop     ecx
        mov     dword ptr [esi], eax
        jnz     L_8b8
        push    9
        call    FUN_100374e6
        pop     ecx
    L_8b8:
        push    edi
        push    dword ptr [esi]
        call    FUN_1003c500
        pop     ecx
        add     esi, 0x4
        pop     ecx
    L_8c5:
        add     edi, ebp
        cmp     byte ptr [edi], bl
        jnz     L_894
        pop     ebp
    L_8cc:
        push    dword ptr [g_1007549c]
        call    FUN_1003c2dc
        pop     ecx
        mov     dword ptr [g_1007549c], ebx
        mov     dword ptr [esi], ebx
        pop     edi
        pop     esi
        mov     dword ptr [g_10076ba4], 1
        pop     ebx
        ret
    }
}
