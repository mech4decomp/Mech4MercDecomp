/*
 * FUN_0061fe40 (276 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * Tokenizer that copies token strings into param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_805920;   /* 0x00805920 */
extern char g_61ff60[];         /* 0x0061ff60 (jump index table 1) */
extern int g_61ff54;            /* 0x0061ff54 (jump table 1 base) */
extern char g_61ffa8[];         /* 0x0061ffa8 (jump index table 2) */
extern int g_61ff9c;            /* 0x0061ff9c (jump table 2 base) */
extern char g_76cb8c[];         /* 0x0076cb8c (string " ") */
extern char *g_7b58f0[];        /* 0x007b58f0 (string pointer table) */

__declspec(naked) void __stdcall FUN_0061fe40(void *param)
{
    __asm {
        push    ecx
        mov     edx, dword ptr [g_805920]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        push    edi
        mov     byte ptr [esp + 0x13], 0x0
L_fe54:
        movsx   esi, byte ptr [edx]
        lea     eax, [esi - 0xE]
        inc     edx
        cmp     eax, 0x3A
        mov     dword ptr [esp + 0x18], esi
        ja      L_fe78
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_61ff60]
        jmp     dword ptr [ecx*4 + g_61ff54]
L_fe73:
        mov     byte ptr [esp + 0x13], 0x1
L_fe78:
        lea     eax, [esi - 0x1]
        cmp     eax, 0x48
        ja      L_fee8
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_61ffa8]
        jmp     dword ptr [ecx*4 + g_61ff9c]
L_fe8f:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_76cb8c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebp
        repne   scasb
        dec     edi
        mov     eax, dword ptr [edx]
        mov     ecx, ebx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        mov     edi, dword ptr [eax + 0x10]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebp
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        add     edx, 0x4
        jmp     L_ff40
L_fee8:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_76cb8c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebp
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x18]
        mov     edi, dword ptr [ecx*4 + g_7b58f0]
        or      ecx, 0xffffffff
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, ebp
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_ff40:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      L_fe54
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
