/*
 * FUN_004c8184 (extent 0x4c8184-0x4c829c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern void __cdecl FUN_004c7c70(void);
extern void __cdecl FUN_004c7d10(void);
extern void __cdecl FUN_004c80b0(void);
extern void __cdecl FUN_00766d10(void);
extern void __cdecl FUN_00766e40(void);

__declspec(naked) void FUN_004c8184(void)
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
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c80b0
        xor    eax, eax
        ret    4
        nop    
        mov    eax, dword ptr [esp + 4]
        push    eax
        call    FUN_004c80b0
        or    eax, 0xffffffff
        ret    4
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004c80b0
        push    edi
        mov    ecx, esi
        call    FUN_004c7c70
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004c80b0
        push    edi
        mov    ecx, esi
        call    FUN_004c7d10
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    al, 1
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
        xor    al, al
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
        sub    esp, 0x10
        mov    eax, dword ptr [ecx + 0xfc]
        mov    edx, dword ptr [ecx + 0x10c]
        __emit 0x89  // mov dword ptr [esp], eax
__emit 0x44
__emit 0x24
__emit 0x00
        mov    eax, dword ptr [ecx + 0x11c]
        mov    ecx, dword ptr [ecx + 0x12c]
        mov    dword ptr [esp + 4], edx
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [ecx]
        lea    edx, [esp + 0x14]
        mov    dword ptr [esp + 8], eax
        push    edx
        lea    eax, [esp + 4]
        push    eax
        call    FUN_00766d10
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_8268
        mov    eax, 1
        add    esp, 0x10
        ret    4
L_8268:
        xor    eax, eax
        add    esp, 0x10
        ret    4
        mov    eax, dword ptr [esp + 4]
        add    ecx, 0xf0
        push    ecx
        mov    ecx, dword ptr [eax]
        call    FUN_00766e40
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_8297
        mov    eax, 1
        ret    4
L_8297:
        xor    eax, eax
        ret    4
    }
}
