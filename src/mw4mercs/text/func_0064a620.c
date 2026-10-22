/*
 * FUN_0064A620 (131 B) — __cdecl, RET (one param). Walks two linked lists
 * calling FUN_0064a520 on entries (second list only when [entry+0x1c]==0),
 * then updates a set of global list-head pointers based on [param+0x3c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_7f2ba8;   /* DAT_007f2ba8 */
extern int  g_805930;   /* DAT_00805930 */
extern int  g_805918;   /* DAT_00805918 */
extern int  g_80592c;   /* DAT_0080592c */

extern void FUN_00620850(void);
extern void FUN_0064a520(void);

__declspec(naked) void __cdecl FUN_0064a620(void)
{
    __asm {
        mov     ecx, dword ptr [g_7f2ba8]
        test    ecx, ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        jz      L_36
        push    edi
        call    FUN_00620850
L_36:
        mov     esi, dword ptr [edi + 0x28]
        test    esi, esi
        jz      L_4d
L_3d:
        push    esi
        call    FUN_0064a520
        mov     esi, dword ptr [esi + 0xc]
        add     esp, 4
        test    esi, esi
        jnz     L_3d
L_4d:
        mov     esi, dword ptr [edi + 0x2c]
        test    esi, esi
        jz      L_6b
L_54:
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jnz     L_64
        push    esi
        call    FUN_0064a520
        add     esp, 4
L_64:
        mov     esi, dword ptr [esi + 0xc]
        test    esi, esi
        jnz     L_54
L_6b:
        mov     eax, dword ptr [g_805930]
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [g_805918], ecx
        mov     ecx, dword ptr [edi + 0x3c]
        test    ecx, ecx
        pop     edi
        pop     esi
        jnz     L_94
        lea     edx, [eax - 4]
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [g_80592c], edx
        mov     dword ptr [g_805930], eax
        ret
L_94:
        mov     ecx, dword ptr [eax + 8]
        mov     dword ptr [g_80592c], eax
        mov     dword ptr [g_805930], ecx
        ret
    }
}
