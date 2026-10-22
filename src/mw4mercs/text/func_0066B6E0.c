/*
 * 408 B block containing two __thiscall methods:
 *   FUN_0066B6E0 — looks up a value via FUN_004dd360 and stores it at
 *     this+0x14 (or 0xffffffff on failure). RET 4.
 *   FUN_0066B710 — string-table loader: strdup's a string (FUN_004084d0),
 *     builds a two-char key, resolves several table entries via
 *     FUN_004dd360 / FUN_00411bf0 / FUN_00411d60 and IAT calls, storing
 *     results at this+0x14/0x48/0x30/0x34/0x38/0x3c. RET 4.
 *
 * __thiscall (ECX = this). No obfuscation junk in this block.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b298;   /* IAT fn ptr 0x0076b298 */
extern void *g_76b2b0;   /* IAT fn ptr 0x0076b2b0 */
extern void *g_76b2d8;   /* IAT fn ptr 0x0076b2d8 */
extern void *g_76b2ac;   /* IAT fn ptr 0x0076b2ac */

extern char g_772d84;    /* .rdata string 0x00772d84 */
extern char g_796e38;    /* .rdata string 0x00796e38 */
extern char g_796e34;    /* .rdata string 0x00796e34 */
extern char g_796e20;    /* .rdata string 0x00796e20 */
extern char g_796e10;    /* .rdata string 0x00796e10 */
extern char g_796df4;    /* .rdata string 0x00796df4 */
extern char g_796dec;    /* .rdata string 0x00796dec */

extern void __cdecl FUN_004dd360(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_00411d60(void);

__declspec(naked) void FUN_0066B6E0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax + 0x14]
        mov     edx, dword ptr [esi + 0x10]
        push    ecx
        mov     ecx, dword ptr [edx + 4]
        call    FUN_004dd360
        test    eax, eax
        je      L_703
        mov     eax, dword ptr [eax]
        mov     dword ptr [esi + 0x14], eax
        pop     esi
        ret     4
L_703:
        mov     dword ptr [esi + 0x14], 0xffffffff
        pop     esi
        ret     4
        nop
        nop
        mov     eax, dword ptr [esp + 4]
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax + 0x14]
        mov     ebx, ecx
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, esi
        repne   scasb
        not     ecx
        push    ecx
        call    FUN_004084d0
        or      ecx, 0xffffffff
        mov     ebp, eax
        mov     edi, esi
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, ebp
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        push    offset g_772d84
        push    ebp
        rep     movsb
        call    dword ptr [g_76b298]
        mov     esi, eax
        mov     eax, dword ptr [ebx + 0x10]
        mov     edi, dword ptr [eax + 4]
        add     esp, 0xc
        mov     byte ptr [esi], 0
        inc     esi
        mov     byte ptr [esi], 0
        push    ebp
        mov     ecx, edi
        inc     esi
        call    FUN_004dd360
        test    eax, eax
        je      L_784
        mov     ecx, dword ptr [eax]
        mov     dword ptr [ebx + 0x14], ecx
        jmp     L_78b
L_784:
        mov     dword ptr [ebx + 0x14], 0xffffffff
L_78b:
        push    esi
        mov     ecx, edi
        call    FUN_004dd360
        test    eax, eax
        je      L_79e
        mov     edx, dword ptr [eax]
        mov     dword ptr [ebx + 0x48], edx
        jmp     L_7a5
L_79e:
        mov     dword ptr [ebx + 0x48], 0xffffffff
L_7a5:
        mov     esi, dword ptr [esp + 0x1c]
        push    1
        lea     eax, [esp + 0x14]
        push    eax
        push    offset g_796e38
        mov     ecx, esi
        call    FUN_00411bf0
        mov     ecx, dword ptr [esp + 0x10]
        push    3
        push    offset g_796e34
        push    ecx
        call    dword ptr [g_76b2b0]
        add     esp, 0xc
        test    eax, eax
        mov     edi, 0xbf800000
        jne     L_7df
        mov     dword ptr [ebx + 0x30], edi
        jmp     L_7f0
L_7df:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [ebx + 0x30]
        add     esp, 4
L_7f0:
        push    1
        lea     eax, [ebx + 0x34]
        push    eax
        push    offset g_796e20
        mov     ecx, esi
        call    FUN_00411d60
        push    1
        lea     ecx, [ebx + 0x38]
        push    ecx
        push    offset g_796e10
        mov     ecx, esi
        call    FUN_00411d60
        push    1
        lea     edx, [esp + 0x18]
        push    edx
        push    offset g_796df4
        mov     ecx, esi
        call    FUN_00411bf0
        mov     eax, dword ptr [esp + 0x14]
        push    offset g_796dec
        push    eax
        call    dword ptr [g_76b2ac]
        add     esp, 8
        test    eax, eax
        jne     L_854
        push    ebp
        mov     dword ptr [ebx + 0x3c], edi
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
L_854:
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [ebx + 0x3c]
        add     esp, 4
        push    ebp
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    }
}
