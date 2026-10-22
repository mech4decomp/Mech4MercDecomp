/*
 * FUN_0069c6b0 (489 B) — HUD/ABL dispatch. Switch on DAT_008058ac via a
 * byte-indexed jump table (0x69c8bc -> 0x69c89c). Handles case-item creation
 * (case 1), several sub-handlers, and a special case 0x45 that builds a
 * type object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_008058ac;   /* DAT_008058ac */
extern char g_007b5a2c;   /* DAT_007b5a2c */
extern char g_0080595a;   /* DAT_0080595a */
extern char g_007b5a2d;   /* DAT_007b5a2d */
extern char g_007b5a2f;   /* DAT_007b5a2f */
extern int  g_008058e0;   /* DAT_008058e0 */
extern char g_008058f4;   /* DAT_008058f4 */
extern int  g_008058c4;   /* DAT_008058c4 */
extern int  g_0080da24[]; /* DAT_0080da24 */
extern char g_007f3254[]; /* DAT_007f3254 */
extern int  g_0080d988;   /* DAT_0080d988 */
extern char g_0080da38[]; /* DAT_0080da38 */
extern char g_007b58b4[]; /* DAT_007b58b4 */
extern char g_007b5890[]; /* DAT_007b5890 */
extern char g_byte_69c8bc[]; /* byte table @ 0x69c8bc */
extern int  g_jt_69c89c[];   /* jump table @ 0x69c89c */

extern void __cdecl FUN_00649f20(void);
extern void __cdecl FUN_0064fc80(void);
extern void __cdecl FUN_00649f90(void);
extern void __cdecl FUN_00649ec0(void);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0061e600(void);
extern void __cdecl FUN_0069be00(void);
extern void __cdecl FUN_0069be40(void);
extern void __cdecl FUN_0069beb0(void);
extern void __cdecl FUN_0069bf40(void);
extern void __cdecl FUN_0069c040(void);
extern void __cdecl FUN_0069c520(void);
extern void __cdecl FUN_0064ff50(void);
extern void __cdecl FUN_00650120(void);
extern void __cdecl FUN_00562f40(void);
extern void __cdecl FUN_00649920(void);
extern void __cdecl FUN_006498f0(void);

__declspec(naked) void FUN_0069c6b0(void)
{
    __asm {
        push    ecx
        cmp     dword ptr [g_008058ac], 0x1a
        jz      L6BF
        call    FUN_00649f20
L6BF:
        mov     eax, dword ptr [g_008058ac]
        push    ebx
        dec     eax
        xor     ebx, ebx
        cmp     eax, 0x44
        push    esi
        ja      L86E
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_byte_69c8bc]
        jmp     dword ptr [ecx*4 + g_jt_69c89c]
L6E1:
        lea     edx, [esp + 0x8]
        push    edx
        mov     dword ptr [esp + 0xc], ebx
        call    FUN_0064fc80
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [ecx + 0x18]
        add     esp, 0x4
        cmp     eax, 0x8
        jnz     L777
        mov     eax, dword ptr [ecx + 0x1c]
        cmp     eax, 0xd
        jz      L71F
        cmp     eax, 0x4
        jz      L715
        cmp     eax, 0x5
        jnz     L745
        cmp     eax, 0x4
        jnz     L729
L715:
        cmp     byte ptr [g_007b5a2c], bl
        jz      L736
        jmp     L745
L71F:
        cmp     byte ptr [g_0080595a], bl
        jz      L736
        jmp     L745
L729:
        cmp     eax, 0x5
        jnz     L745
        cmp     byte ptr [g_007b5a2d], bl
        jnz     L745
L736:
        call    FUN_00649f90
        mov     ecx, dword ptr [esp + 0x8]
        mov     byte ptr [g_007b5a2f], bl
L745:
        push    ecx
        call    FUN_00649ec0
        call    FUN_00649150
        mov     eax, dword ptr [esp + 0xc]
        mov     esi, dword ptr [g_008058e0]
        push    0x1
        push    eax
        call    FUN_0061e600
        add     esp, 0xc
        mov     dword ptr [g_008058e0], esi
        mov     byte ptr [g_007b5a2f], 0x1
        jmp     L86E
L777:
        push    ecx
        call    FUN_0069be00
        jmp     L86B
L782:
        call    FUN_0069be40
        jmp     L86E
L78C:
        call    FUN_0069beb0
        jmp     L86E
L796:
        call    FUN_0069bf40
        jmp     L86E
L7A0:
        call    FUN_0069c040
        jmp     L86E
L7AA:
        call    FUN_0069c520
        jmp     L86E
L7B4:
        cmp     byte ptr [g_008058f4], bl
        jnz     L7C3
        push    0x45
        jmp     L866
L7C3:
        mov     byte ptr [g_007b5a2f], bl
        call    FUN_00649150
        mov     ecx, dword ptr [g_008058c4]
        mov     edx, dword ptr [ecx*4 + g_0080da24]
        push    edx
        push    offset g_007f3254
        mov     byte ptr [g_007b5a2f], 0x1
        call    FUN_0064ff50
        add     esp, 0x8
        cmp     eax, ebx
        mov     esi, 0x9
        jnz     L84F
        mov     eax, dword ptr [g_008058c4]
        lea     ecx, [eax*4 + g_0080da24]
        push    ecx
        push    offset g_007f3254
        call    FUN_00650120
        mov     edx, dword ptr [g_0080d988]
        mov     cl, byte ptr [g_008058c4]
        add     esp, 0x8
        mov     dword ptr [eax + 0x18], esi
        mov     dword ptr [eax + 0x1c], 0x2
        mov     byte ptr [eax + 0x21], bl
        mov     byte ptr [eax + 0x22], bl
        mov     word ptr [eax + 0x24], bx
        mov     dword ptr [eax + 0x28], ebx
        mov     dword ptr [eax + 0x2c], ebx
        mov     dword ptr [eax + 0x30], ebx
        mov     dword ptr [eax + 0x34], ebx
        mov     dword ptr [eax + 0x40], edx
        mov     dword ptr [eax + 0x3c], offset g_0080da38
        mov     dword ptr [eax + 0x48], ebx
        mov     byte ptr [eax + 0x44], cl
L84F:
        cmp     dword ptr [eax + 0x18], esi
        jnz     L864
        push    eax
        call    FUN_00649ec0
        add     esp, 0x4
        call    FUN_00649150
        jmp     L86E
L864:
        push    0x44
L866:
        call    FUN_00562f40
L86B:
        add     esp, 0x4
L86E:
        push    ebx
        push    ebx
        push    offset g_007b58b4
        call    FUN_00649920
        push    offset g_007b5890
        call    FUN_006498f0
        add     esp, 0x10
        test    al, al
        pop     esi
        pop     ebx
        jz      L897
        push    0x14
        call    FUN_00562f40
        add     esp, 0x4
L897:
        pop     ecx
        ret
    }
}
