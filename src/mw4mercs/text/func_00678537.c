/*
 * FUN_00678537 (extent 0x678537-0x67866c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00411c40(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_00411dc0(void);
extern void __cdecl FUN_00411f20(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_00501d90(void);
extern void __cdecl FUN_00502370(void);
extern void __cdecl FUN_0062df30(void);
extern void __cdecl FUN_0066a150(void);

__declspec(naked) void FUN_00678537(void)
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
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [esp + 0xc]
        push    eax
        mov    eax, dword ptr [esp + 0xc]
        push    ecx
        mov    ecx, dword ptr [esp + 0xc]
        push    edx
        push    eax
        push    ecx
        call    FUN_00502370
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x44
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0x50]
        mov    esi, ecx
        push    edi
        call    FUN_00501d90
        push    1
        lea    eax, [esi + 0x168]
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_004d1f80
        mov    ecx, dword ptr [esp + 0x30]
        push    ecx
        push    0x78d458
        mov    ecx, edi
        call    FUN_00411c40
        mov    edx, dword ptr [esi + 0x16c]
        push    edx
        push    0x797cc8
        mov    ecx, edi
        call    FUN_00411dc0
        xor    eax, eax
        mov    al, byte ptr [esi + 0x174]
        mov    ecx, edi
        push    eax
        push    0x797cbc
        call    FUN_00411f20
        xor    ecx, ecx
        mov    cl, byte ptr [esi + 0x175]
        push    ecx
        push    0x797cac
        mov    ecx, edi
        call    FUN_00411f20
        lea    ecx, [esp + 8]
        call    FUN_004d21c0
        pop    edi
        pop    esi
        add    esp, 0x44
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
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, dword ptr [edi]
        mov    eax, dword ptr [esi]
        push    0x138
        mov    ecx, esi
        call    dword ptr [eax + 0x14]
        push    edi
        call    FUN_0062df30
        mov    edx, dword ptr [esi]
        add    esp, 4
        mov    ecx, esi
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [edi + 4]
        mov    dword ptr [eax], 0x138
        add    eax, 0x134
        push    0
        push    eax
        push    0x786530
        mov    dword ptr [eax], 0
        call    FUN_00411d60
        pop    edi
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
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    ecx, dword ptr [esi]
        mov    eax, dword ptr [ecx]
        push    0x33c
        call    dword ptr [eax + 0x14]
        push    esi
        call    FUN_0066a150
        add    esp, 4
        pop    esi
        ret    
    }
}
