/*
 * FUN_0064ED00 (240 B) — __cdecl, 1 stack param.
 * Reads a value from a global stack pointer (0x0080592c), copies it into
 * a destination buffer, and dispatches on a type tag. Uses several global
 * state variables and a callback.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_80592c;   /* 0x0080592c global stack pointer */
extern unsigned long g_805918;   /* 0x00805918 */
extern unsigned long g_805908;   /* 0x00805908 */
extern unsigned long g_80d9b4;   /* 0x0080d9b4 */
extern unsigned long g_80d9bc;   /* 0x0080d9bc */
extern unsigned long g_80d9b8;   /* 0x0080d9b8 */
extern unsigned long g_7f2ba8;   /* 0x007f2ba8 */

extern int __cdecl FUN_0064d3d0(void *a, int b);
extern int __cdecl FUN_0064c950(int a);
extern int __cdecl FUN_0064db40(void);
extern void __stdcall FUN_00620890(void *a, void *b, void *c, void *d);

__declspec(naked) void __stdcall FUN_0064ED00(void *param_1)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        push    0x1
        push    edi
        call    FUN_0064d3d0
        mov     ebx, eax
        mov     eax, dword ptr [g_80592c]
        mov     ebp, dword ptr [eax]
        sub     eax, 0x4
        push    ebx
        mov     dword ptr [g_80592c], eax
        call    FUN_0064c950
        mov     esi, eax
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax]
        add     esp, 0xc
        inc     eax
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064db40
        cmp     ebx, dword ptr [g_80d9b4]
        jnz     L_ED6D
        push    eax
        call    FUN_0064c950
        mov     ecx, dword ptr [g_80d9bc]
        add     esp, 0x4
        cmp     eax, ecx
        jnz     L_ED6D
        mov     edx, dword ptr [g_80592c]
        fild    dword ptr [edx]
        fstp    dword ptr [ebp]
        jmp     L_EDCE
L_ED6D:
        mov     eax, dword ptr [ebx + 0x4]
        cmp     eax, 0x3
        jnz     L_ED95
        mov     ecx, dword ptr [ebx + 0x8]
        mov     eax, dword ptr [g_80592c]
        mov     esi, dword ptr [eax]
        mov     edx, ecx
        shr     ecx, 0x2
        mov     edi, ebp
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        mov     edi, dword ptr [esp + 0x14]
        jmp     L_EDCE
L_ED95:
        cmp     esi, dword ptr [g_80d9bc]
        jz      L_EDC3
        cmp     eax, 0x2
        jz      L_EDC3
        cmp     esi, dword ptr [g_80d9b8]
        jnz     L_EDB6
        mov     eax, dword ptr [g_80592c]
        mov     cl, byte ptr [eax]
        mov     byte ptr [ebp], cl
        jmp     L_EDCE
L_EDB6:
        mov     edx, dword ptr [g_80592c]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebp], eax
        jmp     L_EDCE
L_EDC3:
        mov     ecx, dword ptr [g_80592c]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [ebp], edx
L_EDCE:
        sub     dword ptr [g_80592c], 0x4
        mov     ecx, dword ptr [g_7f2ba8]
        test    ecx, ecx
        jz      L_EDEB
        mov     eax, dword ptr [edi + 0x3c]
        push    ebx
        push    ebp
        push    eax
        push    edi
        call    FUN_00620890
L_EDEB:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
