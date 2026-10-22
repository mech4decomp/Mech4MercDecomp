/* auto-transcribed 0x5E0336E1 (139 B) */
extern int  g_5e0391b4;
extern char g_5e0391c0;
extern void __cdecl FUN_5e02da4c(void);

__declspec(naked) void FUN_5e0336e1(void)
{
    __asm {
            push ebx
            push ebp
            push esi
            push edi
            mov edi, dword ptr [esp+0x14]
L6e9:
            cmp dword ptr [g_5e0391b4], 0x1
            jle L701
            movzx eax, byte ptr [edi]
            push 0x8
            push eax
            call FUN_5e02da4c
            pop ecx
            pop ecx
            jmp L710
L701:
            movzx eax, byte ptr [edi]
            mov ecx, dword ptr [g_5e0391c0]
            mov al, byte ptr [ecx+eax*2]
            and eax, 0x8
L710:
            test eax, eax
            jz L717
            inc edi
            jmp L6e9
L717:
            movzx esi, byte ptr [edi]
            inc edi
            cmp esi, 0x2d
            mov ebp, esi
            jz L727
            cmp esi, 0x2b
            jnz L72b
L727:
            movzx esi, byte ptr [edi]
            inc edi
L72b:
            xor ebx, ebx
L72d:
            cmp dword ptr [g_5e0391b4], 0x1
            jle L742
            push 0x4
            push esi
            call FUN_5e02da4c
            pop ecx
            pop ecx
            jmp L74d
L742:
            mov eax, dword ptr [g_5e0391c0]
            mov al, byte ptr [eax+esi*2]
            and eax, 0x4
L74d:
            test eax, eax
            jz L75e
            lea eax, [ebx+ebx*4]
            lea ebx, [esi+eax*2-0x30]
            movzx esi, byte ptr [edi]
            inc edi
            jmp L72d
L75e:
            cmp ebp, 0x2d
            mov eax, ebx
            jnz L767
            neg eax
L767:
            pop edi
            pop esi
            pop ebp
            pop ebx
            ret
    }
}
