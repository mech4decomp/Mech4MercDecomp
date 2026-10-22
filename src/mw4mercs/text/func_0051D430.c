/* func_0051D430.c -- in-.text data block (block 0x51AA7D), 387 bytes.
   Single function: iterates a linked list of objects, copies string data,
   and returns 1. */

extern int g_7dab44;
extern int g_7dab40;

extern void FUN_006F4230(void);
extern void FUN_006F3C80(void);
extern void FUN_004084E0(void);

__declspec(naked) void func_0051D430(void)
{
    __asm {
        sub esp, 0x34
        mov edx, dword ptr [esp + 0x40]
        mov eax, dword ptr [edx + 0xc]
        mov ecx, dword ptr [edx]
        mov dword ptr [esp + 0x1c], eax
        mov eax, dword ptr [g_7dab44]
        mov eax, dword ptr [eax]
        push ebx
        mov ebx, dword ptr [edx + 8]
        push ebp
        push esi
        xor eax, dword ptr [g_7dab40]
        mov esi, dword ptr [eax + 0x44]
        add eax, 0x44
        mov eax, dword ptr [eax]
        push edi
        mov edi, dword ptr [edx + 4]
        mov dword ptr [esp + 0x20], ecx
        xor eax, 0x85739531
        mov eax, dword ptr [eax + 0x20]
        sub ecx, edi
        xor esi, 0x85739531
        mov esi, dword ptr [esi + 0x1c]
        mov esi, dword ptr [esi + 0x28]
        mov dword ptr [esp + 0x24], ecx
        add eax, 0x18
        mov eax, dword ptr [eax]
        mov ecx, edi
        sub ecx, ebx
        mov dword ptr [esp + 0x34], edi
        mov dword ptr [esp + 0x30], ebx
        mov dword ptr [esp + 0x1c], 1
        mov dword ptr [esp + 0x28], esi
        mov dword ptr [esp + 0x10], 0
        mov ebp, ebx
        mov dword ptr [esp + 0x18], ecx
L_51d4a8:
        test eax, eax
        je L_51d59b
        mov esi, dword ptr [eax]
        test esi, esi
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esp + 0x14], esi
        mov dword ptr [esp + 0x40], eax
        je L_51d59b
        mov eax, dword ptr [esp + 0x20]
        test eax, eax
        je L_51d4da
        mov edx, dword ptr [esp + 0x24]
        lea eax, [ecx + edx]
        mov edx, dword ptr [esi + 0x18]
        mov dword ptr [eax + ebp], edx
L_51d4da:
        test edi, edi
        je L_51d4e4
        mov eax, dword ptr [esi + 0x4c]
        mov dword ptr [ecx + ebp], eax
L_51d4e4:
        test ebx, ebx
        je L_51d557
        mov eax, dword ptr [ebp]
        test eax, eax
        je L_51d4fc
        push eax
        call FUN_006F4230
        mov dword ptr [ebp], 0
L_51d4fc:
        push 0
        push 0x100
        call FUN_006F3C80
        mov edx, dword ptr [esi + 0x10]
        test edx, edx
        mov ebx, eax
        mov dword ptr [ebp], ebx
        je L_51d517
        inc byte ptr [edx - 1]
L_51d517:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, ebx
        rep movsd
        mov ecx, eax
        and ecx, 3
        test edx, edx
        rep movsb
        je L_51d54f
        mov cl, byte ptr [edx - 1]
        lea eax, [edx - 1]
        dec cl
        mov byte ptr [eax], cl
        jne L_51d54f
        push eax
        call FUN_004084E0
        add esp, 4
L_51d54f:
        mov esi, dword ptr [esp + 0x14]
        mov ecx, dword ptr [esp + 0x18]
L_51d557:
        mov eax, dword ptr [esp + 0x1c]
        test eax, eax
        je L_51d57a
        mov edx, dword ptr [esp + 0x28]
        cmp edx, dword ptr [esi + 0x4c]
        jne L_51d57a
        mov eax, dword ptr [esp + 0x2c]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [eax], edx
        mov dword ptr [esp + 0x1c], 0
L_51d57a:
        mov edx, dword ptr [esp + 0x10]
        mov eax, dword ptr [esp + 0x40]
        mov ebx, dword ptr [esp + 0x30]
        mov edi, dword ptr [esp + 0x34]
        inc edx
        mov dword ptr [esp + 0x10], edx
        mov edx, dword ptr [esp + 0x50]
        add ebp, 4
        jmp L_51d4a8
L_51d59b:
        mov eax, dword ptr [edx + 0x10]
        mov ecx, dword ptr [esp + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [eax], ecx
        mov eax, 1
        pop ebx
        add esp, 0x34
        ret 0xc
    }
}
