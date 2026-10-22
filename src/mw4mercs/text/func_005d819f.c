/*
 * FUN_005d819f (extent 0x5d819f-0x5d834c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2464;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005d6b50(void);
extern void __cdecl FUN_005d8270(void);
extern void __cdecl FUN_005d83f0(void);
extern void __cdecl FUN_005da270(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005d819f(void)
{
    __asm {
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
        nop    
        nop    
        nop    
        mov    eax, dword ptr [ecx + 0x10]
        mov    ecx, dword ptr [esp + 4]
        push    esi
        lea    esi, [eax + ecx*4]
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_82ad
        mov    edx, eax
        mov    eax, dword ptr [edx + 4]
        test    eax, eax
        je    L_8297
        mov    eax, edx
        mov    ecx, edx
        mov    ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_005d6b50
L_8297:
        mov    edx, dword ptr [esi]
        mov    eax, dword ptr [edx + 8]
        test    eax, eax
        je    L_82ad
        mov    eax, edx
        mov    ecx, edx
        mov    ecx, dword ptr [ecx + 8]
        push    eax
        call    FUN_005d6b50
L_82ad:
        mov    eax, dword ptr [esi]
        test    eax, eax
        je    L_82bc
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_82bc:
        mov    dword ptr [esi], 0
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
        mov    eax, dword ptr [g_007f2464]
        push    esi
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [edi + 0x20]
        mov    edx, dword ptr [edi + 0x1c]
        lea    ecx, [edi + 0x1c]
        sub    eax, edx
        sar    eax, 2
        xor    esi, esi
        test    eax, eax
        jle    L_8300
L_82f3:
        cmp    dword ptr [edx], 0
        je    L_8300
        inc    esi
        add    edx, 4
        cmp    esi, eax
        jl    L_82f3
L_8300:
        cmp    esi, eax
        jne    L_832d
        mov    eax, dword ptr [ecx + 4]
        cmp    eax, dword ptr [ecx + 8]
        je    L_831e
        test    eax, eax
        je    L_8316
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [eax], edx
L_8316:
        add    eax, 4
        mov    dword ptr [ecx + 4], eax
        jmp    L_8336
L_831e:
        push    1
        lea    edx, [esp + 0x10]
        push    edx
        push    eax
        call    FUN_005da270
        jmp    L_8336
L_832d:
        mov    eax, dword ptr [ecx]
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + esi*4], ecx
L_8336:
        mov    edx, dword ptr [esp + 0xc]
        mov    dword ptr [edx], esi
        mov    byte ptr [edi + 0x34], 1
        call    FUN_006f49a0
        pop    edi
        mov    eax, esi
        pop    esi
        ret    4
    }
}
