/*
 * FUN_005b8110 (extent 0x5b8110-0x5b828a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d968;
extern int    g_007dab40;
extern int    g_007dab44;
extern void __cdecl FUN_005b8150(void);
extern void __cdecl FUN_00628ed0(void);
extern void __cdecl FUN_006290a0(void);
extern void __cdecl FUN_00637a20(void);
extern void __cdecl FUN_00637b40(void);
extern void __cdecl FUN_00707e70(void);

__declspec(naked) void FUN_005b8110(void)
{
    __asm {
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x10]
        fcomp    qword ptr [esi + 0x20]
        fnstsw  ax
        test    ah, 1
        jne    L_8130
        mov    ecx, esi
        call    FUN_005b8150
        pop    esi
        ret    
L_8130:
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x20]
        fsub    qword ptr [g_0076d968]
        fstp    qword ptr [esi + 0x10]
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
        nop    
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x10]
        call    FUN_00637b40
        test    eax, eax
        jne    L_8172
        mov    dword ptr [esi + 0x20], eax
        mov    dword ptr [esi + 0x24], 0x40240000
        pop    esi
        ret    
L_8172:
        push    0xe2
        mov    ecx, eax
        call    FUN_00637a20
        fstp    qword ptr [esi + 0x20]
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
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    0
        mov    esi, ecx
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x10]
        push    0x11
        fcomp    qword ptr [esi + 0x20]
        fnstsw  ax
        test    ah, 1
        jne    L_81ea
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x40]
        xor    ecx, 0x85739531
        call    FUN_006290a0
        call    FUN_00637b40
        test    eax, eax
        jne    L_81d9
        mov    dword ptr [esi + 0x20], eax
        mov    dword ptr [esi + 0x24], 0x40240000
        jmp    L_8208
L_81d9:
        push    0xe2
        mov    ecx, eax
        call    FUN_00637a20
        fstp    qword ptr [esi + 0x20]
        jmp    L_8208
L_81ea:
        mov    edx, dword ptr [g_007dab44]
        mov    ecx, dword ptr [g_007dab40]
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x40]
        xor    ecx, 0x85739531
        call    FUN_00628ed0
L_8208:
        push    0
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x18]
        fcomp    qword ptr [esi + 0x28]
        fnstsw  ax
        test    ah, 1
        je    L_8243
        mov    al, byte ptr [esi + 0x30]
        test    al, al
        je    L_8243
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x40]
        push    0xf
        xor    ecx, 0x85739531
        call    FUN_00628ed0
        pop    esi
        ret    
L_8243:
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0x40]
        push    0xf
        xor    ecx, 0x85739531
        mov    byte ptr [esi + 0x30], 0
        call    FUN_006290a0
        call    FUN_00637b40
        test    eax, eax
        jne    L_8279
        mov    dword ptr [esi + 0x28], eax
        mov    dword ptr [esi + 0x2c], 0x40240000
        pop    esi
        ret    
L_8279:
        push    0xe2
        mov    ecx, eax
        call    FUN_00637a20
        fstp    qword ptr [esi + 0x28]
        pop    esi
        ret    
    }
}
