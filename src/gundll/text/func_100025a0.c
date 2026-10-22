/*
 * FUN_100025a0 (90 B) - __stdcall, RET 0x8. UTF-16 char-class parser:
 * walks a ushort string, classifies each char via a lookup table and a
 * jump table, accumulates a sum into EDI, writes it to *param2.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_lookup_1000260c[];   /* byte class table at 0x1000260c */
extern void *g_jumptable_100025fc[];        /* jump table at 0x100025fc */

__declspec(naked) void __stdcall FUN_100025a0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     ax, word ptr [edx]
        push    esi
        push    edi
        xor     edi, edi
        xor     esi, esi
        test    ax, ax
        jz      L_e3
L_b2:
        movzx   eax, ax
        lea     ecx, [eax - 0x30]
        add     edx, 2
        cmp     ecx, 0x48
        ja      L_f0
        movzx   ecx, byte ptr [ecx + g_lookup_1000260c]
        jmp     dword ptr [ecx*4 + g_jumptable_100025fc]
L_ce:
        lea     esi, [eax - 0x30]
        jmp     L_d6
L_d3:
        lea     esi, [eax - 0x57]
L_d6:
        mov     ax, word ptr [edx]
        shl     edi, 4
        add     edi, esi
        test    ax, ax
        jnz     L_b2
L_e3:
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx], edi
        pop     edi
        xor     eax, eax
        pop     esi
        ret     8
L_f0:
        pop     edi
        mov     eax, 0xc112000c
        pop     esi
        ret     8
    }
}
