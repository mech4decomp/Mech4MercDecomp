/*
 * FUN_004f3870 (532 B) — MLR/Adept component-list build helper (__thiscall,
 * RET 0x10, 4 params). Builds a component list from a source object,
 * allocating per-entry sub-objects, then populates two linked lists.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d9940(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_004f3f40(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00415040(void);
extern void __cdecl FUN_004154d0(void);

extern short g_007db0ac;   /* DAT_007db0ac */
extern short g_007db0ae;   /* DAT_007db0ae */
extern int   g_007b8c10;   /* DAT_007b8c10 */
extern int   g_007dab44;   /* DAT_007dab44 */
extern int   g_007dab40;   /* DAT_007dab40 */

__declspec(naked) void FUN_004f3870(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x4]
        sub     esp, 0x7c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x90]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [esp + 0x98]
        push    eax
        push    ecx
        push    esi
        push    edx
        mov     ecx, edi
        call    FUN_004d9940
        mov     cx, word ptr [esi + 0x60]
        mov     dx, word ptr [esi + 0x62]
        xor     eax, eax
        cmp     cx, word ptr [g_007db0ac]
        mov     word ptr [edi + 0x16e], ax
        mov     word ptr [edi + 0x16c], 0xffff
        mov     dword ptr [edi + 0x170], eax
        lea     ebp, [edi + 0x170]
        lea     ebx, [edi + 0x178]
        mov     dword ptr [ebx], eax
        mov     dword ptr [ebp + 0x4], eax
        mov     dword ptr [ebx + 0x4], eax
        mov     dword ptr [edi + 0x168], eax
        mov     dword ptr [edi + 0x180], eax
        lea     eax, [esi + 0x60]
        mov     dword ptr [edi], 0x775130
        mov     word ptr [edi + 0x16c], cx
        mov     word ptr [edi + 0x16e], dx
        jnz     L3907
        cmp     dx, word ptr [g_007db0ae]
        jz      L39B9
L3907:
        push    0x1
        push    eax
        lea     ecx, [esp + 0x50]
        call    FUN_004d1f80
        mov     edx, dword ptr [esp + 0x48]
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x50]
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x0
        jle     L39B0
L3935:
        mov     edx, dword ptr [esp + 0x48]
        push    0x30
        lea     eax, [esp + 0x1c]
        push    eax
        lea     ecx, [esp + 0x50]
        call    dword ptr [edx + 0x20]
        push    0x40
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L3987
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        mov     ecx, esi
        call    FUN_00415180
        lea     ecx, [esp + 0x18]
        xor     eax, eax
        push    ecx
        lea     ecx, [esi + 0x10]
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi], 0x76cd9c
        call    FUN_004f3f40
        mov     dword ptr [esi], 0x77512c
        jmp     L3989
L3987:
        xor     esi, esi
L3989:
        push    esi
        mov     ecx, ebp
        call    FUN_004179b0
        push    esi
        mov     ecx, ebx
        call    FUN_004179b0
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [edi + 0x180], esi
        mov     dword ptr [esp + 0x10], eax
        jl      L3935
L39B0:
        lea     ecx, [esp + 0x48]
        call    FUN_004d21c0
L39B9:
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     al, byte ptr [ecx + 0x17]
        test    al, al
        jz      L3A78
        mov     ecx, ebp
        call    FUN_00417a40
        mov     dword ptr [edi + 0x168], eax
        dec     eax
        push    eax
        call    FUN_00415040
        add     esp, 0x4
        test    eax, eax
        jle     L3A1E
        mov     ebx, eax
L39F8:
        mov     eax, dword ptr [ebp]
        test    eax, eax
        jz      L3A03
        mov     esi, dword ptr [eax]
        jmp     L3A05
L3A03:
        xor     esi, esi
L3A05:
        push    ebp
        mov     ecx, esi
        call    FUN_004154d0
        push    esi
        mov     ecx, ebp
        call    FUN_004179b0
        dec     ebx
        mov     dword ptr [edi + 0x180], esi
        jnz     L39F8
L3A1E:
        push    0x20
        call    FUN_00415040
        mov     ecx, dword ptr [edi + 0x168]
        add     esp, 0x4
        test    ecx, ecx
        jle     L3A78
        test    eax, eax
        jle     L3A78
        mov     ebx, eax
L3A38:
        mov     edx, dword ptr [edi + 0x168]
        dec     edx
        push    edx
        call    FUN_00415040
        mov     ecx, dword ptr [ebp]
        add     esp, 0x4
        test    eax, eax
        jle     L3A55
L3A4F:
        dec     eax
        mov     ecx, dword ptr [ecx + 0x4]
        jnz     L3A4F
L3A55:
        test    ecx, ecx
        jz      L3A5D
        mov     esi, dword ptr [ecx]
        jmp     L3A5F
L3A5D:
        xor     esi, esi
L3A5F:
        push    ebp
        mov     ecx, esi
        call    FUN_004154d0
        push    esi
        mov     ecx, ebp
        call    FUN_004179b0
        dec     ebx
        mov     dword ptr [edi + 0x180], esi
        jnz     L3A38
L3A78:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x7c
        ret     0x10
    }
}
