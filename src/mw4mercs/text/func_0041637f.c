/*
 * FUN_0041637f (extent 0x41637f-0x4164ab) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00416530(void);
extern void __cdecl FUN_004165b0(void);
extern void __cdecl FUN_00416670(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00415bd0(void);

__declspec(naked) void FUN_0041637f(void)
{
    __asm {
        nop    
        jmp    FUN_00415bd0
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
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jbe    L_63c7
        push    ebx
        push    esi
        push    edi
        mov    edi, dword ptr [ecx + 0xc]
        mov    ebx, eax
L_639f:
        mov    esi, dword ptr [edi]
        test    esi, esi
        je    L_63be
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 8]
        test    esi, esi
        je    L_63b8
        mov    edx, dword ptr [esi]
        push    1
        mov    ecx, esi
        call    dword ptr [edx]
L_63b8:
        mov    dword ptr [edi], 0
L_63be:
        add    edi, 4
        dec    ebx
        jne    L_639f
        pop    edi
        pop    esi
        pop    ebx
L_63c7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    0x76d414
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_63e2
        int 3    
L_63e2:
        xor    eax, eax
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
        sub    esp, 0x18
        push    esi
        push    ecx
        lea    ecx, [esp + 8]
        call    FUN_00416530
        lea    ecx, [esp + 4]
        xor    esi, esi
        call    FUN_00416670
        test    eax, eax
        je    L_641b
L_640d:
        lea    ecx, [esp + 4]
        inc    esi
        call    FUN_00416670
        test    eax, eax
        jne    L_640d
L_641b:
        lea    ecx, [esp + 4]
        call    FUN_004165b0
        mov    eax, esi
        pop    esi
        add    esp, 0x18
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebx
        mov    ebx, dword ptr [ecx + 0x10]
        push    esi
        xor    esi, esi
        test    ebx, ebx
        push    edi
        jbe    L_6456
        mov    edi, dword ptr [ecx + 0xc]
L_643f:
        mov    ecx, dword ptr [edi]
        test    ecx, ecx
        je    L_644e
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x14]
        test    al, al
        je    L_645c
L_644e:
        inc    esi
        add    edi, 4
        cmp    esi, ebx
        jb    L_643f
L_6456:
        pop    edi
        pop    esi
        mov    al, 1
        pop    ebx
        ret    
L_645c:
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
        push    ebx
        mov    ebx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov    esi, ecx
        mov    eax, dword ptr [esi]
        push    ebx
        call    dword ptr [eax + 0x24]
        mov    ecx, dword ptr [esi + 0xc]
        mov    edi, eax
        mov    eax, dword ptr [ecx + edi*4]
        test    eax, eax
        jne    L_6498
        mov    edx, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [edx + 0x20]
        mov    ecx, dword ptr [esi + 0xc]
        mov    dword ptr [ecx + edi*4], eax
L_6498:
        mov    ecx, dword ptr [esp + 0x10]
        mov    edx, dword ptr [eax]
        push    ebx
        push    ecx
        mov    ecx, eax
        call    dword ptr [edx + 0x18]
        pop    edi
        pop    esi
        pop    ebx
        ret    8
    }
}
