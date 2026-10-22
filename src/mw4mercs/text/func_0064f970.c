/*
 * FUN_0064f970 (313 B) — Text/script tokenizer loop.
 *
 * Reads a byte stream pointer at 0x00805918, tracks a "current char"
 * at 0x00805908, a stack pointer at 0x0080592c, and a flag at 0x0080d969.
 * Handles 'I' (int) and '#'/'$' (0x23/0x24) token markers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_805918;   /* 0x00805918 byte-stream pointer */
extern int   g_805908;   /* 0x00805908 current char */
extern int  *g_80592c;   /* 0x0080592c stack pointer */
extern char  g_80d969;   /* 0x0080d969 flag */

extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0064ea80(void);

__declspec(naked) void FUN_0064f970(void)
{
    __asm {
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        push    esi
        inc     eax
        xor     esi, esi
        cmp     ecx, 0x49
        jnz     L_64F98A
        mov     ecx, dword ptr [eax]
        lea     esi, [ecx + eax - 1]
        add     eax, 4
L_64F98A:
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], edx
        mov     dword ptr [g_805918], eax
        call    FUN_0064db40
        mov     eax, dword ptr [g_80592c]
        cmp     dword ptr [eax], 1
        setz    cl
        sub     eax, 4
        test    cl, cl
        mov     dword ptr [g_80592c], eax
        jz      L_64FA41
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        cmp     ecx, 0x24
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        jz      L_64FA0C
        cmp     ecx, 0x23
        jz      L_64FA1C
        call    FUN_0064ea80
        mov     al, byte ptr [g_80d969]
        test    al, al
        jnz     L_64FAA7
L_64F9E9:
        mov     eax, dword ptr [g_805908]
        cmp     eax, 0x24
        jz      L_64FA93
        cmp     eax, 0x23
        jz      L_64FA17
        call    FUN_0064ea80
        mov     al, byte ptr [g_80d969]
        test    al, al
        jz      L_64F9E9
        pop     esi
        ret
L_64FA0C:
        cmp     ecx, 0x23
        jnz     L_64FA98
        jmp     L_64FA1C
L_64FA17:
        mov     eax, dword ptr [g_805918]
L_64FA1C:
        movsx   ecx, byte ptr [eax]
        inc     eax
        xor     edx, edx
        cmp     ecx, 0x49
        jnz     L_64FA2D
        mov     ecx, dword ptr [eax]
        lea     edx, [ecx + eax - 1]
L_64FA2D:
        lea     eax, [edx + 1]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], edx
        mov     dword ptr [g_805918], eax
        pop     esi
        ret
L_64FA41:
        movsx   ecx, byte ptr [esi]
        cmp     ecx, 0x23
        lea     eax, [esi + 1]
        jnz     L_64FA98
        movsx   ecx, byte ptr [eax]
        inc     eax
        cmp     ecx, 0x49
        jnz     L_64FA58
        add     eax, 4
L_64FA58:
        movsx   ecx, byte ptr [eax]
        inc     eax
        cmp     ecx, 0x24
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        jz      L_64FA98
        call    FUN_0064ea80
        mov     al, byte ptr [g_80d969]
        test    al, al
        jnz     L_64FAA7
L_64FA7A:
        cmp     dword ptr [g_805908], 0x24
        jz      L_64FA93
        call    FUN_0064ea80
        mov     al, byte ptr [g_80d969]
        test    al, al
        jz      L_64FA7A
        pop     esi
        ret
L_64FA93:
        mov     eax, dword ptr [g_805918]
L_64FA98:
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805908], edx
        mov     dword ptr [g_805918], eax
L_64FAA7:
        pop     esi
        ret
    }
}
