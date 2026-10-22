/*
 * FUN_006f7970 (37 B) — __thiscall bounds-checked indexer:
 *   if (0 <= index < this->0x14) { *out = *(this->0x10)[index*8]; return 1; }
 *   else return 0;
 *
 * Disassembly:
 *   8B 44 24 04       mov eax, dword ptr [esp + 4]
 *   85 C0             test eax, eax
 *   7C 18             jl fail
 *   3B 41 14          cmp eax, dword ptr [ecx + 0x14]
 *   7D 13             jge fail
 *   8B 49 10          mov ecx, dword ptr [ecx + 0x10]
 *   8B 14 C1          mov edx, dword ptr [ecx + eax*8]
 *   8B 02             mov eax, dword ptr [edx]
 *   8B 4C 24 08       mov ecx, dword ptr [esp + 0x8]
 *   89 01             mov dword ptr [ecx], eax
 *   B0 01             mov al, 0x1
 *   C2 08 00          ret 8
 *   fail:
 *   32 C0             xor al, al
 *   C2 08 00          ret 8
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006f7970(void)
{
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        jl fail
        cmp eax, dword ptr [ecx + 0x14]
        jge fail
        mov ecx, dword ptr [ecx + 0x10]
        mov edx, dword ptr [ecx + eax*8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [esp + 0x8]
        mov dword ptr [ecx], eax
        mov al, 0x1
        ret 8
fail:
        xor al, al
        ret 8
    }
}
