/*
 * FUN_0074A8F0 (179 B) — Initializes a structure (param_1) with a
 * magic tag, index, and flags, then conditionally calls FUN_0074a230.
 *
 * __cdecl, RET 0x10 (four dword params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_85a1f4;                /* DAT_0085a1f4 */
extern int g_7b76b4[];              /* DAT_007b76b4 (indexed table) */
extern int g_858950;                /* DAT_00858950 */
extern int g_7b76d8[];              /* DAT_007b76d8 (indexed table) */
extern int g_85a244;                /* DAT_0085a244 */
extern void __cdecl FUN_0074a230(int, void *, void *, int);

__declspec(naked) void __cdecl FUN_0074a8f0(void)
{
    __asm {
        sub     esp, 0x10
        mov     ecx, dword ptr [g_85a1f4]
        xor     eax, eax
        neg     ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x1c]
        sbb     ecx, ecx
        push    ebp
        mov     dword ptr [esp + 0x8], eax
        and     ecx, 0xfffff800
        push    esi
        mov     esi, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esi*4 + g_7b76b4]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], eax
        add     ecx, 0x800
        or      ecx, 0x10001
        mov     dword ptr [esp + 0x14], edx
        mov     edx, dword ptr [esp + 0x20]
        mov     ebp, dword ptr [edx + 0x8]
        push    edi
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x1c], eax
        mov     ecx, 0x7
        mov     edi, edx
        rep     stosd
        mov     al, byte ptr [esp + 0x2c]
        mov     byte ptr [edx + 0x15], al
        cmp     dword ptr [g_858950], 0x3
        mov     dword ptr [esp + 0x10], 0x10
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [edx], 0x12348888
        mov     dword ptr [edx + 0x10], ebx
        mov     dword ptr [edx + 0x4], esi
        mov     dword ptr [edx + 0x8], ebp
        jnz     L_74a982
        mov     eax, dword ptr [esi*4 + g_7b76d8]
        test    eax, eax
        jz      L_74a999
L_74a982:
        push    0x0
        add     edx, 0xc
        push    edx
        mov     edx, dword ptr [g_85a244]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        call    FUN_0074a230
L_74a999:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x10
    }
}
