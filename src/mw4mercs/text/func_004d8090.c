/*
 * FUN_004d8090 (308 B) — __stdcall recursive path-splitter. Splits a path
 * (param_3) on backslashes, recursing into FUN_004d8090 for each component
 * while the accumulated length stays under 0x546, and finally copies the
 * result into param_2. When the remaining string is short enough, hands off
 * to FUN_004d7ff0 (query-packet sender).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d8090(void);
extern void __cdecl FUN_004d7ff0(void);

__declspec(naked) void FUN_004d8090(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp+0x10]
        mov     dword ptr [esp+4], ecx
        push    ebp
        or      ecx, -1
        push    esi
        mov     esi, dword ptr [esp+0x1c]
        push    edi
        xor     eax, eax
        xor     edx, edx
        mov     edi, ebx
        repne scasb
        not     ecx
        dec     ecx
        mov     ebp, ecx
        or      ecx, -1
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        add     ebp, ecx
        cmp     ebp, 0x546
        jc      L_815f
L_80c9:
        or      ecx, -1
        xor     eax, eax
        mov     edi, esi
        repne scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x546
        jbe     L_818e
        xor     ecx, ecx
        cmp     ecx, 0x546
        mov     eax, esi
        mov     edi, esi
        jge     L_81bc
L_80f3:
        cmp     byte ptr [eax], 0x5c
        jnz     L_810c
        mov     ecx, edx
        and     ecx, 0x80000001
        jns     L_8107
        dec     ecx
        or      ecx, -2
        inc     ecx
L_8107:
        jnz     L_810b
        mov     edi, eax
L_810b:
        inc     edx
L_810c:
        inc     eax
        mov     ecx, eax
        sub     ecx, esi
        cmp     ecx, 0x546
        jl      L_80f3
        cmp     edi, esi
        jz      L_81bc
        mov     edx, dword ptr [esp+0x18]
        mov     ecx, dword ptr [esp+0x10]
        push    esi
        push    ebx
        push    edx
        mov     byte ptr [edi], 0
        call    FUN_004d8090
        or      ecx, -1
        xor     eax, eax
        xor     edx, edx
        mov     byte ptr [edi], 0x5c
        mov     esi, edi
        repne scasb
        not     ecx
        dec     ecx
        mov     ebp, ecx
        or      ecx, -1
        mov     edi, ebx
        repne scasb
        not     ecx
        dec     ecx
        add     ebp, ecx
        cmp     ebp, 0x546
        jnc     L_80c9
L_815f:
        or      ecx, -1
        mov     edi, esi
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, -1
        mov     esi, edi
        mov     edi, ebx
        repne scasb
        dec     edi
        mov     ecx, edx
        shr     ecx, 2
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
L_818e:
        mov     eax, dword ptr [esp+0x18]
        mov     ecx, dword ptr [esp+0x10]
        push    ebx
        push    eax
        call    FUN_004d7ff0
        or      ecx, -1
        mov     edi, esi
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, ebx
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
L_81bc:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0xc
    }
}
