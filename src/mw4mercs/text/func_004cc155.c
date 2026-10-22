/*
 * FUN_004cc155 (extent 0x4cc155-0x4cc273) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8c10;
extern int    g_007db090;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_004cc1b0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004cc155(void)
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
        mov    edx, dword ptr [esp + 8]
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 8]
        ret    8
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        cmp    eax, dword ptr [g_007db090]
        jne    L_c19b
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [ecx]
        push    edx
        push    0
        call    dword ptr [eax + 0xc]
        ret    8
L_c19b:
        mov    edx, dword ptr [esp + 4]
        mov    eax, dword ptr [eax + 0x2c]
        push    edx
        push    eax
        call    FUN_004cc1b0
        ret    8
        nop    
        nop    
        nop    
        nop    
        push    0x7719c8
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_c1c2
        int 3    
L_c1c2:
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
        mov    eax, dword ptr [g_007b8c10]
        push    ebx
        push    ebp
        mov    ebx, ecx
        push    eax
        call    FUN_00415180
        mov    ebp, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 0x10]
        xor    eax, eax
        cmp    ebp, eax
        mov    dword ptr [ebx + 8], eax
        mov    dword ptr [ebx + 0xc], eax
        mov    dword ptr [ebx], 0x7719dc
        mov    dword ptr [ebx + 0x18], ecx
        mov    dword ptr [ebx + 0x14], edx
        mov    dword ptr [ebx + 0x10], eax
        je    L_c26c
        push    esi
        mov    esi, dword ptr [ebp + 0x10]
        push    edi
        mov    edi, dword ptr [ebp + 0x18]
        sub    edi, esi
        push    edi
        call    FUN_004084d0
        push    0x20
        mov    esi, eax
        call    FUN_004084d0
        add    esp, 8
        test    eax, eax
        je    L_c235
        push    0
        push    edi
        push    esi
        mov    ecx, eax
        call    FUN_0041e690
        mov    esi, eax
        jmp    L_c237
L_c235:
        xor    esi, esi
L_c237:
        mov    edx, dword ptr [esi]
        mov    eax, dword ptr [ebp]
        push    edi
        mov    ecx, ebp
        mov    dword ptr [ebx + 0x10], esi
        mov    dword ptr [esp + 0x18], edx
        call    dword ptr [eax + 4]
        mov    edx, dword ptr [esp + 0x18]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esi]
        push    0
        mov    ecx, esi
        call    dword ptr [eax + 0xc]
        pop    edi
        mov    dword ptr [esi + 8], 0xffffffec
        pop    esi
        pop    ebp
        mov    eax, ebx
        pop    ebx
        ret    0xc
L_c26c:
        pop    ebp
        mov    eax, ebx
        pop    ebx
        ret    0xc
    }
}
