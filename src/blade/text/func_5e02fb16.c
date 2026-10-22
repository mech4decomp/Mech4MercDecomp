/*
 * FUN_5e02fb16 (280 B) — locale category parser/installer. Handles the "C"
 * locale specially, otherwise parses the category string, installs it, and
 * copies the resulting category data into the caller's buffers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_5e0317d0(void);
extern void FUN_5e02fc56(void);
extern int FUN_5e03191a(void);
extern void FUN_5e02fd22(void);
extern void FUN_5e02e220(void);
extern void FUN_5e02ed40(void);
extern unsigned short g_5e77aa6c;
extern int g_5e77aa70;

__declspec(naked) void FUN_5e02fb16(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x88
        push ebx
        push esi
        mov esi, dword ptr [ebp+8]
        xor edx, edx
        cmp esi, edx
        push edi
        jz L_fbbc
        cmp byte ptr [esi], 0x43
        jnz L_fb66
        cmp byte ptr [esi+1], dl
        jnz L_fb66
        mov eax, dword ptr [ebp+0xc]
        mov ecx, dword ptr [ebp+0x10]
        and byte ptr [eax+1], dl
        cmp ecx, edx
        mov byte ptr [eax], 0x43
        jz L_fb54
        mov word ptr [ecx], dx
        mov word ptr [ecx+2], dx
        mov word ptr [ecx+4], dx
L_fb54:
        mov ecx, dword ptr [ebp+0x14]
        cmp ecx, edx
        jz L_fc29
        mov dword ptr [ecx], edx
        jmp L_fc29
L_fb66:
        mov edi, 0x5e039608
        push esi
        push edi
        call FUN_5e0317d0
        pop ecx
        test eax, eax
        pop ecx
        jz L_fbec
        mov ebx, 0x5e039584
        push esi
        push ebx
        call FUN_5e0317d0
        pop ecx
        test eax, eax
        pop ecx
        jz L_fbec
        lea eax, [ebp-0x88]
        push esi
        push eax
        call FUN_5e02fc56
        pop ecx
        test eax, eax
        pop ecx
        jnz L_fbbc
        lea eax, [ebp-0x88]
        push eax
        lea eax, [ebp-0x88]
        push 0x5e77aa68
        push eax
        call FUN_5e03191a
        add esp, 0xc
        test eax, eax
        jnz L_fbc0
L_fbbc:
        xor eax, eax
        jmp L_fc29
L_fbc0:
        movzx eax, word ptr [g_5e77aa6c]
        mov dword ptr [g_5e77aa70], eax
        lea eax, [ebp-0x88]
        push eax
        push edi
        call FUN_5e02fd22
        cmp byte ptr [esi], 0
        pop ecx
        pop ecx
        jz L_fbe3
        push esi
        jmp L_fbe4
L_fbe3:
        push edi
L_fbe4:
        push ebx
        call FUN_5e02e220
        pop ecx
        pop ecx
L_fbec:
        cmp dword ptr [ebp+0x10], 0
        jz L_fc04
        push 6
        push 0x5e77aa68
        push dword ptr [ebp+0x10]
        call FUN_5e02ed40
        add esp, 0xc
L_fc04:
        cmp dword ptr [ebp+0x14], 0
        jz L_fc1c
        push 4
        push 0x5e77aa70
        push dword ptr [ebp+0x14]
        call FUN_5e02ed40
        add esp, 0xc
L_fc1c:
        push edi
        push dword ptr [ebp+0xc]
        call FUN_5e02e220
        pop ecx
        mov eax, edi
        pop ecx
L_fc29:
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
