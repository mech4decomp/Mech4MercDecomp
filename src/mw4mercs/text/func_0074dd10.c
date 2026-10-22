/*
 * FUN_0074dd10 (extent 0x74dd10-0x74dde5) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;

__declspec(naked) void FUN_0074dd10(void)
{
    __asm {
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        jne    L_dd20
        mov    eax, 0x76b9a0
        ret    8
L_dd20:
        mov    dx, word ptr [eax]
        cmp    dx, 1
        push    esi
        je    L_dd71
        cmp    dx, 2
        mov    ecx, 0x79e7f8
        jne    L_dd3a
        mov    ecx, 0x7abe1c
L_dd3a:
        xor    edx, edx
        mov    dx, word ptr [eax + 0x10]
        mov    esi, dword ptr [esp + 8]
        push    edx
        mov    edx, dword ptr [eax + 8]
        push    edx
        mov    edx, dword ptr [eax + 4]
        push    edx
        xor    edx, edx
        mov    dx, word ptr [eax + 2]
        push    edx
        xor    edx, edx
        mov    dx, word ptr [eax + 0xe]
        push    edx
        push    ecx
        push    0x7abdec
        push    esi
        call    dword ptr [g_0076b420]
        add    esp, 0x20
        mov    eax, esi
        pop    esi
        ret    8
L_dd71:
        mov    ecx, dword ptr [eax + 8]
        mov    edx, dword ptr [eax + 4]
        mov    esi, dword ptr [esp + 8]
        push    ecx
        push    edx
        xor    ecx, ecx
        mov    cx, word ptr [eax + 2]
        xor    edx, edx
        mov    dx, word ptr [eax + 0xe]
        push    ecx
        push    edx
        push    0x7abdc4
        push    esi
        call    dword ptr [g_0076b420]
        add    esp, 0x18
        mov    eax, esi
        pop    esi
        ret    8
        mov    eax, dword ptr [esp + 4]
        cmp    eax, 0x7afce8
        jne    L_ddb3
        mov    eax, 0x7abe50
        ret    4
L_ddb3:
        cmp    eax, 0x7afcb8
        jne    L_ddc2
        mov    eax, 0x7abe44
        ret    4
L_ddc2:
        cmp    eax, 0x7afca0
        jne    L_ddd1
        mov    eax, 0x7abe34
        ret    4
L_ddd1:
        cmp    eax, 0x7afcd0
        mov    eax, 0x7abe24
        je    L_dde2
        mov    eax, 0x79e7f8
L_dde2:
        ret    4
    }
}
