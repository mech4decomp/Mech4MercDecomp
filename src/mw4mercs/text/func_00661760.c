/*
 * FUN_00661760 (1223 B) — ABL object factory. Dispatches on the 3rd arg
 * (0x7d1..0x7e9) via a jump table; each case operator-news an object of a
 * given size, runs the common ctor FUN_00661da0, runs a per-type sub-ctor on
 * [obj+0x24], installs the type's vtable, then registers the object through
 * FUN_00662e90 (returning the 1st arg). The 0x7e9 case is a plain allocation
 * + FUN_00660460 ctor with no vtable install.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00661da0(void);
extern void __cdecl FUN_00660830(void);
extern void __cdecl FUN_006608d0(void);
extern void __cdecl FUN_006a2c30(void);
extern void __cdecl FUN_006609a0(void);
extern void __cdecl FUN_006a2e50(void);
extern void __cdecl FUN_00660aa0(void);
extern void __cdecl FUN_00660b50(void);
extern void __cdecl FUN_00660640(void);
extern void __cdecl FUN_00660c40(void);
extern void __cdecl FUN_006a3590(void);
extern void __cdecl FUN_00660700(void);
extern void __cdecl FUN_006a3a80(void);
extern void __cdecl FUN_00660780(void);
extern void __cdecl FUN_006a3b90(void);
extern void __cdecl FUN_006a3d70(void);
extern void __cdecl FUN_00660d40(void);
extern void __cdecl FUN_00660da0(void);
extern void __cdecl FUN_00660e10(void);
extern void __cdecl FUN_00660ea0(void);
extern void __cdecl FUN_006a4130(void);
extern void __cdecl FUN_006a4320(void);
extern void __cdecl FUN_006a4650(void);
extern void __cdecl FUN_00661c90(void);
extern void __cdecl FUN_00661cb0(void);
extern void __cdecl FUN_00660460(void);
extern void __cdecl FUN_00662e90(void);
extern int g_jt_661c28;

__declspec(naked) void FUN_00661760(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        add     eax, 0xfffff82f
        cmp     eax, 0x18
        push    esi
        ja      L_default
        jmp     dword ptr [eax*4 + g_jt_661c28]

L_6177a:
        push    0x64
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660830
        mov     dword ptr [esi], 0x79506c
        mov     eax, esi
        jmp     L_617bfe

L_617aa:
        push    0x3c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006608d0
        mov     dword ptr [esi], 0x795048
        mov     eax, esi
        jmp     L_617bfe

L_617da:
        push    0x60
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006a2c30
        mov     dword ptr [esi], 0x795024
        mov     eax, esi
        jmp     L_617bfe

L_6180a:
        push    0x64
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006609a0
        mov     dword ptr [esi], 0x795000
        mov     eax, esi
        jmp     L_617bfe

L_6183a:
        push    0x68
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006a2e50
        mov     dword ptr [esi], 0x794fdc
        mov     eax, esi
        jmp     L_617bfe

L_6186a:
        push    0x64
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660aa0
        mov     dword ptr [esi], 0x794fb8
        mov     eax, esi
        jmp     L_617bfe

L_6189a:
        push    0x64
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660b50
        mov     dword ptr [esi], 0x794f94
        mov     eax, esi
        jmp     L_617bfe

L_618ca:
        push    0x5c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660640
        mov     dword ptr [esi], 0x7950fc
        mov     eax, esi
        jmp     L_617bfe

L_618fa:
        push    0x4c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006a3590
        mov     dword ptr [esi], 0x794f70
        mov     eax, esi
        jmp     L_617bfe

L_6192a:
        push    0x68
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660c40
        mov     dword ptr [esi], 0x794f4c
        mov     eax, esi
        jmp     L_617bfe

L_6195a:
        push    0x3c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660700
        mov     dword ptr [esi], 0x7950b4
        mov     eax, esi
        jmp     L_617bfe

L_6198a:
        push    0x30
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006a3a80
        mov     dword ptr [esi], 0x7950d8
        mov     eax, esi
        jmp     L_617bfe

L_619ba:
        push    0x5c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660780
        mov     dword ptr [esi], 0x795090
        mov     eax, esi
        jmp     L_617bfe

L_619ea:
        push    0x38
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006a3b90
        mov     dword ptr [esi], 0x794f28
        mov     eax, esi
        jmp     L_617bfe

L_61a1a:
        push    0x60
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006a3d70
        mov     dword ptr [esi], 0x794f04
        mov     eax, esi
        jmp     L_617bfe

L_61a4a:
        push    0x34
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660d40
        mov     dword ptr [esi], 0x794ee0
        mov     eax, esi
        jmp     L_617bfe

L_61a7a:
        push    0x3c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660da0
        mov     dword ptr [esi], 0x794ebc
        mov     eax, esi
        jmp     L_617bfe

L_61aaa:
        push    0x5c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660e10
        mov     dword ptr [esi], 0x794e98
        mov     eax, esi
        jmp     L_617bfe

L_61ada:
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660ea0
        mov     dword ptr [esi], 0x794e74
        mov     eax, esi
        jmp     L_617bfe

L_61b0a:
        push    0x44
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006a4130
        mov     dword ptr [esi], 0x794e50
        mov     eax, esi
        jmp     L_617bfe

L_61b3a:
        push    0x34
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006a4320
        mov     dword ptr [esi], 0x7951f8
        mov     eax, esi
        jmp     L_617bfe

L_61b6a:
        push    0x34
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006a4650
        mov     dword ptr [esi], 0x795230
        mov     eax, esi
        jmp     L_617bfe

L_61b97:
        push    0x2c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00661c90
        mov     dword ptr [esi], 0x795260
        mov     eax, esi
        jmp     L_617bfe

L_61bc0:
        push    0x50
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_default
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00661cb0
        mov     dword ptr [esi], 0x79529c
        mov     eax, esi
        jmp     L_617bfe

L_61be9:
        push    0x2c
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_default
        mov     ecx, eax
        call    FUN_00660460

L_617bfe:
        test    eax, eax
        jnz     L_617c15
L_default:
        mov     esi, dword ptr [esp + 0x8]
        push    0
        push    0
        mov     ecx, esi
        call    FUN_00662e90
        mov     eax, esi
        pop     esi
        ret
L_617c15:
        mov     esi, dword ptr [esp + 0x8]
        push    0
        push    eax
        mov     ecx, esi
        call    FUN_00662e90
        mov     eax, esi
        pop     esi
        ret
    }
}
