/* FUN_00598e20 (0x00598E20, 549 bytes) */
/* Tree operation function */

extern void __cdecl FUN_004084B0(void);
extern void __cdecl FUN_005997C0(void);
extern void __cdecl FUN_00411690(void);
extern void __cdecl FUN_00599770(void);
extern void __cdecl FUN_00411850(void);
extern void __cdecl FUN_00599640(void);

__declspec(naked) void func_00598e20(void)
{
__asm {
    sub esp, 0x0C
    push ebx
    push ebp
    push esi
    mov ebx, ecx
    push edi
    mov edi, [ebx]
    mov ebp, [edi+4]
    test ebp, ebp
    mov [esp+0x14], ebx
    mov al, 1
    jz L_69
    mov eax, [esp+0x24]
    mov ecx, [eax]
    mov [esp+0x10], ecx
L_22:
    mov esi, [ebp+0x10]
    mov eax, [esp+0x10]
    mov edi, ebp
L_2B:
    mov dl, [eax]
    mov cl, dl
    cmp dl, [esi]
    jne L_4F
    test cl, cl
    jz L_4B
    mov dl, [eax+1]
    mov cl, dl
    cmp dl, [esi+1]
    jne L_4F
    add eax, 2
    add esi, 2
    test cl, cl
    jnz L_2B
L_4B:
    xor eax, eax
    jmp L_54
L_4F:
    sbb eax, eax
    sbb eax, -1
L_54:
    test eax, eax
    setl al
    test al, al
    jz L_62
    mov ebp, [ebp+8]
    jmp L_65
L_62:
    mov ebp, [ebp+0xC]
L_65:
    test ebp, ebp
    jnz L_22
L_69:
    test al, al
    mov [esp+0x10], edi
    jz L_107
    mov eax, [ebx]
    cmp edi, [eax+8]
    jne L_FA
    cmp edi, eax
    jz L_BE
    test ebp, ebp
    jnz L_BE
    mov eax, [esp+0x24]
    mov esi, [edi+0x10]
    mov eax, [eax]
L_8D:
    mov dl, [eax]
    mov cl, dl
    cmp dl, [esi]
    jne L_B1
    test cl, cl
    jz L_AD
    mov dl, [eax+1]
    mov cl, dl
    cmp dl, [esi+1]
    jne L_B1
    add eax, 2
    add esi, 2
    test cl, cl
    jnz L_8D
L_AD:
    xor eax, eax
    jmp L_B6
L_B1:
    sbb eax, eax
    sbb eax, -1
L_B6:
    test eax, eax
    jge L_185
L_BE:
    push 0x18
    call FUN_004084B0
    mov ecx, [esp+0x28]
    mov esi, eax
    push ecx
    lea edx, [esi+0x10]
    push edx
    call FUN_005997C0
    mov eax, [ebx]
    add esp, 0xC
    cmp edi, eax
    mov [edi+8], esi
    jne L_EC
    mov [eax+4], esi
    mov [eax+0xC], esi
    jmp L_1C9
L_EC:
    cmp edi, [eax+8]
    jne L_1C9
    jmp L_1C6
L_FA:
    lea eax, [esp+0x10]
    push eax
    call FUN_00411690
    add esp, 4
L_107:
    mov ecx, [esp+0x24]
    mov edx, [ecx]
    mov eax, [esp+0x10]
    mov eax, [eax+0x10]
    mov esi, edx
L_116:
    mov bl, [eax]
    mov cl, bl
    cmp bl, [esi]
    jne L_13A
    test cl, cl
    jz L_136
    mov bl, [eax+1]
    mov cl, bl
    cmp bl, [esi+1]
    jne L_13A
    add eax, 2
    add esi, 2
    test cl, cl
    jnz L_116
L_136:
    xor eax, eax
    jmp L_13F
L_13A:
    sbb eax, eax
    sbb eax, -1
L_13F:
    test eax, eax
    jge L_1FC
    mov ebx, [esp+0x14]
    cmp edi, [ebx]
    jz L_1A2
    test ebp, ebp
    jnz L_1A2
    mov esi, [edi+0x10]
    mov eax, edx
L_158:
    mov dl, [eax]
    mov cl, dl
    cmp dl, [esi]
    jne L_17C
    test cl, cl
    jz L_178
    mov dl, [eax+1]
    mov cl, dl
    cmp dl, [esi+1]
    jne L_17C
    add eax, 2
    add esi, 2
    test cl, cl
    jnz L_158
L_178:
    xor eax, eax
    jmp L_181
L_17C:
    sbb eax, eax
    sbb eax, -1
L_181:
    test eax, eax
    jl L_1A2
L_185:
    mov eax, [esp+0x24]
    push eax
    mov ecx, ebx
    call FUN_00599770
    mov esi, eax
    mov eax, [ebx]
    mov [edi+0xC], esi
    cmp edi, [eax+0xC]
    jne L_1C9
    mov [eax+0xC], esi
    jmp L_1C9
L_1A2:
    mov ecx, [esp+0x24]
    push ecx
    mov ecx, ebx
    call FUN_00599770
    mov esi, eax
    mov eax, [ebx]
    cmp edi, eax
    mov [edi+8], esi
    jne L_1C1
    mov [eax+4], esi
    mov [eax+0xC], esi
    jmp L_1C9
L_1C1:
    cmp edi, [eax+8]
    jne L_1C9
L_1C6:
    mov [eax+8], esi
L_1C9:
    add eax, 4
    xor ecx, ecx
    push eax
    push esi
    mov [esi+4], edi
    mov [esi+8], ecx
    mov [esi+0xC], ecx
    call FUN_00411850
    mov eax, [ebx+4]
    add esp, 8
    inc eax
    mov [ebx+4], eax
    mov eax, [esp+0x20]
    pop edi
    mov [eax], esi
    pop esi
    pop ebp
    mov byte ptr [eax+4], 1
    pop ebx
    add esp, 0xC
    ret 8
L_1FC:
    mov edx, [esp+0x10]
    mov esi, [esp+0x20]
    lea eax, [esp+0x14]
    push eax
    mov ecx, esi
    mov [esp+0x18], edx
    mov byte ptr [esp+0x1C], 0
    call FUN_00599640
    pop edi
    mov eax, esi
    pop esi
    pop ebp
    pop ebx
    add esp, 0xC
    ret 8
}
}
