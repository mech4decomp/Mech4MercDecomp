/*
 * FUN_0064ffc0 (149 B) — Recursive tree lookup by string key.
 *
 * __cdecl (2 params, plain RET). Walks a binary tree comparing
 * param_1 (key string) against node->name (node+0x10); on match
 * returns the node. Otherwise tries node->func (node+0x40) via
 * FUN_0064ff50, then recurses into node->left (node+0x0) and
 * node->right (node+0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_0064ff50(void *a, void *b);
extern void *__cdecl FUN_0064ffc0(void *a, void *b);

__declspec(naked) void *__cdecl FUN_0064ffc0(void *a, void *b)
{
    __asm {
        push    ebp
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        test    edi, edi
        jz      L_50050
        mov     ebp, dword ptr [esp + 0xc]
        push    ebx
        push    esi
        mov     esi, dword ptr [edi + 0x10]
        mov     eax, ebp
    L_ffd9:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_50001
        test    cl, cl
        jz      L_4fffd
        mov     dl, byte ptr [eax + 0x1]
        mov     bl, byte ptr [esi + 0x1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L_50001
        add     eax, 0x2
        add     esi, 0x2
        test    cl, cl
        jnz     L_ffd9
    L_4fffd:
        xor     eax, eax
        jmp     L_50006
    L_50001:
        sbb     eax, eax
        sbb     eax, -0x1
    L_50006:
        test    eax, eax
        pop     esi
        pop     ebx
        jnz     L_50011
        mov     eax, edi
        pop     edi
        pop     ebp
        ret
    L_50011:
        mov     eax, dword ptr [edi + 0x40]
        test    eax, eax
        jz      L_5002f
        cmp     dword ptr [edi + 0x18], 0x6
        jnz     L_5002f
        mov     eax, dword ptr [edi + 0x30]
        push    eax
        push    ebp
        call    FUN_0064ff50
        add     esp, 0x8
        test    eax, eax
        jnz     L_50052
    L_5002f:
        mov     ecx, dword ptr [edi]
        push    ecx
        push    ebp
        call    FUN_0064ffc0
        add     esp, 0x8
        test    eax, eax
        jnz     L_50052
        mov     edx, dword ptr [edi + 0x8]
        push    edx
        push    ebp
        call    FUN_0064ffc0
        add     esp, 0x8
        test    eax, eax
        jnz     L_50052
    L_50050:
        xor     eax, eax
    L_50052:
        pop     edi
        pop     ebp
        ret
    }
}
