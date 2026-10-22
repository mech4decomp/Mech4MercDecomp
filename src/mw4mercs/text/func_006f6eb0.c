/*
 * FUN_006f6eb0 (1109 B) — __thiscall filter/validation routine.
 * Calls FUN_006f5d90/FUN_006f5e50/FUN_006f6950 and an IAT function
 * pointer (stricmp) at 0x0076b2ac. No vtable reconstruction, no .txt2.
 * In scope.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b2ac;   /* IAT: _stricmp */
extern int g_858924;

extern void __cdecl FUN_006f5d90(void);
extern void __cdecl FUN_006f5e50(void);
extern void __cdecl FUN_006f6950(void);

__declspec(naked) char __cdecl FUN_006f6eb0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        mov     esi, dword ptr [ebp + 0x4]
        test    esi, esi
        push    edi
        jnz     L_006f6ec6
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f6ec6:
        mov     al, byte ptr [ebp + 0x10]
        test    al, al
        mov     edi, dword ptr [esp + 0x14]
        jz      L_006f6f28
        push    0x79fac0
        lea     eax, [edi + 0x4]
        push    eax
        call    FUN_006f5d90
        test    eax, eax
        jz      L_006f6ef0
        mov     eax, dword ptr [eax + 0x8]
        cmp     eax, dword ptr [ebp + 0x14]
        jc      L_006f6f0c
        cmp     eax, dword ptr [ebp + 0x18]
        ja      L_006f6f0c
L_006f6ef0:
        cmp     esi, 0x2
        jnz     L_006f6efe
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f6efe:
        cmp     esi, 0x4
        jnz     L_006f6f28
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f6f0c:
        cmp     esi, 0x1
        jnz     L_006f6f1a
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f6f1a:
        cmp     esi, 0x3
        jnz     L_006f6f28
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f6f28:
        mov     al, byte ptr [ebp + 0x1c]
        test    al, al
        jz      L_006f6f94
        push    0x79fa24
        add     edi, 0x4
        push    edi
        call    FUN_006f5d90
        test    eax, eax
        jz      L_006f6f74
        mov     ebx, dword ptr [eax + 0x8]
        push    0x79fa60
        push    edi
        call    FUN_006f5d90
        test    eax, eax
        jz      L_006f6f74
        cmp     ebx, dword ptr [eax + 0x8]
        jge     L_006f6f74
        cmp     esi, 0x2
        jnz     L_006f6f66
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f6f66:
        cmp     esi, 0x4
        jnz     L_006f6f90
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f6f74:
        cmp     esi, 0x1
        jnz     L_006f6f82
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f6f82:
        cmp     esi, 0x3
        jnz     L_006f6f90
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f6f90:
        mov     edi, dword ptr [esp + 0x14]
L_006f6f94:
        mov     al, byte ptr [ebp + 0x1d]
        test    al, al
        jz      L_006f6fec
        push    0x79fa24
        lea     ecx, [edi + 0x4]
        push    ecx
        call    FUN_006f5d90
        test    eax, eax
        jz      L_006f6fd0
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jle     L_006f6fd0
        cmp     esi, 0x2
        jnz     L_006f6fc2
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f6fc2:
        cmp     esi, 0x4
        jnz     L_006f6fec
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f6fd0:
        cmp     esi, 0x1
        jnz     L_006f6fde
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f6fde:
        cmp     esi, 0x3
        jnz     L_006f6fec
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f6fec:
        mov     al, byte ptr [ebp + 0x40]
        test    al, al
        mov     ebx, dword ptr [g_76b2ac]
        jz      L_006f7057
        push    0x79fa48
        lea     edx, [edi + 0x4]
        push    edx
        call    FUN_006f5d90
        test    eax, eax
        jz      L_006f701f
        mov     ecx, dword ptr [g_858924]
        mov     edx, dword ptr [eax + 0x4]
        push    ecx
        push    edx
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jz      L_006f703b
L_006f701f:
        cmp     esi, 0x2
        jnz     L_006f702d
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f702d:
        cmp     esi, 0x4
        jnz     L_006f7057
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f703b:
        cmp     esi, 0x1
        jnz     L_006f7049
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f7049:
        cmp     esi, 0x3
        jnz     L_006f7057
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f7057:
        mov     al, byte ptr [ebp + 0x41]
        test    al, al
        jz      L_006f70bc
        push    0x79fa48
        lea     eax, [edi + 0x4]
        push    eax
        call    FUN_006f5d90
        test    eax, eax
        jz      L_006f7084
        mov     ecx, dword ptr [g_858924]
        mov     edx, dword ptr [eax + 0x4]
        push    ecx
        push    edx
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jg      L_006f70a0
L_006f7084:
        cmp     esi, 0x2
        jnz     L_006f7092
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f7092:
        cmp     esi, 0x4
        jnz     L_006f70bc
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f70a0:
        cmp     esi, 0x1
        jnz     L_006f70ae
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f70ae:
        cmp     esi, 0x3
        jnz     L_006f70bc
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f70bc:
        mov     al, byte ptr [ebp + 0x42]
        test    al, al
        jz      L_006f7121
        push    0x79fa48
        lea     eax, [edi + 0x4]
        push    eax
        call    FUN_006f5d90
        test    eax, eax
        jz      L_006f70e9
        mov     ecx, dword ptr [g_858924]
        mov     edx, dword ptr [eax + 0x4]
        push    ecx
        push    edx
        call    ebx
        add     esp, 0x8
        test    eax, eax
        jl      L_006f7105
L_006f70e9:
        cmp     esi, 0x2
        jnz     L_006f70f7
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f70f7:
        cmp     esi, 0x4
        jnz     L_006f7121
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f7105:
        cmp     esi, 0x1
        jnz     L_006f7113
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f7113:
        cmp     esi, 0x3
        jnz     L_006f7121
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f7121:
        mov     bl, byte ptr [ebp + 0x1e]
        test    bl, bl
        jz      L_006f717f
        push    0x79fa24
        lea     eax, [edi + 0x4]
        push    eax
        call    FUN_006f5d90
        test    eax, eax
        jz      L_006f7147
        mov     eax, dword ptr [eax + 0x8]
        cmp     eax, dword ptr [ebp + 0x20]
        jc      L_006f7163
        cmp     eax, dword ptr [ebp + 0x24]
        ja      L_006f7163
L_006f7147:
        cmp     esi, 0x2
        jnz     L_006f7155
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f7155:
        cmp     esi, 0x4
        jnz     L_006f717f
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f7163:
        cmp     esi, 0x1
        jnz     L_006f7171
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f7171:
        cmp     esi, 0x3
        jnz     L_006f717f
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f717f:
        mov     al, byte ptr [ebp + 0x30]
        test    al, al
        jz      L_006f71da
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        jz      L_006f71be
        mov     ecx, dword ptr [ebp + 0x34]
        push    ecx
        push    0x79fb68
        lea     ecx, [eax + 0x18]
        call    FUN_006f5e50
        test    eax, eax
        jz      L_006f71be
        cmp     esi, 0x2
        jnz     L_006f71b0
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f71b0:
        cmp     esi, 0x4
        jnz     L_006f71da
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f71be:
        cmp     esi, 0x1
        jnz     L_006f71cc
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f71cc:
        cmp     esi, 0x3
        jnz     L_006f71da
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f71da:
        mov     al, byte ptr [ebp + 0x28]
        test    al, al
        jz      L_006f7240
        push    0x79fa6c
        lea     edx, [edi + 0x4]
        push    edx
        call    FUN_006f5d90
        test    eax, eax
        jz      L_006f7224
        mov     ecx, dword ptr [ebp + 0x2c]
        mov     edx, dword ptr [eax + 0x4]
        push    ecx
        push    edx
        call    dword ptr [g_76b2ac]
        add     esp, 0x8
        test    eax, eax
        jnz     L_006f7224
        cmp     esi, 0x2
        jnz     L_006f7216
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f7216:
        cmp     esi, 0x4
        jnz     L_006f7240
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f7224:
        cmp     esi, 0x1
        jnz     L_006f7232
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f7232:
        cmp     esi, 0x3
        jnz     L_006f7240
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f7240:
        test    bl, bl
        jz      L_006f729b
        push    0x79fa24
        lea     eax, [edi + 0x4]
        push    eax
        call    FUN_006f5d90
        test    eax, eax
        jz      L_006f7263
        mov     eax, dword ptr [eax + 0x8]
        cmp     eax, dword ptr [ebp + 0x20]
        jc      L_006f727f
        cmp     eax, dword ptr [ebp + 0x24]
        ja      L_006f727f
L_006f7263:
        cmp     esi, 0x2
        jnz     L_006f7271
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f7271:
        cmp     esi, 0x4
        jnz     L_006f729b
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f727f:
        cmp     esi, 0x1
        jnz     L_006f728d
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f728d:
        cmp     esi, 0x3
        jnz     L_006f729b
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f729b:
        mov     al, byte ptr [ebp + 0x38]
        test    al, al
        jz      L_006f72f6
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        jz      L_006f72da
        mov     ecx, dword ptr [ebp + 0x3c]
        push    ecx
        push    0x79fb70
        lea     ecx, [eax + 0x18]
        call    FUN_006f5e50
        test    eax, eax
        jz      L_006f72da
        cmp     esi, 0x2
        jnz     L_006f72cc
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f72cc:
        cmp     esi, 0x4
        jnz     L_006f72f6
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f72da:
        cmp     esi, 0x1
        jnz     L_006f72e8
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret     0x4
L_006f72e8:
        cmp     esi, 0x3
        jnz     L_006f72f6
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret     0x4
L_006f72f6:
        push    edi
        mov     ecx, ebp
        call    FUN_006f6950
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
