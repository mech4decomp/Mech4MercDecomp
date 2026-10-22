/*
 * FUN_00557113 (extent 0x557113-0x55722a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00548f50(void);
extern void __cdecl FUN_00557230(void);
extern void __cdecl FUN_0061acf0(void);
extern void __cdecl FUN_0061ad20(void);

__declspec(naked) void FUN_00557113(void)
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
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x384]
        mov    ecx, dword ptr [eax + 0x10]
        shr    ecx, 0x13
        test    cl, 1
        push    edi
        jne    L_7225
        mov    al, byte ptr [esi + 0x5ac]
        test    al, al
        jne    L_7225
        push    0x10
        call    FUN_0061acf0
        mov    ecx, eax
        call    FUN_0061ad20
        test    al, al
        je    L_7225
        mov    edx, dword ptr [esp + 0xc]
        mov    eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle    L_7225
        mov    edi, dword ptr [esi + 0x368]
        mov    eax, edi
        inc    eax
        and    eax, 0x80000003
        jns    L_71b1
        dec    eax
        or    eax, 0xfffffffc
        inc    eax
L_71b1:
        push    eax
        mov    ecx, esi
        call    FUN_00557230
        test    al, al
        jne    L_7216
        mov    ecx, dword ptr [esi + 0x518]
        mov    edx, dword ptr [esi + 0x51c]
        mov    eax, dword ptr [esi + 0x520]
        mov    dword ptr [esi + 0x56c], ecx
        mov    dword ptr [esi + 0x570], edx
        mov    ecx, dword ptr [esi + 0x528]
        mov    dword ptr [esi + 0x57c], ecx
        mov    edx, dword ptr [esi + 0x524]
        mov    dword ptr [esi + 0x574], eax
        mov    eax, dword ptr [esi + 0x52c]
        mov    dword ptr [esi + 0x368], edi
        mov    dword ptr [esi + 0x568], edi
        mov    dword ptr [esi + 0x578], edx
        pop    edi
        mov    dword ptr [esi + 0x580], eax
        pop    esi
        ret    4
L_7216:
        mov    ecx, dword ptr [esi + 0x368]
        push    ecx
        call    FUN_00548f50
        add    esp, 4
L_7225:
        pop    edi
        pop    esi
        ret    4
    }
}
