/*
 * FUN_004fd97e (extent 0x4fd97e-0x4fdb7e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc8dc;
extern int    g_007dc8e0;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d40(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416e50(void);
extern void __cdecl FUN_00416f20(void);
extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171b0(void);
extern void __cdecl FUN_00417230(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004fd820(void);

__declspec(naked) void FUN_004fd97e(void)
{
    __asm {
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        push    ebx
        mov    ebx, dword ptr [g_007dab40]
        push    edi
        mov    edi, ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, ebx
        mov    edx, dword ptr [ecx + 0xc]
        xor    edx, 0x85739531
        mov    eax, dword ptr [edx + 0x4c]
        cmp    dword ptr [eax + 0x14], 5
        jne    L_da16
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax + 0x18]
        mov    ebx, dword ptr [ecx + 4]
        push    ebp
        push    esi
        lea    ecx, [eax + 0x1c]
        call    FUN_0041fd80
        mov    edx, dword ptr [eax + 4]
        mov    esi, dword ptr [edx]
        lea    eax, [esi + esi*4]
        lea    eax, [eax + eax*4]
        lea    eax, [eax + eax*4]
        lea    ecx, [ebx + eax*8]
        lea    edx, [esp + 0x14]
        mov    dword ptr [esp + 0x14], ecx
        lea    ebp, [edi + 0x10]
        push    edx
        mov    ecx, ebp
        call    FUN_00416f60
        mov    edi, eax
        test    edi, edi
        jne    L_da0d
        push    0x1c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_d9fe
        push    ebx
        push    esi
        mov    ecx, eax
        call    FUN_004fd820
        mov    edi, eax
        jmp    L_da00
L_d9fe:
        xor    edi, edi
L_da00:
        lea    eax, [esp + 0x14]
        push    eax
        push    edi
        mov    ecx, ebp
        call    FUN_00416f20
L_da0d:
        mov    eax, dword ptr [edi + 0x18]
        inc    eax
        pop    esi
        mov    dword ptr [edi + 0x18], eax
        pop    ebp
L_da16:
        pop    edi
        pop    ebx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x14
        push    esi
        lea    esi, [ecx + 0x10]
        push    esi
        lea    ecx, [esp + 8]
        call    FUN_00417170
        lea    ecx, [esp + 4]
        mov    dword ptr [esp + 4], 0x776074
        call    FUN_00417230
        test    eax, eax
        je    L_da53
L_da46:
        lea    ecx, [esp + 4]
        call    FUN_00417230
        test    eax, eax
        jne    L_da46
L_da53:
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 8]
        lea    ecx, [esp + 4]
        call    FUN_004171b0
        pop    esi
        add    esp, 0x14
        ret    
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
        mov    eax, dword ptr [g_007dc8e0]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007dc8e0], eax
        jne    L_dad6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_dacc
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76cf50
        push    0x64
        push    0x64
        push    0x14
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007dc8dc], esi
        jmp    L_dad6
L_dacc:
        mov    dword ptr [g_007dc8dc], 0
L_dad6:
        mov    ecx, dword ptr [g_007dc8dc]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_db0f
        mov    eax, dword ptr [esp + 0xc]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esi + 4], edi
        mov    dword ptr [esi + 0xc], eax
        call    FUN_00415d40
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [ecx]
        pop    edi
        mov    dword ptr [esi], 0x7760b4
        mov    dword ptr [esi + 0x10], edx
        mov    eax, esi
        pop    esi
        ret    8
L_db0f:
        pop    edi
        xor    eax, eax
        pop    esi
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
        push    esi
        push    0x14
        mov    esi, ecx
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_db51
        mov    ecx, dword ptr [esi + 4]
        mov    edx, dword ptr [esi + 8]
        mov    dword ptr [eax + 4], ecx
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [esi + 0x10]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax], 0x776074
        pop    esi
        ret    
L_db51:
        xor    eax, eax
        pop    esi
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
        push    esi
        mov    esi, ecx
        call    FUN_00416e50
        test    byte ptr [esp + 8], 1
        je    L_db78
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_db78:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
