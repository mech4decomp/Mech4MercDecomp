// Auto-generated: free field at ecx+0x38 if non-null, set to null
// FUN_00511d10, 25 bytes

void FUN_006bbe80(void);

__declspec(naked) void func_00511d10(void)
{
    __asm {
        push esi
        mov esi, ecx        // esi = this
        mov eax, [esi+0x38]
        test eax, eax
        jz skip_free
        push eax
        call FUN_006bbe80
        mov dword ptr [esi+0x38], 0
skip_free:
        pop esi
        ret
    }
}
