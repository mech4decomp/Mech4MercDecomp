/*
 * FUN_00615f45 (extent 0x615f45-0x615ff0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00615ff0(void);

__declspec(naked) void FUN_00615f45(void)
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
        sub    esp, 8
        push    esi
        mov    esi, ecx
        mov    eax, dword ptr [esi + 0x6c]
        test    eax, eax
        mov    dword ptr [esp + 4], eax
        je    L_5f78
        inc    byte ptr [eax - 1]
        mov    eax, dword ptr [esp + 4]
L_5f78:
        push    0x78c500
        push    eax
        lea    ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        lea    ecx, [esp + 8]
        call    FUN_00412740
        mov    eax, dword ptr [esp + 8]
        test    eax, eax
        je    L_5fac
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_5fac
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_5fac:
        mov    al, byte ptr [esi + 0x70]
        test    al, al
        push    1
        je    L_5fbe
        mov    eax, dword ptr [esp + 8]
        push    1
        push    eax
        jmp    L_5fc5
L_5fbe:
        mov    ecx, dword ptr [esp + 8]
        push    0
        push    ecx
L_5fc5:
        mov    ecx, esi
        call    FUN_00615ff0
        mov    eax, dword ptr [esp + 4]
        test    eax, eax
        mov    byte ptr [esi + 0x70], 1
        pop    esi
        je    L_5fec
        mov    cl, byte ptr [eax - 1]
        dec    eax
        dec    cl
        mov    byte ptr [eax], cl
        jne    L_5fec
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_5fec:
        add    esp, 8
        ret    
    }
}
