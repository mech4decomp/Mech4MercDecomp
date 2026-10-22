/*
 * FUN_00735be0 (extent 0x735be0-0x735e2c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0087c2a0;
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_00735cc0(void);
extern void __cdecl FUN_00742e00(void);
extern void __cdecl FUN_00743610(void);
extern void __cdecl FUN_00743790(void);
extern void __cdecl FUN_00747a50(void);
extern void __cdecl FUN_00747ac0(void);
extern void __cdecl FUN_00748350(void);
extern void __cdecl FUN_0075b9c0(void);
extern void __cdecl FUN_0075c060(void);

__declspec(naked) void FUN_00735be0(void)
{
    __asm {
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 8]
        cmp    eax, dword ptr [esi + 0xc]
        jne    L_5bf1
        or    byte ptr [esi + 4], 0x10
        pop    esi
        ret    
L_5bf1:
        push    ebp
        push    edi
        xor    ebp, ebp
L_5bf5:
        test    byte ptr [esi + 6], 1
        je    L_5c02
        mov    eax, 1
        jmp    L_5c14
L_5c02:
        xor    ecx, ecx
        mov    cx, word ptr [esi + 2]
        xor    edx, edx
        mov    dx, word ptr [esi]
        push    ecx
        push    edx
        call    FUN_00747ac0
L_5c14:
        cmp    ebp, eax
        jge    L_5c61
        xor    eax, eax
        mov    ax, word ptr [esi]
        mov    cx, bp
        shr    ax, cl
        mov    ecx, esi
        push    eax
        push    1
        call    FUN_0075b9c0
        xor    edx, edx
        mov    dx, word ptr [esi]
        mov    cx, bp
        shr    dx, cl
        mov    edi, eax
        mov    eax, dword ptr [esi + 0xc]
        mov    ecx, esi
        push    edx
        push    eax
        call    FUN_00747a50
        push    edi
        push    eax
        mov    ecx, esi
        call    FUN_00735cc0
        mov    eax, dword ptr [g_0087c2a0]
        test    eax, eax
        je    L_5c94
        test    byte ptr [esi + 7], 8
        je    L_5c61
        inc    ebp
        jmp    L_5bf5
L_5c61:
        mov    eax, dword ptr [g_0087c2a0]
        test    eax, eax
        je    L_5c94
        test    byte ptr [esi + 6], 1
        jne    L_5c94
        xor    ecx, ecx
        mov    cx, word ptr [esi + 2]
        xor    edx, edx
        mov    dx, word ptr [esi]
        push    ecx
        push    edx
        call    FUN_00747ac0
        cmp    eax, 1
        jle    L_5c94
        test    byte ptr [esi + 7], 8
        jne    L_5c94
        mov    ecx, esi
        call    FUN_00748350
L_5c94:
        mov    eax, dword ptr [esi + 8]
        or    byte ptr [esi + 4], 0x10
        test    eax, eax
        pop    edi
        pop    ebp
        je    L_5cb5
        mov    eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jne    L_5cae
        test    byte ptr [esi + 6], 8
        je    L_5cb5
L_5cae:
        mov    ecx, esi
        call    FUN_0075c060
L_5cb5:
        pop    esi
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
        sub    esp, 0x7c
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x8c]
        push    0
        push    0x811
        lea    eax, [esp + 0x10]
        push    eax
        push    0
        push    edi
        mov    esi, ecx
        mov    dword ptr [esp + 0x1c], 0x7c
        call    FUN_007353f0
        xor    eax, eax
        mov    ax, word ptr [esi + 4]
        mov    ecx, eax
        and    ecx, 0x1c00
        cmp    cx, 0xc00
        jne    L_5d61
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        mov    edx, dword ptr [esp + 0x18]
        push    edx
        mov    edx, dword ptr [esp + 0x20]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 6]
        push    0
        push    0
        shr    eax, 0xa
        and    eax, 7
        push    ecx
        push    edx
        mov    edx, dword ptr [esp + 0x44]
        push    edx
        mov    edx, dword ptr [esp + 0xa4]
        push    edx
        mov    edx, ecx
        shr    edx, 7
        and    edx, 1
        shr    ecx, 0xe
        lea    eax, [edx + eax*2]
        lea    eax, [ecx + eax*4]
        mov    ecx, eax
        shl    ecx, 5
        sub    ecx, eax
        mov    edx, dword ptr [ecx*4 + 0x8b7b24]
        push    edx
        call    FUN_00743610
        push    0
        push    edi
        call    FUN_00735440
        pop    edi
        pop    esi
        add    esp, 0x7c
        ret    8
L_5d61:
        cmp    cx, 0x1000
        jne    L_5dca
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        mov    edx, dword ptr [esp + 0x18]
        push    edx
        mov    edx, dword ptr [esp + 0x20]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 6]
        push    0
        push    0
        shr    eax, 0xa
        and    eax, 7
        push    ecx
        push    edx
        mov    edx, dword ptr [esp + 0x44]
        push    edx
        mov    edx, dword ptr [esp + 0xa4]
        push    edx
        mov    edx, ecx
        shr    edx, 7
        and    edx, 1
        shr    ecx, 0xe
        lea    eax, [edx + eax*2]
        lea    eax, [ecx + eax*4]
        mov    ecx, eax
        shl    ecx, 5
        sub    ecx, eax
        mov    edx, dword ptr [ecx*4 + 0x8b7b24]
        push    edx
        call    FUN_00743790
        push    0
        push    edi
        call    FUN_00735440
        pop    edi
        pop    esi
        add    esp, 0x7c
        ret    8
L_5dca:
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        mov    edx, dword ptr [esp + 0x18]
        push    edx
        mov    edx, dword ptr [esp + 0x20]
        xor    ecx, ecx
        mov    cx, word ptr [esi + 6]
        push    0
        push    0
        shr    eax, 0xa
        and    eax, 7
        push    ecx
        push    edx
        mov    edx, dword ptr [esp + 0x44]
        push    edx
        mov    edx, dword ptr [esp + 0xa4]
        push    edx
        mov    edx, ecx
        shr    edx, 7
        and    edx, 1
        shr    ecx, 0xe
        lea    eax, [edx + eax*2]
        lea    eax, [ecx + eax*4]
        mov    ecx, eax
        shl    ecx, 5
        sub    ecx, eax
        mov    edx, dword ptr [ecx*4 + 0x8b7b24]
        push    edx
        call    FUN_00742e00
        push    0
        push    edi
        call    FUN_00735440
        pop    edi
        pop    esi
        add    esp, 0x7c
        ret    8
    }
}
