/*
 * FUN_00620650 (288 B) — __thiscall (ECX=this), RET 8. Formats a value
 * (float/int/char) into a local buffer based on the type pointer
 * (0x0080d9b0/b4/b8/bc), then appends it to a global string at
 * 0x007f29a4 via sprintf (IAT 0x0076b420).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_80d9b4;    /* 0x0080d9b4 */
extern int g_80d9bc;    /* 0x0080d9bc */
extern int g_80d9b0;    /* 0x0080d9b0 */
extern int g_80d9b8;    /* 0x0080d9b8 */
extern void *g_76b420;  /* 0x0076b420 (IAT: sprintf) */

__declspec(naked) void FUN_00620650(void)
{
    __asm {
        mov     al, byte ptr [ecx + 0x15]
        sub     esp, 0x64
        test    al, al
        jz      L076A
        mov     ecx, dword ptr [esp + 0x68]
        cmp     dword ptr [ecx + 0x18], 0x4
        mov     eax, dword ptr [ecx + 0x3C]
        push    esi
        push    edi
        jnz     L0716
        cmp     dword ptr [eax + 0x4], 0x3
        jnz     L0685
        lea     edx, [esp + 0x8]
        mov     edi, 0x78cac8
        jmp     L071F
L0685:
        cmp     eax, dword ptr [g_80d9b4]
        jnz     L06B1
        mov     ecx, dword ptr [esp + 0x74]
        fld     dword ptr [ecx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        lea     edx, [esp + 0x10]
        push    0x78cac4
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0x10
        jmp     L073C
L06B1:
        cmp     eax, dword ptr [g_80d9bc]
        jnz     L06D5
        mov     eax, dword ptr [esp + 0x74]
        mov     ecx, dword ptr [eax]
        push    ecx
        lea     edx, [esp + 0xC]
        push    0x78cac0
        push    edx
        call    dword ptr [g_76b420]
        add     esp, 0xC
        jmp     L073C
L06D5:
        cmp     eax, dword ptr [g_80d9b0]
        jnz     L06F8
        mov     eax, dword ptr [esp + 0x74]
        cmp     dword ptr [eax], 0x0
        lea     edx, [esp + 0x8]
        jz      L06F1
        mov     edi, 0x78cab8
        jmp     L071F
L06F1:
        mov     edi, 0x78cab0
        jmp     L071F
L06F8:
        cmp     eax, dword ptr [g_80d9b8]
        jnz     L073C
        mov     ecx, dword ptr [esp + 0x74]
        mov     dl, byte ptr [ecx]
        mov     byte ptr [esp + 0x8], dl
        mov     byte ptr [esp + 0x9], 0x2C
        mov     byte ptr [esp + 0xA], 0x0
        jmp     L073C
L0716:
        lea     edx, [esp + 0x8]
        mov     edi, 0x78caa8
L071F:
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
L073C:
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        lea     edi, [esp + 0x8]
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xFFFFFFFF
        mov     esi, edi
        mov     edi, 0x7f29a4
        repne scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
        pop     edi
        pop     esi
L076A:
        add     esp, 0x64
        ret     8
    }
}
