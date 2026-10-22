/*
 * FUN_0065e630 (2127 B) — Large constructor that allocates and initializes
 * ~25 sub-objects (each: FUN_004084d0 alloc, optional ctor, vtable store,
 * then FUN_00662eb0/FUN_00662c60/FUN_00662b40 registration).
 *
 * __fastcall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00662c40(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00661da0(void);
extern void __cdecl FUN_00660640(void);
extern void __cdecl FUN_00662eb0(void);
extern void __cdecl FUN_00662c60(void);
extern void __cdecl FUN_005cb670(void);
extern void __cdecl FUN_006a3a80(void);
extern void __cdecl FUN_00660700(void);
extern void __cdecl FUN_00660780(void);
extern void __cdecl FUN_00660830(void);
extern void __cdecl FUN_006608d0(void);
extern void __cdecl FUN_006a2c30(void);
extern void __cdecl FUN_006609a0(void);
extern void __cdecl FUN_006a2e50(void);
extern void __cdecl FUN_00660aa0(void);
extern void __cdecl FUN_00660b50(void);
extern void __cdecl FUN_006a3590(void);
extern void __cdecl FUN_00660c40(void);
extern void __cdecl FUN_006a3b90(void);
extern void __cdecl FUN_006a3d70(void);
extern void __cdecl FUN_00660d40(void);
extern void __cdecl FUN_00660da0(void);
extern void __cdecl FUN_00660e10(void);
extern void __cdecl FUN_00660ea0(void);
extern void __cdecl FUN_006a4130(void);
extern void __cdecl FUN_00662b40(void);
extern void __cdecl FUN_00660010(void);
extern void __cdecl FUN_00662e90(void);
extern void __cdecl FUN_00660110(void);
extern void __cdecl FUN_00660210(void);
extern void __cdecl FUN_00660320(void);
extern void __cdecl FUN_00660460(void);

__declspec(naked) void *__fastcall FUN_0065e630(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        mov     ebx, ecx
        push    esi
        push    edi
        lea     eax, [esp + 0x13]
        lea     ebp, [ebx + 4]
        xor     edi, edi
        push    eax
        lea     ecx, [ebp + 4]
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [ebx], edi
        call    FUN_00662c40
        push    0x5c
        mov     dword ptr [ebp], 0x795120
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, edi
        jz      L_E67F
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_00660640
        mov     dword ptr [esi], 0x7950fc
        jmp     L_E681
L_E67F:
        xor     esi, esi
L_E681:
        push    edi
        push    0x1
        push    esi
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x18]
        and     eax, 0xfffffffc
        lea     esi, [ebx + 8]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x30
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_E6DC
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_006a3a80
        mov     dword ptr [ebx], 0x7950d8
        jmp     L_E6DE
L_E6DC:
        xor     ebx, ebx
L_E6DE:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x3c
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_E736
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_00660700
        mov     dword ptr [ebx], 0x7950b4
        jmp     L_E738
L_E736:
        xor     ebx, ebx
L_E738:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0xfffffffc
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x5c
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_E790
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_00660780
        mov     dword ptr [ebx], 0x795090
        jmp     L_E792
L_E790:
        xor     ebx, ebx
L_E792:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x64
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_E7EA
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_00660830
        mov     dword ptr [ebx], 0x79506c
        jmp     L_E7EC
L_E7EA:
        xor     ebx, ebx
L_E7EC:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x3c
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_E844
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_006608d0
        mov     dword ptr [ebx], 0x795048
        jmp     L_E846
L_E844:
        xor     ebx, ebx
L_E846:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0xfffffffc
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x60
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_E89E
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_006a2c30
        mov     dword ptr [ebx], 0x795024
        jmp     L_E8A0
L_E89E:
        xor     ebx, ebx
L_E8A0:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x64
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_E8F8
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_006609a0
        mov     dword ptr [ebx], 0x795000
        jmp     L_E8FA
L_E8F8:
        xor     ebx, ebx
L_E8FA:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x68
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_E952
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_006a2e50
        mov     dword ptr [ebx], 0x794fdc
        jmp     L_E954
L_E952:
        xor     ebx, ebx
L_E954:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0xfffffffc
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x64
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_E9AC
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_00660aa0
        mov     dword ptr [ebx], 0x794fb8
        jmp     L_E9AE
L_E9AC:
        xor     ebx, ebx
L_E9AE:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x64
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_EA06
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_00660b50
        mov     dword ptr [ebx], 0x794f94
        jmp     L_EA08
L_EA06:
        xor     ebx, ebx
L_EA08:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x4c
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_EA60
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_006a3590
        mov     dword ptr [ebx], 0x794f70
        jmp     L_EA62
L_EA60:
        xor     ebx, ebx
L_EA62:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0xfffffffc
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x68
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_EABA
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_00660c40
        mov     dword ptr [ebx], 0x794f4c
        jmp     L_EABC
L_EABA:
        xor     ebx, ebx
L_EABC:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x38
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_EB14
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_006a3b90
        mov     dword ptr [ebx], 0x794f28
        jmp     L_EB16
L_EB14:
        xor     ebx, ebx
L_EB16:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x60
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_EB6E
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_006a3d70
        mov     dword ptr [ebx], 0x794f04
        jmp     L_EB70
L_EB6E:
        xor     ebx, ebx
L_EB70:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0xfffffffc
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x34
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_EBC8
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_00660d40
        mov     dword ptr [ebx], 0x794ee0
        jmp     L_EBCA
L_EBC8:
        xor     ebx, ebx
L_EBCA:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x3c
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_EC22
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_00660da0
        mov     dword ptr [ebx], 0x794ebc
        jmp     L_EC24
L_EC22:
        xor     ebx, ebx
L_EC24:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    edx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x5c
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_EC7C
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_00660e10
        mov     dword ptr [ebx], 0x794e98
        jmp     L_EC7E
L_EC7C:
        xor     ebx, ebx
L_EC7E:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0xfffffffc
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x2c
        call    FUN_004084d0
        mov     ebx, eax
        add     esp, 4
        cmp     ebx, edi
        jz      L_ECD6
        mov     ecx, ebx
        call    FUN_00661da0
        lea     ecx, [ebx + 0x24]
        call    FUN_00660ea0
        mov     dword ptr [ebx], 0x794e74
        jmp     L_ECD8
L_ECD6:
        xor     ebx, ebx
L_ECD8:
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        mov     eax, dword ptr [esp + 0x14]
        lea     ecx, [esp + 0x18]
        and     eax, 0xfffffffc
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x18], edi
        mov     dword ptr [esp + 0x1c], eax
        call    FUN_00662c60
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x44
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, edi
        jz      L_ED30
        mov     ecx, esi
        call    FUN_00661da0
        lea     ecx, [esi + 0x24]
        call    FUN_006a4130
        mov     dword ptr [esi], 0x794e50
        jmp     L_ED32
L_ED30:
        xor     esi, esi
L_ED32:
        push    edi
        push    0x1
        push    esi
        lea     ecx, [esp + 0x20]
        call    FUN_00662eb0
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, ebp
        call    FUN_00662b40
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x34
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_ED6B
        mov     ecx, eax
        call    FUN_00660010
        jmp     L_ED6D
L_ED6B:
        xor     eax, eax
L_ED6D:
        push    edi
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00662e90
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, ebp
        call    FUN_00662b40
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x34
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_EDA4
        mov     ecx, eax
        call    FUN_00660110
        jmp     L_EDA6
L_EDA4:
        xor     eax, eax
L_EDA6:
        push    edi
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00662e90
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, ebp
        call    FUN_00662b40
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x2c
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_EDDD
        mov     ecx, eax
        call    FUN_00660210
        jmp     L_EDDF
L_EDDD:
        xor     eax, eax
L_EDDF:
        push    edi
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00662e90
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, ebp
        call    FUN_00662b40
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x50
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_EE16
        mov     ecx, eax
        call    FUN_00660320
        jmp     L_EE18
L_EE16:
        xor     eax, eax
L_EE18:
        push    edi
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00662e90
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, ebp
        call    FUN_00662b40
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        push    0x2c
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_EE4F
        mov     ecx, eax
        call    FUN_00660460
        jmp     L_EE51
L_EE4F:
        xor     eax, eax
L_EE51:
        push    edi
        push    eax
        lea     ecx, [esp + 0x1c]
        call    FUN_00662e90
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, ebp
        call    FUN_00662b40
        lea     ecx, [esp + 0x14]
        call    FUN_005cb670
        mov     eax, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
