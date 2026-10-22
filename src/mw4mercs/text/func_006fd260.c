/*
 * FUN_006fd260 (22 B) — __fastcall: if (this->0x08 && this->0x24) call vtable[0x20](this->0x08, this)
 *
 * Disassembly:
 *   8B 41 08          mov eax, dword ptr [ecx + 8]
 *   85 C0             test eax, eax
 *   74 0E             jz done
 *   8A 51 24          mov dl, byte ptr [ecx + 0x24]
 *   84 D2             test dl, dl
 *   74 07             jz done
 *   8B 10             mov edx, dword ptr [eax]
 *   51                push ecx
 *   50                push eax
 *   FF 52 20          call dword ptr [edx + 0x20]
 * done:
 *   C3                ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006fd260(void)
{
    __asm {
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        jz done_fd260
        mov dl, byte ptr [ecx + 0x24]
        test dl, dl
        jz done_fd260
        mov edx, dword ptr [eax]
        push ecx
        push eax
        call dword ptr [edx + 0x20]
done_fd260:
        ret
    }
}
