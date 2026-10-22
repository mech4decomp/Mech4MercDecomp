/*
 * FUN_004d8350 (93 B) — __thiscall (RET 0xc). String-length check on arg3
 * (repne scasb); if short enough, formats into a stack buffer via an IAT
 * call (0x0076b420) then calls FUN_004d8090.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d8090(void);
extern void *g_0076b420;   /* IAT entry */

__declspec(naked) void FUN_004d8350(void)
{
    __asm {
        mov     edx, dword ptr [esp+0xc]
        sub     esp, 0x578
        push    esi
        mov     esi, ecx
        or      ecx, 0xffffffff
        push    edi
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x546
        ja      skip
        push    edx
        lea     eax, [esp+0xc]
        push    0x772fe0
        push    eax
        call    dword ptr [g_0076b420]
        mov     edx, dword ptr [esp+0x594]
        mov     eax, dword ptr [esp+0x590]
        add     esp, 0xc
        lea     ecx, [esp+0x8]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_004d8090
skip:
        pop     edi
        pop     esi
        add     esp, 0x578
        ret     0xc
    }
}
