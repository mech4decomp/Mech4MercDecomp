/*
 * FUN_0065802f (extent 0x65802f-0x6581bd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0041de80(void);
extern void __cdecl FUN_0041dec0(void);
extern void __cdecl FUN_0041e130(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006faca0(void);

__declspec(naked) void FUN_0065802f(void)
{
    __asm {
        nop    
        sub    esp, 0x34
        mov    eax, dword ptr [esp + 0x38]
        push    ebx
        push    esi
        push    edi
        push    1
        mov    ebx, ecx
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_0041de80
        mov    edi, dword ptr [ebx]
        mov    edx, dword ptr [esp + 0x10]
        push    4
        lea    ecx, [esp + 0x48]
        push    ecx
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x4c], edi
        call    dword ptr [edx + 0x24]
        mov    esi, dword ptr [ebx + 4]
        mov    edx, dword ptr [esp + 0x10]
        push    4
        lea    eax, [esp + 0x48]
        push    eax
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x4c], esi
        call    dword ptr [edx + 0x24]
        mov    eax, 0xcccccccd
        mul    esi
        mov    esi, edx
        mov    eax, 0xcccccccd
        mul    edi
        mov    edi, edx
        mov    edx, dword ptr [esp + 0x10]
        shr    edi, 4
        shr    esi, 4
        mov    eax, edi
        imul    eax, esi
        push    4
        lea    ecx, [esp + 0x10]
        push    ecx
        lea    ecx, [esp + 0x18]
        mov    dword ptr [esp + 0x14], eax
        call    dword ptr [edx + 0x24]
        test    esi, esi
        jle    L_80c6
        mov    ebx, dword ptr [ebx + 8]
L_80b3:
        mov    eax, dword ptr [ebx]
        push    edi
        push    eax
        lea    ecx, [esp + 0x18]
        call    FUN_0041e130
        add    ebx, 4
        dec    esi
        jne    L_80b3
L_80c6:
        lea    ecx, [esp + 0x10]
        call    FUN_0041dec0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x34
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        sub    esp, 0x10
        test    eax, eax
        push    esi
        je    L_8172
        push    edi
        lea    ecx, [esp + 0x20]
        push    ecx
        lea    edx, [esp + 0xc]
        push    edx
        push    eax
        call    FUN_006faca0
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax]
        mov    esi, dword ptr [esp + 0x1c]
        mov    dword ptr [esp + 0xc], ecx
        mov    edx, dword ptr [eax + 4]
        lea    edi, [eax + 4]
        mov    eax, dword ptr [esi]
        push    4
        lea    ecx, [esp + 0x10]
        push    ecx
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], edx
        call    dword ptr [eax + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esi]
        sub    ecx, 0xc
        push    4
        lea    eax, [esp + 0x24]
        mov    dword ptr [esp + 0x24], ecx
        push    eax
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
        mov    eax, dword ptr [esp + 0x20]
        test    eax, eax
        je    L_8162
        mov    edx, dword ptr [esi]
        push    eax
        add    edi, 8
        push    edi
        mov    ecx, esi
        call    dword ptr [edx + 0x24]
L_8162:
        mov    eax, dword ptr [esp + 8]
        push    eax
        call    FUN_006f4230
        pop    edi
        pop    esi
        add    esp, 0x10
        ret    
L_8172:
        mov    esi, dword ptr [esp + 0x18]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x14]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x18], 0
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], 0
        call    dword ptr [edx + 0x24]
        mov    edx, dword ptr [esi]
        push    4
        lea    eax, [esp + 0x1c]
        push    eax
        mov    ecx, esi
        mov    dword ptr [esp + 0x20], 0
        call    dword ptr [edx + 0x24]
        pop    esi
        add    esp, 0x10
        ret    
    }
}
