/*
 * FUN_004043d0 (extent 0x4043d0-0x40447a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b318;
extern void __cdecl FUN_006f5b80(void);
extern void __cdecl FUN_006f5ed0(void);
extern void __cdecl FUN_006f5ee0(void);
extern void __cdecl FUN_006f89f0(void);
extern void __cdecl FUN_006f8bc0(void);
extern void __cdecl FUN_006f8c70(void);
extern void __cdecl FUN_006fabf0(void);

__declspec(naked) void FUN_004043d0(void)
{
    __asm {
        push    -1
        call    FUN_006f8bc0
        xor    eax, eax
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        call    FUN_006f8c70
        xor    eax, eax
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        push    ebp
        mov    ebp, esp
        cmp    dword ptr [ebp + 0xc], 1
        je    L_440b
        push    0x79fb5c
        call    dword ptr [g_0076b318]
        add    esp, 4
        pop    ebp
        ret    0xc
L_440b:
        call    FUN_006f89f0
        test    eax, eax
        jne    L_4438
        push    0x76ba8c
        call    FUN_006fabf0
        add    esp, 4
        test    eax, eax
        je    L_4426
        int 3    
L_4426:
        push    0x79fb60
        call    dword ptr [g_0076b318]
        add    esp, 4
        pop    ebp
        ret    0xc
L_4438:
        push    esi
        call    FUN_006f5ed0
        mov    eax, dword ptr [ebp + 0x10]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [ecx]
        push    0x79fae8
        push    edx
        call    FUN_006f89f0
        mov    ecx, eax
        call    FUN_006f5b80
        test    eax, eax
        je    L_445e
        push    eax
        jmp    L_4463
L_445e:
        push    0x79fb60
L_4463:
        call    dword ptr [g_0076b318]
        add    esp, 4
        mov    esi, eax
        call    FUN_006f5ee0
        mov    eax, esi
        pop    esi
        pop    ebp
        ret    0xc
    }
}
