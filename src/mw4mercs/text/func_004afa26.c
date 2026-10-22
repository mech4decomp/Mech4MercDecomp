/*
 * FUN_004afa26 (extent 0x4afa26-0x4afcd9) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da9f0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00421ec0(void);
extern void __cdecl FUN_004af340(void);
extern void __cdecl FUN_004c1950(void);
extern void __cdecl FUN_004c1a10(void);
extern void __cdecl FUN_004c6960(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004afa26(void)
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
        mov    eax, dword ptr [g_007da9f0]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x18c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_fa6e
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        push    ecx
        mov    ecx, eax
        call    FUN_004af340
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_fa6e:
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
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x20]
        mov    ebx, ecx
        push    esi
        call    FUN_004c6960
        mov    eax, dword ptr [ebx + 0x150]
        mov    edx, dword ptr [esi]
        mov    dword ptr [esp + 0x20], eax
        push    2
        lea    eax, [ebx + 0x144]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebx + 0x148]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    2
        lea    ecx, [esp + 0x24]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        push    esi
        call    FUN_00421ec0
        mov    eax, dword ptr [ebx + 0x188]
        add    esp, 4
        xor    ebp, ebp
        test    eax, eax
        mov    dword ptr [esp + 0x18], eax
        jbe    L_fbad
        mov    edx, dword ptr [ebx + 0x14c]
        mov    eax, dword ptr [ebx + 0x184]
        push    edi
        mov    dword ptr [esp + 0x10], edx
        xor    edi, edi
        mov    dword ptr [esp + 0x18], eax
L_fafe:
        mov    edx, dword ptr [esp + 0x10]
        mov    eax, dword ptr [esi]
        mov    ecx, edi
        shl    ecx, 4
        lea    ebx, [ecx + edx]
        push    4
        push    ebx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [ebx + 4]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [ebx + 8]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        add    ebx, 0xc
        push    ebx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x1c], 0
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [esi + 0x10]
        mov    edx, dword ptr [esp + 0x18]
        mov    ebx, dword ptr [esi + 0x14]
        mov    ecx, dword ptr [edx + edi*4]
        sub    ebx, eax
        mov    eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 4]
        mov    eax, dword ptr [esi + 0x14]
        mov    edx, dword ptr [esi]
        sub    eax, ebx
        sub    eax, dword ptr [esi + 0x10]
        mov    dword ptr [esp + 0x24], eax
        add    eax, 4
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x1c]
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0x28]
        push    ecx
        mov    ecx, esi
        call    dword ptr [eax + 0x24]
        mov    eax, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esi]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x18]
        mov    eax, dword ptr [esp + 0x1c]
        inc    ebp
        mov    edi, ebp
        and    edi, 0xffff
        cmp    edi, eax
        jb    L_fafe
        pop    edi
L_fbad:
        pop    esi
        pop    ebp
        pop    ebx
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
        push    esi
        mov    esi, ecx
        mov    ebx, dword ptr [esi + 0x188]
        push    edi
        xor    edi, edi
        test    ebx, ebx
        jle    L_fc16
L_fbe1:
        mov    eax, dword ptr [esi + 0x18]
        mov    edx, dword ptr [esi + 0x184]
        shr    eax, 5
        not    al
        lea    ecx, [esi + 0xb0]
        test    al, 1
        mov    eax, dword ptr [edx + edi*4]
        push    ecx
        push    eax
        je    L_fc05
        call    FUN_004c1950
        jmp    L_fc0a
L_fc05:
        call    FUN_004c1a10
L_fc0a:
        add    esp, 8
        test    al, al
        je    L_fc1c
        inc    edi
        cmp    edi, ebx
        jl    L_fbe1
L_fc16:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    
L_fc1c:
        pop    edi
        pop    esi
        xor    al, al
        pop    ebx
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
        push    0x7705d0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_fc42
        int 3    
L_fc42:
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
        push    0x7705d0
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_fc62
        int 3    
L_fc62:
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
        push    ebx
        push    esi
        mov    esi, dword ptr [esp + 0xc]
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x184]
        and    esi, 0xffff
        mov    ecx, dword ptr [eax + esi*4]
        test    ecx, ecx
        lea    ebx, [eax + esi*4]
        je    L_fca4
        dec    word ptr [ecx + 0x10]
        cmp    word ptr [ecx + 0x10], 0
        jne    L_fca4
        test    ecx, ecx
        je    L_fca4
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_fca4:
        mov    eax, dword ptr [esp + 0x14]
        inc    word ptr [eax + 0x10]
        mov    dword ptr [ebx], eax
        mov    eax, dword ptr [edi + 0x14c]
        shl    esi, 4
        add    esi, eax
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [esi], ecx
        mov    ecx, dword ptr [eax + 8]
        mov    dword ptr [esi + 4], edx
        mov    edx, dword ptr [eax + 0xc]
        mov    dword ptr [esi + 8], ecx
        pop    edi
        mov    dword ptr [esi + 0xc], edx
        pop    esi
        pop    ebx
        ret    0xc
    }
}
