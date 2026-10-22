/*
 * FUN_0075cad0 (extent 0x75cad0-0x75cba0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b394;
extern char   g_008bc9b4;
extern int    g_008bc9b8;
extern int    g_008bc9bc;
extern int    g_008bd2cc;
extern void __cdecl FUN_0075c8c0(void);
extern void __cdecl FUN_0075c8e0(void);

__declspec(naked) void FUN_0075cad0(void)
{
    __asm {
        call    FUN_0075c8c0
        mov    edx, dword ptr [g_008bd2cc]
        mov    al, byte ptr [edx]
        inc    edx
        cmp    al, 0x22
        mov    dword ptr [g_008bd2cc], edx
        je    L_caf5
        push    0x7af9a4
        call    FUN_0075c8e0
        xor    eax, eax
        ret    
L_caf5:
        mov    al, byte ptr [edx]
        cmp    al, 0x22
        mov    ecx, 0x8bc480
        je    L_cb18
L_cb00:
        mov    byte ptr [ecx], al
        inc    ecx
        inc    edx
        cmp    ecx, 0x8bc57f
        ja    L_cb2d
        mov    al, byte ptr [edx]
        cmp    al, 0x22
        jne    L_cb00
        mov    dword ptr [g_008bd2cc], edx
L_cb18:
        inc    edx
        mov    byte ptr [ecx], 0
        mov    dword ptr [g_008bd2cc], edx
        call    FUN_0075c8c0
        mov    eax, 0x8bc480
        ret    
L_cb2d:
        push    0x79cbf4
        mov    dword ptr [g_008bd2cc], edx
        call    FUN_0075c8e0
        xor    eax, eax
        ret    
        mov    al, byte ptr [g_008bc9b4]
        test    al, al
        jne    L_cb9f
        mov    ecx, dword ptr [g_008bc9bc]
        cmp    ecx, 0x3e
        je    L_cb95
        mov    eax, dword ptr [g_008bc9b8]
        mov    edx, 0x8bd2bf
        sub    edx, eax
        je    L_cb95
        mov    dword ptr [ecx*4 + 0x8bc9c0], eax
        inc    ecx
        mov    dword ptr [g_008bc9bc], ecx
        lea    ecx, [esp + 8]
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        push    edx
        push    eax
        call    dword ptr [g_0076b394]
        mov    edx, dword ptr [g_008bc9b8]
        lea    eax, [edx + eax + 1]
        add    esp, 0x10
        mov    dword ptr [g_008bc9b8], eax
        ret    
L_cb95:
        push    0x7af9b0
        call    FUN_0075c8e0
L_cb9f:
        ret    
    }
}
