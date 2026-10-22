/*
 * FUN_0073a0e0 (extent 0x73a0e0-0x73a24b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0ec;
extern int    g_0076b0f4;
extern int    g_0076b100;
extern int    g_0076b110;
extern int    g_0076b168;
extern int    g_0076b16c;
extern int    g_0076b218;
extern int    g_00856a88;
extern int    g_00856b94;
extern int    g_00856b9c;
extern int    g_008aadc0;
extern int    g_008aadc4;
extern void __cdecl FUN_00737300(void);
extern void __cdecl FUN_007563c0(void);

__declspec(naked) void FUN_0073a0e0(void)
{
    __asm {
        push    ecx
        mov    eax, dword ptr [g_00856b9c]
        inc    eax
        cmp    eax, 1
        mov    dword ptr [g_00856b9c], eax
        jne    L_a12f
        push    0
        push    0
        push    eax
        push    0
        call    dword ptr [g_0076b16c]
        mov    dword ptr [g_008aadc4], eax
        __emit 0x8D  // 141 eax, [esp] (explicit disp8=0)
__emit 0x44
__emit 0x24
__emit 0x00
        push    eax
        push    0
        push    0
        push    0x73a190
        push    0
        push    0
        call    dword ptr [g_0076b218]
        __emit 0x8B  // 139 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        push    0x7a716c
        push    ecx
        mov    dword ptr [g_008aadc0], eax
        call    FUN_00737300
L_a12f:
        pop    ecx
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
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
    }
}
