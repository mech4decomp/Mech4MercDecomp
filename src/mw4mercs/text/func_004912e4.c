/*
 * FUN_004912e4 (extent 0x4912e4-0x49143f) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b9580;
extern int    g_007b95b8;
extern int    g_007da848;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00491260(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004912e4(void)
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
        mov    eax, dword ptr [g_007b9580]
        push    esi
        push    eax
        call    FUN_006f4950
        push    0x18
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_1326
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [esp + 8]
        push    ecx
        push    edx
        mov    ecx, eax
        call    FUN_00491260
        mov    esi, eax
        call    FUN_006f49a0
        mov    eax, esi
        pop    esi
        ret    
L_1326:
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x14]
        mov    eax, dword ptr [edi]
        mov    esi, ecx
        push    4
        push    esi
        mov    ecx, edi
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 8]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0xc]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [edi]
        push    4
        lea    ebx, [esi + 4]
        push    ebx
        mov    ecx, edi
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x10]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [eax]
        push    4
        lea    ecx, [esi + 0x14]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    esi, dword ptr [esi]
        and    esi, 0x3fff
        je    L_1438
        test    esi, esi
        jg    L_13ab
        xor    esi, esi
        jmp    L_13b5
L_13ab:
        mov    edx, dword ptr [g_007da848]
        mov    esi, dword ptr [edx + esi*4 + 0x24]
L_13b5:
        mov    eax, dword ptr [esi + 0x10]
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_00412570
        mov    edx, dword ptr [ebx]
        mov    ecx, dword ptr [esi + 0x20]
        and    edx, 0x10000
        cmp    edx, 0x10000
        mov    dword ptr [esp + 0x14], ecx
        jne    L_13f0
        mov    eax, dword ptr [g_007b95b8]
        mov    ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        je    L_13f0
        mov    eax, dword ptr [esi + 0x48]
        jmp    L_13fd
L_13f0:
        mov    eax, dword ptr [esi + 0x20]
        shl    eax, 4
        mov    dword ptr [esp + 0x14], eax
        or    eax, dword ptr [esi + 0x18]
L_13fd:
        lea    ecx, [esp + 0xc]
        push    ecx
        push    edi
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_00412a50
        mov    edx, dword ptr [eax]
        add    esp, 8
        push    4
        lea    ecx, [esp + 0x18]
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esp + 0xc]
        test    eax, eax
        je    L_1438
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_1438
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_1438:
        pop    edi
        pop    esi
        pop    ebx
        pop    ecx
        ret    4
    }
}
