/*
 * FUN_0074bf60 (extent 0x74bf60-0x74c117) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern char   g_008b8e30;
extern char   g_008b8e31;
extern int    g_008b8e32;
extern int    g_008b8e36;
extern int    g_008b8e38;
extern int    g_008b8e3c;
extern int    g_008b8e40;
extern void __cdecl FUN_0074bd70(void);
extern void __cdecl FUN_0074bda0(void);
extern void __cdecl FUN_0074be30(void);
extern void __cdecl FUN_0074be60(void);
extern void __cdecl FUN_0074bf60(void);

__declspec(naked) void FUN_0074bf60(void)
{
    __asm {
        mov    eax, dword ptr [esp + 8]
        lea    ecx, [eax - 1]
        mov    edx, 1
        shl    edx, cl
        push    edi
        xor    edi, edi
        test    edx, edx
        je    L_bfbb
        mov    al, byte ptr [g_008b8e30]
        push    ebx
        mov    bl, byte ptr [g_008b8e31]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
L_bf86:
        cmp    al, 0x80
        jne    L_bf97
        mov    ecx, dword ptr [esi]
        mov    bl, byte ptr [ecx]
        inc    ecx
        mov    byte ptr [g_008b8e31], bl
        mov    dword ptr [esi], ecx
L_bf97:
        test    bl, al
        je    L_bf9d
        or    edi, edx
L_bf9d:
        shr    edx, 1
        shr    al, 1
        mov    byte ptr [g_008b8e30], al
        jne    L_bfaf
        mov    al, 0x80
        mov    byte ptr [g_008b8e30], al
L_bfaf:
        test    edx, edx
        jne    L_bf86
        pop    esi
        pop    ebx
        mov    eax, edi
        pop    edi
        ret    8
L_bfbb:
        mov    eax, edi
        pop    edi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    dword ptr [esp + 0x10], 0
        call    FUN_0074bda0
        call    FUN_0074bd70
        movsx    eax, word ptr [g_008b8e32]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        call    FUN_0074bf60
        cmp    ax, 0x100
        mov    dword ptr [esp + 0x14], eax
        je    L_c104
        mov    ebp, dword ptr [esp + 0x20]
        jmp    L_c013
L_c00f:
        mov    eax, dword ptr [esp + 0x14]
L_c013:
        mov    byte ptr [ebp], al
        mov    ebx, eax
        mov    eax, dword ptr [esp + 0x10]
        inc    ebp
        inc    eax
        mov    dword ptr [esp + 0x10], eax
L_c022:
        movsx    edx, word ptr [g_008b8e32]
        push    edx
        lea    eax, [esp + 0x20]
        push    eax
        call    FUN_0074bf60
        mov    edi, eax
        cmp    di, 0x100
        je    L_c104
        cmp    di, 0x102
        je    L_c0df
        cmp    di, 0x101
        jne    L_c05c
        inc    word ptr [g_008b8e32]
        jmp    L_c022
L_c05c:
        cmp    di, word ptr [g_008b8e36]
        jb    L_c076
        mov    edx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [g_008b8e38]
        push    edx
        mov    byte ptr [ecx], bl
        push    1
        jmp    L_c079
L_c076:
        push    edi
        push    0
L_c079:
        call    FUN_0074be60
        mov    edx, dword ptr [g_008b8e38]
        mov    ecx, eax
        and    ecx, 0xffff
        test    ax, ax
        movsx    bx, byte ptr [ecx + edx - 1]
        lea    esi, [ecx + edx]
        jbe    L_c0a9
        add    dword ptr [esp + 0x10], ecx
L_c09e:
        mov    al, byte ptr [esi - 1]
        dec    esi
        mov    byte ptr [ebp], al
        inc    ebp
        dec    ecx
        jne    L_c09e
L_c0a9:
        mov    cx, word ptr [g_008b8e36]
        mov    edx, dword ptr [g_008b8e40]
        mov    si, word ptr [esp + 0x14]
        xor    eax, eax
        mov    ax, cx
        inc    cx
        mov    word ptr [g_008b8e36], cx
        mov    dword ptr [esp + 0x14], edi
        mov    word ptr [edx + eax*2], si
        mov    edx, dword ptr [g_008b8e3c]
        mov    byte ptr [eax + edx], bl
        jmp    L_c022
L_c0df:
        call    FUN_0074bd70
        movsx    eax, word ptr [g_008b8e32]
        push    eax
        lea    ecx, [esp + 0x20]
        push    ecx
        call    FUN_0074bf60
        cmp    ax, 0x100
        mov    dword ptr [esp + 0x14], eax
        jne    L_c00f
L_c104:
        call    FUN_0074be30
        mov    eax, dword ptr [esp + 0x10]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    8
    }
}
