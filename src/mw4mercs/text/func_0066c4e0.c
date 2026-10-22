/* FUN_0066c4e0 - HUD constructor (5249 B) */

extern int dword_7DDDE0;          /* 0x007ddde0 */
extern int __imp__sprintf;        /* 0x0076b420 sprintf IAT */
extern float dbl_797148;          /* 0x00797148 */
extern float dbl_79714C;          /* 0x0079714c */
extern float flt_76D070;          /* 0x0076d070 */
extern float flt_78816C;          /* 0x0078816c */

extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_005614d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_00640fa0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00560aa0(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_00560420(void);
extern void __cdecl FUN_0055f510(void);

__declspec(naked) void func_0066c4e0(void)
{
    __asm {
        sub esp, 0x80
        mov eax, dword ptr [dword_7DDDE0]
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        push eax
        call FUN_00561430
        push 0x43800000
        push 0x43800000
        push 0x41f00000
        push 0x42540000
        push 0x41200000
        push 0x40e00000
        push 0x2
        xor ebp, ebp
        push 0x78f198
        mov ecx, esi
        mov dword ptr [esi], 0x797180
        mov dword ptr [esi + 0x34], 0xff00fa00
        mov dword ptr [esi + 0x8c], ebp
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x41f00000
        push 0x42540000
        push 0x41200000
        push 0x40e00000
        push 0x3
        push 0x78f198
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x41f00000
        push 0x42540000
        push 0x41200000
        push 0x40e00000
        push 0x4
        push 0x78f198
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x41f00000
        push 0x42540000
        push 0x41200000
        push 0x40e00000
        push 0x5
        push 0x78f198
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x41f00000
        push 0x42540000
        push 0x41200000
        push 0x40e00000
        push 0x6
        push 0x78f198
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x41f00000
        push 0x42540000
        push 0x41200000
        push 0x40e00000
        push 0x7
        push 0x78f198
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x42dc0000
        push 0x43640000
        push 0x42680000
        push 0x43300000
        push 0x8
        push 0x792448
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x42da0000
        push 0x432a0000
        push 0x426c0000
        push 0x42ee0000
        push 0x9
        push 0x792448
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x42500000
        push 0x43630000
        push ebp
        push 0x432f0000
        push 0xa
        push 0x792448
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x42440000
        push 0x43280000
        push 0x42080000
        push 0x42f20000
        push 0x1e
        push 0x792448
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x42440000
        push 0x43280000
        push 0x42080000
        push 0x42f20000
        push 0x1f
        push 0x792448
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x42440000
        push 0x43280000
        push 0x42080000
        push 0x42f20000
        push 0x20
        push 0x792448
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x42440000
        push 0x43280000
        push 0x42080000
        push 0x42f20000
        push 0x21
        push 0x792448
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x42000000
        push 0x43280000
        push 0x41900000
        push 0x42f20000
        push 0x22
        push 0x792448
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x42000000
        push 0x43280000
        push 0x41900000
        push 0x42f20000
        push 0x23
        push 0x792448
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x42000000
        push 0x43280000
        push 0x41900000
        push 0x42f20000
        push 0x24
        push 0x792448
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x42000000
        push 0x43280000
        push 0x41900000
        push 0x42f20000
        push 0x25
        push 0x792448
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x430d0000
        push 0x41d00000
        push 0x43060000
        push 0x41a00000
        push 0x14
        push 0x78f198
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x430d0000
        push 0x42040000
        push 0x43060000
        push 0x41d80000
        push 0x15
        push 0x78f198
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x430d0000
        push 0x42200000
        push 0x43060000
        push 0x42080000
        push 0x16
        push 0x78f198
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x43160000
        push 0x41d00000
        push 0x430e0000
        push 0x41a00000
        push 0x17
        push 0x78f198
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x43160000
        push 0x42040000
        push 0x430e0000
        push 0x41d80000
        push 0x18
        push 0x78f198
        mov ecx, esi
        call FUN_005614d0
        push 0x43800000
        push 0x43800000
        push 0x43160000
        push 0x42200000
        push 0x430e0000
        push 0x42080000
        push 0x19
        push 0x78f198
        mov ecx, esi
        call FUN_005614d0
        mov dword ptr [esp + 0x2c], 0x3f000000
        lea ecx, [esp + 0x2c]
        push ecx
        lea ecx, [esi + 0x14]
        mov dword ptr [esp + 0x34], 0x3f000000
        mov dword ptr [esp + 0x38], 0x3f666666
        call FUN_0040c410
        lea edx, [esp + 0x10]
        push edx
        lea eax, [esp + 0x24]
        lea edi, [esi + 0x38]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0x1e
        call FUN_00561df0
        mov ecx, dword ptr [eax]
        lea edx, [esp + 0x24]
        mov dword ptr [esp + 0x14], ecx
        push edx
        mov ecx, edi
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x14]
        cmp eax, dword ptr [ecx]
        jz L_66C962
        mov edx, dword ptr [esp + 0x10]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66C999
L_66C962:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x1c]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x30]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x14], eax
L_66C999:
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x2c]
        mov ebx, 0x41c00000
        mov dword ptr [eax + 0x28], ebx
        mov dword ptr [eax + 0x2c], 0xc1b80000
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x1f
        call FUN_00561df0
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [edx]
        jz L_66C9E9
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66CA20
L_66C9E9:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66CA20:
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x2c]
        mov dword ptr [eax + 0x28], ebx
        mov dword ptr [eax + 0x2c], 0xc1b80000
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x20
        call FUN_00561df0
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [edx]
        jz L_66CA6B
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66CAA2
L_66CA6B:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66CAA2:
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x2c]
        mov dword ptr [eax + 0x28], ebx
        mov dword ptr [eax + 0x2c], 0xc1b80000
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x21
        call FUN_00641010
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edi]
        mov dword ptr [esp + 0x10], eax
        jz L_66CADB
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66CB12
L_66CADB:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66CB12:
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x2c]
        mov dword ptr [eax + 0x28], ebx
        mov dword ptr [eax + 0x2c], 0xc1b80000
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x22
        call FUN_00641010
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edi]
        mov dword ptr [esp + 0x10], eax
        jz L_66CB4B
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66CB82
L_66CB4B:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66CB82:
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x2c]
        mov dword ptr [eax + 0x28], ebx
        mov dword ptr [eax + 0x2c], 0xc1a80000
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x23
        call FUN_00641010
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [edi]
        mov dword ptr [esp + 0x10], eax
        jz L_66CBBB
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66CBF2
L_66CBBB:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66CBF2:
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x2c]
        mov dword ptr [eax + 0x28], ebx
        mov dword ptr [eax + 0x2c], 0xc1a80000
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0x24
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x18], eax
        call FUN_00641000
        mov edx, eax
        mov ecx, dword ptr [edx]
        mov eax, dword ptr [esp + 0x14]
        cmp eax, ecx
        mov ecx, dword ptr [esp + 0x10]
        jz L_66CC3F
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66CC6B
L_66CC3F:
        lea eax, [esp + 0x18]
        push eax
        push ecx
        mov dword ptr [esp + 0x20], ecx
        lea edx, [esp + 0x1c]
        mov ecx, esp
        push edx
        mov dword ptr [esp + 0x28], ebp
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x14], eax
L_66CC6B:
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x2c]
        mov dword ptr [eax + 0x28], ebx
        mov dword ptr [eax + 0x2c], 0xc1a80000
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x18], 0x25
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x18], eax
        call FUN_00641000
        mov edx, eax
        mov ecx, dword ptr [edx]
        mov eax, dword ptr [esp + 0x14]
        cmp eax, ecx
        mov ecx, dword ptr [esp + 0x10]
        jz L_66CCB8
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66CCE4
L_66CCB8:
        lea eax, [esp + 0x18]
        push eax
        push ecx
        mov dword ptr [esp + 0x20], ecx
        lea edx, [esp + 0x1c]
        mov ecx, esp
        push edx
        mov dword ptr [esp + 0x28], ebp
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x14], eax
L_66CCE4:
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x2c]
        mov dword ptr [eax + 0x28], ebx
        mov dword ptr [eax + 0x2c], 0xc1a80000
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x1f
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [edx]
        jz L_66CD2F
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66CD66
L_66CD2F:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66CD66:
        mov ecx, dword ptr [dbl_797148]
        push ecx
        mov ecx, dword ptr [eax + 0x14]
        call FUN_0055f510
        lea edx, [esp + 0x14]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x20
        call FUN_00641010
        mov ecx, dword ptr [eax]
        lea edx, [esp + 0x24]
        mov dword ptr [esp + 0x10], ecx
        push edx
        mov ecx, edi
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [ecx]
        jz L_66CDB3
        mov edx, dword ptr [esp + 0x14]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66CDEA
L_66CDB3:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66CDEA:
        mov ecx, dword ptr [dbl_79714C]
        push ecx
        mov ecx, dword ptr [eax + 0x14]
        call FUN_0055f510
        lea edx, [esp + 0x14]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x21
        call FUN_00641010
        mov ecx, dword ptr [eax]
        lea edx, [esp + 0x24]
        mov dword ptr [esp + 0x10], ecx
        push edx
        mov ecx, edi
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [ecx]
        jz L_66CE37
        mov edx, dword ptr [esp + 0x14]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66CE6E
L_66CE37:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66CE6E:
        fld dword ptr [dbl_79714C]
        push ecx
        fadd dword ptr [dbl_797148]
        mov ecx, dword ptr [eax + 0x14]
        fstp dword ptr [esp]
        call FUN_0055f510
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x2c]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x23
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [edx]
        jz L_66CEC4
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66CEFB
L_66CEC4:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66CEFB:
        mov ecx, dword ptr [dbl_797148]
        push ecx
        mov ecx, dword ptr [eax + 0x14]
        call FUN_0055f510
        lea edx, [esp + 0x14]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x24
        call FUN_00641010
        mov ecx, dword ptr [eax]
        lea edx, [esp + 0x24]
        mov dword ptr [esp + 0x10], ecx
        push edx
        mov ecx, edi
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [ecx]
        jz L_66CF48
        mov edx, dword ptr [esp + 0x14]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66CF7F
L_66CF48:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66CF7F:
        mov ecx, dword ptr [dbl_79714C]
        push ecx
        mov ecx, dword ptr [eax + 0x14]
        call FUN_0055f510
        lea edx, [esp + 0x14]
        push edx
        lea eax, [esp + 0x2c]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x25
        call FUN_00641010
        mov ecx, dword ptr [eax]
        lea edx, [esp + 0x24]
        mov dword ptr [esp + 0x10], ecx
        push edx
        mov ecx, edi
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [ecx]
        jz L_66CFCC
        mov edx, dword ptr [esp + 0x14]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66D003
L_66CFCC:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66D003:
        fld dword ptr [dbl_79714C]
        push ecx
        fadd dword ptr [dbl_797148]
        mov ecx, dword ptr [eax + 0x14]
        fstp dword ptr [esp]
        call FUN_0055f510
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x2c]
        mov ebx, 0x8
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], ebx
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [edx]
        jz L_66D05A
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66D091
L_66D05A:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66D091:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        lea ecx, [esp + 0x44]
        fsub dword ptr [eax + 0x4]
        push ecx
        lea ecx, [esp + 0x54]
        fmul dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x50], 0x0
        fstp dword ptr [esp + 0x48]
        fld dword ptr [eax + 0x10]
        fsub dword ptr [eax + 0x8]
        fmul dword ptr [eax + 0x18]
        fstp dword ptr [esp + 0x4c]
        call FUN_0040c5d0
        lea edx, [esp + 0x50]
        push edx
        lea ecx, [esp + 0x3c]
        call FUN_0040c410
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], ebx
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x24]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x14], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [ecx]
        jz L_66D10C
        mov edx, dword ptr [esp + 0x14]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66D143
L_66D10C:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66D143:
        fld dword ptr [esp + 0x3c]
        mov eax, dword ptr [eax + 0x14]
        fmul dword ptr [flt_76D070]
        lea ecx, [esp + 0x14]
        fld dword ptr [esp + 0x38]
        push ecx
        fmul dword ptr [flt_76D070]
        lea edx, [esp + 0x2c]
        mov ebx, 0x9
        push edx
        fstp dword ptr [eax + 0x28]
        mov ecx, edi
        fstp dword ptr [eax + 0x2c]
        mov dword ptr [esp + 0x1c], ebx
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [edx]
        jz L_66D19F
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66D1D6
L_66D19F:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66D1D6:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        lea ecx, [esp + 0x44]
        fsub dword ptr [eax + 0x4]
        push ecx
        lea ecx, [esp + 0x54]
        fmul dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x50], 0x0
        fstp dword ptr [esp + 0x48]
        fld dword ptr [eax + 0x10]
        fsub dword ptr [eax + 0x8]
        fmul dword ptr [eax + 0x18]
        fstp dword ptr [esp + 0x4c]
        call FUN_0040c5d0
        lea edx, [esp + 0x50]
        push edx
        lea ecx, [esp + 0x3c]
        call FUN_0040c410
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], ebx
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x24]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x14], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [ecx]
        jz L_66D251
        mov edx, dword ptr [esp + 0x14]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66D288
L_66D251:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66D288:
        fld dword ptr [esp + 0x3c]
        mov eax, dword ptr [eax + 0x14]
        fmul dword ptr [flt_76D070]
        lea ecx, [esp + 0x14]
        fld dword ptr [esp + 0x38]
        push ecx
        fmul dword ptr [flt_76D070]
        lea edx, [esp + 0x2c]
        mov ebx, 0xa
        push edx
        fstp dword ptr [eax + 0x28]
        mov ecx, edi
        fstp dword ptr [eax + 0x2c]
        mov dword ptr [esp + 0x1c], ebx
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [edx]
        jz L_66D2E4
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66D31B
L_66D2E4:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66D31B:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        lea ecx, [esp + 0x44]
        fsub dword ptr [eax + 0x4]
        push ecx
        lea ecx, [esp + 0x54]
        fmul dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x50], 0x0
        fstp dword ptr [esp + 0x48]
        fld dword ptr [eax + 0x10]
        fsub dword ptr [eax + 0x8]
        fmul dword ptr [eax + 0x18]
        fstp dword ptr [esp + 0x4c]
        call FUN_0040c5d0
        lea edx, [esp + 0x50]
        push edx
        lea ecx, [esp + 0x3c]
        call FUN_0040c410
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0x2c]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], ebx
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x24]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x14], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [ecx]
        jz L_66D396
        mov edx, dword ptr [esp + 0x14]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66D3CD
L_66D396:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x18]
        push ecx
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66D3CD:
        fld dword ptr [esp + 0x3c]
        mov eax, dword ptr [eax + 0x14]
        fmul dword ptr [flt_76D070]
        lea ecx, [esp + 0x14]
        fld dword ptr [esp + 0x38]
        push ecx
        fmul dword ptr [flt_76D070]
        lea edx, [esp + 0x2c]
        push edx
        mov ecx, edi
        fstp dword ptr [eax + 0x28]
        fstp dword ptr [eax + 0x2c]
        mov dword ptr [esp + 0x1c], 0x2
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [edx]
        jz L_66D428
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66D45F
L_66D428:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66D45F:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        lea ecx, [esp + 0x44]
        fsub dword ptr [eax + 0x4]
        push ecx
        lea ecx, [esp + 0x54]
        fmul dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x50], 0x0
        fstp dword ptr [esp + 0x48]
        fld dword ptr [eax + 0x10]
        fsub dword ptr [eax + 0x8]
        fmul dword ptr [eax + 0x18]
        fstp dword ptr [esp + 0x4c]
        call FUN_0040c5d0
        lea edx, [esp + 0x50]
        push edx
        lea ecx, [esp + 0x3c]
        call FUN_0040c410
        push 0x138
        call FUN_004084d0
        add esp, 0x4
        cmp eax, ebp
        jz L_66D4BE
        mov ecx, eax
        call FUN_00560aa0
        mov dword ptr [esp + 0x10], eax
        jmp L_66D4C4
L_66D4BE:
        mov dword ptr [esp + 0x10], ebp
        mov eax, ebp
L_66D4C4:
        mov edx, dword ptr [eax]
        mov ebx, 0x1
        push ebx
        mov ecx, eax
        mov dword ptr [esi + 0x80], eax
        call dword ptr [edx + 0x4]
        push 0x138
        call FUN_004084d0
        add esp, 0x4
        cmp eax, ebp
        jz L_66D4F6
        push ebp
        mov ecx, eax
        call FUN_00560190
        mov dword ptr [esp + 0x14], eax
        jmp L_66D4FA
L_66D4F6:
        mov dword ptr [esp + 0x14], ebp
L_66D4FA:
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x10]
        push ebp
        lea edx, [esp + 0x60]
        push 0x78d060
        push edx
        mov dword ptr [esi + 0x84], eax
        mov dword ptr [ecx + 0x10c], ebp
        call dword ptr [__imp__sprintf]
        mov ecx, dword ptr [esp + 0x1c]
        add esp, 0xc
        push ebp
        push ebp
        lea eax, [esp + 0x64]
        push eax
        call FUN_00560420
        mov ecx, dword ptr [esp + 0x14]
        push ebp
        push ebp
        push 0x76b768
        mov dword ptr [esi + 0x88], ebp
        call FUN_00560420
        lea ecx, [esp + 0x14]
        push ecx
        lea edx, [esp + 0x2c]
        mov dword ptr [esi + 0x50], ebp
        push edx
        mov ecx, edi
        mov dword ptr [esi + 0x54], ebp
        mov dword ptr [esi + 0x58], ebp
        mov dword ptr [esi + 0x5c], 0xff00fa00
        mov dword ptr [esi + 0x60], 0xff0000ff
        mov dword ptr [esi + 0x64], 0xffff0000
        mov dword ptr [esi + 0x68], ebp
        mov dword ptr [esi + 0x70], ebx
        mov dword ptr [esi + 0x6c], 0x40c00000
        mov dword ptr [esi + 0x7c], ebp
        mov dword ptr [esi + 0xb8], 0x64
        mov dword ptr [esi + 0x74], ebp
        mov dword ptr [esi + 0x78], ebp
        mov dword ptr [esp + 0x1c], 0x2
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x24]
        push ecx
        mov ecx, edi
        mov dword ptr [esp + 0x14], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x10]
        cmp eax, dword ptr [edx]
        jz L_66D5C4
        mov ecx, dword ptr [esp + 0x14]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66D5FB
L_66D5C4:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x34]
        mov dword ptr [esp + 0x20], ebp
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x18]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x28]
        push eax
        mov ecx, edi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x10], eax
L_66D5FB:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [esi + 0x6c]
        mov ecx, dword ptr [esi + 0x6c]
        fstp dword ptr [eax + 0x30]
        fld dword ptr [esi + 0x6c]
        mov edx, ecx
        fstp dword ptr [eax + 0x34]
        lea eax, [esp + 0x18]
        mov dword ptr [esp + 0x10], ecx
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x3
        mov dword ptr [esp + 0x18], edx
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x30], ecx
        mov dword ptr [eax + 0x34], edx
        mov eax, dword ptr [esi + 0x6c]
        mov ecx, eax
        lea edx, [esp + 0x18]
        mov dword ptr [esp + 0x14], ecx
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x4
        mov dword ptr [esp + 0x14], eax
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x30], ecx
        mov dword ptr [eax + 0x34], edx
        mov eax, dword ptr [esi + 0x6c]
        mov ecx, eax
        lea edx, [esp + 0x18]
        mov dword ptr [esp + 0x14], ecx
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x5
        mov dword ptr [esp + 0x14], eax
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x30], ecx
        mov dword ptr [eax + 0x34], edx
        mov eax, dword ptr [esi + 0x6c]
        mov ecx, eax
        lea edx, [esp + 0x18]
        mov dword ptr [esp + 0x14], ecx
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x6
        mov dword ptr [esp + 0x14], eax
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x30], ecx
        mov dword ptr [eax + 0x34], edx
        mov eax, dword ptr [esi + 0x6c]
        mov ecx, eax
        lea edx, [esp + 0x18]
        mov dword ptr [esp + 0x14], ecx
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x7
        mov dword ptr [esp + 0x14], eax
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x30], ecx
        mov dword ptr [eax + 0x34], edx
        fld dword ptr [esp + 0x3c]
        fadd dword ptr [flt_78816C]
        mov dword ptr [esp + 0x18], 0x2
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x38]
        lea eax, [esp + 0x18]
        fmul dword ptr [flt_76D070]
        push eax
        mov ecx, edi
        fstp dword ptr [esp + 0x18]
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0x2c], edx
        fld dword ptr [esp + 0x3c]
        fadd dword ptr [flt_78816C]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, edi
        fstp dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x1c], 0x3
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [flt_76D070]
        fstp dword ptr [esp + 0x18]
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0x2c], edx
        fld dword ptr [esp + 0x3c]
        fadd dword ptr [flt_78816C]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, edi
        fstp dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x1c], 0x4
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [flt_76D070]
        fstp dword ptr [esp + 0x18]
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0x2c], edx
        fld dword ptr [esp + 0x3c]
        fadd dword ptr [flt_78816C]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, edi
        fstp dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x1c], 0x5
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [flt_76D070]
        fstp dword ptr [esp + 0x18]
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0x2c], edx
        fld dword ptr [esp + 0x3c]
        fadd dword ptr [flt_78816C]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, edi
        fstp dword ptr [esp + 0x14]
        mov dword ptr [esp + 0x1c], 0x6
        fld dword ptr [esp + 0x3c]
        fmul dword ptr [flt_76D070]
        fstp dword ptr [esp + 0x18]
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        mov edx, dword ptr [esp + 0x10]
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0x2c], edx
        fld dword ptr [esp + 0x3c]
        fadd dword ptr [flt_78816C]
        mov dword ptr [esp + 0x18], 0x7
        fstp dword ptr [esp + 0x10]
        fld dword ptr [esp + 0x38]
        fmul dword ptr [flt_76D070]
        lea eax, [esp + 0x18]
        push eax
        mov ecx, edi
        fstp dword ptr [esp + 0x18]
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax + 0x28], ecx
        mov dword ptr [eax + 0x2c], edx
        lea eax, [esp + 0x18]
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x2
        call FUN_00640fa0
        mov ecx, dword ptr [eax]
        mov byte ptr [ecx + 0x40], bl
        lea edx, [esp + 0x18]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x3
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x18]
        push ecx
        mov byte ptr [eax + 0x40], bl
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x4
        call FUN_00640fa0
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x18]
        mov byte ptr [edx + 0x40], bl
        push eax
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x5
        call FUN_00640fa0
        mov ecx, dword ptr [eax]
        mov byte ptr [ecx + 0x40], bl
        lea edx, [esp + 0x18]
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x6
        call FUN_00640fa0
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x18]
        push ecx
        mov byte ptr [eax + 0x40], bl
        mov ecx, edi
        mov dword ptr [esp + 0x1c], 0x7
        call FUN_00640fa0
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esi + 0x34]
        mov dword ptr [esi + 0x90], ebp
        pop edi
        mov dword ptr [esi + 0x98], eax
        mov dword ptr [esi + 0x9c], eax
        mov dword ptr [esi + 0xa0], eax
        mov dword ptr [esi + 0xa4], eax
        mov dword ptr [esi + 0x94], ebp
        mov dword ptr [esi + 0xa8], ebp
        mov dword ptr [esi + 0xac], ebp
        mov dword ptr [esi + 0xb0], ebp
        mov dword ptr [esi + 0xb4], ebp
        mov eax, esi
        pop esi
        pop ebp
        mov byte ptr [edx + 0x40], bl
        pop ebx
        add esp, 0x80
        ret
    }
}
