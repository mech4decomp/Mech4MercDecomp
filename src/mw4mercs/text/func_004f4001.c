/*
 * FUN_004f4001 (extent 0x4f4001-0x4f4172) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dc130;
extern int    g_007dc890;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d2000(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_004f4180(void);
extern void __cdecl FUN_004f4540(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004f4001(void)
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dc130]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x1b0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_4052
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    0
        push    ecx
        mov    ecx, dword ptr [g_007dc890]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004f4180
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_4052:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        sub    esp, 0xd8
        push    esi
        mov    esi, dword ptr [ebp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    0x7c
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        mov    ecx, dword ptr [ebp + 0xc]
        push    ecx
        push    esi
        mov    ecx, edi
        call    FUN_004f4540
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 4]
        push    0
        mov    esi, eax
        push    0
        lea    ecx, [ebp - 0xd8]
        mov    dword ptr [esi], 0x7c
        call    FUN_004d2000
        push    0
        lea    ecx, [ebp - 0x28]
        call    FUN_0041ee70
        mov    ecx, dword ptr [edi + 0x170]
        mov    eax, dword ptr [ecx]
        push    0
        lea    edx, [ebp - 0x28]
        push    edx
        call    dword ptr [eax + 0xc]
        push    0
        lea    eax, [ebp - 0x28]
        push    eax
        lea    ecx, [ebp - 0xd8]
        call    FUN_004d2680
        push    0x7723bc
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_40e1
        int 3    
L_40e1:
        mov    cx, word ptr [ebp - 0x98]
        mov    word ptr [esi + 0x64], cx
        mov    dx, word ptr [ebp - 0x96]
        push    0
        push    0
        lea    ecx, [ebp - 0x94]
        mov    word ptr [esi + 0x66], dx
        call    FUN_004d2000
        push    0
        lea    ecx, [ebp - 0x50]
        call    FUN_0041ee70
        mov    ecx, dword ptr [edi + 0x178]
        mov    eax, dword ptr [ecx]
        push    0
        lea    edx, [ebp - 0x50]
        push    edx
        call    dword ptr [eax + 0xc]
        push    0
        lea    eax, [ebp - 0x50]
        push    eax
        lea    ecx, [ebp - 0x94]
        call    FUN_004d2680
        mov    cx, word ptr [ebp - 0x54]
        mov    word ptr [esi + 0x68], cx
        mov    dx, word ptr [ebp - 0x52]
        lea    ecx, [ebp - 0x50]
        mov    word ptr [esi + 0x6a], dx
        call    FUN_0041ef60
        lea    ecx, [ebp - 0x94]
        call    FUN_004d21c0
        lea    ecx, [ebp - 0x28]
        call    FUN_0041ef60
        lea    ecx, [ebp - 0xd8]
        call    FUN_004d21c0
        pop    edi
        mov    eax, esi
        pop    esi
        mov    esp, ebp
        pop    ebp
        ret    8
    }
}
