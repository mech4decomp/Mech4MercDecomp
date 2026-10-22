// FUN_10046708 (0x10046708, 151 B, __cdecl)
extern unsigned long g_1007687c;
extern char g_10076981[];
extern void __cdecl FUN_1003cff0(unsigned long, unsigned long);
extern void __cdecl FUN_10039b19(unsigned long);
extern void __cdecl FUN_10039b7a(unsigned long);

__declspec(naked) void FUN_10046708(void)
{
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [g_1007687c], 0x0
        push ebx
        push esi
        jnz loc_25
        push dword ptr [ebp + 0xc]
        push dword ptr [ebp + 0x8]
        call FUN_1003cff0
        pop ecx
        pop ecx
        jmp loc_9b
loc_25:
        push 0x19
        call FUN_10039b19
        mov esi, dword ptr [ebp + 0x8]
        pop ecx
loc_30:
        movzx bx, byte ptr [esi]
        test bx, bx
        jz loc_83
        movzx eax, bl
        test byte ptr [eax + g_10076981], 0x4
        jz loc_5f
        mov al, byte ptr [esi + 0x1]
        inc esi
        test al, al
        jz loc_6a
        movzx ecx, bx
        movzx eax, al
        shl ecx, 0x8
        or ecx, eax
        cmp dword ptr [ebp + 0xc], ecx
        jz loc_76
        jmp loc_67
loc_5f:
        movzx eax, bx
        cmp dword ptr [ebp + 0xc], eax
        jz loc_83
loc_67:
        inc esi
        jmp loc_30
loc_6a:
        push 0x19
        call FUN_10039b7a
        pop ecx
        xor eax, eax
        jmp loc_9b
loc_76:
        push 0x19
        call FUN_10039b7a
        pop ecx
        lea eax, [esi - 0x1]
        jmp loc_9b
loc_83:
        push 0x19
        call FUN_10039b7a
        mov eax, dword ptr [ebp + 0xc]
        pop ecx
        movzx ecx, bx
        sub eax, ecx
        neg eax
        sbb eax, eax
        not eax
        and eax, esi
loc_9b:
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
