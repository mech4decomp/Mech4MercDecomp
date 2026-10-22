// 0x00435FEF: in-.text data block transcription (true extent 317 bytes)
// __thiscall (this in ecx). Reallocates a buffer at [esi+0x20]/[esi+0x24]
// (count), copies elements, then dispatches via vtable slots +0xa4/+0xa8.
// Leading NOP is alignment padding; adjacent function at 0x436130 excluded.

extern void __cdecl FUN_004912b0(void);
extern void __cdecl FUN_004550c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void func_00435FEF(void)
{
    __asm {
        nop
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
        call FUN_004912b0
        mov esi, dword ptr [esp + 0x40]
        push esi
        mov ecx, ebx
        call FUN_004550c0
        mov eax, dword ptr [esi + 0xc]
        test eax, eax
        je L_fc
        mov ecx, dword ptr [eax + 0x24]
        test ecx, ecx
        jbe L_fc
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x40]
        push ecx
        lea edx, [esp + 0x40]
        push edx
        mov ecx, esi
        call dword ptr [eax + 0xa8]
        mov esi, dword ptr [ebx + 0xc]
        mov ecx, dword ptr [esp + 0x40]
        mov edi, dword ptr [esi + 0x24]
        cmp ecx, edi
        mov dword ptr [esp + 0x38], ecx
        je L_d9
        test ecx, ecx
        jbe L_bb
        lea eax, [ecx*4]
        push eax
        call FUN_004084d0
        mov ebp, dword ptr [esi + 0x20]
        add esp, 4
        test ebp, ebp
        mov ebx, eax
        je L_b2
        mov ecx, dword ptr [esp + 0x38]
        cmp ecx, edi
        jb L_8d
        mov ecx, edi
L_8d:
        mov edx, ecx
        dec ecx
        test edx, edx
        je L_a9
        mov edx, ebp
        lea eax, [ebx + ecx*4]
        sub edx, ebx
        inc ecx
L_9c:
        mov edi, dword ptr [edx + eax]
        mov dword ptr [eax], edi
        dec ecx
        sub eax, 4
        test ecx, ecx
        ja L_9c
L_a9:
        push ebp
        call FUN_004084e0
        add esp, 4
L_b2:
        mov dword ptr [esi + 0x20], ebx
        mov ebx, dword ptr [esp + 0x10]
        jmp L_ce
L_bb:
        mov eax, dword ptr [esi + 0x20]
        push eax
        call FUN_004084e0
        add esp, 4
        mov dword ptr [esi + 0x20], 0
L_ce:
        mov ecx, dword ptr [esp + 0x38]
        mov dword ptr [esi + 0x24], ecx
        mov ecx, dword ptr [esp + 0x40]
L_d9:
        mov eax, dword ptr [esi + 0x20]
        mov esi, dword ptr [esp + 0x3c]
        mov edx, dword ptr [ebx]
        mov edi, eax
        rep movsd
        mov ecx, dword ptr [esp + 0x40]
        push ecx
        push eax
        mov ecx, ebx
        call dword ptr [edx + 0xa4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x2c
L_fc:
        mov edx, dword ptr [esi]
        lea eax, [esp + 0x40]
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        mov ecx, esi
        call dword ptr [edx + 0xa8]
        mov eax, dword ptr [esp + 0x40]
        mov ecx, dword ptr [esp + 0x3c]
        mov edx, dword ptr [ebx]
        push eax
        push ecx
        mov ecx, ebx
        call dword ptr [edx + 0xa4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0x2c
    }
}
