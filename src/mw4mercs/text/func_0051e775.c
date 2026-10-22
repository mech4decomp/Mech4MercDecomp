/*
 * FUN_0051e775 (extent 0x51e775-0x51e8bc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b318;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dd268;
extern int    g_007ddd24;
extern int    g_007ddd28;
extern void __cdecl FUN_0051e440(void);
extern void __cdecl FUN_00595b60(void);
extern void __cdecl FUN_00708930(void);
extern void __cdecl FUN_007089b0(void);

__declspec(naked) void FUN_0051e775(void)
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
        mov    eax, dword ptr [esp + 0xc]
        mov    edx, dword ptr [eax + 0x14]
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        push    edx
        mov    edx, dword ptr [eax + 0x10]
        push    edx
        mov    edx, dword ptr [eax + 0xc]
        push    edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 4]
        push    edx
        push    eax
        push    ecx
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_0051e440
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [eax]
        xor    eax, ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [edx]
        mov    edx, dword ptr [eax + 0x44]
        xor    edx, 0x85739531
        push    ecx
        mov    ecx, dword ptr [edx + 0x34]
        call    FUN_00595b60
        mov    eax, dword ptr [eax + 0xac]
        ret    0xc
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
        mov    eax, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [eax]
        mov    ecx, dword ptr [ecx]
        mov    al, byte ptr [ecx]
        sub    esp, 0x14
        test    al, al
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        je    L_e818
L_e805:
        cmp    al, 0x30
        jl    L_e810
        cmp    al, 0x39
        jg    L_e810
        mov    byte ptr [edx], al
        inc    edx
L_e810:
        mov    al, byte ptr [ecx + 1]
        inc    ecx
        test    al, al
        jne    L_e805
L_e818:
        mov    byte ptr [edx], 0
        __emit 0x8D  // 141 edx, [esp] (explicit disp8=0)
__emit 0x54
__emit 0x24
__emit 0x00
        push    edx
        call    dword ptr [g_0076b318]
        add    esp, 0x18
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007ddd28]
        sub    esp, 8
        cmp    eax, 1
        jne    L_e890
        push    0
        lea    eax, [esp + 8]
        push    eax
        lea    ecx, [esp + 8]
        push    ecx
        push    0x76c768
        mov    dword ptr [esp + 0x10], 0
        mov    dword ptr [esp + 0x14], 4
        call    FUN_00708930
        __emit 0x8B  // 139 ecx, [esp] (explicit disp8=0)
__emit 0x4C
__emit 0x24
__emit 0x00
        mov    eax, 3
        cmp    ecx, eax
        je    L_e890
        push    4
        lea    edx, [esp + 4]
        push    edx
        push    0x76c768
        mov    dword ptr [esp + 0xc], eax
        call    FUN_007089b0
        mov    eax, 1
        add    esp, 8
        ret    0xc
L_e890:
        xor    eax, eax
        add    esp, 8
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007ddd24]
        mov    eax, 1
        cmp    ecx, eax
        je    L_e8b9
        cmp    dword ptr [g_007ddd28], eax
        je    L_e8b9
        xor    eax, eax
L_e8b9:
        ret    0xc
    }
}
