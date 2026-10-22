/* func_004bc510.c — MLR ElementRenderer LOD constructor (__thiscall) */
#include <stddef.h>

extern int g_7daac4;
extern int g_7b35e0;

extern void __cdecl FUN_004bcd90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_004bc510(void)
{
    __asm {
        mov eax, dword ptr [esp+0xc]
        mov edx, dword ptr [esp+0x4]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov eax, dword ptr [g_7daac4]
        mov esi, ecx
        mov ecx, dword ptr [esp+0x1c]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call FUN_004bcd90
        mov ecx, dword ptr [esi+0x18]
        shr ecx, 0xa
        xor eax, eax
        and ecx, 0x1
        mov edx, dword ptr [ecx*4 + g_7b35e0]
        mov dword ptr [esi+0x154], eax
        mov dword ptr [esi+0x158], eax
        mov dword ptr [esi], 0x771340
        mov dword ptr [esi+0x13c], edx
        mov ebx, dword ptr [esi+0x148]
        mov ebp, ebx
        and ebp, 0xffff
        mov edi, eax
        cmp ebp, edi
        mov dword ptr [esp+0x1c], ebx
        jz L_c5fb
        cmp ebp, eax
        jbe L_c5dc
        lea eax, [ebp*8 + 0x0]
        push eax
        call FUN_004084d0
        mov ecx, dword ptr [esi+0x154]
        add esp, 0x4
        test ecx, ecx
        mov ebx, eax
        jz L_c5d0
        cmp ebp, edi
        mov edx, ebp
        jc L_c5a0
        mov edx, edi
L_c5a0:
        mov eax, edx
        dec edx
        test eax, eax
        jz L_c5c1
        lea eax, [ebx + edx*8]
        sub ecx, ebx
        inc edx
L_c5ad:
        mov edi, dword ptr [ecx + eax*1]
        mov dword ptr [eax], edi
        mov edi, dword ptr [ecx + eax*1 + 0x4]
        mov dword ptr [eax+0x4], edi
        dec edx
        sub eax, 0x8
        test edx, edx
        ja L_c5ad
L_c5c1:
        mov eax, dword ptr [esi+0x154]
        push eax
        call FUN_004084e0
        add esp, 0x4
L_c5d0:
        mov dword ptr [esi+0x154], ebx
        mov ebx, dword ptr [esp+0x1c]
        jmp L_c5f5
L_c5dc:
        mov ecx, dword ptr [esi+0x154]
        push ecx
        call FUN_004084e0
        add esp, 0x4
        mov dword ptr [esi+0x154], 0x0
L_c5f5:
        mov dword ptr [esi+0x158], ebp
L_c5fb:
        test bx, bx
        jbe L_c628
        mov edi, dword ptr [esi+0x154]
        lea ebx, [edi+0x4]
L_c609:
        mov ecx, dword ptr [esp+0x14]
        mov edx, dword ptr [ecx]
        push 0x4
        push edi
        call dword ptr [edx+0x20]
        mov edx, dword ptr [eax]
        push 0x4
        push ebx
        mov ecx, eax
        call dword ptr [edx+0x20]
        add edi, 0x8
        add ebx, 0x8
        dec ebp
        jnz L_c609
L_c628:
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xc
    }
}
