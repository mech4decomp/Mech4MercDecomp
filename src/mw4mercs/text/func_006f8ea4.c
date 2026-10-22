/*
 * FUN_006f8ea4 (extent 0x6f8ea4-0x6f8f30) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_008493c8;
extern void __cdecl FUN_006f8e80(void);

__declspec(naked) void FUN_006f8ea4(void)
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
        push    ebx
        push    esi
        mov    esi, dword ptr [g_008493c8]
        test    esi, esi
        mov    bl, 1
        je    L_8ed1
L_8ebe:
        mov    eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 4]
        test    al, al
        jne    L_8eca
        xor    bl, bl
L_8eca:
        mov    esi, dword ptr [esi + 8]
        test    esi, esi
        jne    L_8ebe
L_8ed1:
        pop    esi
        mov    al, bl
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
        push    ebx
        push    esi
        mov    esi, dword ptr [g_008493c8]
        test    esi, esi
        mov    bl, 1
        je    L_8f01
L_8eee:
        mov    eax, dword ptr [esi]
        push    esi
        call    dword ptr [eax + 0x10]
        test    al, al
        jne    L_8efa
        xor    bl, bl
L_8efa:
        mov    esi, dword ptr [esi + 8]
        test    esi, esi
        jne    L_8eee
L_8f01:
        mov    esi, dword ptr [g_008493c8]
        test    esi, esi
        je    L_8f2b
L_8f0b:
        mov    al, byte ptr [esi + 4]
        test    al, al
        je    L_8f24
        push    esi
        call    FUN_006f8e80
        mov    ecx, dword ptr [esi]
        push    esi
        call    dword ptr [ecx + 8]
        mov    esi, dword ptr [g_008493c8]
L_8f24:
        mov    esi, dword ptr [esi + 8]
        test    esi, esi
        jne    L_8f0b
L_8f2b:
        pop    esi
        mov    al, bl
        pop    ebx
        ret    
    }
}
