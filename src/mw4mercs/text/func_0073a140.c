/*
 * FUN_0073a140 (extent 0x73a140-0x73a2db) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0ec;
extern int    g_0076b0f4;
extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_0076b168;
extern int    g_00856a88;
extern int    g_00856b94;
extern int    g_00856b9c;
extern char   g_00857f31;
extern char   g_00858990;
extern int    g_008aadc0;
extern int    g_008aadc4;
extern void __cdecl FUN_00749c30(void);
extern void __cdecl FUN_007563c0(void);
extern void __cdecl FUN_00756940(void);
extern void __cdecl FUN_00757c70(void);

__declspec(naked) void FUN_0073a140(void)
{
    __asm {
        dec    dword ptr [g_00856b9c]
        jne    L_a186
        mov    eax, dword ptr [g_008aadc4]
        push    esi
        push    eax
        call    dword ptr [g_0076b168]
        mov    ecx, dword ptr [g_008aadc0]
        push    -1
        push    ecx
        call    dword ptr [g_0076b0f4]
        mov    edx, dword ptr [g_008aadc0]
        mov    esi, dword ptr [g_0076b0ec]
        push    edx
        call    esi
        mov    eax, dword ptr [g_008aadc4]
        push    eax
        call    esi
        mov    dword ptr [g_008aadc0], 0
        pop    esi
L_a186:
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
        mov    eax, dword ptr [g_008aadc4]
        push    ebp
        mov    ebp, dword ptr [g_0076b0f4]
        push    0x32
        push    eax
        call    ebp
        cmp    eax, 0x102
        jne    L_a245
        push    ebx
        mov    ebx, dword ptr [g_0076b110]
        push    esi
        push    edi
L_a1b5:
        mov    eax, dword ptr [g_00856b94]
        test    eax, eax
        je    L_a226
        push    0x858ac8
        call    ebx
        mov    eax, dword ptr [g_00856a88]
        xor    esi, esi
        test    eax, eax
        jle    L_a21b
        mov    edi, 0x856a8c
L_a1d5:
        mov    ecx, dword ptr [edi]
        test    ecx, ecx
        je    L_a20e
        cmp    dword ptr [ecx], 0
        je    L_a20e
        mov    eax, dword ptr [ecx + 0x9c]
        cmp    eax, 3
        je    L_a1f5
        cmp    eax, 4
        je    L_a1f5
        cmp    eax, 6
        jne    L_a20e
L_a1f5:
        mov    al, byte ptr [ecx + 0x82]
        test    al, al
        je    L_a20e
        mov    al, byte ptr [ecx + 0x83]
        test    al, al
        jne    L_a20e
        call    FUN_007563c0
L_a20e:
        mov    eax, dword ptr [g_00856a88]
        inc    esi
        add    edi, 4
        cmp    esi, eax
        jl    L_a1d5
L_a21b:
        push    0x858ac8
        call    dword ptr [g_0076b100]
L_a226:
        mov    ecx, dword ptr [g_008aadc4]
        push    0x32
        push    ecx
        call    ebp
        cmp    eax, 0x102
        je    L_a1b5
        pop    edi
        pop    esi
        pop    ebx
        xor    eax, eax
        pop    ebp
        ret    4
L_a245:
        xor    eax, eax
        pop    ebp
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_00858990]
        push    ebx
        mov    bl, 1
        cmp    al, bl
        je    L_a2d9
        mov    eax, dword ptr [g_00856b94]
        test    eax, eax
        je    L_a2d9
        mov    eax, dword ptr [g_00856a88]
        push    edi
        xor    edi, edi
        test    eax, eax
        jle    L_a2d2
        push    esi
        mov    esi, 0x856a8c
L_a277:
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        je    L_a2c4
        cmp    dword ptr [ecx], 0
        je    L_a29a
        call    FUN_00756940
        test    al, al
        je    L_a29a
        mov    eax, dword ptr [esi]
        mov    byte ptr [eax + 0x76], bl
        mov    eax, dword ptr [eax]
        push    eax
        call    FUN_00757c70
        jmp    L_a2c4
L_a29a:
        mov    ecx, dword ptr [esi]
        cmp    dword ptr [ecx + 0x9c], 4
        jne    L_a2c4
        call    FUN_00756940
        test    al, al
        je    L_a2c4
        mov    eax, dword ptr [esi]
        mov    byte ptr [eax + 0x76], bl
        mov    ecx, dword ptr [eax + 0x70]
        mov    edx, dword ptr [ecx + 0xec]
        push    2
        push    edx
        call    FUN_00749c30
L_a2c4:
        mov    eax, dword ptr [g_00856a88]
        inc    edi
        add    esi, 4
        cmp    edi, eax
        jl    L_a277
        pop    esi
L_a2d2:
        mov    byte ptr [g_00857f31], bl
        pop    edi
L_a2d9:
        pop    ebx
        ret    
    }
}
