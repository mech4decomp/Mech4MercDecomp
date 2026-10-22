/*
 * FUN_004b2ff6 (extent 0x4b2ff6-0x4b325a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da9f8;
extern int    g_007da9fc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00421ec0(void);
extern void __cdecl FUN_004b28d0(void);
extern void __cdecl FUN_004c1950(void);
extern void __cdecl FUN_004c1a10(void);
extern void __cdecl FUN_004c6960(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004b2ff6(void)
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
        mov    eax, dword ptr [g_007da9f8]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x184
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3045
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        mov    edx, dword ptr [g_007da9fc]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_004b28d0
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_3045:
        xor    esi, esi
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
        sub    esp, 0x10
        push    ebx
        push    ebp
        push    esi
        mov    esi, dword ptr [esp + 0x20]
        mov    ebx, ecx
        push    esi
        call    FUN_004c6960
        mov    eax, dword ptr [ebx + 0x180]
        mov    edx, dword ptr [esi]
        mov    dword ptr [esp + 0x20], eax
        push    2
        lea    eax, [esp + 0x24]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        push    esi
        call    FUN_00421ec0
        mov    eax, dword ptr [ebx + 0x178]
        add    esp, 4
        xor    ebp, ebp
        test    eax, eax
        mov    dword ptr [esp + 0x18], eax
        jbe    L_3140
        mov    ecx, dword ptr [ebx + 0x17c]
        mov    edx, dword ptr [ebx + 0x174]
        push    edi
        mov    dword ptr [esp + 0x10], ecx
        xor    edi, edi
        mov    dword ptr [esp + 0x18], edx
L_30ae:
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esi]
        lea    ebx, [eax + edi*8]
        push    4
        push    ebx
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        add    ebx, 4
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
        mov    edx, dword ptr [esi + 0x10]
        mov    eax, dword ptr [esi + 0x14]
        sub    eax, edx
        mov    edx, dword ptr [esi]
        sub    eax, ebx
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
        jb    L_30ae
        pop    edi
L_3140:
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
        mov    ebx, dword ptr [esi + 0x178]
        push    edi
        xor    edi, edi
        test    ebx, ebx
        jle    L_31a6
L_3171:
        mov    eax, dword ptr [esi + 0x18]
        mov    edx, dword ptr [esi + 0x174]
        shr    eax, 5
        not    al
        lea    ecx, [esi + 0xb0]
        test    al, 1
        mov    eax, dword ptr [edx + edi*4]
        push    ecx
        push    eax
        je    L_3195
        call    FUN_004c1950
        jmp    L_319a
L_3195:
        call    FUN_004c1a10
L_319a:
        add    esp, 8
        test    al, al
        je    L_31ac
        inc    edi
        cmp    edi, ebx
        jl    L_3171
L_31a6:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    
L_31ac:
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
        je    L_31d2
        int 3    
L_31d2:
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
        je    L_31f2
        int 3    
L_31f2:
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
        mov    eax, dword ptr [edi + 0x174]
        and    esi, 0xffff
        mov    ecx, dword ptr [eax + esi*4]
        test    ecx, ecx
        lea    ebx, [eax + esi*4]
        je    L_3234
        dec    word ptr [ecx + 0x10]
        cmp    word ptr [ecx + 0x10], 0
        jne    L_3234
        test    ecx, ecx
        je    L_3234
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_3234:
        mov    eax, dword ptr [esp + 0x14]
        inc    word ptr [eax + 0x10]
        mov    ecx, dword ptr [edi + 0x17c]
        mov    dword ptr [ebx], eax
        mov    eax, dword ptr [esp + 0x18]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [ecx + esi*8], edx
        pop    edi
        mov    dword ptr [ecx + esi*8 + 4], eax
        pop    esi
        pop    ebx
        ret    0xc
    }
}
