/*
 * FUN_004e7470 (451 B) — MLR/Adept __thiscall: loads a config block,
 * compares a 4-byte version tag against the stored one and a global
 * default, and if changed rebuilds the object (FUN_004e7640 setup,
 * FUN_004cec10/FUN_004d9910 lookup, FUN_004f5030/FUN_004daa20 apply).
 * __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004e76e0(void);
extern void __cdecl FUN_004da920(void);
extern void __cdecl FUN_004e7640(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0041c830(void);
extern void __cdecl FUN_004f5030(void);
extern void __cdecl FUN_004daa20(void);
extern void __cdecl FUN_0041e710(void);

extern short g_007db0ac;   /* DAT_007db0ac */
extern short g_007db0ae;   /* DAT_007db0ae */
extern int   g_007db098;   /* DAT_007db098 */
extern int   g_007dab44;   /* DAT_007dab44 */
extern int   g_007dab40;   /* DAT_007dab40 */

__declspec(naked) void FUN_004e7470(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x124
        push    ebp
        mov     ebp, ecx
        mov     cl, byte ptr [eax + 0x3c]
        test    cl, cl
        push    esi
        jnz     L7628
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     ecx, ebp
        call    FUN_004e76e0
        mov     cx, word ptr [eax]
        cmp     word ptr [ebp + 0x24], cx
        mov     ax, word ptr [eax + 0x2]
        lea     esi, [ebp + 0x24]
        jnz     L74AF
        cmp     word ptr [esi + 0x2], ax
        jz      L7628
L74AF:
        cmp     cx, word ptr [g_007db0ac]
        jnz     L74C5
        cmp     ax, word ptr [g_007db0ae]
        jz      L7628
L74C5:
        push    ebx
        push    edi
        push    esi
        mov     word ptr [esi], cx
        mov     word ptr [esi + 0x2], ax
        call    FUN_004da920
        add     esp, 0x4
        push    0x8bd5e8
        push    0x8bd5e8
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        push    0x7b9460
        push    esi
        push    0x2
        push    eax
        push    0x0
        push    0x2
        push    0x90
        lea     ecx, [esp + 0xd8]
        call    FUN_004e7640
        mov     edx, dword ptr [esp + 0xa4]
        push    0x0
        push    edx
        lea     eax, [esp + 0xac]
        push    eax
        lea     ecx, [esp + 0x90]
        call    FUN_0041e690
        mov     ecx, dword ptr [g_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x10], cl
        mov     dx, word ptr [eax + 0x2]
        push    0x0
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x8c]
        push    ecx
        mov     word ptr [esp + 0x1e], dx
        call    FUN_004d9910
        mov     edx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [g_007dab40]
        mov     ebx, eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    ebx
        mov     dword ptr [ebp + 0x28], ebx
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esp + 0x138]
        mov     edx, dword ptr [eax + 0x30]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        lea     edi, [esp + 0x24]
        rep     movsd
        mov     ecx, dword ptr [eax + 0x2c]
        lea     esi, [eax + 0x2c]
        mov     eax, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x30], ecx
        push    0x7b9460
        lea     ecx, [esp + 0x58]
        mov     dword ptr [esp + 0x44], edx
        mov     dword ptr [esp + 0x54], eax
        call    FUN_00419460
        mov     edi, dword ptr [ebp + 0x2c]
        mov     ecx, dword ptr [edi + 0xd8]
        add     ecx, 0x80
        push    ecx
        push    esi
        lea     ecx, [esp + 0x1c]
        call    FUN_0041c830
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x60], edx
        mov     dword ptr [esp + 0x70], eax
        mov     dword ptr [esp + 0x80], ecx
        push    edi
        mov     ecx, ebx
        call    FUN_004f5030
        lea     edi, [ebx + 0x220]
        mov     ecx, 0xc
        lea     esi, [esp + 0x54]
        lea     edx, [esp + 0x24]
        rep     movsd
        push    edx
        mov     ecx, ebx
        call    FUN_004daa20
        mov     eax, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [eax + 0x48]
        lea     ecx, [esp + 0x84]
        call    FUN_0041e710
        pop     edi
        pop     ebx
L7628:
        pop     esi
        pop     ebp
        add     esp, 0x124
        ret     0x4
    }
}
