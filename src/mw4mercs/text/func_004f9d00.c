/*
 * FUN_004f9d00 (451 B) — __thiscall text-input handler (RET 0x4).
 * Processes a character: handles backspace/tab/escape via a jump
 * table, DBCS lead-byte logic, and CharPrevA/CharNextA navigation.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008825c0;
extern char g_007dc8bc;

extern void *g_0076b28c;   /* IAT: memmove */

extern char *FUN_0075e11e(char *p);
extern char *FUN_0075e118(char *a, char *b);
extern int FUN_00760120(int c);
extern void FUN_004f9f30(void);
extern void FUN_004f9fa0(void);

__declspec(naked) void FUN_004f9d00(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        cmp     bl, 0xd
        push    ebp
        push    esi
        mov     esi, ecx
        jz      L_ret_dd

        mov     eax, dword ptr [esi + 0x16c]
        cmp     eax, 0xdd
        lea     ebp, [esi + 0x16c]
        jz      L_ret_dd

        mov     ecx, dword ptr [g_008825c0]
        test    ecx, ecx
        jnz     L_common

        xor     ecx, ecx
        mov     cl, bh
        sub     ecx, 0x25
        jz      L_case25
        sub     ecx, 0x2
        jz      L_case27
        sub     ecx, 0x7
        jnz     L_common

        lea     ebx, [eax + esi + 0x198]
        cmp     byte ptr [ebx], 0x0
        jz      L_skip_memmove

        push    edi
        push    ebx
        call    FUN_0075e11e
        mov     edx, eax
        or      ecx, 0xffffffff
        mov     edi, edx
        xor     eax, eax
        repne   scasb
        not     ecx
        push    ecx
        push    edx
        push    ebx
        call    dword ptr [g_0076b28c]
        mov     ebx, dword ptr [esp + 0x20]
        add     esp, 0xc
        pop     edi
        jmp     L_common

L_case27:
        lea     eax, [eax + esi + 0x198]
        push    eax
        call    FUN_0075e11e
        mov     ecx, 0xfffffe68
        sub     ecx, esi
        add     eax, ecx
        mov     dword ptr [ebp], eax
        jmp     L_common

L_case25:
        lea     edx, [eax + esi + 0x198]
        push    edx
        lea     eax, [esi + 0x198]
        push    eax
        call    FUN_0075e118
        mov     ecx, 0xfffffe68
        sub     ecx, esi
        add     eax, ecx
        mov     dword ptr [ebp], eax
        jmp     L_common

L_skip_memmove:
        mov     ebx, dword ptr [esp + 0x10]

L_common:
        test    bl, bl
        jz      L_end

        mov     cl, byte ptr [g_007dc8bc]
        test    cl, cl
        jz      L_leadbyte

        mov     edx, dword ptr [esi + 0x170]
        lea     eax, [esi + 0x170]
        add     edx, 0x2
        cmp     edx, 0xde
        jge     L_skip_lead

        push    eax
        push    ebp
        push    ebx
        push    ecx
        lea     eax, [esi + 0x198]
        push    eax
        call    FUN_004f9f30
        add     esp, 0x14

L_skip_lead:
        mov     byte ptr [g_007dc8bc], 0x0
        jmp     L_after

L_leadbyte:
        push    ebx
        call    FUN_00760120
        test    eax, eax
        jz      L_switch

        mov     byte ptr [g_007dc8bc], bl
        jmp     L_after

L_switch:
        movsx   eax, bl
        add     eax, -0x8
        cmp     eax, 0x54
        ja      L_default

        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x4f9ed4]
        jmp     dword ptr [ecx*4 + 0x4f9ec4]

L_case1b:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     byte ptr [esi + 0x198], 0x0
        call    dword ptr [edx + 0xa8]
        jmp     L_after

L_case08:
        cmp     dword ptr [ebp], 0x0
        jz      L_after

        lea     eax, [esi + 0x170]
        push    eax
        lea     ecx, [esi + 0x198]
        push    ebp
        push    ecx
        call    FUN_004f9fa0
        add     esp, 0xc
        jmp     L_after

L_default:
        lea     edx, [esi + 0x170]
        push    edx
        push    ebp
        push    0x0
        lea     eax, [esi + 0x198]
        push    ebx
        push    eax
        call    FUN_004f9f30
        add     esp, 0x14

L_after:
        cmp     dword ptr [ebp], 0xdd
        jnz     L_end

        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xa8]
        mov     dword ptr [ebp], 0x0
        mov     byte ptr [esi + 0x198], 0x0
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4

L_ret_dd:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0xa8]
        mov     dword ptr [esi + 0x16c], 0x0
        mov     byte ptr [esi + 0x198], 0x0

L_end:
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
