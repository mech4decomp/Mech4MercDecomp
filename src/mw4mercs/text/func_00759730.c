/*
 * FUN_00759730 (extent 0x759730-0x7598ac) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b420;
extern int    g_008aacf4;
extern int    g_008aacf8;
extern int    g_008aacfc;
extern void __cdecl FUN_0075dc00(void);

__declspec(naked) void FUN_00759730(void)
{
    __asm {
        mov    dword ptr [ecx], 0x7aee80
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 0x1004
        call    FUN_0075dc00
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    esi, ecx
        lea    ebx, [esi + 4]
        push    ebx
        push    0
        push    1
        call    dword ptr [g_008aacfc]
        test    ax, ax
        mov    word ptr [esi + 0xc], ax
        je    L_978d
        mov    edx, dword ptr [ebx]
        mov    eax, dword ptr [esi]
        lea    ecx, [esi + 0xe]
        push    ecx
        push    edx
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0xc]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 8]
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x1004
        ret    0x10
L_978d:
        mov    edi, dword ptr [ebx]
        push    -6
        push    3
        push    0xc8
        push    edi
        call    dword ptr [g_008aacf8]
        test    ax, ax
        mov    word ptr [esi + 0xc], ax
        je    L_97cc
        mov    edx, dword ptr [esi]
        lea    eax, [esi + 0xe]
        push    eax
        push    edi
        push    1
        mov    ecx, esi
        call    dword ptr [edx + 0xc]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 8]
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x1004
        ret    0x10
L_97cc:
        lea    ebp, [esi + 8]
        push    ebp
        push    edi
        push    2
        call    dword ptr [g_008aacfc]
        test    ax, ax
        mov    word ptr [esi + 0xc], ax
        je    L_9808
        mov    edx, dword ptr [ebx]
        mov    eax, dword ptr [esi]
        lea    ecx, [esi + 0xe]
        push    ecx
        push    edx
        push    1
        mov    ecx, esi
        call    dword ptr [eax + 0xc]
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 8]
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x1004
        ret    0x10
L_9808:
        mov    ecx, dword ptr [esp + 0x1024]
        mov    edx, dword ptr [esp + 0x1020]
        mov    eax, dword ptr [esp + 0x101c]
        push    ecx
        mov    ecx, dword ptr [esp + 0x101c]
        push    edx
        push    eax
        push    ecx
        lea    edx, [esp + 0x24]
        push    0x7aee90
        push    edx
        mov    dword ptr [esp + 0x28], 0
        call    dword ptr [g_0076b420]
        mov    ebp, dword ptr [ebp]
        add    esp, 0x18
        push    0
        lea    eax, [esp + 0x14]
        push    eax
        push    0x800
        lea    ecx, [esp + 0x820]
        push    ecx
        push    -3
        lea    edx, [esp + 0x28]
        push    edx
        push    0
        push    ebp
        call    dword ptr [g_008aacf4]
        test    ax, ax
        mov    word ptr [esi + 0xc], ax
        je    L_989d
        cmp    ax, 1
        je    L_989d
        mov    eax, dword ptr [esi]
        lea    ecx, [esi + 0xe]
        push    ecx
        push    ebp
        push    2
        mov    ecx, esi
        call    dword ptr [eax + 0xc]
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 8]
        pop    edi
        pop    esi
        pop    ebp
        xor    al, al
        pop    ebx
        add    esp, 0x1004
        ret    0x10
L_989d:
        pop    edi
        pop    esi
        pop    ebp
        mov    al, 1
        pop    ebx
        add    esp, 0x1004
        ret    0x10
    }
}
