/*
 * FUN_004f9cec (extent 0x4f9cec-0x4f9ec4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b28c;
extern int    g_007dc6b4;
extern char   g_007dc8bc;
extern int    g_008825c0;
extern void __cdecl FUN_004f9f30(void);
extern void __cdecl FUN_004f9fa0(void);
extern void __cdecl FUN_0075e118(void);
extern void __cdecl FUN_0075e11e(void);
extern void __cdecl FUN_00760120(void);
extern void __cdecl FUN_004de060(void);

__declspec(naked) void FUN_004f9cec(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007dc6b4]
        jmp    FUN_004de060
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        cmp    bl, 0xd
        push    ebp
        push    esi
        mov    esi, ecx
        je    L_9ea2
        mov    eax, dword ptr [esi + 0x16c]
        cmp    eax, 0xdd
        lea    ebp, [esi + 0x16c]
        je    L_9ea2
        mov    ecx, dword ptr [g_008825c0]
        test    ecx, ecx
        jne    L_9dbe
        xor    ecx, ecx
        mov    cl, bh
        sub    ecx, 0x25
        je    L_9d98
        sub    ecx, 2
        je    L_9d7d
        sub    ecx, 7
        jne    L_9dbe
        lea    ebx, [eax + esi + 0x198]
        cmp    byte ptr [ebx], 0
        je    L_9dba
        push    edi
        push    ebx
        call    FUN_0075e11e
        mov    edx, eax
        or    ecx, 0xffffffff
        mov    edi, edx
        xor    eax, eax
        repne scasb
        not    ecx
        push    ecx
        push    edx
        push    ebx
        call    dword ptr [g_0076b28c]
        mov    ebx, dword ptr [esp + 0x20]
        add    esp, 0xc
        pop    edi
        jmp    L_9dbe
L_9d7d:
        lea    eax, [eax + esi + 0x198]
        push    eax
        call    FUN_0075e11e
        mov    ecx, 0xfffffe68
        sub    ecx, esi
        add    eax, ecx
        mov    dword ptr [ebp], eax
        jmp    L_9dbe
L_9d98:
        lea    edx, [eax + esi + 0x198]
        push    edx
        lea    eax, [esi + 0x198]
        push    eax
        call    FUN_0075e118
        mov    ecx, 0xfffffe68
        sub    ecx, esi
        add    eax, ecx
        mov    dword ptr [ebp], eax
        jmp    L_9dbe
L_9dba:
        mov    ebx, dword ptr [esp + 0x10]
L_9dbe:
        test    bl, bl
        je    L_9ebd
        mov    cl, byte ptr [g_007dc8bc]
        test    cl, cl
        je    L_9e03
        mov    edx, dword ptr [esi + 0x170]
        lea    eax, [esi + 0x170]
        add    edx, 2
        cmp    edx, 0xde
        jge    L_9dfa
        push    eax
        push    ebp
        push    ebx
        push    ecx
        lea    eax, [esi + 0x198]
        push    eax
        call    FUN_004f9f30
        add    esp, 0x14
L_9dfa:
        mov    byte ptr [g_007dc8bc], 0
        jmp    L_9e7b
L_9e03:
        push    ebx
        call    FUN_00760120
        test    eax, eax
        je    L_9e15
        mov    byte ptr [g_007dc8bc], bl
        jmp    L_9e7b
L_9e15:
        movsx    eax, bl
        add    eax, -8
        cmp    eax, 0x54
        ja    L_9e61
        xor    ecx, ecx
        mov    cl, byte ptr [eax + 0x4f9ed4]
        jmp    dword ptr [ecx*4 + 0x4f9ec4]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        mov    byte ptr [esi + 0x198], 0
        call    dword ptr [edx + 0xa8]
        jmp    L_9e7b
        cmp    dword ptr [ebp], 0
        je    L_9e7b
        lea    eax, [esi + 0x170]
        push    eax
        lea    ecx, [esi + 0x198]
        push    ebp
        push    ecx
        call    FUN_004f9fa0
        add    esp, 0xc
        jmp    L_9e7b
L_9e61:
        lea    edx, [esi + 0x170]
        push    edx
        push    ebp
        push    0
        lea    eax, [esi + 0x198]
        push    ebx
        push    eax
        call    FUN_004f9f30
        add    esp, 0x14
L_9e7b:
        cmp    dword ptr [ebp], 0xdd
        jne    L_9ebd
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0xa8]
        mov    dword ptr [ebp], 0
        mov    byte ptr [esi + 0x198], 0
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
L_9ea2:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 0xa8]
        mov    dword ptr [esi + 0x16c], 0
        mov    byte ptr [esi + 0x198], 0
L_9ebd:
        pop    esi
        pop    ebp
        pop    ebx
        ret    4
        nop    
        // jump-table data @ 0x004F9EC4 (0 relocated pointers)
    }
}
