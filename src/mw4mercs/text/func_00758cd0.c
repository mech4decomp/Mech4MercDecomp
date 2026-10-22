/*
 * FUN_00758cd0 (extent 0x758cd0-0x758f8b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076e22c;
extern float  g_00858940;
extern float  g_00858944;
extern void __cdecl FUN_00717ac0(void);
extern void __cdecl FUN_00717b30(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_0075db4a(void);

__declspec(naked) void FUN_00758cd0(void)
{
    __asm {
        sub    esp, 0xd8
        push    ebx
        push    esi
        xor    eax, eax
        push    edi
        mov    dword ptr [esp + 0x44], eax
        mov    dword ptr [esp + 0x48], eax
        push    0
        mov    dword ptr [esp + 0x50], eax
        push    0x801
        mov    esi, ecx
        mov    ecx, dword ptr [esi + 0x1c]
        mov    dword ptr [esp + 0x58], eax
        lea    edx, [esp + 0x70]
        push    edx
        mov    dword ptr [esp + 0x60], eax
        mov    dword ptr [esp + 0x74], 0x7c
        mov    eax, dword ptr [ecx + 0xc]
        push    0
        or    edi, 0xffffffff
        push    eax
        mov    dword ptr [esp + 0x3c], esi
        mov    dword ptr [esp + 0x24], edi
        mov    dword ptr [esp + 0x44], eax
        call    FUN_007353f0
        mov    ebx, dword ptr [esi + 0x18]
        test    ebx, ebx
        mov    eax, dword ptr [esp + 0x8c]
        mov    dword ptr [esp + 0x2c], eax
        je    L_8eea
        mov    ecx, dword ptr [esp + 0x78]
        mov    dword ptr [esp + 0x20], ecx
        mov    dword ptr [esp + 0x24], 0
        fild    qword ptr [esp + 0x20]
        push    ebp
        fstp    dword ptr [esp + 0x38]
        jmp    L_8d57
L_8d53:
        mov    edi, dword ptr [esp + 0x14]
L_8d57:
        mov    esi, dword ptr [ebx + 0x84]
        cmp    esi, edi
        je    L_8d7f
        cmp    edi, -1
        je    L_8d6c
        push    edi
        call    FUN_00717ac0
L_8d6c:
        lea    edx, [esp + 0x48]
        push    edx
        push    0
        push    0
        push    esi
        mov    dword ptr [esp + 0x24], esi
        call    FUN_00717b30
L_8d7f:
        fld    dword ptr [esp + 0x38]
        fmul    dword ptr [ebx + 4]
        call    FUN_0075db4a
        mov    ebp, dword ptr [esp + 0x54]
        mov    edx, dword ptr [esp + 0x30]
        mov    dword ptr [esp + 0x5c], ebp
        mov    dword ptr [esp + 0x60], 0
        fild    qword ptr [esp + 0x5c]
        add    eax, edx
        mov    dword ptr [esp + 0x18], eax
        fld    st(0)
        fmul    dword ptr [ebx + 0x1c]
        call    FUN_0075db4a
        fld    st(0)
        fmul    dword ptr [ebx + 0x5c]
        mov    esi, eax
        call    FUN_0075db4a
        fld    st(0)
        fmul    dword ptr [ebx + 0x18]
        mov    edi, eax
        call    FUN_0075db4a
        fmul    dword ptr [ebx + 0x58]
        mov    dword ptr [esp + 0x1c], eax
        call    FUN_0075db4a
        fld    dword ptr [ebx]
        mov    ecx, dword ptr [esp + 0x48]
        shl    ebp, 2
        mov    dword ptr [esp + 0x44], ebp
        imul    ebp, esi
        mov    dword ptr [esp + 0x10], eax
        mov    eax, dword ptr [esp + 0x7c]
        mov    dword ptr [esp + 0x24], eax
        add    ebp, ecx
        call    FUN_0075db4a
        cmp    esi, edi
        mov    dword ptr [esp + 0x3c], eax
        jge    L_8ecc
        mov    ecx, dword ptr [esp + 0x10]
        sub    ecx, dword ptr [esp + 0x1c]
        sub    edi, esi
        mov    dword ptr [esp + 0x40], ecx
        mov    dword ptr [esp + 0x10], edi
L_8e18:
        test    ecx, ecx
        jle    L_8ea9
        mov    edx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esp + 0x18]
        lea    esi, [ebp + edx*4]
        mov    edx, dword ptr [esp + 0x3c]
        lea    edi, [eax + edx*4]
        mov    dword ptr [esp + 0x20], ecx
L_8e37:
        mov    eax, dword ptr [edi]
        test    eax, eax
        jne    L_8e41
        mov    dword ptr [esi], eax
        jmp    L_8e98
L_8e41:
        mov    edx, dword ptr [esp + 0x2c]
        cmp    byte ptr [edx + 0x204d], 0
        je    L_8e57
        add    eax, 0xff000000
        mov    dword ptr [esi], eax
        jmp    L_8e98
L_8e57:
        xor    eax, eax
        mov    al, byte ptr [edi]
        cmp    eax, 0xff
        jne    L_8e6a
        mov    dword ptr [esi], 0xffffffff
        jmp    L_8e98
L_8e6a:
        mov    dword ptr [esp + 0x64], eax
        mov    dword ptr [esp + 0x68], 0
        fild    qword ptr [esp + 0x64]
        fmul    dword ptr [g_0076e22c]
        call    FUN_0075db4a
        mov    ecx, dword ptr [esp + 0x40]
        and    eax, 0xff
        shl    eax, 0x18
        add    eax, 0xffffff
        mov    dword ptr [esi], eax
L_8e98:
        mov    eax, dword ptr [esp + 0x20]
        add    edi, 4
        add    esi, 4
        dec    eax
        mov    dword ptr [esp + 0x20], eax
        jne    L_8e37
L_8ea9:
        mov    eax, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esp + 0x18]
        mov    esi, dword ptr [esp + 0x44]
        add    edx, eax
        mov    eax, dword ptr [esp + 0x10]
        add    ebp, esi
        dec    eax
        mov    dword ptr [esp + 0x18], edx
        mov    dword ptr [esp + 0x10], eax
        jne    L_8e18
L_8ecc:
        mov    ebx, dword ptr [ebx + 0x80]
        test    ebx, ebx
        jne    L_8d53
        mov    eax, dword ptr [esp + 0x14]
        cmp    eax, -1
        pop    ebp
        je    L_8eea
        push    eax
        call    FUN_00717ac0
L_8eea:
        mov    ecx, dword ptr [esp + 0x30]
        push    0
        push    ecx
        call    FUN_00735440
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0xd8
        ret    
        mov    edx, dword ptr [ecx + 0x1c]
        sub    esp, 8
        test    edx, edx
        je    L_8f83
        mov    eax, dword ptr [ecx + 8]
        __emit 0x89  // mov dword ptr [esp], eax
        __emit 0x44
        __emit 0x24
        __emit 0x00
        mov    dword ptr [esp + 4], 0
        __emit 0xDF  /* __emit: fild qword ptr [esp] zero-disp; MSVC6 drops the 00 disp byte (DF 2C 24) */
        __emit 0x6C
        __emit 0x24
        __emit 0x00
        fadd    dword ptr [esp + 0xc]
        fild    dword ptr [g_00858940]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_8f7b
        fild    dword ptr [edx + 8]
        mov    ecx, dword ptr [ecx + 4]
        __emit 0x89  // mov dword ptr [esp], ecx
        __emit 0x4C
        __emit 0x24
        __emit 0x00
        mov    dword ptr [esp + 4], 0
        __emit 0xDA  /* __emit: fiadd dword ptr [esp] zero-disp; MSVC6 drops the 00 disp byte (DA 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        fadd    dword ptr [esp + 0x10]
        fild    dword ptr [g_00858944]
        fcompp    
        fnstsw  ax
        test    ah, 1
        jne    L_8f7b
        fld    dword ptr [esp + 0xc]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        jne    L_8f7b
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_8f83
L_8f7b:
        mov    al, 1
        add    esp, 8
        ret    8
L_8f83:
        xor    al, al
        add    esp, 8
        ret    8
    }
}
