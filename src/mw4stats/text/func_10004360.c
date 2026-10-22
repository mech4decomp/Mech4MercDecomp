/*
 * MW4Stats.dll - FUN_10004360 (0x10004360, 27 B, __fastcall)
 * Releases a member object: if *(this+4) != 0, call its vtable[2] (delete)
 * and zero the slot. Returns &this->field_4. Transcribed from reference bytes.
 */
__declspec(naked) void FUN_10004360(void)
{
    __asm {
        mov eax, dword ptr [ecx+0x4]
        test eax, eax
        push esi
        lea esi, [ecx+0x4]
        jz short L_77
        mov ecx, dword ptr [eax]
        push eax
        call dword ptr [ecx+0x8]
        mov dword ptr [esi], 0x0
L_77:
        mov eax, esi
        pop esi
        ret
    }
}
