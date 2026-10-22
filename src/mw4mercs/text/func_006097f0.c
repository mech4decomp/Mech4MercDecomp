/* func_006097f0 - animation-blend subsystem */
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_005178d0(void);
extern void __cdecl FUN_006140c0(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_004da8d0(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00609d10(void);
extern void __cdecl FUN_00614210(void);
extern void __cdecl FUN_004d21c0(void);

extern unsigned int g_7dab44;
extern unsigned int g_7dab40;
extern void *g_76b41c;
extern unsigned int g_7db090;
extern unsigned int g_7f25a8;

__declspec(naked) void func_006097f0(void)
{
    __asm {
        mov eax, dword ptr [esp+0x4]
        sub esp, 0xd8
        cmp eax, 0x96
        push ebx
        push ebp
        push esi
        push edi
        jge L_609868
        mov eax, dword ptr [esp+0xf0]
        push ecx
        mov ecx, esp
        push eax
        call FUN_00412570
        call FUN_005178d0
        mov ecx, dword ptr [eax+0x8c]
        call FUN_006140c0
        lea ecx, [esp+0x1c]
        mov esi, eax
        call FUN_004d1f10
        mov cx, word ptr [esi+0x10]
        mov dx, word ptr [esi+0x12]
        lea eax, [esp+0x10]
        mov word ptr [esp+0x10], cx
        push eax
        lea ecx, [esp+0x20]
        push ecx
        mov word ptr [esp+0x1a], dx
        call FUN_004da8d0
        mov edx, dword ptr [esp+0x38]
        fild dword ptr [edx+0x24]
        add esp, 0x8
        lea ecx, [esp+0x1c]
        fstp dword ptr [esp+0x10]
        jmp L_609a59

L_609868:
        cmp eax, 0xc8
        jl L_6098ce
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        mov edi, dword ptr [g_7dab40]
        mov ebx, dword ptr [esp+0xf0]
        mov ebp, dword ptr [g_76b41c]
        xor ecx, edi
        mov edx, dword ptr [ecx+0x44]
        xor edx, 0x85739531
        mov eax, dword ptr [edx+0x38]
        mov esi, dword ptr [eax+0x10]
        add eax, 0x10
        test esi, esi
        jz L_6098bc
L_60989d:
        mov eax, dword ptr [esi]
        test eax, eax
        mov esi, dword ptr [esi+0x4]
        mov edi, eax
        jz L_6098be
        mov eax, dword ptr [eax+0x10]
        push ebx
        push eax
        call ebp
        add esp, 0x8
        test eax, eax
        jz L_6098be
        __emit 0xEB  /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-4) */
        __emit 0xE1
L_6098bc:
        xor edi, edi
L_6098be:
        fild dword ptr [edi+0x64]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xd8
        ret 0xc

L_6098ce:
        mov esi, dword ptr [esp+0xf0]
        push ecx
        mov ecx, esp
        push esi
        call FUN_00412570
        call FUN_005178d0
        mov ecx, dword ptr [eax+0x90]
        call FUN_006140c0
        lea ecx, [esp+0x60]
        mov edi, eax
        call FUN_004d1f10
        mov cx, word ptr [edi+0x10]
        mov dx, word ptr [edi+0x12]
        lea eax, [esp+0x10]
        mov word ptr [esp+0x10], cx
        push eax
        lea ecx, [esp+0x64]
        push ecx
        mov word ptr [esp+0x1a], dx
        call FUN_004da8d0
        mov edx, dword ptr [esp+0x7c]
        fild dword ptr [edx+0x78]
        mov al, byte ptr [esp+0xfc]
        add esp, 0x8
        test al, 0x1
        fstp dword ptr [esp+0x10]
        jz L_609a55
        push ecx
        mov ecx, esp
        push esi
        call FUN_00412570
        call FUN_005178d0
        mov ecx, dword ptr [eax+0x84]
        call FUN_006140c0
        mov cx, word ptr [eax+0x10]
        mov dx, word ptr [eax+0x12]
        push 0x1
        lea eax, [esp+0x18]
        mov word ptr [esp+0x18], cx
        push eax
        lea ecx, [esp+0xac]
        mov word ptr [esp+0x1e], dx
        call FUN_004d1f80
        mov ecx, dword ptr [g_7db090]
        call FUN_004cec10
        mov cl, byte ptr [eax]
        mov byte ptr [esp+0x18], cl
        mov dx, word ptr [eax+0x2]
        push 0x1
        lea eax, [esp+0x1c]
        push eax
        lea ecx, [esp+0xac]
        push ecx
        mov word ptr [esp+0x26], dx
        call FUN_004d9910
        mov ebx, eax
        mov esi, dword ptr [ebx+0x34c]
        add esp, 0xc
L_6099ae:
        test esi, esi
        jz L_609a3d
        mov edi, dword ptr [esi]
        test edi, edi
        mov esi, dword ptr [esi+0x4]
        jz L_609a3d
        mov eax, dword ptr [g_7f25a8]
        mov ecx, dword ptr [edi+0x4]
        push eax
        call FUN_00415230
        test al, al
        jz L_6099ae
        mov ecx, edi
        call FUN_00609d10
        push ecx
        mov ecx, esp
        push eax
        call FUN_00412570
        call FUN_005178d0
        mov ecx, dword ptr [eax+0x8c]
        call FUN_00614210
        lea ecx, [esp+0x1c]
        mov edi, eax
        call FUN_004d1f10
        mov dx, word ptr [edi+0x10]
        mov ax, word ptr [edi+0x12]
        lea ecx, [esp+0x14]
        mov word ptr [esp+0x14], dx
        push ecx
        lea edx, [esp+0x20]
        push edx
        mov word ptr [esp+0x1e], ax
        call FUN_004da8d0
        mov eax, dword ptr [esp+0x38]
        fild dword ptr [eax+0x24]
        add esp, 0x8
        lea ecx, [esp+0x1c]
        fadd dword ptr [esp+0x10]
        fstp dword ptr [esp+0x10]
        call FUN_004d21c0
        jmp L_6099ae
L_609a3d:
        test ebx, ebx
        jz L_609a49
        mov edx, dword ptr [ebx]
        push 0x1
        mov ecx, ebx
        call dword ptr [edx]
L_609a49:
        lea ecx, [esp+0xa4]
        call FUN_004d21c0
L_609a55:
        lea ecx, [esp+0x60]
L_609a59:
        call FUN_004d21c0
        fld dword ptr [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xd8
        ret 0xc
    }
}
