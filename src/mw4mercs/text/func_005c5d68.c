/*
 * FUN_005c5d68 (extent 0x5c5d68-0x5c5f13) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d5ec;
extern float  g_0077a1a0;
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005c6e40(void);
extern void __cdecl FUN_005c9000(void);
extern void __cdecl FUN_005dbe80(void);
extern void __cdecl FUN_005dbeb0(void);

__declspec(naked) void FUN_005c5d68(void)
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
        mov    ecx, dword ptr [ecx + 0x5f4]
        test    ecx, 0xfffffffc
        je    L_5d8b
        mov    edx, dword ptr [esp + 4]
        and    ecx, 0xfffffffc
        mov    eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x14]
L_5d8b:
        ret    4
        nop    
        nop    
        sub    esp, 8
        push    esi
        mov    esi, ecx
        cmp    byte ptr [esi + 0x6a0], 1
        push    edi
        jne    L_5dc3
        mov    ecx, dword ptr [esi + 0x170]
        mov    al, byte ptr [ecx + 0x2f8]
        test    al, al
        jne    L_5db9
        mov    byte ptr [esi + 0x6a0], 0
        jmp    L_5dc3
L_5db9:
        mov    eax, dword ptr [ecx]
        push    0
        call    dword ptr [eax + 0xb0]
L_5dc3:
        cmp    byte ptr [esi + 0x5a0], 1
        jne    L_5e8a
        mov    ecx, dword ptr [esi + 0x170]
        mov    eax, dword ptr [ecx + 0x408]
        test    eax, eax
        je    L_5e11
        mov    ecx, esi
        call    FUN_005c9000
        fstp    dword ptr [esp + 0xc]
        mov    ecx, esi
        call    FUN_005dbe80
        mov    dword ptr [esp + 8], eax
        fild    dword ptr [esp + 8]
        fmul    dword ptr [g_0077a1a0]
        fadd    dword ptr [g_0076d5ec]
        fcomp    dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 1
        jne    L_5e1a
L_5e11:
        mov    byte ptr [esi + 0x5a0], 0
        jmp    L_5e60
L_5e1a:
        push    0x3f800000
        mov    ecx, esi
        call    FUN_005c6e40
        cmp    al, 1
        je    L_5e60
        lea    edi, [esi + 0x1c8]
        mov    ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        je    L_5e60
        test    dword ptr [esi + 0x4e0], 0xfffffffc
        je    L_5e60
        mov    ecx, edi
        call    FUN_0041fd80
        mov    edx, dword ptr [eax + 0x10]
        shr    edx, 0x13
        and    dl, 1
        cmp    dl, 1
        jne    L_5f0d
L_5e60:
        cmp    byte ptr [esi + 0x1c4], 1
        jne    L_5f0d
        mov    ecx, dword ptr [esi + 0x170]
        mov    eax, dword ptr [ecx]
        push    0
        mov    byte ptr [esi + 0x1c4], 0
        call    dword ptr [eax + 0x10c]
        pop    edi
        pop    esi
        add    esp, 8
        ret    
L_5e8a:
        mov    eax, dword ptr [esi + 0x170]
        mov    ecx, dword ptr [eax + 0x408]
        test    ecx, ecx
        je    L_5f0d
        fld    dword ptr [ecx + 0x4c]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne    L_5f0d
        mov    ecx, esi
        call    FUN_005c9000
        fstp    dword ptr [esp + 8]
        mov    ecx, esi
        call    FUN_005dbeb0
        mov    dword ptr [esp + 0xc], eax
        fild    dword ptr [esp + 0xc]
        fmul    dword ptr [g_0077a1a0]
        fsub    dword ptr [g_0076d5ec]
        fcomp    dword ptr [esp + 8]
        fnstsw  ax
        test    ah, 0x41
        je    L_5f0d
        mov    al, byte ptr [esi + 0x1c4]
        test    al, al
        mov    byte ptr [esi + 0x5a0], 1
        jne    L_5f0d
        mov    ecx, dword ptr [esi + 0x170]
        mov    eax, dword ptr [ecx + 0x408]
        test    eax, eax
        je    L_5f0d
        mov    edx, dword ptr [ecx]
        push    1
        mov    byte ptr [esi + 0x1c4], 1
        call    dword ptr [edx + 0x10c]
L_5f0d:
        pop    edi
        pop    esi
        add    esp, 8
        ret    
    }
}
