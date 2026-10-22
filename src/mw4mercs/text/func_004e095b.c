/*
 * FUN_004e095b (extent 0x4e095b-0x4e0b77) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc6d0;
extern int    g_007dc6d8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_004e0900(void);
extern void __cdecl FUN_004e0990(void);

__declspec(naked) void FUN_004e095b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        lea    eax, [eax + eax*4]
        lea    eax, [ecx + eax*8]
        mov    ecx, dword ptr [eax + 0x14]
        test    ecx, ecx
        mov    eax, dword ptr [eax + 0x1c]
        je    L_0979
        cmp    dword ptr [ecx], 0
        jne    L_098a
L_0979:
        test    eax, eax
        je    L_0982
        cmp    dword ptr [eax], 0
        jne    L_098a
L_0982:
        mov    eax, 1
        ret    4
L_098a:
        xor    eax, eax
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004e0900
        test    eax, eax
        je    L_09aa
        mov    edx, dword ptr [eax]
        mov    ecx, eax
        call    dword ptr [edx + 4]
        mov    al, 1
        ret    4
L_09aa:
        xor    al, al
        ret    4
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004e0990
        test    al, al
        je    L_09ce
L_09c2:
        push    edi
        mov    ecx, esi
        call    FUN_004e0990
        test    al, al
        jne    L_09c2
L_09ce:
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
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        jge    L_09f0
        mov    eax, dword ptr [ecx + 0x10]
        dec    eax
        test    eax, eax
        jl    L_0a35
L_09f0:
        push    ebx
        push    esi
        lea    edx, [eax + eax*4]
        push    edi
        lea    edi, [ecx + edx*8 + 0x14]
        lea    ebx, [eax + 1]
L_09fd:
        mov    esi, dword ptr [edi + 8]
L_0a00:
        test    esi, esi
        je    L_0a15
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_0a15
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        jmp    L_0a00
L_0a15:
        mov    esi, dword ptr [edi]
L_0a17:
        test    esi, esi
        je    L_0a2c
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_0a2c
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        jmp    L_0a17
L_0a2c:
        sub    edi, 0x28
        dec    ebx
        jne    L_09fd
        pop    edi
        pop    esi
        pop    ebx
L_0a35:
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        jge    L_0a50
        mov    eax, dword ptr [ecx + 0x10]
        dec    eax
        test    eax, eax
        jl    L_0ab3
L_0a50:
        push    ebx
        push    ebp
        push    esi
        lea    edx, [eax + eax*4]
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        lea    ebx, [ecx + edx*8 + 0x1c]
        lea    ebp, [eax + 1]
L_0a62:
        mov    esi, dword ptr [ebx - 8]
L_0a65:
        test    esi, esi
        je    L_0a86
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_0a86
        test    edi, edi
        je    L_0a7e
        mov    eax, dword ptr [ecx + 0x18]
        cmp    edi, dword ptr [eax + 4]
        jne    L_0a65
L_0a7e:
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        jmp    L_0a65
L_0a86:
        mov    esi, dword ptr [ebx]
L_0a88:
        test    esi, esi
        je    L_0aa9
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_0aa9
        test    edi, edi
        je    L_0aa1
        mov    eax, dword ptr [ecx + 0x18]
        cmp    edi, dword ptr [eax + 4]
        jne    L_0a88
L_0aa1:
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        jmp    L_0a88
L_0aa9:
        sub    ebx, 0x28
        dec    ebp
        jne    L_0a62
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
L_0ab3:
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
        push    ecx
        mov    eax, dword ptr [ecx + 0x10]
        dec    eax
__emit 0xC7  // mov dword ptr [esp+0], imm32
__emit 0x44
__emit 0x24
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x00
__emit 0x00
        js    L_0b21
        push    ebx
        push    ebp
        push    esi
        lea    edx, [eax + eax*4]
        push    edi
        lea    ebx, [ecx + edx*8 + 0x1c]
        lea    ebp, [eax + 1]
L_0add:
        mov    esi, dword ptr [ebx - 8]
L_0ae0:
        test    esi, esi
        je    L_0af4
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_0af4
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 8]
        jmp    L_0ae0
L_0af4:
        mov    esi, dword ptr [ebx]
        xor    edi, edi
L_0af8:
        test    esi, esi
        je    L_0b0d
        mov    ecx, dword ptr [esi]
        test    ecx, ecx
        mov    esi, dword ptr [esi + 4]
        je    L_0b0d
        mov    edx, dword ptr [ecx]
        inc    edi
        call    dword ptr [edx + 8]
        jmp    L_0af8
L_0b0d:
        mov    edx, dword ptr [esp + 0x10]
        add    edx, edi
        sub    ebx, 0x28
        dec    ebp
        mov    dword ptr [esp + 0x10], edx
        jne    L_0add
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
L_0b21:
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
        push    0x14
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_0b6c
        mov    ecx, dword ptr [g_007dc6d0]
        push    ecx
        push    0x773ae4
        push    0x1c5
        mov    ecx, eax
        call    FUN_004151c0
        mov    dword ptr [g_007dc6d8], eax
        ret    
L_0b6c:
        mov    dword ptr [g_007dc6d8], 0
        ret    
    }
}
