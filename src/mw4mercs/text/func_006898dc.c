/*
 * FUN_006898dc (extent 0x6898dc-0x689a3e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_006b0460(void);
extern void __cdecl FUN_006b0520(void);
extern void __cdecl FUN_006b0710(void);

__declspec(naked) void FUN_006898dc(void)
{
    __asm {
        not    byte ptr [esi - 0x6902ff98]
        push    0x68970400
        add    byte ptr [ebx], cl
        xchg    edi, eax
        push    0x68971200
        add    byte ptr [ecx], bl
        xchg    edi, eax
        push    0x68972000
        add    byte ptr [esi], ch
        xchg    edi, eax
        push    0x68972e00
        add    byte ptr [edi], ah
        xchg    edi, eax
        push    0x68982900
        add    byte ptr [eax], dh
        cwde    
        push    0x68983700
        add    byte ptr [esi], bh
        cwde    
        push    0x68984500
        add    byte ptr [eax + ebx*4 + 0x68], cl
        add    byte ptr [ebx - 0x68], dl
        push    0x68986100
        add    byte ptr [ecx - 0x68], ah
        push    0x68985a00
        add    byte ptr [eax + 0x53909090], dl
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    0xc
        lea    ecx, [edi + 0x24]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    ebx, dword ptr [edi + 0x20]
        test    ebx, ebx
        je    L_997b
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    byte ptr [esp + 0x18], 1
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        add    ebx, 0x30
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        mov    ecx, edi
        call    FUN_006b0460
        pop    edi
        pop    esi
        pop    ebx
        ret    4
L_997b:
        mov    eax, dword ptr [esi]
        push    1
        lea    ecx, [esp + 0x14]
        push    ecx
        mov    ecx, esi
        mov    byte ptr [esp + 0x18], 0
        call    dword ptr [eax + 0x24]
        push    esi
        mov    ecx, edi
        call    FUN_006b0460
        pop    edi
        pop    esi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        push    0xc
        lea    ecx, [edi + 0x24]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x20]
        mov    edx, dword ptr [esi]
        push    1
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    al, byte ptr [esp + 0x10]
        test    al, al
        je    L_99fe
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0xc]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [g_007dab44]
        mov    eax, dword ptr [ecx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax + 0x10]
        push    edx
        xor    ecx, 0x85739531
        call    FUN_004fcb30
        mov    dword ptr [edi + 0x20], eax
L_99fe:
        push    esi
        mov    ecx, edi
        call    FUN_006b0520
        pop    edi
        pop    esi
        pop    ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        push    esi
        mov    esi, ecx
        mov    ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_006b0710
        mov    dword ptr [esi], 0x798d50
        mov    dword ptr [esi + 0x20], 0
        mov    dword ptr [esi + 8], 4
        mov    eax, esi
        pop    esi
        ret    8
    }
}
