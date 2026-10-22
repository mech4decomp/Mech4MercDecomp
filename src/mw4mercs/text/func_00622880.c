/*
 * FUN_00622880 (129 B) — __thiscall (ECX = this), RET 0x14 (5 stack params).
 * Linear search over a linked list of entries ([ECX] head, [ECX+4] end),
 * matching several fields; returns the matched entry's [EAX+0x14] value,
 * or 0xFFFFFFFF if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char  g_7dc694;   /* DAT_007dc694 */
extern unsigned short g_7dc696;   /* DAT_007dc696 */

__declspec(naked) void __fastcall FUN_00622880(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 4]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [ecx]
        cmp     esi, edx
        push    edi
        jz      L_ed
        mov     ebp, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x18]
L_95:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_e6
        mov     ecx, dword ptr [eax + 4]
        cmp     ecx, dword ptr [esp + 0x14]
        jnz     L_e6
        mov     cl, byte ptr [edi]
        cmp     byte ptr [eax + 0x18], cl
        jnz     L_b5
        mov     bx, word ptr [eax + 0x1a]
        cmp     bx, word ptr [edi + 2]
        jz      L_ca
L_b5:
        cmp     cl, byte ptr [g_7dc694]
        jnz     L_e6
        mov     cx, word ptr [g_7dc696]
        cmp     word ptr [edi + 2], cx
        jnz     L_e6
L_ca:
        mov     ecx, dword ptr [esp + 0x1c]
        cmp     dword ptr [eax + 8], ecx
        jnz     L_e6
        mov     ecx, dword ptr [esp + 0x20]
        cmp     dword ptr [eax + 0xc], ecx
        jnz     L_e6
        cmp     dword ptr [eax + 0x10], ebp
        jnz     L_f7
        cmp     ebp, -2
        jz      L_f7
L_e6:
        add     esi, 4
        cmp     esi, edx
        jnz     L_95
L_ed:
        pop     edi
        pop     esi
        pop     ebp
        or      eax, 0FFFFFFFFh
        pop     ebx
        ret     0x14
L_f7:
        mov     eax, dword ptr [eax + 0x14]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14
    }
}
