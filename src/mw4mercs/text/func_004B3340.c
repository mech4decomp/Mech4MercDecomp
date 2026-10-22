// 0x004B3340: in-.text data block transcription (352 bytes)
// __thiscall (this in ecx). Reallocates two arrays at [this+0x174]/[this+0x178]
// (dword count) and [this+0x17c]/[this+0x180] (8-byte element count), copying
// old contents, then zero-fills the newly-grown tail.

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void __fastcall func_004B3340(void *this, int dummy, int param)
{
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 0x14]
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 0x178]
        and esi, 0xffff
        mov ebx, eax
        cmp esi, ebx
        mov dword ptr [esp + 0x10], eax
        je L_de
        test esi, esi
        jbe L_bb
        lea eax, [esi*4]
        push eax
        call FUN_004084d0
        mov edx, dword ptr [edi + 0x174]
        add esp, 4
        test edx, edx
        mov ebp, eax
        je L_b3
        cmp esi, ebx
        mov ecx, esi
        jb L_89
        mov ecx, ebx
L_89:
        mov eax, ecx
        dec ecx
        test eax, eax
        je L_a4
        lea eax, [ebp + ecx*4]
        sub edx, ebp
        inc ecx
L_97:
        mov ebx, dword ptr [edx + eax]
        mov dword ptr [eax], ebx
        dec ecx
        sub eax, 4
        test ecx, ecx
        ja L_97
L_a4:
        mov eax, dword ptr [edi + 0x174]
        push eax
        call FUN_004084e0
        add esp, 4
L_b3:
        mov dword ptr [edi + 0x174], ebp
        jmp L_d4
L_bb:
        mov ecx, dword ptr [edi + 0x174]
        push ecx
        call FUN_004084e0
        add esp, 4
        mov dword ptr [edi + 0x174], 0
L_d4:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [edi + 0x178], esi
L_de:
        mov ebp, dword ptr [edi + 0x180]
        cmp esi, ebp
        je L_6f
        test esi, esi
        jbe L_4c
        lea edx, [esi*8]
        push edx
        call FUN_004084d0
        mov ecx, dword ptr [edi + 0x17c]
        add esp, 4
        test ecx, ecx
        mov ebx, eax
        je L_44
        cmp esi, ebp
        mov edx, esi
        jb L_14
        mov edx, ebp
L_14:
        mov eax, edx
        dec edx
        test eax, eax
        je L_35
        lea eax, [ebx + edx*8]
        sub ecx, ebx
        inc edx
L_21:
        mov ebp, dword ptr [ecx + eax]
        mov dword ptr [eax], ebp
        mov ebp, dword ptr [ecx + eax + 4]
        mov dword ptr [eax + 4], ebp
        dec edx
        sub eax, 8
        test edx, edx
        ja L_21
L_35:
        mov eax, dword ptr [edi + 0x17c]
        push eax
        call FUN_004084e0
        add esp, 4
L_44:
        mov dword ptr [edi + 0x17c], ebx
        jmp L_65
L_4c:
        mov ecx, dword ptr [edi + 0x17c]
        push ecx
        call FUN_004084e0
        add esp, 4
        mov dword ptr [edi + 0x17c], 0
L_65:
        mov eax, dword ptr [esp + 0x10]
        mov dword ptr [edi + 0x180], esi
L_6f:
        cmp eax, esi
        jae L_98
        mov edx, dword ptr [edi + 0x17c]
        mov ecx, dword ptr [edi + 0x174]
        lea edi, [ecx + eax*4]
        sub esi, eax
        lea edx, [edx + eax*8]
        mov ecx, esi
        xor eax, eax
        rep stosd
L_8d:
        mov dword ptr [edx], eax
        mov dword ptr [edx + 4], eax
        add edx, 8
        dec esi
        jne L_8d
L_98:
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
    }
}
