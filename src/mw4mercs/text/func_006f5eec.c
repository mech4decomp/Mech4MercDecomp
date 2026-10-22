/*
 * FUN_006f5eec (extent 0x6f5eec-0x6f5fa7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006f5110(void);
extern void __cdecl FUN_006f6db0(void);
extern void __cdecl FUN_006f7940(void);

__declspec(naked) void FUN_006f5eec(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, ecx
        mov    ecx, dword ptr [ebx + 0x2c]
        push    ebp
        inc    ecx
        xor    ebp, ebp
        cmp    word ptr [ebx + 4], bp
        push    esi
        push    edi
        mov    dword ptr [ebx + 0x2c], ecx
        jbe    L_5f44
L_5f05:
        mov    ecx, dword ptr [ebx + 8]
        mov    edi, ebp
        and    edi, 0xffff
        shl    edi, 4
        mov    esi, dword ptr [edi + ecx]
        add    edi, ecx
        cmp    esi, edi
        je    L_5f3d
L_5f1c:
        test    dword ptr [esi + 0xc], 0x80000000
        jne    L_5f37
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esi + 8]
        push    eax
        push    esi
        push    ecx
        call    dword ptr [esp + 0x20]
        test    al, al
        je    L_5f44
L_5f37:
        mov    esi, dword ptr [esi]
        cmp    esi, edi
        jne    L_5f1c
L_5f3d:
        inc    ebp
        cmp    bp, word ptr [ebx + 4]
        jb    L_5f05
L_5f44:
        mov    eax, dword ptr [ebx + 0x2c]
        pop    edi
        pop    esi
        dec    eax
        pop    ebp
        mov    dword ptr [ebx + 0x2c], eax
        pop    ebx
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
        push    esi
        mov    esi, ecx
        call    FUN_006f5110
        push    0x44
        mov    dword ptr [esi], 0x79fc38
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_5f94
        mov    ecx, eax
        call    FUN_006f6db0
        mov    ecx, dword ptr [esi + 0x3c]
        push    eax
        call    FUN_006f7940
        mov    byte ptr [esi + 0x40], 0
        mov    eax, esi
        pop    esi
        ret    
L_5f94:
        mov    ecx, dword ptr [esi + 0x3c]
        xor    eax, eax
        push    eax
        call    FUN_006f7940
        mov    byte ptr [esi + 0x40], 0
        mov    eax, esi
        pop    esi
        ret    
    }
}
