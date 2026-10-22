/*
 * FUN_005e78bc (extent 0x5e78bc-0x5e79a7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2440;
extern int    g_007f2568;
extern int    g_007f268c;
extern int    g_007f26a0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005e7c10(void);
extern void __cdecl FUN_0068d600(void);

__declspec(naked) void FUN_005e78bc(void)
{
    __asm {
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
        push    ebx
        mov    ebx, ecx
        mov    eax, dword ptr [ebx + 0x10]
        shr    eax, 0x13
        test    al, 1
        push    esi
        push    edi
        jne    L_7919
        mov    eax, dword ptr [g_007f2440]
        mov    edi, dword ptr [eax + 0x10]
        mov    esi, dword ptr [eax + 0x14]
        sub    esi, edi
        sar    esi, 2
        xor    edi, edi
        test    esi, esi
        jle    L_7919
L_78f5:
        mov    ecx, dword ptr [eax + 0x10]
        mov    ecx, dword ptr [ecx + edi*4]
        test    ecx, ecx
        je    L_7914
        mov    edx, dword ptr [ecx + 0xa4]
        cmp    edx, dword ptr [ebx + 0x30]
        jne    L_7914
        call    FUN_0068d600
        mov    eax, dword ptr [g_007f2440]
L_7914:
        inc    edi
        cmp    edi, esi
        jl    L_78f5
L_7919:
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov    ecx, ebx
        call    FUN_005e7c10
        pop    edi
        pop    esi
        pop    ebx
        ret    8
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_799b
        mov    eax, dword ptr [g_007f26a0]
        mov    ecx, dword ptr [g_007f268c]
        push    0x502c60
        push    0x5028b0
        push    0x62efa0
        push    0x62ec80
        push    0x62e8e0
        push    eax
        push    0x62df30
        push    0x5e79e0
        push    0
        push    0
        push    ecx
        push    0x789494
        push    0x42d
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x6039e0
        mov    dword ptr [g_007f2568], esi
        pop    esi
        ret    
L_799b:
        mov    dword ptr [g_007f2568], 0
        pop    esi
        ret    
    }
}
