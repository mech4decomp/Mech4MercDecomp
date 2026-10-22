/*
 * FUN_5e033065 (312 B) - string-table loader. param_1==1: reads a string via
 * FUN_5e033f1c (growing the buffer on ERROR_INSUFFICIENT_BUFFER), copies it
 * out. param_1==0: reads a packed 2-digit-per-byte hex string via
 * FUN_5e033e09 and decodes it into param_4.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int *g_5e035050;  /* IAT: GetLastError */
extern char g_5e77aafc;  /* DAT_5e77aafc */
extern char g_5e77ab04;  /* end-of-buffer marker */
extern int g_5e0391b4;   /* DAT_5e0391b4 */
extern int g_5e0391c0;   /* PTR_DAT_5e0391c0 (char-class table) */

extern int __cdecl FUN_5e033f1c(int, int, void *, int, int);
extern void *__cdecl FUN_5e02b6e4(int);          /* malloc */
extern void __cdecl FUN_5e02b69c(void *);        /* free */
extern void __cdecl FUN_5e02f100(void *, void *, int); /* strncpy */
extern int __cdecl FUN_5e033e09(int, int, void *, int, int);
extern int __cdecl FUN_5e02da4c(int, int);

__declspec(naked) void FUN_5e033065(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        cmp     dword ptr [ebp+0x8], 1
        push    ebx
        push    esi
        push    edi
        jnz     L312b
        xor     ebx, ebx
        lea     eax, [ebp-0x80]
        push    ebx
        push    0x80
        push    eax
        lea     edi, [ebp-0x80]
        push    dword ptr [ebp+0x10]
        mov     dword ptr [ebp+0x8], ebx
        push    dword ptr [ebp+0xc]
        call    FUN_5e033f1c
        mov     esi, eax
        add     esp, 0x14
        cmp     esi, ebx
        jnz     L30ee
        call    dword ptr [g_5e035050]
        cmp     eax, 0x7a
        jnz     L310a
        push    ebx
        push    ebx
        push    ebx
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0xc]
        call    FUN_5e033f1c
        mov     esi, eax
        add     esp, 0x14
        cmp     esi, ebx
        jz      L310a
        push    esi
        call    FUN_5e02b6e4
        mov     edi, eax
        pop     ecx
        cmp     edi, ebx
        jz      L310a
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp+0x8], 1
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0xc]
        call    FUN_5e033f1c
        mov     esi, eax
        add     esp, 0x14
        cmp     esi, ebx
        jz      L3103
    L30ee:
        push    esi
        call    FUN_5e02b6e4
        pop     ecx
        cmp     eax, ebx
        mov     ecx, dword ptr [ebp+0x14]
        mov     dword ptr [ecx], eax
        jnz     L3112
        cmp     dword ptr [ebp+0x8], ebx
        jz      L310a
    L3103:
        push    edi
        call    FUN_5e02b69c
        pop     ecx
    L310a:
        or      eax, -1
    L310d:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    L3112:
        push    esi
        push    edi
        push    eax
        call    FUN_5e02f100
        add     esp, 0xc
        cmp     dword ptr [ebp+0x8], ebx
        jz      L3196
        push    edi
        call    FUN_5e02b69c
        pop     ecx
        jmp     L3196
    L312b:
        cmp     dword ptr [ebp+0x8], 0
        jnz     L310a
        push    0
        mov     esi, offset g_5e77aafc
        push    4
        push    esi
        push    dword ptr [ebp+0x10]
        push    dword ptr [ebp+0xc]
        call    FUN_5e033e09
        add     esp, 0x14
        test    eax, eax
        jz      L310a
        mov     edi, dword ptr [ebp+0x14]
        and     byte ptr [edi], 0
    L3153:
        cmp     dword ptr [g_5e0391b4], 1
        mov     bl, byte ptr [esi]
        jle     L316d
        movzx   eax, bl
        push    4
        push    eax
        call    FUN_5e02da4c
        pop     ecx
        pop     ecx
        jmp     L317c
    L316d:
        mov     ecx, dword ptr [g_5e0391c0]
        movzx   eax, bl
        mov     al, byte ptr [ecx+eax*2]
        and     eax, 4
    L317c:
        test    eax, eax
        jz      L3196
        mov     al, byte ptr [edi]
        mov     cl, 0xa
        imul    cl
        add     al, bl
        sub     al, 0x30
        inc     esi
        inc     esi
        mov     byte ptr [edi], al
        cmp     esi, offset g_5e77ab04
        jl      L3153
    L3196:
        xor     eax, eax
        jmp     L310d
    }
}
