/*
 * FUN_004d8980 (242 B) — __thiscall (RET 0x4). Network connection setup:
 * formats a message via IAT (0x0076b420), copies a string, opens a socket
 * (0x0075dff2/0x0075dfb0/0x0075dfc2), registers via FUN_004d7e00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0075dff2(void);
extern void FUN_0075dfb0(void);
extern void FUN_0075dfc2(void);
extern void FUN_004d7a60(void);
extern void FUN_004d7e00(void);
extern void FUN_00500890(void);
extern void *g_0076b420;   /* IAT entry */

__declspec(naked) void FUN_004d8980(void)
{
    __asm {
        sub     esp, 0x100
        push    ebx
        push    esi
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx+0x17ec]
        push    edi
        lea     eax, [ebx+0x1768]
        push    eax
        push    ecx
        lea     edx, [esp+0x14]
        push    0x773014
        push    edx
        call    dword ptr [g_0076b420]
        mov     eax, dword ptr [esp+0x120]
        add     esp, 0x10
        test    eax, eax
        jz      L89e7
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x773004
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        push    ebp
        mov     ebp, ecx
        or      ecx, 0xffffffff
        lea     edx, [esp+0x10]
        mov     edi, edx
        repne scasb
        mov     ecx, ebp
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     ecx, ebp
        and     ecx, 0x3
        rep movsb
        pop     ebp
L89e7:
        mov     esi, dword ptr [ebx+0x17dc]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp+0xc]
        repne scasb
        push    0x0
        not     ecx
        dec     ecx
        push    ecx
        lea     eax, [esp+0x14]
        push    eax
        push    esi
        call    FUN_0075dff2
        test    eax, eax
        jge     L8a5b
        push    esi
        call    FUN_0075dfb0
        push    0x0
        push    0x1
        push    0x2
        call    FUN_0075dfc2
        mov     esi, eax
        mov     dword ptr [ebx+0x17dc], esi
        call    FUN_004d7a60
        push    eax
        lea     ecx, [ebx+0x4]
        push    ecx
        push    esi
        mov     ecx, ebx
        call    FUN_004d7e00
        test    eax, eax
        jnz     L8a5b
        or      ecx, 0xffffffff
        lea     edi, [esp+0xc]
        repne scasb
        push    eax
        mov     eax, dword ptr [ebx+0x17dc]
        not     ecx
        dec     ecx
        push    ecx
        lea     edx, [esp+0x14]
        push    edx
        push    eax
        call    FUN_0075dff2
L8a5b:
        call    FUN_00500890
        pop     edi
        pop     esi
        mov     dword ptr [ebx+0x17e0], eax
        pop     ebx
        add     esp, 0x100
        ret     0x4
    }
}
