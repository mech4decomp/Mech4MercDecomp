/*
 * FUN_00401140 (525 B) — SortGameList() argument validator / string-table
 * setup. __stdcall, RET 0xC (3 params).
 *
 * Validates the sort-argument array, dispatches on a 7-entry jump table
 * (GameVersion), compares a "numeric" tag, then strncpy's into globals and
 * calls FUN_006f7bf0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f7bf0(void);
extern void __cdecl FUN_006fabf0(void);

extern int (*g_stricmp)(const char *, const char *);   /* 0x0076b2ac */
extern int (*g_strncpy)(char *, const char *, int);    /* 0x0076b320 */

extern char g_GameVersion[];   /* 0x0079fa48 */
extern char g_Flags[];         /* 0x0079fae0 */
extern char g_numeric[];       /* 0x0076b6dc */
extern char g_invalid[];       /* 0x0076b6a8 */

extern int  g_007b7c64;        /* DAT_007b7c64 */
extern int  g_007b7c68;        /* DAT_007b7c68 */
extern char g_007b7c5b;        /* byte */
extern char g_007b7c47;        /* byte */
extern int  g_007b7c5c;        /* dword */
extern int  g_007b7be0;        /* dword */
extern char g_007b7c48[];      /* buffer */
extern char g_007b7be4[];      /* buffer */
extern int  g_jt_401350[];     /* jump table @ 0x401350 */

__declspec(naked) int __stdcall FUN_00401140(int a, int b, int c)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x8
        push    esi
        call    FUN_006f89f0
        test    eax, eax
        jz      L1344
        call    FUN_006f89f0
        mov     ecx, dword ptr [eax + 0x3c]
        test    ecx, ecx
        jz      L1344
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, 0x4
        jl      L1331
        cmp     eax, 0x5
        jg      L1331
        mov     esi, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     dword ptr [ebp - 0x8], ecx
        jl      L118D
        cmp     ecx, 0x270f
        jle     L11A6
L118D:
        mov     ecx, dword ptr [ecx]
        test    ecx, ecx
        mov     dword ptr [ebp - 0x8], ecx
        jl      L1327
        cmp     ecx, 0x270f
        jg      L1327
L11A6:
        mov     ecx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        mov     dword ptr [ebp + 0x10], edx
        mov     dword ptr [ebp + 0xc], ecx
        jl      L11C5
        cmp     ecx, 0x1
        jle     L11CA
L11C5:
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [ebp + 0xc], ecx
L11CA:
        push    ebx
        xor     ebx, ebx
        cmp     eax, 0x5
        push    edi
        jnz     L126A
        mov     edi, dword ptr [g_stricmp]
        push    offset g_GameVersion
        push    edx
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L1232
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L126A
        mov     eax, dword ptr [g_007b7c64]
        cmp     eax, 0x6
        ja      L126A
        jmp     dword ptr [eax*4 + g_jt_401350]
        xor     ebx, ebx
        jmp     L126A
        mov     ebx, 0x1
        jmp     L126A
        mov     ebx, 0x2
        jmp     L126A
        mov     ebx, 0x3
        jmp     L126A
        mov     ebx, 0x4
        jmp     L126A
        mov     ebx, 0x5
        jmp     L126A
        mov     ebx, 0x6
        jmp     L126A
L1232:
        mov     edx, dword ptr [ebp + 0x10]
        push    offset g_Flags
        push    edx
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L126A
        mov     dword ptr [g_007b7c68], eax
        mov     eax, dword ptr [esi + 0x10]
        mov     eax, dword ptr [eax]
        dec     eax
        jz      L1260
        dec     eax
        jnz     L126A
        mov     dword ptr [g_007b7c68], 0x2
        jmp     L126A
L1260:
        mov     dword ptr [g_007b7c68], 0x1
L126A:
        mov     eax, dword ptr [ebp - 0x4]
        mov     esi, offset g_numeric
L1272:
        mov     dl, byte ptr [eax]
        mov     cl, dl
        cmp     dl, byte ptr [esi]
        jnz     L1296
        test    cl, cl
        jz      L1292
        mov     dl, byte ptr [eax + 0x1]
        mov     cl, dl
        cmp     dl, byte ptr [esi + 0x1]
        jnz     L1296
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L1272
L1292:
        xor     eax, eax
        jmp     L129B
L1296:
        sbb     eax, eax
        sbb     eax, -0x1
L129B:
        test    eax, eax
        jnz     L12AB
        mov     ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        setnz   al
        mov     edi, eax
        jmp     L12BA
L12AB:
        mov     edx, dword ptr [ebp + 0xc]
        xor     ecx, ecx
        test    edx, edx
        setnz   cl
        add     ecx, 0x2
        mov     edi, ecx
L12BA:
        mov     edx, dword ptr [ebp - 0x4]
        mov     esi, dword ptr [g_strncpy]
        push    0x13
        push    edx
        push    offset g_007b7c48
        call    esi
        mov     eax, dword ptr [ebp + 0x10]
        push    0x63
        push    eax
        push    offset g_007b7be4
        mov     byte ptr [g_007b7c5b], 0x0
        call    esi
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp - 0x8]
        add     esp, 0x18
        mov     byte ptr [g_007b7c47], 0x0
        mov     dword ptr [g_007b7c5c], ecx
        mov     dword ptr [g_007b7be0], edx
        call    FUN_006f89f0
        mov     ecx, dword ptr [g_007b7c68]
        mov     eax, dword ptr [eax + 0x3c]
        mov     edx, dword ptr [ebp + 0x10]
        push    ecx
        push    ebx
        push    edi
        push    edx
        mov     ecx, eax
        call    FUN_006f7bf0
        pop     edi
        pop     ebx
        pop     esi
        and     eax, 0xff
        mov     esp, ebp
        pop     ebp
        ret     0xc
L1327:
        or      eax, 0xffffffff
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0xc
L1331:
        push    eax
        push    offset g_invalid
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L1344
        int     3
L1344:
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
