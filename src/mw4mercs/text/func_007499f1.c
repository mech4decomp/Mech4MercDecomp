/*
 * FUN_007499f1 (extent 0x7499f1-0x749c26) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076c5b0;
extern float  g_0076d064;
extern float  g_0076d968;
extern float  g_00776110;
extern float  g_0077b648;
extern float  g_007a60fc;
extern float  g_007a6100;
extern float  g_007a6108;
extern int    g_00856b8c;
extern char   g_00858990;
extern char   g_0087dd0a;
extern char   g_008b79ec;
extern void __cdecl FUN_0075b0d0(void);
extern void __cdecl FUN_0075b4d0(void);
extern void __cdecl FUN_0075b510(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0075dc60(void);

__declspec(naked) void FUN_007499f1(void)
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
        nop    
        mov    al, byte ptr [g_008b79ec]
        test    al, al
        push    esi
        je    L_9c22
        mov    al, byte ptr [g_00858990]
        test    al, al
        jne    L_9c22
        mov    ecx, dword ptr [esp + 8]
        mov    esi, dword ptr [ecx]
        test    esi, esi
        je    L_9c22
        mov    eax, dword ptr [esp + 0xc]
        dec    eax
        je    L_9c03
        dec    eax
        je    L_9b68
        sub    eax, 2
        jne    L_9c22
        fld    dword ptr [esp + 0x10]
        fcomp    qword ptr [g_00776110]
        fnstsw  ax
        test    ah, 1
        je    L_9a5d
        mov    dword ptr [esp + 0x10], 0xbf800000
L_9a5d:
        fld    dword ptr [esp + 0x10]
        fcomp    qword ptr [g_0076d968]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9a76
        mov    dword ptr [esp + 0x10], 0x3f800000
L_9a76:
        mov    esi, dword ptr [ecx + 8]
        test    esi, esi
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [ecx + 0x24], eax
        mov    byte ptr [g_0087dd0a], 1
        je    L_9b5d
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fld    dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9af4
        fcomp    dword ptr [g_007a6108]
        fnstsw  ax
        test    ah, 1
        jne    L_9ac7
        push    0x2710
        push    esi
        call    FUN_0075b510
        mov    byte ptr [g_0087dd0a], 0
        pop    esi
        ret    0x10
L_9ac7:
        fld    dword ptr [g_0076d064]
        fsub    dword ptr [esp + 0x10]
        fldln2    
        fxch    st(1)
        fyl2x    
        fmul    qword ptr [g_007a6100]
        call    FUN_0075db4a
        push    eax
        push    esi
        call    FUN_0075b510
        mov    byte ptr [g_0087dd0a], 0
        pop    esi
        ret    0x10
L_9af4:
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_9b55
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_007a60fc]
        fnstsw  ax
        test    ah, 0x41
        je    L_9b28
        push    0xffffd8f0
        push    esi
        call    FUN_0075b510
        mov    byte ptr [g_0087dd0a], 0
        pop    esi
        ret    0x10
L_9b28:
        fld    dword ptr [esp + 0x10]
        fadd    dword ptr [g_0076d064]
        fldln2    
        fxch    st(1)
        fyl2x    
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        push    eax
        push    esi
        call    FUN_0075b510
        mov    byte ptr [g_0087dd0a], 0
        pop    esi
        ret    0x10
L_9b55:
        push    0
        push    esi
        call    FUN_0075b510
L_9b5d:
        mov    byte ptr [g_0087dd0a], 0
        pop    esi
        ret    0x10
L_9b68:
        fld    dword ptr [esp + 0x10]
        fcom    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je    L_9b81
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076c5b0]
L_9b81:
        fcom    qword ptr [g_0076d968]
        fnstsw  ax
        test    ah, 0x41
        jne    L_9b96
        __emit 0xDD  // fstp st(0)
__emit 0xD8
        fld    dword ptr [g_0076d064]
L_9b96:
        mov    edx, dword ptr [g_00856b8c]
        fst    dword ptr [ecx + 0x20]
        fmul    dword ptr [edx + 0xd8]
        mov    esi, dword ptr [ecx + 8]
        test    esi, esi
        mov    byte ptr [g_0087dd0a], 1
        fstp    dword ptr [esp + 0x10]
        je    L_9bf8
        fld    dword ptr [esp + 0x10]
        fcomp    dword ptr [g_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        je    L_9bde
        push    0xffffd8f0
        push    esi
        call    FUN_0075b4d0
        mov    byte ptr [g_0087dd0a], 0
        pop    esi
        ret    0x10
L_9bde:
        fldln2    
        fld    dword ptr [esp + 0x10]
        fyl2x    
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        push    eax
        push    esi
        call    FUN_0075b4d0
L_9bf8:
        mov    byte ptr [g_0087dd0a], 0
        pop    esi
        ret    0x10
L_9c03:
        fld    dword ptr [esp + 0x10]
        call    FUN_0075db4a
        push    0
        push    0x989680
        push    edx
        push    eax
        call    FUN_0075dc60
        push    edx
        push    eax
        push    esi
        call    FUN_0075b0d0
L_9c22:
        pop    esi
        ret    0x10
    }
}
