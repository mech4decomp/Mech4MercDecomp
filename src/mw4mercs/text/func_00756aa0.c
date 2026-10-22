/*
 * FUN_00756aa0 (extent 0x756aa0-0x756c32) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_00856b94;
extern int    g_008aadc8;
extern void __cdecl FUN_006f4940(void);
extern void __cdecl FUN_00724a00(void);
extern void __cdecl FUN_00725080(void);
extern void __cdecl FUN_007584d0(void);
extern void __cdecl FUN_007586b0(void);

__declspec(naked) void FUN_00756aa0(void)
{
    __asm {
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [esi + 0x40], eax
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        mov    dword ptr [esi + 0x44], ecx
        mov    dword ptr [esi + 0x48], edx
        je    L_6adf
        push    1
        mov    ecx, edx
        mov    edx, dword ptr [esp + 0x10]
        push    ecx
        mov    ecx, dword ptr [esp + 0x10]
        push    edx
        push    ecx
        push    eax
        call    FUN_007584d0
L_6adf:
        push    0x858ac8
        mov    byte ptr [esi + 0x75], 1
        call    dword ptr [g_0076b100]
        pop    esi
        ret    0xc
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
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        cmp    dword ptr [esi], 0
        je    L_6b34
        mov    eax, dword ptr [esi + 0x10]
        mov    ecx, dword ptr [g_008aadc8]
        push    1
        neg    eax
        push    eax
        push    ecx
        mov    dword ptr [esi + 4], 0
        mov    dword ptr [esi], 0
        call    FUN_006f4940
L_6b34:
        mov    eax, dword ptr [g_00856b94]
        test    eax, eax
        jne    L_6b4c
        push    0x858ac8
        call    dword ptr [g_0076b100]
        pop    esi
        ret    4
L_6b4c:
        mov    eax, dword ptr [esi + 0x70]
        test    eax, eax
        jne    L_6b62
        push    0x858ac8
        call    dword ptr [g_0076b100]
        pop    esi
        ret    4
L_6b62:
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        push    eax
        push    edi
        mov    dword ptr [esi + 0x70], 0
        call    FUN_00724a00
        mov    al, byte ptr [esi + 0x80]
        test    al, al
        je    L_6b9b
        mov    cl, byte ptr [esi + 0x83]
        test    cl, cl
        jne    L_6b97
        mov    cl, byte ptr [esi + 0x82]
        test    cl, cl
        je    L_6b97
        push    1
        jmp    L_6bdb
L_6b97:
        test    al, al
        jne    L_6bb3
L_6b9b:
        mov    al, byte ptr [esi + 0x83]
        test    al, al
        jne    L_6bb3
        mov    al, byte ptr [esi + 0x82]
        test    al, al
        je    L_6bb3
        push    0
        jmp    L_6bdb
L_6bb3:
        mov    al, byte ptr [esi + 0x82]
        test    al, al
        jne    L_6be1
        mov    cl, byte ptr [esi + 0x83]
        test    cl, cl
        jne    L_6bcb
        push    4
        jmp    L_6bdb
L_6bcb:
        test    al, al
        jne    L_6be1
        mov    al, byte ptr [esi + 0x83]
        test    al, al
        je    L_6be1
        push    2
L_6bdb:
        push    edi
        call    FUN_00725080
L_6be1:
        push    0x858ac8
        call    dword ptr [g_0076b100]
        pop    edi
        pop    esi
        ret    4
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
        push    esi
        push    0x858ac8
        mov    esi, ecx
        call    dword ptr [g_0076b110]
        mov    eax, dword ptr [esi + 4]
        test    eax, eax
        je    L_6c25
        push    1
        lea    ecx, [esi + 0x1c]
        push    ecx
        push    eax
        call    FUN_007586b0
        mov    byte ptr [esi + 0x75], 1
L_6c25:
        push    0x858ac8
        call    dword ptr [g_0076b100]
        pop    esi
        ret    
    }
}
