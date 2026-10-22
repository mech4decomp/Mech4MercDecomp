/*
 * FUN_004d83b0 (275 B) — __thiscall (RET 0xc). Network message serialization:
 * copies arg3 string into a stack buffer, formats via IAT (0x0076b420),
 * calls FUN_004d85b0 / FUN_004d84d0 / FUN_004d8090 / FUN_004d7ff0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d85b0(void);
extern void FUN_004d84d0(void);
extern void FUN_004d8090(void);
extern void FUN_004d7ff0(void);
extern void *g_0076b420;   /* IAT entry */

__declspec(naked) void FUN_004d83b0(void)
{
    __asm {
        mov     edx, dword ptr [esp+0xc]
        mov     al, byte ptr [edx]
        sub     esp, 0x24c
        test    al, al
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        jz      L8478
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        mov     ebp, ecx
        cmp     ebp, 0x80
        jg      L84b6
        or      ecx, 0xffffffff
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     esi, [esp+0x14]
        mov     edx, esi
        mov     esi, edi
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        push    ebp
        lea     edx, [ebx+0x104]
        lea     eax, [esp+0x18]
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        push    ecx
        push    edx
        call    FUN_004d85b0
        lea     ecx, [esp+0x1a4]
        push    ecx
        lea     edx, [esp+0x28]
        push    ebp
        push    edx
        call    FUN_004d84d0
        lea     eax, [esp+0x1b0]
        push    eax
        lea     ecx, [esp+0xb4]
        push    0x772ff4
        push    ecx
        call    dword ptr [g_0076b420]
        mov     esi, dword ptr [esp+0x28c]
        mov     edi, dword ptr [esp+0x288]
        add     esp, 0x28
        lea     edx, [esp+0x94]
        push    edx
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_004d8090
        jmp     L8486
L8478:
        mov     edi, dword ptr [esp+0x260]
        mov     esi, dword ptr [esp+0x264]
L8486:
        lea     eax, [esp+0x94]
        push    0x772fec
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0x8
        lea     ecx, [esp+0x94]
        push    ecx
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_004d8090
        push    esi
        push    edi
        mov     ecx, ebx
        call    FUN_004d7ff0
L84b6:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24c
        ret     0xc
    }
}
