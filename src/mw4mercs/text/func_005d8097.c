/*
 * FUN_005d8097 (extent 0x5d8097-0x5d826d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_005d8270(void);
extern void __cdecl FUN_005d83f0(void);
extern void __cdecl FUN_005da5a0(void);

__declspec(naked) void FUN_005d8097(void)
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
        sub    esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x14]
        mov    esi, dword ptr [edi + 0x10]
        sub    eax, esi
        sar    eax, 2
        test    eax, eax
        mov    dword ptr [esp + 0x14], edi
        jle    L_80ec
        mov    ebx, eax
L_80cd:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_80e0
        test    eax, eax
        je    L_80e0
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_80e0:
        mov    dword ptr [esi], 0
        add    esi, 4
        dec    ebx
        jne    L_80cd
L_80ec:
        mov    eax, dword ptr [edi + 0x20]
        mov    esi, dword ptr [edi + 0x1c]
        sub    eax, esi
        sar    eax, 2
        test    eax, eax
        jle    L_8177
        push    ebp
        mov    ebp, esi
        mov    dword ptr [esp + 0x14], eax
L_8102:
        mov    eax, dword ptr [ebp]
        test    eax, eax
        je    L_8168
        mov    ecx, dword ptr [esp + 0x18]
        push    0
        mov    esi, eax
        mov    edx, dword ptr [esi + 0x14]
        mov    eax, dword ptr [esi + 0x18]
        push    ecx
        push    edx
        push    eax
        push    eax
        call    FUN_005da5a0
        mov    ebx, dword ptr [esi + 0x20]
        mov    dword ptr [esi + 0x18], eax
        mov    edi, dword ptr [esi + 0x24]
        mov    ecx, edi
        sub    ecx, edi
        mov    eax, 0x2aaaaaab
        imul    ecx
        sar    edx, 1
        mov    eax, edx
        shr    eax, 0x1f
        add    edx, eax
        add    esp, 0x14
        test    edx, edx
        jle    L_8161
        mov    dword ptr [esp + 0x10], edx
L_8148:
        push    edi
        mov    ecx, ebx
        call    FUN_0040ccd0
        mov    eax, dword ptr [esp + 0x10]
        add    edi, 0xc
        add    ebx, 0xc
        dec    eax
        mov    dword ptr [esp + 0x10], eax
        jne    L_8148
L_8161:
        mov    edi, dword ptr [esp + 0x18]
        mov    dword ptr [esi + 0x24], ebx
L_8168:
        mov    eax, dword ptr [esp + 0x14]
        add    ebp, 4
        dec    eax
        mov    dword ptr [esp + 0x14], eax
        jne    L_8102
        pop    ebp
L_8177:
        mov    eax, dword ptr [edi + 0x14]
        mov    edx, dword ptr [edi + 0x10]
        mov    ecx, eax
        sub    ecx, eax
        sar    ecx, 2
        test    ecx, ecx
        jle    L_8195
L_8188:
        mov    esi, dword ptr [eax]
        mov    dword ptr [edx], esi
        add    eax, 4
        add    edx, 4
        dec    ecx
        jne    L_8188
L_8195:
        mov    dword ptr [edi + 0x14], edx
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xc
        ret    
        nop    
        push    ecx
        push    ebx
        push    ebp
        mov    ebp, dword ptr [esp + 0x14]
        mov    ebx, ecx
        xor    eax, eax
        lea    ecx, [ebp - 1]
        test    ecx, ecx
        mov    dword ptr [esp + 8], eax
        jle    L_8213
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x18]
        mov    dword ptr [esp + 0x18], edi
L_81c0:
        cmp    eax, ebp
        jge    L_81fe
        mov    esi, dword ptr [edi]
        shl    esi, 2
        sub    ebp, eax
L_81cb:
        mov    eax, dword ptr [ebx + 0x1c]
        mov    ecx, dword ptr [edi]
        mov    edx, dword ptr [eax + ecx*4]
        mov    eax, dword ptr [esi + eax]
        push    edx
        push    eax
        mov    ecx, ebx
        call    FUN_005d83f0
        cmp    eax, -1
        je    L_81ec
        push    eax
        mov    ecx, ebx
        call    FUN_005d8270
L_81ec:
        add    edi, 4
        dec    ebp
        jne    L_81cb
        mov    ebp, dword ptr [esp + 0x1c]
        mov    edi, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x10]
L_81fe:
        inc    eax
        add    edi, 4
        lea    ecx, [ebp - 1]
        cmp    eax, ecx
        mov    dword ptr [esp + 0x10], eax
        mov    dword ptr [esp + 0x18], edi
        jl    L_81c0
        pop    edi
        pop    esi
L_8213:
        pop    ebp
        pop    ebx
        pop    ecx
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    edx, dword ptr [ecx + 0x10]
        push    ebx
        mov    ebx, dword ptr [ecx + 0x14]
        cmp    edx, ebx
        push    ebp
        push    esi
        push    edi
        je    L_8266
        mov    ebp, dword ptr [esp + 0x18]
        mov    edi, dword ptr [esp + 0x14]
L_8236:
        mov    eax, dword ptr [edx]
        mov    esi, dword ptr [eax + 0xc]
        cmp    esi, edi
        mov    eax, dword ptr [eax + 0x10]
        jne    L_8246
        cmp    eax, ebp
        je    L_825c
L_8246:
        cmp    esi, ebp
        jne    L_824e
        cmp    eax, edi
        je    L_825c
L_824e:
        add    edx, 4
        cmp    edx, ebx
        jne    L_8236
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
L_825c:
        mov    eax, dword ptr [edx]
        mov    edx, dword ptr [eax]
        push    edx
        call    FUN_005d8270
L_8266:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
