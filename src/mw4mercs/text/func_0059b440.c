/* FUN_0059b440 (0x0059B440, 566 bytes) */

extern void __cdecl FUN_00411FF0(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00412A50(void);
extern void __cdecl FUN_00411BF0(void);
extern void __cdecl FUN_00411CB0(void);
extern void __cdecl FUN_00411FB0(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_004084E0(void);
extern int *DAT_0076b420;

__declspec(naked) void func_0059b440(void)
{
__asm {
    sub esp, 0x34
    push ebx
    push ebp
    push esi
    push edi
    mov edi, [esp+0x4C]
    push 1
    lea eax, [esp+0x34]
    push eax
    xor ebx, ebx
    push 0x78386C
    mov ecx, edi
    mov [esp+0x1C], ebx
    call FUN_00411FF0
    mov ecx, [esp+0x30]
    push ecx
    lea ecx, [esp+0x14]
    call FUN_00412780
    mov esi, [esp+0x48]
    lea edx, [esp+0x10]
    push edx
    push esi
    call FUN_00412A50
    add esp, 8
    push 1
    lea eax, [esp+0x38]
    push eax
    push 0x783864
    mov ecx, edi
    mov [esp+0x58], ebx
    call FUN_00411BF0
    mov ecx, [esp+0x34]
    push ecx
    lea ecx, [esp+0x50]
    call FUN_00412780
    lea edx, [esp+0x4C]
    push edx
    push esi
    call FUN_00412A50
    add esp, 8
    push 1
    lea eax, [esp+0x3C]
    push eax
    push 0x783854
    mov ecx, edi
    call FUN_00411CB0
    mov edx, [esi]
    push 4
    lea eax, [esp+0x3C]
    push eax
    mov ecx, esi
    call dword ptr [edx+0x24]
    mov edx, [esi]
    push 4
    lea eax, [esp+0x40]
    push eax
    mov ecx, esi
    mov [esp+0x44], ebx
    call dword ptr [edx+0x24]
    push ebx
    lea ecx, [esp+0x18]
    push ecx
    mov ebp, 0x98967F
    push 0x783014
    mov ecx, edi
    mov [esp+0x20], ebp
    call FUN_00411FB0
    mov edx, [esi]
    push 4
    lea eax, [esp+0x18]
    push eax
    mov ecx, esi
    call dword ptr [edx+0x24]
    push ebx
    lea ecx, [esp+0x1C]
    push ecx
    push 0x782FFC
    mov ecx, edi
    mov [esp+0x24], ebp
    call FUN_00411FB0
    mov edx, [esi]
    push 4
    lea eax, [esp+0x1C]
    push eax
    mov ecx, esi
    call dword ptr [edx+0x24]
    push ebx
    lea ecx, [esp+0x20]
    push ecx
    push 0x782FE4
    mov ecx, edi
    mov [esp+0x28], ebp
    call FUN_00411FB0
    mov edx, [esi]
    push 4
    lea eax, [esp+0x20]
    push eax
    mov ecx, esi
    call dword ptr [edx+0x24]
    push ebx
    lea ecx, [esp+0x24]
    push ecx
    push 0x782FC0
    mov ecx, edi
    mov [esp+0x2C], ebp
    call FUN_00411FB0
    mov edx, [esi]
    push 4
    lea eax, [esp+0x24]
    push eax
    mov ecx, esi
    call dword ptr [edx+0x24]
    push ebx
    lea ecx, [esp+0x28]
    push ecx
    push 0x782FD0
    mov ecx, edi
    mov [esp+0x30], ebp
    call FUN_00411FB0
    mov edx, [esi]
    push 4
    lea eax, [esp+0x28]
    push eax
    mov ecx, esi
    call dword ptr [edx+0x24]
    push ebx
    lea ecx, [esp+0x2C]
    push ecx
    mov ebp, 0x2710
    push 0x783040
    mov ecx, edi
    mov [esp+0x34], ebp
    call FUN_00411CB0
    mov edx, [esi]
    push 4
    lea eax, [esp+0x2C]
    push eax
    mov ecx, esi
    call dword ptr [edx+0x24]
    mov edx, [esi]
    push 4
    lea eax, [esp+0x44]
    push eax
    mov ecx, esi
    mov [esp+0x48], ebp
    call dword ptr [edx+0x24]
    push 0x12
    call FUN_004084D0
    add esp, 4
    mov ebp, eax
    xor eax, eax
L_1AC:
    lea ebx, [eax+1]
    push ebx
    push 0x783840
    push ebp
    call dword ptr [DAT_0076b420]
    add esp, 0xC
    push 0
    lea ecx, [esp+0x30]
    push ecx
    push ebp
    mov ecx, edi
    call FUN_00411CB0
    test al, al
    jne L_1DA
    mov dword ptr [esp+0x2C], -1
L_1DA:
    mov edx, [esi]
    push 4
    lea eax, [esp+0x30]
    push eax
    mov ecx, esi
    call dword ptr [edx+0x24]
    mov eax, ebx
    cmp eax, 5
    jl L_1AC
    push ebp
    call FUN_004084E0
    mov eax, [esp+0x50]
    add esp, 4
    test eax, eax
    pop edi
    pop esi
    pop ebp
    pop ebx
    jz L_217
    mov cl, [eax-1]
    dec eax
    dec cl
    mov [eax], cl
    jne L_217
    push eax
    call FUN_004084E0
    add esp, 4
L_217:
    /* __emit: MSVC6 drops zero displacement on [esp+0]; ref uses 8B 44 24 00 */
    __emit 0x8B
    __emit 0x44
    __emit 0x24
    __emit 0x00
    test eax, eax
    jz L_232
    mov cl, [eax-1]
    dec eax
    dec cl
    mov [eax], cl
    jne L_232
    push eax
    call FUN_004084E0
    add esp, 4
L_232:
    add esp, 0x34
    ret
}
}
