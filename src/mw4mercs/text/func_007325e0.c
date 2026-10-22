/*
 * FUN_007325e0 (194 B) — __stdcall, RET 0x4 (1 param: char *string).
 *
 * Word-wrap / line-length parser. Uses _ftol (FUN_0075db4a) on two float
 * globals, repeatedly calls FUN_00731a50 to measure substrings, and
 * accumulates a total length into EDI. Returns the accumulated length.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_008816b0;   /* DAT_008816b0 */
extern float g_008816b8;   /* DAT_008816b8 */
extern int   g_008816c0;   /* DAT_008816c0 */
extern char  g_008816dd;   /* DAT_008816dd */

extern int __cdecl FUN_0075db4a(void);                       /* _ftol */
extern int __cdecl FUN_00731a50(char *s, int *a, int *b, char *c);

__declspec(naked) int __stdcall FUN_007325e0(char *param_1)
{
    __asm {
        sub     esp, 0xc
        fld     dword ptr [g_008816b0]
        push    ebp
        fsub    dword ptr [g_008816b8]
        push    esi
        push    edi
        xor     edi, edi
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [esp + 0x14], edi
        call    FUN_0075db4a
        mov     esi, dword ptr [esp + 0x1c]
        mov     ebp, eax
        lea     eax, [esp + 0xf]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        push    esi
        mov     byte ptr [esp + 0x1f], 0x0
        call    FUN_00731a50
        mov     cl, byte ptr [esi]
        cmp     cl, 0xd
        jz      L99
        cmp     cl, 0xa
        jz      L99
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        jz      L79
L35:
        mov     dl, byte ptr [g_008816dd]
        test    dl, dl
        jz      L46
        lea     edx, [eax + edi*1]
        cmp     edx, ebp
        jg      L75
L46:
        mov     dl, byte ptr [esp + 0xf]
        test    dl, dl
        jnz     L75
        add     edi, eax
        mov     eax, dword ptr [esp + 0x14]
        add     eax, ecx
        lea     ecx, [esp + 0xf]
        push    ecx
        add     esi, eax
        lea     edx, [esp + 0x18]
        push    edx
        lea     eax, [esp + 0x18]
        push    eax
        push    esi
        call    FUN_00731a50
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        jnz     L35
L75:
        test    edi, edi
        jnz     L7D
L79:
        cmp     eax, ebp
        jg      L85
L7D:
        mov     cl, byte ptr [esp + 0xf]
        test    cl, cl
        jz      L87
L85:
        add     edi, eax
L87:
        fld     dword ptr [g_008816b8]
        call    FUN_0075db4a
        mov     dword ptr [g_008816c0], eax
        mov     eax, edi
L99:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0xc
        ret     0x4
    }
}
