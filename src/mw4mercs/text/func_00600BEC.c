/* FUN_00600BEC - 0x00600BEC, size 3562 B (block 0x600BEC, first fn)
 * __stdcall, RET 0xC. Gameplay input handler: validates the incoming
 * (code,subcode) against object tables via FUN_004cdfa0/004ceeb0, compares
 * strings, builds C++ strings (FUN_005cbd00/005cbf80), and issues stat/
 * HUD updates through FUN_00621fd0 vtable.
 *
 * NOTE: this data block contains two further functions: 0x006013E0 (RET 8)
 * and 0x00601690 (RET 8), transcribed separately (not here).
 */
#include <windows.h>

/* extern data symbols (absolute addresses) */
extern int   g_7dab44;   /* 0x007dab44 */
extern int   g_7dab40;   /* 0x007dab40 */
extern int   g_7f1f84;   /* 0x007f1f84 */
extern char  g_7dc694;   /* 0x007dc694 */
extern short g_7dc696;   /* 0x007dc696 */
extern int   g_7f2558;   /* 0x007f2558 */
extern char  g_76cb8c[]; /* 0x0076cb8c */
extern float g_76d048;   /* 0x0076d048 */
extern double g_76d588;  /* 0x0076d588 */
extern float g_76c5b0;   /* 0x0076c5b0 */
extern int   g_7db090;   /* 0x007db090 (ptr) */

/* extern function symbols (rel32 calls) */
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_004f91c0(void);
extern void __cdecl FUN_005e1bf0(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_005cbd00(void);
extern void __cdecl FUN_005cbf80(void);
extern void __cdecl FUN_005e1c30(void);
extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_0064e2a0(void);
extern void __cdecl FUN_00621fd0(void);
extern void __cdecl FUN_00600b70(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00545760(void);
extern void __cdecl FUN_00559be0(void);

__declspec(naked) void func_00600BEC(void)
{
    __asm {
        nop
        nop
        nop
        nop
        sub esp, 0x28
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [g_7dab44]
        mov eax, dword ptr [ecx]
        push esi
        mov esi, dword ptr [g_7dab40]
        xor eax, esi
        mov edx, dword ptr [eax + 0xc]
        xor edx, 0x85739531
        mov al, byte ptr [edx + 0x16]
        test al, al
        push edi
        mov dword ptr [esp + 0x20], ebp
        je L_13d1
        mov eax, dword ptr [esp + 0x3c]
        mov dl, byte ptr [eax]
        mov ax, word ptr [eax + 2]
        mov word ptr [esp + 0x12], ax
        mov byte ptr [esp + 0x10], dl
        mov byte ptr [esp + 0x3c], dl
        mov dword ptr [esp + 0x14], eax
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [esp + 0x10]
        and ecx, 0xff
        xor eax, esi
        push ecx
        mov ecx, dword ptr [eax + 0x14]
        xor ecx, 0x85739531
        call FUN_004cdfa0
        mov edi, eax
        test edi, edi
        je L_d19
        lea edx, [esp + 0x10]
        push edx
        mov ecx, edi
        call FUN_004ceeb0
        mov esi, eax
        test esi, esi
        je L_d19
        mov eax, dword ptr [g_7f1f84]
        mov ecx, dword ptr [esi + 4]
        push eax
        call FUN_00415230
        cmp al, 1
        jne L_d19
        mov eax, dword ptr [esi + 0x10]
        shr eax, 0x13
        and al, 1
        cmp al, 1
        jne L_ccf
        mov cl, byte ptr [esi + 0x15c]
        cmp cl, byte ptr [g_7dc694]
        jne L_cb9
        mov dx, word ptr [esi + 0x15e]
        cmp dx, word ptr [g_7dc696]
        je L_ccf
L_cb9:
        mov al, byte ptr [esi + 0x15c]
        mov byte ptr [esp + 0x10], al
        mov cx, word ptr [esi + 0x15e]
        mov word ptr [esp + 0x12], cx
L_ccf:
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov edx, dword ptr [eax + 0x44]
        xor edx, 0x85739531
        lea ecx, [eax + 0x44]
        je L_d19
        cmp dword ptr [esi + 0x5d0], -1
        je L_d01
        mov eax, dword ptr [ecx]
        xor eax, 0x85739531
        mov eax, dword ptr [eax + 0x1c]
        inc dword ptr [eax + 0x50]
L_d01:
        mov al, byte ptr [esi + 0xdc]
        test al, al
        je L_d19
        mov ecx, dword ptr [ecx]
        xor ecx, 0x85739531
        mov eax, dword ptr [ecx + 0x1c]
        inc dword ptr [eax + 0x4c]
L_d19:
        mov edx, dword ptr [esp + 0x44]
        mov ebx, dword ptr [esp + 0x40]
        push edx
        push ebx
        lea eax, [esp + 0x18]
        push eax
        mov ecx, ebp
        call FUN_004f91c0
        mov cl, byte ptr [esp + 0x10]
        mov al, byte ptr [g_7dc694]
        cmp cl, al
        mov cx, word ptr [g_7dc696]
        jne L_d4e
        cmp word ptr [esp + 0x12], cx
        je L_102e
L_d4e:
        cmp byte ptr [ebx], al
        jne L_d5c
        cmp word ptr [ebx + 2], cx
        je L_102e
L_d5c:
        push 8
        lea ecx, [esp + 0x44]
        push ecx
        lea ecx, [esp + 0x34]
        call FUN_005e1bf0
        mov edx, dword ptr [esp + 0x30]
        lea esi, [ebp + 0x19c]
        push ebx
        mov ecx, esi
        mov byte ptr [edx], 0
        call FUN_00416b60
        mov ebp, eax
        lea eax, [esp + 0x10]
        push eax
        mov ecx, esi
        call FUN_00416b60
        test ebp, ebp
        je L_1015
        test eax, eax
        je L_f21
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov esi, dword ptr [edx + 0xc]
        mov cl, byte ptr [esp + 0x10]
        mov dl, byte ptr [ebx]
        xor esi, 0x85739531
        cmp cl, dl
        jne L_dcf
        mov dx, word ptr [esp + 0x12]
        cmp dx, word ptr [ebx + 2]
        je L_e91
L_dcf:
        mov edx, dword ptr [eax + 0x1c]
        mov eax, dword ptr [esp + 0x44]
        or ecx, 0xffffffff
        push eax
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        add ecx, edx
        push ecx
        push edx
        lea ecx, [esp + 0x38]
        call FUN_005cbd00
        mov ecx, dword ptr [esp + 0x44]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, 0x76cb8c
        repne scasb
        not ecx
        dec ecx
        add ecx, 0x76cb8c
        push ecx
        push 0x76cb8c
        lea ecx, [esp + 0x38]
        call FUN_005cbd00
        cmp dword ptr [esp + 0x44], 7
        mov edx, dword ptr [esi]
        jne L_e34
        push 0xd4f4
        mov ecx, esi
        call dword ptr [edx + 0x34]
        mov edx, eax
        mov eax, dword ptr [esp + 0x44]
        jmp L_e44
L_e34:
        push 0x349
        mov ecx, esi
        call dword ptr [edx + 0x34]
        mov edx, eax
        mov eax, dword ptr [esp + 0x44]
L_e44:
        or ecx, 0xffffffff
        push eax
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        add ecx, edx
        push ecx
        push edx
        lea ecx, [esp + 0x38]
        call FUN_005cbd00
        mov ecx, dword ptr [esp + 0x44]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, 0x76cb8c
        repne scasb
        not ecx
        dec ecx
        add ecx, 0x76cb8c
        push ecx
        push 0x76cb8c
        lea ecx, [esp + 0x38]
        call FUN_005cbd00
        mov eax, dword ptr [esp + 0x44]
        mov edx, dword ptr [ebp + 0x1c]
        push eax
        jmp L_f03
L_e91:
        cmp byte ptr [esp + 0x3c], cl
        jne L_1015
        cmp word ptr [esp + 0x14], dx
        jne L_1015
        mov edx, dword ptr [ebp + 0x1c]
        mov ecx, dword ptr [esp + 0x44]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        add ecx, edx
        push ecx
        push edx
        lea ecx, [esp + 0x38]
        call FUN_005cbd00
        mov edx, dword ptr [esp + 0x44]
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, 0x76cb8c
        repne scasb
        not ecx
        dec ecx
        push edx
        add ecx, 0x76cb8c
        push ecx
        push 0x76cb8c
        lea ecx, [esp + 0x38]
        call FUN_005cbd00
        mov eax, dword ptr [esi]
        push 0x34a
        mov ecx, esi
        call dword ptr [eax + 0x34]
        mov ecx, dword ptr [esp + 0x44]
        mov edx, eax
        push ecx
L_f03:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        add ecx, edx
        push ecx
        push edx
        lea ecx, [esp + 0x38]
        call FUN_005cbd00
        jmp L_ff9
L_f21:
        mov cl, byte ptr [esp + 0x10]
        cmp cl, byte ptr [ebx]
        jne L_f38
        mov dx, word ptr [esp + 0x12]
        cmp dx, word ptr [ebx + 2]
        je L_1015
L_f38:
        test edi, edi
        je L_1015
        mov eax, dword ptr [g_7dab44]
        mov edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax]
        xor ecx, edx
        mov esi, dword ptr [ecx + 0xc]
        lea edx, [esp + 0x10]
        push edx
        mov ecx, edi
        xor esi, 0x85739531
        call FUN_004ceeb0
        test eax, eax
        je L_1015
        mov ecx, dword ptr [g_7f2558]
        push ecx
        mov ecx, dword ptr [eax + 4]
        call FUN_00415230
        cmp al, 1
        jne L_1015
        mov edx, dword ptr [ebp + 0x1c]
        mov eax, dword ptr [esp + 0x44]
        or ecx, 0xffffffff
        push eax
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        add ecx, edx
        push ecx
        push edx
        lea ecx, [esp + 0x38]
        call FUN_005cbd00
        mov ecx, dword ptr [esp + 0x44]
        push ecx
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, 0x76cb8c
        repne scasb
        not ecx
        dec ecx
        add ecx, 0x76cb8c
        push ecx
        push 0x76cb8c
        lea ecx, [esp + 0x38]
        call FUN_005cbd00
        mov edx, dword ptr [esi]
        push 0x35f
        mov ecx, esi
        call dword ptr [edx + 0x34]
        mov edx, eax
        mov eax, dword ptr [esp + 0x44]
        or ecx, 0xffffffff
        push eax
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        add ecx, edx
        push ecx
        push edx
        lea ecx, [esp + 0x38]
        call FUN_005cbf80
L_ff9:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [g_7db090]
        mov edx, dword ptr [esi]
        push eax
        xor eax, eax
        mov al, byte ptr [ecx + 0x28]
        push 0
        push 0
        mov ecx, esi
        push eax
        call dword ptr [edx + 0x30]
L_1015:
        mov eax, dword ptr [esp + 0x2c]
        mov ecx, dword ptr [esp + 0x34]
        sub ecx, eax
        push ecx
        push eax
        lea ecx, [esp + 0x3c]
        call FUN_005e1c30
        mov ebp, dword ptr [esp + 0x20]
L_102e:
        mov edx, dword ptr [g_7dab44]
        mov esi, dword ptr [g_7dab40]
        mov eax, dword ptr [edx]
        xor eax, esi
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        mov esi, dword ptr [ecx + 0x50]
        mov eax, dword ptr [esi + 0x30]
        test eax, eax
        je L_10a0
        lea edx, [esp + 0x10]
        push edx
        lea ecx, [ebp + 0x19c]
        call FUN_00416b60
        test eax, eax
        je L_10a0
        mov eax, dword ptr [eax + 0x14]
        cmp eax, dword ptr [esi + 0x34]
        jl L_10a0
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0xc]
        lea eax, [edx + 0xc]
        xor ecx, 0x85739531
        mov dword ptr [ecx + 0x3028], 1
        mov ecx, dword ptr [eax]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push 0
        call dword ptr [edx + 0x2c]
L_10a0:
        mov ecx, ebp
        call FUN_00600940
        mov esi, eax
        push 1
        mov ecx, esi
        call FUN_0064e600
        cmp al, 1
        jne L_10cc
        push 1
        mov ecx, esi
        call FUN_0064e5a0
        push ebx
        lea ecx, [esp + 0x14]
        push ecx
        mov ecx, eax
        call FUN_0064e2a0
L_10cc:
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0xc]
        xor ecx, 0x85739531
        cmp byte ptr [ecx + 0x17], 1
        jne L_13d1
        mov cl, byte ptr [ebx]
        mov al, byte ptr [esp + 0x10]
        cmp al, cl
        mov cx, word ptr [esp + 0x12]
        jne L_1102
        cmp cx, word ptr [ebx + 2]
        je L_1136
L_1102:
        cmp al, byte ptr [g_7dc694]
        jne L_1113
        cmp cx, word ptr [g_7dc696]
        je L_1136
L_1113:
        mov esi, dword ptr [ebp + 0x225c]
        push 1
        lea edx, [esp + 0x14]
        push edx
        push 0
        mov ecx, esi
        call FUN_00621fd0
        push 1
        lea eax, [esp + 0x14]
        push eax
        push 2
        mov ecx, esi
        jmp L_114e
L_1136:
        cmp byte ptr [esp + 0x3c], al
        jne L_1153
        cmp word ptr [esp + 0x14], cx
        jne L_1153
        mov ecx, dword ptr [ebp + 0x225c]
        push 1
        push ebx
        push 9
L_114e:
        call FUN_00621fd0
L_1153:
        mov esi, dword ptr [ebp + 0x225c]
        push 1
        push ebx
        push 1
        mov ecx, esi
        call FUN_00621fd0
        push 1
        push ebx
        push 8
        mov ecx, esi
        call FUN_00621fd0
        lea ecx, [esp + 0x20]
        push ecx
        lea edx, [esp + 0x14]
        push edx
        call FUN_00600b70
        call FUN_0075db4a
        mov edi, eax
        lea eax, [esp + 0x30]
        push eax
        push ebx
        mov dword ptr [esp + 0x34], edi
        call FUN_00600b70
        add esp, 0x10
        call FUN_0075db4a
        mov ecx, dword ptr [esp + 0x20]
        mov ecx, dword ptr [ecx + 4]
        mov ebp, eax
        mov eax, dword ptr [g_7f1f84]
        push eax
        mov dword ptr [esp + 0x48], ebp
        mov dword ptr [esp + 0x20], 0
        call FUN_00415230
        test al, al
        je L_11d9
        mov edx, dword ptr [esp + 0x20]
        mov eax, dword ptr [edx + 0x78]
        lea ecx, [edx + 0x78]
        call dword ptr [eax + 4]
        mov ecx, dword ptr [eax + 0x66c]
        mov dword ptr [esp + 0x1c], ecx
L_11d9:
        xor ecx, ecx
        cmp edi, -1
        mov dword ptr [esp + 0x40], ecx
        je L_11f5
        cmp ebp, -1
        je L_11f5
        cmp ebp, edi
        jle L_11f5
        mov eax, ebp
        sub eax, edi
        mov dword ptr [esp + 0x40], eax
L_11f5:
        cmp edi, -1
        mov dword ptr [esp + 0x18], ecx
        je L_122d
        cmp ebp, -1
        je L_122d
        fild dword ptr [esp + 0x44]
        fidiv dword ptr [esp + 0x24]
        fmul dword ptr [g_76d048]
        fadd qword ptr [g_76d588]
        call FUN_0075db4a
        cmp eax, 0x64
        mov dword ptr [esp + 0x18], eax
        jge L_122d
        mov dword ptr [esp + 0x18], 0x64
L_122d:
        mov eax, dword ptr [esp + 0x40]
        test eax, eax
        je L_1244
        push eax
        lea edx, [esp + 0x14]
        push edx
        push 5
        mov ecx, esi
        call FUN_00621fd0
L_1244:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [g_7dab40]
        mov eax, dword ptr [eax]
        xor eax, ecx
        mov ecx, dword ptr [eax + 0xc]
        mov edx, dword ptr [eax + 0x2c]
        xor ecx, 0x85739531
        xor edx, 0x85739531
        mov byte ptr [esp + 0x44], 0
        je L_12a9
        mov edx, dword ptr [eax + 0x2c]
        xor edx, 0x85739531
        mov edi, dword ptr [edx + 0x384]
        test edi, edi
        je L_12a9
        mov eax, dword ptr [eax + 0x2c]
        xor eax, 0x85739531
        mov eax, dword ptr [eax + 0x384]
        mov dl, byte ptr [eax + 0x14]
        add eax, 0x14
        cmp dl, byte ptr [esp + 0x10]
        jne L_12a9
        mov ax, word ptr [eax + 2]
        cmp ax, word ptr [esp + 0x12]
        jne L_12a9
        mov byte ptr [esp + 0x44], 1
L_12a9:
        push ebx
        lea edx, [esp + 0x14]
        push edx
        call FUN_00545760
        cmp al, 1
        jne L_1345
        mov cl, byte ptr [esp + 0x10]
        cmp byte ptr [ebx], cl
        jne L_12e0
        mov ax, word ptr [esp + 0x12]
        cmp word ptr [ebx + 2], ax
        jne L_12e0
        cmp byte ptr [esp + 0x3c], cl
        jne L_12e0
        cmp word ptr [esp + 0x14], ax
        je L_13d1
L_12e0:
        cmp byte ptr [esp + 0x44], 1
        jne L_1304
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx + 0x2c]
        push 0x32
        xor ecx, 0x85739531
        call FUN_00559be0
L_1304:
        push 1
        lea edx, [esp + 0x14]
        push edx
        push 3
        mov ecx, esi
        call FUN_00621fd0
        push 1
        push ebx
        push 0x35
        mov ecx, esi
        call FUN_00621fd0
        mov eax, dword ptr [esp + 0x40]
        test eax, eax
        je L_13d1
        push eax
        lea eax, [esp + 0x14]
        push eax
        push 6
        mov ecx, esi
        call FUN_00621fd0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 0xc
L_1345:
        cmp byte ptr [esp + 0x44], 1
        jne L_136a
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        xor edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [edx + 0x2c]
        push 0x2e
        xor ecx, 0x85739531
        call FUN_00559be0
L_136a:
        push 1
        lea eax, [esp + 0x14]
        push eax
        push 4
        mov ecx, esi
        call FUN_00621fd0
        mov eax, dword ptr [esp + 0x40]
        test eax, eax
        je L_1391
        push eax
        lea ecx, [esp + 0x14]
        push ecx
        push 7
        mov ecx, esi
        call FUN_00621fd0
L_1391:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        je L_13a8
        push eax
        lea edx, [esp + 0x14]
        push edx
        push 0x2c
        mov ecx, esi
        call FUN_00621fd0
L_13a8:
        fld dword ptr [esp + 0x1c]
        fcomp dword ptr [g_76c5b0]
        fnstsw ax
        test ah, 0x40
        jne L_13d1
        fld dword ptr [esp + 0x1c]
        call FUN_0075db4a
        push eax
        lea eax, [esp + 0x14]
        push eax
        push 0x32
        mov ecx, esi
        call FUN_00621fd0
L_13d1:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x28
        ret 0xc
    }
}
