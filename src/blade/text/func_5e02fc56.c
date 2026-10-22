/*
 * FUN_5e02fc56 (204 B) — parse a locale category string into a fixed-size
 * buffer, splitting on '.' and ',' separators into up to three sub-fields.
 * Returns 0 on success, -1 on failure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_5e02e310(void);
extern void FUN_5e02e220(void);
extern int FUN_5e031860(void);
extern void FUN_5e02f100(void);

__declspec(naked) void FUN_5e02fc56(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp+8]
        push 0x88
        push 0
        push edi
        call FUN_5e02e310
        mov esi, dword ptr [ebp+0xc]
        add esp, 0xc
        mov al, byte ptr [esi]
        test al, al
        jz L_fc94
        cmp al, 0x2e
        jnz L_fc9b
        cmp byte ptr [esi+1], 0
        lea eax, [esi+1]
        jz L_fc9b
        add edi, 0x80
        push eax
        push edi
        call FUN_5e02e220
        pop ecx
        pop ecx
L_fc94:
        xor eax, eax
        jmp L_fd1d
L_fc9b:
        and dword ptr [ebp+0xc], 0
L_fc9f:
        push 0x5e036690
        push esi
        call FUN_5e031860
        pop ecx
        test eax, eax
        pop ecx
        jz L_fd1a
        cmp dword ptr [ebp+0xc], 0
        mov bl, byte ptr [eax+esi]
        lea edi, [eax+esi]
        jnz L_fccd
        cmp eax, 0x40
        jge L_fd1a
        cmp bl, 0x2e
        jz L_fd1a
        push eax
        push esi
        push dword ptr [ebp+8]
        jmp L_fd01
L_fccd:
        cmp dword ptr [ebp+0xc], 1
        jnz L_fce7
        cmp eax, 0x40
        jge L_fd1a
        cmp bl, 0x5f
        jz L_fd1a
        push eax
        mov eax, dword ptr [ebp+8]
        push esi
        add eax, 0x40
        jmp L_fd00
L_fce7:
        cmp dword ptr [ebp+0xc], 2
        jnz L_fd1a
        test bl, bl
        jz L_fcf6
        cmp bl, 0x2c
        jnz L_fd1a
L_fcf6:
        push eax
        mov eax, dword ptr [ebp+8]
        push esi
        add eax, 0x80
L_fd00:
        push eax
L_fd01:
        call FUN_5e02f100
        add esp, 0xc
        cmp bl, 0x2c
        jz L_fc94
        test bl, bl
        jz L_fc94
        inc dword ptr [ebp+0xc]
        lea esi, [edi+1]
        jmp L_fc9f
L_fd1a:
        or eax, 0xffffffff
L_fd1d:
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
