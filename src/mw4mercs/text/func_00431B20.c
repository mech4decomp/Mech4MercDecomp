/* func_00431B20.c -- in-.text data block (block 0x431B20), 391 bytes.
   Three functions: a large one that resizes/reorders an array of 12-byte
   elements via FUN_004084D0/E0, and a small setter. */

extern void FUN_004912B0(void);
extern void FUN_00435FF0(void);
extern void FUN_004084D0(void);
extern void FUN_004084E0(void);

__declspec(naked) void func_00431B20(void)
{
    __asm {
        push ecx
        mov eax, dword ptr [esp + 0x30]
        mov edx, dword ptr [esp + 0x28]
        push ebx
        push ebp
        push esi
        push edi
        push eax
        mov eax, dword ptr [esp + 0x38]
        mov ebx, ecx
        mov ecx, dword ptr [esp + 0x40]
        push ecx
        push edx
        push eax
        sub esp, 0x18
        lea edx, [esp + 0x44]
        mov ecx, esp
        push edx
        mov dword ptr [esp + 0x3c], ebx
        call FUN_004912B0
        mov esi, dword ptr [esp + 0x40]
        push esi
        mov ecx, ebx
        call FUN_00435FF0
        mov eax, dword ptr [esi + 0xc]
        xor ebp, ebp
        cmp eax, ebp
        je L_431c5c
        cmp dword ptr [eax + 0x2c], ebp
        jbe L_431c5c
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x40]
        push ecx
        lea edx, [esp + 0x40]
        push edx
        mov ecx, esi
        call dword ptr [eax + 0xb0]
        mov esi, dword ptr [ebx + 0xc]
        mov eax, dword ptr [esp + 0x40]
        mov edi, dword ptr [esi + 0x2c]
        cmp eax, edi
        mov dword ptr [esp + 0x38], eax
        je L_431c27
        cmp eax, ebp
        jbe L_431c0d
        mov ebx, eax
        lea eax, [eax + eax*2]
        shl eax, 2
        push eax
        call FUN_004084D0
        add esp, 4
        cmp eax, ebp
        je L_431bba
        dec ebx
        mov dword ptr [esp + 0x34], ebx
        mov ebp, eax
L_431bba:
        mov ebx, dword ptr [esi + 0x28]
        test ebx, ebx
        je L_431c04
        mov edx, dword ptr [esp + 0x38]
        cmp edx, edi
        jb L_431bcb
        mov edx, edi
L_431bcb:
        mov ecx, edx
        dec edx
        test ecx, ecx
        je L_431bfb
        lea ecx, [edx + edx*2]
        shl ecx, 2
        lea eax, [ecx + ebx]
        lea ecx, [ecx + ebp + 8]
        inc edx
L_431be0:
        mov edi, dword ptr [eax]
        mov dword ptr [ecx - 8], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx - 4], edi
        mov edi, dword ptr [eax + 8]
        mov dword ptr [ecx], edi
        dec edx
        sub eax, 0xc
        sub ecx, 0xc
        test edx, edx
        ja L_431be0
L_431bfb:
        push ebx
        call FUN_004084E0
        add esp, 4
L_431c04:
        mov ebx, dword ptr [esp + 0x10]
        mov dword ptr [esi + 0x28], ebp
        jmp L_431c1c
L_431c0d:
        mov edx, dword ptr [esi + 0x28]
        push edx
        call FUN_004084E0
        add esp, 4
        mov dword ptr [esi + 0x28], ebp
L_431c1c:
        mov eax, dword ptr [esp + 0x38]
        mov dword ptr [esi + 0x2c], eax
        mov eax, dword ptr [esp + 0x40]
L_431c27:
        mov edx, dword ptr [esi + 0x28]
        mov esi, dword ptr [esp + 0x3c]
        lea ecx, [eax + eax*2]
        shl ecx, 2
        mov eax, ecx
        shr ecx, 2
        mov edi, edx
        rep movsd
        mov ecx, eax
        mov eax, dword ptr [ebx]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [esp + 0x40]
        push ecx
        push edx
        mov ecx, ebx
        call dword ptr [eax + 0xac]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x2c
L_431c5c:
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x40]
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        mov ecx, esi
        call dword ptr [edx + 0xb0]
        mov eax, dword ptr [esp + 0x40]
        mov ecx, dword ptr [esp + 0x3c]
        mov edx, dword ptr [ebx]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr [edx + 0xac]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x2c
        nop
        nop
        nop
        nop
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 8]
        mov dword ptr [ecx + 0xb4], eax
        mov dword ptr [ecx + 0xb8], edx
        ret 8
    }
}
