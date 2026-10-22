/*
 * FUN_005b76a3 (extent 0x5b76a3-0x5b7805) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc690;
extern int    g_007f2110;
extern int    g_007f2118;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_005b7e50(void);
extern void __cdecl FUN_005b7e60(void);

__declspec(naked) void FUN_005b76a3(void)
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
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        push    ebx
        push    edi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ecx, dword ptr [eax + 0x4c]
        xor    ebx, ebx
        test    ecx, ecx
        jle    L_770c
        push    esi
        mov    esi, dword ptr [eax + 0x48]
        add    esi, 0x14
        mov    edi, ecx
L_76e9:
        mov    ecx, dword ptr [esi]
        call    FUN_0041fd80
        test    eax, eax
        je    L_7700
        mov    ecx, eax
        call    FUN_005b7e50
        test    al, al
        je    L_7700
        inc    ebx
L_7700:
        add    esi, 0x1c
        dec    edi
        jne    L_76e9
        pop    esi
        pop    edi
        mov    eax, ebx
        pop    ebx
        ret    
L_770c:
        pop    edi
        mov    eax, ebx
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
        nop    
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        push    ebx
        push    ebp
        push    esi
        xor    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [ecx + 0x10]
        xor    eax, 0x85739531
        mov    ebp, dword ptr [eax + 0x4c]
        xor    ebx, ebx
        cmp    ebp, ebx
        push    edi
        mov    dword ptr [esp + 0x10], ebx
        jle    L_777e
        mov    esi, dword ptr [eax + 0x48]
        add    esi, 0x14
L_774d:
        mov    ecx, dword ptr [esi]
        call    FUN_0041fd80
        mov    edi, eax
        test    edi, edi
        je    L_7776
        mov    ecx, edi
        call    FUN_005b7e50
        test    al, al
        je    L_7776
        mov    edx, dword ptr [esp + 0x10]
        cmp    edx, dword ptr [esp + 0x18]
        je    L_7786
        mov    eax, edx
        inc    eax
        mov    dword ptr [esp + 0x10], eax
L_7776:
        inc    ebx
        add    esi, 0x1c
        cmp    ebx, ebp
        jl    L_774d
L_777e:
        pop    edi
        pop    esi
        pop    ebp
        xor    eax, eax
        pop    ebx
        pop    ecx
        ret    
L_7786:
        push    0
        mov    ecx, edi
        call    FUN_005b7e60
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        pop    ecx
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
        push    0xa4
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_77fa
        mov    ecx, dword ptr [g_007f2118]
        mov    edx, dword ptr [g_007dc690]
        push    0x502c60
        push    0x5028b0
        push    0x502370
        push    0
        push    0x501eb0
        push    ecx
        push    0x679190
        push    0x5b7840
        push    0
        push    0
        push    edx
        push    0x7868d8
        push    0x489
        mov    ecx, eax
        call    FUN_00501a20
        mov    dword ptr [g_007f2110], eax
        ret    
L_77fa:
        mov    dword ptr [g_007f2110], 0
        ret    
    }
}
