/*
 * FUN_0075c8c0 (extent 0x75c8c0-0x75c988) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern char   g_008bc9b4;
extern int    g_008bc9bc;
extern int    g_008bc9c0;
extern int    g_008bc9c4;
extern int    g_008bc9c8;
extern int    g_008bd2c0;
extern int    g_008bd2c4;
extern int    g_008bd2cc;

__declspec(naked) void FUN_0075c8c0(void)
{
    __asm {
        mov    ecx, dword ptr [g_008bd2cc]
L_c8c6:
        mov    al, byte ptr [ecx]
        cmp    al, 0x20
        je    L_c8d0
        cmp    al, 9
        jne    L_c8d3
L_c8d0:
        inc    ecx
        jmp    L_c8c6
L_c8d3:
        mov    dword ptr [g_008bd2cc], ecx
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_008bc9b4]
        xor    edx, edx
        sub    esp, 0x28
        cmp    al, dl
        jne    L_c982
        mov    ecx, dword ptr [g_008bd2c4]
        push    ebx
        cmp    byte ptr [ecx], 0xd
        push    esi
        lea    eax, [esp + 8]
        je    L_c934
        lea    esi, [esp + 8]
        sub    ecx, esi
L_c909:
        lea    esi, [esp + 0x2c]
        cmp    eax, esi
        je    L_c928
        mov    bl, byte ptr [ecx + eax]
        mov    byte ptr [eax], bl
        mov    bl, byte ptr [ecx + eax + 1]
        inc    eax
        cmp    bl, 0xd
        jne    L_c909
        lea    ecx, [esp + 0x2c]
        cmp    eax, ecx
        jne    L_c934
L_c928:
        mov    byte ptr [eax], 0x2e
        inc    eax
        mov    byte ptr [eax], 0x2e
        inc    eax
        mov    byte ptr [eax], 0x2e
        inc    eax
L_c934:
        mov    ecx, dword ptr [esp + 0x34]
        mov    byte ptr [eax], dl
        mov    eax, dword ptr [g_008bd2c0]
        mov    dword ptr [g_008bc9c0], edx
        mov    dword ptr [g_008bc9c8], edx
        lea    edx, [esp + 8]
        push    edx
        push    eax
        push    ecx
        push    0x7af978
        push    0x8bcac0
        mov    dword ptr [g_008bc9c4], 0x8bcac0
        call    dword ptr [g_0076b420]
        add    esp, 0x14
        pop    esi
        mov    dword ptr [g_008bc9bc], 3
        mov    byte ptr [g_008bc9b4], 1
        pop    ebx
L_c982:
        add    esp, 0x28
        ret    4
    }
}
