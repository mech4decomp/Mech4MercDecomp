/*
 * FUN_00600947 (extent 0x600947-0x600b24) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b29c;
extern int    g_0076b320;
extern int    g_0076b420;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_0080d9bc;
extern int    g_0080da24;
extern void __cdecl FUN_0064fe70(void);
extern void __cdecl FUN_0064ff50(void);
extern void __cdecl FUN_00650120(void);

__declspec(naked) void FUN_00600947(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        lea    eax, [ecx + 0x221c]
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
        sub    esp, 0x110
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        push    ebx
        push    ebp
        mov    ebp, dword ptr [g_0076b320]
        push    esi
        xor    ecx, edx
        push    edi
        mov    edi, dword ptr [ecx + 0x10]
        xor    edi, 0x85739531
        xor    esi, esi
        mov    dword ptr [esp + 0x1c], edi
        mov    byte ptr [esp + 0x14], 0
        mov    dword ptr [esp + 0x18], esi
L_0997:
        cmp    esi, 3
        je    L_0b0b
        cmp    esi, 0xf
        ja    L_0a3e
        jmp    dword ptr [esi*4 + 0x600b24]
        push    4
        push    0x78b3c4
        lea    edx, [esp + 0x18]
        push    edx
        jmp    L_0a4a
        push    4
        push    0x78b3bc
        lea    eax, [esp + 0x18]
        push    eax
        jmp    L_0a4a
        push    4
        push    0x78b3b4
        jmp    L_0a45
        push    4
        push    0x78b3ac
        lea    edx, [esp + 0x18]
        push    edx
        jmp    L_0a4a
        push    4
        push    0x78b3a4
        lea    eax, [esp + 0x18]
        push    eax
        jmp    L_0a4a
        push    4
        push    0x78b39c
        jmp    L_0a45
        push    4
        push    0x78b394
        lea    edx, [esp + 0x18]
        push    edx
        jmp    L_0a4a
        push    4
        push    0x78b38c
        lea    eax, [esp + 0x18]
        push    eax
        jmp    L_0a4a
        push    4
        push    0x78b384
        jmp    L_0a45
        push    4
        push    0x78b37c
        lea    edx, [esp + 0x18]
        push    edx
        jmp    L_0a4a
        push    4
        push    0x78b374
        lea    eax, [esp + 0x18]
        push    eax
        jmp    L_0a4a
L_0a3e:
        push    4
        push    0x78b36c
L_0a45:
        lea    ecx, [esp + 0x18]
        push    ecx
L_0a4a:
        call    ebp
        mov    eax, dword ptr [edi + esi*8 + 0x14]
        add    esp, 0xc
        test    eax, eax
        jle    L_0b0b
        mov    edi, dword ptr [edi + esi*8 + 0x10]
        mov    ebx, eax
L_0a61:
        mov    edx, dword ptr [edi + 0x10]
        push    edx
        lea    eax, [esp + 0x14]
        push    eax
        lea    ecx, [esp + 0x28]
        push    0x78b364
        push    ecx
        call    dword ptr [g_0076b420]
        mov    al, byte ptr [esp + 0x30]
        add    esp, 0x10
        test    al, al
        lea    esi, [esp + 0x20]
        je    L_0aa7
L_0a89:
        movsx    edx, byte ptr [esi]
        push    edx
        call    dword ptr [g_0076b29c]
        add    esp, 4
        cmp    al, 0x20
        mov    byte ptr [esi], al
        jne    L_0a9f
        mov    byte ptr [esi], 0x5f
L_0a9f:
        mov    al, byte ptr [esi + 1]
        inc    esi
        test    al, al
        jne    L_0a89
L_0aa7:
        mov    eax, dword ptr [g_0080da24]
        push    eax
        lea    ecx, [esp + 0x24]
        push    ecx
        call    FUN_0064ff50
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        jne    L_0ad4
        lea    edx, [esp + 0x20]
        push    0x80da24
        push    edx
        call    FUN_00650120
        add    esp, 8
        mov    esi, eax
L_0ad4:
        mov    eax, dword ptr [g_0080d9bc]
        push    eax
        mov    dword ptr [esi + 0x18], 1
        mov    dword ptr [esi + 0x40], 0
        call    FUN_0064fe70
        mov    ecx, dword ptr [edi + 0x18]
        add    esp, 4
        add    edi, 0x1c
        dec    ebx
        mov    dword ptr [esi + 0x3c], eax
        mov    dword ptr [esi + 0x1c], ecx
        jne    L_0a61
        mov    esi, dword ptr [esp + 0x18]
        mov    edi, dword ptr [esp + 0x1c]
L_0b0b:
        inc    esi
        cmp    esi, 0x12
        mov    dword ptr [esp + 0x18], esi
        jl    L_0997
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x110
        ret    
        // jump-table data @ 0x00600B24 (0 relocated pointers)
    }
}
