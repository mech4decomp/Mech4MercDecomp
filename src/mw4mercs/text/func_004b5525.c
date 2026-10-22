/*
 * FUN_004b5525 (extent 0x4b5525-0x4b56e3) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007daa00;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004b4d70(void);
extern void __cdecl FUN_004bf380(void);
extern void __cdecl FUN_004c6960(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004b5525(void)
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
        mov    eax, dword ptr [g_007daa00]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x158
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_556e
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004b4d70
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_556e:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x10
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x1c]
        push    edi
        mov    edi, ecx
        push    esi
        call    FUN_004c6960
        mov    eax, dword ptr [edi + 0x148]
        mov    edx, dword ptr [esi]
        mov    dword ptr [esp + 0x20], eax
        push    2
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        xor    ebp, ebp
        cmp    word ptr [esp + 0x20], bp
        jbe    L_567e
        mov    ecx, dword ptr [edi + 0x150]
        mov    edx, dword ptr [edi + 0x144]
        push    ebx
        mov    dword ptr [esp + 0x14], ecx
        mov    dword ptr [esp + 0x1c], edx
L_55cc:
        mov    ecx, dword ptr [esp + 0x14]
        mov    edx, dword ptr [esi]
        mov    ebx, ebp
        and    ebx, 0xffff
        mov    eax, ebx
        shl    eax, 4
        lea    edi, [eax + ecx]
        push    4
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [edi + 4]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [edi + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        add    edi, 0xc
        push    edi
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0x1c]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], 0
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [esi + 0x10]
        mov    edx, dword ptr [esp + 0x1c]
        mov    edi, dword ptr [esi + 0x14]
        mov    ebx, dword ptr [edx + ebx*4]
        sub    edi, eax
        mov    eax, dword ptr [ebx]
        push    esi
        mov    ecx, ebx
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 0x14]
        mov    edx, dword ptr [esi]
        sub    eax, ecx
        sub    eax, edi
        mov    dword ptr [esp + 0x10], eax
        add    eax, 4
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x1c]
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esi]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
        inc    ebp
        cmp    bp, word ptr [esp + 0x24]
        jb    L_55cc
        pop    ebx
L_567e:
        pop    edi
        pop    esi
        pop    ebp
        add    esp, 0x10
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
        mov    eax, dword ptr [esp + 4]
        push    esi
        mov    esi, dword ptr [esp + 0x10]
        push    edi
        mov    edi, dword ptr [ecx + 0x150]
        mov    edx, eax
        and    edx, 0xffff
        shl    edx, 4
        add    edx, edi
        mov    edi, dword ptr [esi]
        mov    dword ptr [edx], edi
        mov    edi, dword ptr [esi + 4]
        mov    dword ptr [edx + 4], edi
        mov    edi, dword ptr [esi + 8]
        mov    esi, dword ptr [esi + 0xc]
        mov    dword ptr [edx + 8], edi
        mov    dword ptr [edx + 0xc], esi
        mov    edx, dword ptr [esp + 0x10]
        push    edx
        push    eax
        call    FUN_004bf380
        pop    edi
        pop    esi
        ret    0xc
    }
}
