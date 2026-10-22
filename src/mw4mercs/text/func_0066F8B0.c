/* FUN_0066F8B0 - 0x0066F8B0, size 4784 B (block 0x66F86D, fn at +0x43)
 * __thiscall (ecx=this), RET 0. HUD target-box layout/placement routine:
 * builds a vector from [ebx+0x14]/[ebx+0x20] with per-axis clamp (fcomp
 * vs 0x76d064 then fmul 0x77dff8/0x77dff4), walks the HUD element set
 * (esi=[ebx+0x38]) via the 641010/641000/641050 lookup family, then for
 * each candidate object in [ebp+0x3d4]->[+0x17c] (a sprite list) computes
 * world->screen offsets and calls the 66f830/66f850 helper + 75db4a text
 * color/blend to draw the box. Two matching pass loops (0x67095c and
 * 0x670a66) over an array built by FUN_004f8790.
 */
#include <windows.h>

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0041afd0(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_00641010(void);
extern void __cdecl FUN_00641000(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_0055f5b0(void);
extern void __cdecl FUN_0055f510(void);
extern void __cdecl FUN_00767550(void);
extern void __cdecl FUN_0066f850(void);
extern void __cdecl FUN_0066f830(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0055e5c0(void);
extern void __cdecl FUN_0055eed0(void);
extern void __cdecl FUN_00670b60(void);
extern void __cdecl FUN_00645870(void);
extern void __cdecl FUN_00670c70(void);
extern void __cdecl FUN_004f8790(void);
extern void __cdecl FUN_004f86c0(void);
extern void __cdecl FUN_00423b30(void);

/* extern data symbols (absolute addresses) */
extern float g_76d064;      /* 0x0076d064 */
extern float g_77dff8;      /* 0x0077dff8 */
extern float g_77dff4;      /* 0x0077dff4 */
extern float g_80da58;      /* 0x0080da58 */
extern float g_80da60;      /* 0x0080da60 */
extern float g_80da54;      /* 0x0080da54 */
extern float g_80da5c;      /* 0x0080da5c */
extern float g_76d070;      /* 0x0076d070 */
extern float g_7971b0;      /* 0x007971b0 */
extern float g_76d5f0;      /* 0x0076d5f0 */
extern float g_7971e8;      /* 0x007971e8 */
extern int g_7dab44;        /* 0x007dab44 */
extern int g_7dab40;        /* 0x007dab40 */

__declspec(naked) void func_0066F8B0(void)
{
    __asm {
        sub esp, 0x25c
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        lea ecx, [ebx + 0xc]
        mov dword ptr [esp + 0x34], ebx
        call FUN_0041fd80
        mov ebp, eax
        lea eax, [ebx + 0x14]
        push eax
        lea ecx, [esp + 0x48]
        mov dword ptr [esp + 0x90], ebp
        call FUN_0040ccd0
        fld dword ptr [esp + 0x44]
        fcomp dword ptr [g_76d064]
        fnstsw ax
        test ah, 0x41
        je L_66f8fd
        fld dword ptr [esp + 0x44]
        fmul dword ptr [g_77dff8]
        fstp dword ptr [esp + 0x44]
L_66f8fd:
        fld dword ptr [esp + 0x48]
        fcomp dword ptr [g_76d064]
        fnstsw ax
        test ah, 0x41
        je L_66f91c
        fld dword ptr [esp + 0x48]
        fmul dword ptr [g_77dff4]
        fstp dword ptr [esp + 0x48]
L_66f91c:
        lea ecx, [esp + 0x44]
        push ecx
        lea ecx, [esp + 0xa8]
        call FUN_0040c5d0
        lea edx, [esp + 0xa4]
        push edx
        lea ecx, [esp + 0x58]
        call FUN_0040c410
        lea eax, [ebx + 0x20]
        push eax
        lea ecx, [esp + 0x48]
        call FUN_0040ccd0
        fld dword ptr [esp + 0x44]
        fcomp dword ptr [g_76d064]
        fnstsw ax
        test ah, 0x41
        je L_66f96a
        fld dword ptr [esp + 0x44]
        fmul dword ptr [g_77dff8]
        fstp dword ptr [esp + 0x44]
L_66f96a:
        fld dword ptr [esp + 0x48]
        fcomp dword ptr [g_76d064]
        fnstsw ax
        test ah, 0x41
        je L_66f989
        fld dword ptr [esp + 0x48]
        fmul dword ptr [g_77dff4]
        fstp dword ptr [esp + 0x48]
L_66f989:
        lea ecx, [esp + 0x44]
        push ecx
        lea ecx, [esp + 0xa8]
        call FUN_0040c5d0
        lea edx, [esp + 0xa4]
        push edx
        lea ecx, [esp + 0x64]
        call FUN_0040c410
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x40]
        lea esi, [ebx + 0x38]
        push ecx
        xor edi, edi
        mov ecx, esi
        mov dword ptr [esp + 0x18], edi
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x30]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x18], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x14]
        cmp eax, dword ptr [ecx]
        je L_66f9ea
        mov edx, dword ptr [esp + 0x10]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66fa24
L_66f9ea:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0xc4]
        mov dword ptr [esp + 0x20], edi
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x1c]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x40]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x14], eax
L_66fa24:
        push 1
        push edi
        push -1
        lea ecx, [esp + 0x6c]
        push ecx
        mov ecx, dword ptr [eax + 0x14]
        lea edx, [esp + 0x64]
        push edx
        call FUN_0055f5b0
        cmp ebp, edi
        je L_670b51
        cmp dword ptr [ebp + 0x3d4], edi
        je L_670b51
        mov eax, dword ptr [ebp + 0x410]
        mov edx, dword ptr [ebp + 0x40c]
        sub eax, edx
        sar eax, 2
        je L_670b51
        mov ecx, edx
        cmp dword ptr [ecx], edi
        je L_670b51
        fld dword ptr [g_80da58]
        lea ecx, [esp + 0x25c]
        fsub dword ptr [g_80da60]
        fdivr dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x50]
        fld dword ptr [g_80da54]
        fsub dword ptr [g_80da5c]
        fdivr dword ptr [esp + 0x64]
        fstp dword ptr [esp + 0x40]
        fld dword ptr [esp + 0x60]
        fmul dword ptr [g_76d070]
        fadd dword ptr [esp + 0x54]
        fstp dword ptr [esp + 0x54]
        fld dword ptr [esp + 0x64]
        fmul dword ptr [g_76d070]
        fadd dword ptr [esp + 0x58]
        fstp dword ptr [esp + 0x58]
        mov eax, dword ptr [ebp + 0xd8]
        lea edi, [eax + 0x80]
        push edi
        call FUN_0041afd0
        lea edx, [esp + 0x19c]
        push edx
        mov ecx, edi
        call FUN_00428730
        lea eax, [esp + 0x19c]
        push eax
        lea ecx, [esp + 0xe4]
        call FUN_00767550
        fld dword ptr [esp + 0xe0]
        fsub dword ptr [g_7971b0]
        fstp dword ptr [esp + 0xe0]
        mov eax, dword ptr [ebp + 0xd8]
        mov ecx, dword ptr [eax + 0x8c]
        add eax, 0x80
        mov dword ptr [esp + 0x24], ecx
        fld dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x50]
        mov edx, dword ptr [eax + 0x1c]
        mov dword ptr [esp + 0x28], edx
        mov eax, dword ptr [eax + 0x2c]
        fadd dword ptr [esp + 0x54]
        mov dword ptr [esp + 0x2c], eax
        lea ecx, [esp + 0x24]
        fstp dword ptr [esp + 0x24]
        push ecx
        fld dword ptr [esp + 0x30]
        mov ecx, ebx
        fmul dword ptr [esp + 0x44]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x2c]
        call FUN_0066f850
        lea edx, [esp + 0x10]
        push edx
        lea eax, [esp + 0x40]
        mov edi, 0x10
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x18], edi
        call FUN_00641010
        mov ecx, dword ptr [eax]
        lea edx, [esp + 0x30]
        mov dword ptr [esp + 0x14], ecx
        push edx
        mov ecx, esi
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x14]
        cmp eax, dword ptr [ecx]
        je L_66fb9a
        mov edx, dword ptr [esp + 0x10]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66fbd8
L_66fb9a:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0xc4]
        mov dword ptr [esp + 0x20], 0
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x1c]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x40]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x14], eax
L_66fbd8:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        lea ecx, [esp + 0x44]
        fsub dword ptr [eax + 4]
        push ecx
        lea ecx, [esp + 0xa8]
        fmul dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x50], 0
        fstp dword ptr [esp + 0x48]
        fld dword ptr [eax + 0x10]
        fsub dword ptr [eax + 8]
        fmul dword ptr [eax + 0x18]
        fstp dword ptr [esp + 0x4c]
        call FUN_0040c5d0
        lea edx, [esp + 0xa4]
        push edx
        lea ecx, [esp + 0x64]
        call FUN_0040c410
        lea eax, [esp + 0x10]
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x18], edi
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x30]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x18], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x14]
        cmp eax, dword ptr [ecx]
        je L_66fc59
        mov edx, dword ptr [esp + 0x10]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66fc97
L_66fc59:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0xc4]
        mov dword ptr [esp + 0x20], 0
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x1c]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x40]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x14], eax
L_66fc97:
        mov ecx, dword ptr [eax + 0x14]
        lea edx, [esp + 0x10]
        mov byte ptr [ecx + 0x40], 1
        push edx
        lea eax, [esp + 0x40]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x18], edi
        call FUN_00641010
        mov ecx, dword ptr [eax]
        lea edx, [esp + 0x30]
        mov dword ptr [esp + 0x14], ecx
        push edx
        mov ecx, esi
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x14]
        cmp eax, dword ptr [ecx]
        je L_66fcd8
        mov edx, dword ptr [esp + 0x10]
        cmp edx, dword ptr [eax + 0x10]
        jge L_66fd16
L_66fcd8:
        lea eax, [esp + 0x18]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0xc4]
        mov dword ptr [esp + 0x20], 0
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x1c]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x40]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x14], eax
L_66fd16:
        mov eax, dword ptr [eax + 0x14]
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x40]
        mov dword ptr [eax + 0x28], 0x41e80000
        mov dword ptr [eax + 0x2c], 0x426c0000
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x18], edi
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x18], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x14]
        cmp eax, dword ptr [edx]
        je L_66fd61
        mov ecx, dword ptr [esp + 0x10]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66fd9f
L_66fd61:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0xc4]
        mov dword ptr [esp + 0x20], 0
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x1c]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x40]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x14], eax
L_66fd9f:
        fld dword ptr [g_7971b0]
        push ecx
        fsub dword ptr [esp + 0xe4]
        mov ecx, dword ptr [eax + 0x14]
        fsub dword ptr [ebx + 0x60]
        fstp dword ptr [esp]
        call FUN_0055f510
        fld dword ptr [esp + 0x28]
        push 0x3f666666
        push ecx
        fstp dword ptr [esp]
        fld dword ptr [esp + 0x2c]
        push ecx
        fstp dword ptr [esp]
        lea ecx, [esp + 0xb0]
        mov dword ptr [esp + 0x1c], edi
        call FUN_0040c9c0
        lea ecx, [esp + 0x10]
        push ecx
        lea edx, [esp + 0x40]
        push edx
        mov ecx, esi
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x30]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x18], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x14]
        cmp eax, dword ptr [edx]
        je L_66fe16
        mov ecx, dword ptr [esp + 0x10]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_66fe54
L_66fe16:
        lea edx, [esp + 0x18]
        push edx
        lea eax, [esp + 0x14]
        push eax
        lea ecx, [esp + 0xc4]
        mov dword ptr [esp + 0x20], 0
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x1c]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x40]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x14], eax
L_66fe54:
        push 1
        push 0
        push 0x9600ff00
        lea ecx, [esp + 0x6c]
        push ecx
        mov ecx, dword ptr [eax + 0x14]
        lea edx, [esp + 0xb4]
        push edx
        call FUN_0055f5b0
        fld dword ptr [esp + 0x28]
        fadd dword ptr [g_76d5f0]
        push 0xff0000ff
        call FUN_0075db4a
        fld dword ptr [esp + 0x28]
        fadd dword ptr [g_76d5f0]
        push eax
        call FUN_0075db4a
        fld dword ptr [esp + 0x30]
        fsub dword ptr [g_76d064]
        push eax
        call FUN_0075db4a
        fld dword ptr [esp + 0x30]
        fsub dword ptr [g_76d064]
        push eax
        call FUN_0075db4a
        push eax
        call FUN_0055e5c0
        mov eax, dword ptr [ebp + 0x3d4]
        mov ecx, dword ptr [eax + 0x17c]
        add esp, 0x14
        test ecx, ecx
        mov dword ptr [esp + 0x18], 0
        jle L_6708ee
        mov dword ptr [esp + 0x88], 0x1d4
        jmp L_66feed
L_66fee8:
        mov edi, 0x10
L_66feed:
        mov ecx, dword ptr [esp + 0x88]
        mov ecx, dword ptr [eax + ecx]
        add ecx, edi
        call FUN_0041fd80
        mov ebp, eax
        test ebp, ebp
        je L_6708b9
        mov eax, dword ptr [ebp + 0x2fc]
        test eax, eax
        mov bl, 1
        jne L_66ff34
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        mov al, byte ptr [ecx + 0x17]
        test al, al
        jne L_66ff34
        xor bl, bl
L_66ff34:
        mov al, byte ptr [ebp + 0xdc]
        test al, al
        je L_66ff40
        mov bl, 1
L_66ff40:
        mov edx, dword ptr [ebp + 0x10]
        shr edx, 0x13
        test dl, 1
        je L_66ff4d
        xor bl, bl
L_66ff4d:
        mov eax, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [eax + 0x60]
        mov edi, eax
        test edi, edi
        je L_66ff6f
        mov ecx, dword ptr [esp + 0x8c]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x60]
        test eax, eax
        je L_66ff6f
        cmp eax, edi
        je L_66ff7c
L_66ff6f:
        mov eax, dword ptr [esp + 0x34]
        mov ecx, dword ptr [eax + 0x64]
        test ecx, ecx
        je L_66ff7c
        xor bl, bl
L_66ff7c:
        mov ecx, dword ptr [esp + 0x34]
        cmp dword ptr [ecx + 0x64], 2
        je L_6708b9
        test bl, bl
        je L_6708b9
        mov eax, dword ptr [ebp + 0xd8]
        mov edx, dword ptr [eax + 0x8c]
        add eax, 0x80
        mov dword ptr [esp + 0x24], edx
        fld dword ptr [esp + 0x24]
        fmul dword ptr [esp + 0x50]
        mov ecx, dword ptr [eax + 0x1c]
        mov dword ptr [esp + 0x28], ecx
        mov edx, dword ptr [eax + 0x2c]
        mov ecx, dword ptr [esp + 0x34]
        fadd dword ptr [esp + 0x54]
        mov dword ptr [esp + 0x2c], edx
        lea eax, [esp + 0x24]
        fstp dword ptr [esp + 0x24]
        push eax
        fld dword ptr [esp + 0x30]
        fmul dword ptr [esp + 0x44]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x2c]
        call FUN_0066f850
        mov edx, dword ptr [ebp]
        mov ecx, ebp
        call dword ptr [edx + 0x60]
        mov edi, eax
        xor ebx, ebx
        cmp edi, ebx
        jne L_66fff7
        xor eax, eax
        jmp L_670015
L_66fff7:
        mov ecx, dword ptr [esp + 0x8c]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x60]
        cmp eax, ebx
        jne L_67000b
        xor eax, eax
        jmp L_670015
L_67000b:
        xor ecx, ecx
        cmp eax, edi
        setne cl
        inc ecx
        mov eax, ecx
L_670015:
        sub eax, ebx
        je L_670383
        sub eax, 2
        je L_6701ca
        lea edx, [esp + 0x10]
        push edx
        lea eax, [esp + 0x178]
        mov edi, 0xf
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x18], edi
        call FUN_00641010
        mov ecx, dword ptr [eax]
        lea edx, [esp + 0x16c]
        mov dword ptr [esp + 0x14], ecx
        push edx
        mov ecx, esi
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x14]
        cmp eax, dword ptr [ecx]
        je L_67006b
        mov edx, dword ptr [esp + 0x10]
        cmp edx, dword ptr [eax + 0x10]
        jge L_6700ae
L_67006b:
        lea eax, [esp + 0xcc]
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        lea ecx, [esp + 0x22c]
        mov dword ptr [esp + 0xd4], ebx
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x1c]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x198]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x14], eax
L_6700ae:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        lea ecx, [esp + 0xf8]
        fsub dword ptr [eax + 4]
        push ecx
        lea ecx, [esp + 0x1b8]
        fmul dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x104], 0
        fstp dword ptr [esp + 0xfc]
        fld dword ptr [eax + 0x10]
        fsub dword ptr [eax + 8]
        fmul dword ptr [eax + 0x18]
        fstp dword ptr [esp + 0x100]
        call FUN_0040c5d0
        lea edx, [esp + 0x1b4]
        push edx
        lea ecx, [esp + 0x64]
        call FUN_0040c410
        fld dword ptr [esp + 0x28]
        push 0x3f666666
        push ecx
        fstp dword ptr [esp]
        fld dword ptr [esp + 0x2c]
        push ecx
        fstp dword ptr [esp]
        lea ecx, [esp + 0x1f0]
        mov dword ptr [esp + 0x2c], edi
        call FUN_0040c9c0
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [esp + 0x130]
        push ecx
        mov ecx, esi
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x130]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0xbc], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0xb8]
        cmp eax, dword ptr [ecx]
        je L_670168
        mov edx, dword ptr [esp + 0x20]
        cmp edx, dword ptr [eax + 0x10]
        jge L_6701b1
L_670168:
        lea eax, [esp + 0xc4]
        push eax
        lea ecx, [esp + 0x24]
        push ecx
        lea ecx, [esp + 0x25c]
        mov dword ptr [esp + 0xcc], ebx
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0xc0]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x140]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0xb8], eax
L_6701b1:
        push 1
        push ebx
        push 0xfa0000ff
        lea ecx, [esp + 0x6c]
        push ecx
        lea edx, [esp + 0x1f4]
        jmp L_670546
L_6701ca:
        lea eax, [esp + 0x90]
        push eax
        lea ecx, [esp + 0x144]
        push ecx
        mov edi, 0xc
        mov ecx, esi
        mov dword ptr [esp + 0x98], edi
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x148]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x98], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x94]
        cmp eax, dword ptr [ecx]
        je L_67021e
        mov edx, dword ptr [esp + 0x90]
        cmp edx, dword ptr [eax + 0x10]
        jge L_67026a
L_67021e:
        lea eax, [esp + 0xc8]
        push eax
        lea ecx, [esp + 0x94]
        push ecx
        lea ecx, [esp + 0x224]
        mov dword ptr [esp + 0xd0], ebx
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x9c]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x158]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x94], eax
L_67026a:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        lea ecx, [esp + 0x110]
        fsub dword ptr [eax + 4]
        push ecx
        lea ecx, [esp + 0x1d0]
        fmul dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x11c], 0
        fstp dword ptr [esp + 0x114]
        fld dword ptr [eax + 0x10]
        fsub dword ptr [eax + 8]
        fmul dword ptr [eax + 0x18]
        fstp dword ptr [esp + 0x118]
        call FUN_0040c5d0
        lea edx, [esp + 0x1cc]
        push edx
        lea ecx, [esp + 0x64]
        call FUN_0040c410
        fld dword ptr [esp + 0x28]
        push 0x3f666666
        push ecx
        fstp dword ptr [esp]
        fld dword ptr [esp + 0x2c]
        push ecx
        fstp dword ptr [esp]
        lea ecx, [esp + 0x208]
        mov dword ptr [esp + 0x84], edi
        call FUN_0040c9c0
        lea eax, [esp + 0x78]
        push eax
        lea ecx, [esp + 0x15c]
        push ecx
        mov ecx, esi
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x160]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x80], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x7c]
        cmp eax, dword ptr [ecx]
        je L_670324
        mov edx, dword ptr [esp + 0x78]
        cmp edx, dword ptr [eax + 0x10]
        jge L_67036a
L_670324:
        lea eax, [esp + 0xd0]
        push eax
        lea ecx, [esp + 0x7c]
        push ecx
        lea ecx, [esp + 0x234]
        mov dword ptr [esp + 0xd8], ebx
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x84]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x170]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x7c], eax
L_67036a:
        push 1
        push ebx
        push 0xfaff0000
        lea ecx, [esp + 0x6c]
        push ecx
        lea edx, [esp + 0x20c]
        jmp L_670546
L_670383:
        lea eax, [esp + 0x84]
        push eax
        lea ecx, [esp + 0x174]
        push ecx
        mov edi, 0xe
        mov ecx, esi
        mov dword ptr [esp + 0x8c], edi
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x198]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x9c], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x98]
        cmp eax, dword ptr [ecx]
        je L_6703d7
        mov edx, dword ptr [esp + 0x84]
        cmp edx, dword ptr [eax + 0x10]
        jge L_670423
L_6703d7:
        lea eax, [esp + 0xd4]
        push eax
        lea ecx, [esp + 0x88]
        push ecx
        lea ecx, [esp + 0x244]
        mov dword ptr [esp + 0xdc], ebx
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0xa0]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x130]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x98], eax
L_670423:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        lea ecx, [esp + 0xec]
        fsub dword ptr [eax + 4]
        push ecx
        lea ecx, [esp + 0x1ac]
        fmul dword ptr [eax + 0x14]
        mov dword ptr [esp + 0xf8], 0
        fstp dword ptr [esp + 0xf0]
        fld dword ptr [eax + 0x10]
        fsub dword ptr [eax + 8]
        fmul dword ptr [eax + 0x18]
        fstp dword ptr [esp + 0xf4]
        call FUN_0040c5d0
        lea edx, [esp + 0x1a8]
        push edx
        lea ecx, [esp + 0x64]
        call FUN_0040c410
        fld dword ptr [esp + 0x28]
        push 0x3f666666
        push ecx
        fstp dword ptr [esp]
        fld dword ptr [esp + 0x2c]
        push ecx
        fstp dword ptr [esp]
        lea ecx, [esp + 0x1cc]
        mov dword ptr [esp + 0xac], edi
        call FUN_0040c9c0
        lea eax, [esp + 0xa0]
        push eax
        lea ecx, [esp + 0x138]
        push ecx
        mov ecx, esi
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x17c]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0xb4], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0xb0]
        cmp eax, dword ptr [ecx]
        je L_6704e6
        mov edx, dword ptr [esp + 0xa0]
        cmp edx, dword ptr [eax + 0x10]
        jge L_670532
L_6704e6:
        lea eax, [esp + 0xdc]
        push eax
        lea ecx, [esp + 0xa4]
        push ecx
        lea ecx, [esp + 0x254]
        mov dword ptr [esp + 0xe4], ebx
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0xb8]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x144]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0xb0], eax
L_670532:
        push 1
        push ebx
        push 0xfa00ff00
        lea ecx, [esp + 0x6c]
        push ecx
        lea edx, [esp + 0x1d0]
L_670546:
        mov ecx, dword ptr [eax + 0x14]
        push edx
        call FUN_0055f5b0
        mov edi, dword ptr [esp + 0x34]
        lea ecx, [edi + 0x50]
        call FUN_0041fd80
        cmp ebp, eax
        jne L_670701
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x190]
        push ecx
        mov edi, 0xb
        mov ecx, esi
        mov dword ptr [esp + 0x24], edi
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x144]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0xb8], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0xb4]
        cmp eax, dword ptr [ecx]
        je L_6705ae
        mov edx, dword ptr [esp + 0x1c]
        cmp edx, dword ptr [eax + 0x10]
        jge L_6705f7
L_6705ae:
        lea eax, [esp + 0xd8]
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [esp + 0x21c]
        mov dword ptr [esp + 0xe0], ebx
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0xbc]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x18c]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0xb4], eax
L_6705f7:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        lea ecx, [esp + 0x104]
        fsub dword ptr [eax + 4]
        push ecx
        lea ecx, [esp + 0x1dc]
        fmul dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x110], 0
        fstp dword ptr [esp + 0x108]
        fld dword ptr [eax + 0x10]
        fsub dword ptr [eax + 8]
        fmul dword ptr [eax + 0x18]
        fstp dword ptr [esp + 0x10c]
        call FUN_0040c5d0
        lea edx, [esp + 0x1d8]
        push edx
        lea ecx, [esp + 0x64]
        call FUN_0040c410
        fld dword ptr [esp + 0x28]
        push 0x3f666666
        push ecx
        fstp dword ptr [esp]
        fld dword ptr [esp + 0x2c]
        push ecx
        fstp dword ptr [esp]
        lea ecx, [esp + 0x1fc]
        mov dword ptr [esp + 0x28], edi
        call FUN_0040c9c0
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x150]
        push ecx
        mov ecx, esi
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x194]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0x78], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x74]
        cmp eax, dword ptr [ecx]
        je L_6706ab
        mov edx, dword ptr [esp + 0x1c]
        cmp edx, dword ptr [eax + 0x10]
        jge L_6706e8
L_6706ab:
        lea eax, [esp + 0x38]
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [esp + 0x24c]
        mov dword ptr [esp + 0x40], ebx
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x7c]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x15c]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x74], eax
L_6706e8:
        push 1
        push ebx
        push 0xfa00ff00
        lea ecx, [esp + 0x6c]
        push ecx
        lea edx, [esp + 0x200]
        jmp L_6708b0
L_670701:
        mov eax, dword ptr [ebp + 0x30]
        push eax
        mov ecx, edi
        call FUN_00670c70
        test al, al
        je L_6708b9
        lea ecx, [esp + 0x1c]
        push ecx
        lea edx, [esp + 0x17c]
        mov edi, 0xd
        push edx
        mov ecx, esi
        mov dword ptr [esp + 0x24], edi
        call FUN_00641010
        mov eax, dword ptr [eax]
        lea ecx, [esp + 0x15c]
        push ecx
        mov ecx, esi
        mov dword ptr [esp + 0x84], eax
        call FUN_00641000
        mov edx, eax
        mov eax, dword ptr [esp + 0x80]
        cmp eax, dword ptr [edx]
        je L_67075f
        mov ecx, dword ptr [esp + 0x1c]
        cmp ecx, dword ptr [eax + 0x10]
        jge L_6707a2
L_67075f:
        lea edx, [esp + 0x30]
        push edx
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [esp + 0x23c]
        mov dword ptr [esp + 0x38], ebx
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0x88]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0x188]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x80], eax
L_6707a2:
        mov eax, dword ptr [eax + 0x14]
        fld dword ptr [eax + 0xc]
        lea ecx, [esp + 0xa4]
        fsub dword ptr [eax + 4]
        push ecx
        lea ecx, [esp + 0x20c]
        fmul dword ptr [eax + 0x14]
        mov dword ptr [esp + 0xb0], 0
        fstp dword ptr [esp + 0xa8]
        fld dword ptr [eax + 0x10]
        fsub dword ptr [eax + 8]
        fmul dword ptr [eax + 0x18]
        fstp dword ptr [esp + 0xac]
        call FUN_0040c5d0
        lea edx, [esp + 0x208]
        push edx
        lea ecx, [esp + 0x64]
        call FUN_0040c410
        fld dword ptr [esp + 0x28]
        push 0x3f666666
        push ecx
        fstp dword ptr [esp]
        fld dword ptr [esp + 0x2c]
        push ecx
        fstp dword ptr [esp]
        lea ecx, [esp + 0x128]
        mov dword ptr [esp + 0x28], edi
        call FUN_0040c9c0
        lea eax, [esp + 0x1c]
        push eax
        lea ecx, [esp + 0x168]
        push ecx
        mov ecx, esi
        call FUN_00641010
        mov edx, dword ptr [eax]
        lea eax, [esp + 0x188]
        push eax
        mov ecx, esi
        mov dword ptr [esp + 0xa0], edx
        call FUN_00641000
        mov ecx, eax
        mov eax, dword ptr [esp + 0x9c]
        cmp eax, dword ptr [ecx]
        je L_67085c
        mov edx, dword ptr [esp + 0x1c]
        cmp edx, dword ptr [eax + 0x10]
        jge L_67089c
L_67085c:
        lea eax, [esp + 0x3c]
        push eax
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [esp + 0x4c]
        mov dword ptr [esp + 0x44], ebx
        call FUN_00641050
        push eax
        push ecx
        lea edx, [esp + 0xa4]
        mov ecx, esp
        push edx
        call FUN_00561a30
        lea eax, [esp + 0xc4]
        push eax
        mov ecx, esi
        call FUN_005619f0
        mov eax, dword ptr [eax]
        mov dword ptr [esp + 0x9c], eax
L_67089c:
        push 1
        push ebx
        push 0xfa00ff00
        lea ecx, [esp + 0x6c]
        push ecx
        lea edx, [esp + 0x12c]
L_6708b0:
        mov ecx, dword ptr [eax + 0x14]
        push edx
        call FUN_0055f5b0
L_6708b9:
        mov eax, dword ptr [esp + 0x8c]
        mov ecx, dword ptr [esp + 0x18]
        mov edi, dword ptr [esp + 0x88]
        mov eax, dword ptr [eax + 0x3d4]
        mov edx, dword ptr [eax + 0x17c]
        inc ecx
        add edi, 4
        cmp ecx, edx
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [esp + 0x88], edi
        jl L_66fee8
L_6708ee:
        mov esi, dword ptr [esp + 0x34]
        lea ecx, [esp + 0x11c]
        push ecx
        mov ecx, esi
        call FUN_00670b60
        push eax
        lea ecx, [esp + 0x64]
        call FUN_0040c410
        lea edx, [esp + 0x11c]
        push edx
        mov ecx, esi
        call FUN_00645870
        push eax
        lea ecx, [esp + 0x58]
        call FUN_0040ccd0
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov edi, dword ptr [ecx + 0x20]
        lea edx, [esp + 0x6c]
        xor edi, 0x85739531
        xor esi, esi
        push edx
        mov ecx, edi
        mov dword ptr [esp + 0x70], esi
        mov dword ptr [esp + 0x74], esi
        call FUN_004f8790
        mov ebp, dword ptr [esp + 0x70]
        cmp ebp, esi
        jle L_670a45
L_67095c:
        mov eax, dword ptr [esp + 0x6c]
        fld dword ptr [eax + esi*8]
        lea ecx, [ebp - 1]
        cmp esi, ecx
        fstp dword ptr [esp + 0x10]
        fld dword ptr [eax + esi*8 + 4]
        fstp dword ptr [esp + 0x14]
        jne L_670981
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x20], ecx
        fld dword ptr [eax + 4]
        jmp L_67098d
L_670981:
        fld dword ptr [eax + esi*8 + 8]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax + esi*8 + 0xc]
L_67098d:
        fld dword ptr [esp + 0x10]
        mov ebx, dword ptr [esp + 0x34]
        fmul dword ptr [g_7971e8]
        lea edx, [esp + 0x14]
        push edx
        lea eax, [esp + 0x14]
        fmul dword ptr [esp + 0x54]
        push eax
        mov ecx, ebx
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x1c]
        fmul dword ptr [g_7971e8]
        fmul dword ptr [esp + 0x48]
        fadd dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x28]
        fmul dword ptr [g_7971e8]
        fmul dword ptr [esp + 0x58]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x28]
        fmul dword ptr [g_7971e8]
        fmul dword ptr [esp + 0x48]
        fadd dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x20]
        call FUN_0066f830
        lea ecx, [esp + 0x18]
        push ecx
        lea edx, [esp + 0x24]
        push edx
        mov ecx, ebx
        call FUN_0066f830
        fld dword ptr [esp + 0x18]
        push 0xffff0000
        call FUN_0075db4a
        fld dword ptr [esp + 0x24]
        push eax
        call FUN_0075db4a
        fld dword ptr [esp + 0x1c]
        push eax
        call FUN_0075db4a
        fld dword ptr [esp + 0x1c]
        push eax
        call FUN_0075db4a
        push eax
        call FUN_0055eed0
        add esp, 0x14
        inc esi
        cmp esi, ebp
        jl L_67095c
L_670a45:
        lea eax, [esp + 0x6c]
        push eax
        mov ecx, edi
        call FUN_004f86c0
        mov edi, dword ptr [esp + 0x70]
        xor esi, esi
        test edi, edi
        jle L_670b48
        mov ebx, dword ptr [esp + 0x34]
        lea ebp, [edi - 1]
L_670a66:
        cmp esi, ebp
        mov eax, dword ptr [esp + 0x6c]
        fld dword ptr [eax + esi*8]
        fstp dword ptr [esp + 0x14]
        fld dword ptr [eax + esi*8 + 4]
        fstp dword ptr [esp + 0x10]
        jne L_670a88
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x20], ecx
        fld dword ptr [eax + 4]
        jmp L_670a94
L_670a88:
        fld dword ptr [eax + esi*8 + 8]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [eax + esi*8 + 0xc]
L_670a94:
        fld dword ptr [esp + 0x14]
        lea edx, [esp + 0x10]
        fmul dword ptr [g_7971e8]
        push edx
        lea eax, [esp + 0x18]
        push eax
        fmul dword ptr [esp + 0x58]
        mov ecx, ebx
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x1c]
        fld dword ptr [esp + 0x18]
        fmul dword ptr [g_7971e8]
        fmul dword ptr [esp + 0x48]
        fadd dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x18]
        fld dword ptr [esp + 0x28]
        fmul dword ptr [g_7971e8]
        fmul dword ptr [esp + 0x58]
        fadd dword ptr [esp + 0x5c]
        fstp dword ptr [esp + 0x28]
        fmul dword ptr [g_7971e8]
        fmul dword ptr [esp + 0x48]
        fadd dword ptr [esp + 0x60]
        fstp dword ptr [esp + 0x20]
        call FUN_0066f830
        lea ecx, [esp + 0x18]
        push ecx
        lea edx, [esp + 0x24]
        push edx
        mov ecx, ebx
        call FUN_0066f830
        fld dword ptr [esp + 0x18]
        push 0xffff8000
        call FUN_0075db4a
        fld dword ptr [esp + 0x24]
        push eax
        call FUN_0075db4a
        fld dword ptr [esp + 0x18]
        push eax
        call FUN_0075db4a
        fld dword ptr [esp + 0x20]
        push eax
        call FUN_0075db4a
        push eax
        call FUN_0055eed0
        add esp, 0x14
        inc esi
        cmp esi, edi
        jl L_670a66
L_670b48:
        lea ecx, [esp + 0x6c]
        call FUN_00423b30
L_670b51:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x25c
        ret
    }
}
