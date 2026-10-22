// FUN_10033950 (0x10033950) __thiscall, 47 bytes
extern char g_vt_1004b12c[];   /* conn vtable 0x1004b12c (extern-symbol reloc) */
__declspec(naked) void func_10033950(void)
{
    __asm {
        mov eax, dword ptr [esp+4]
        push esi
        mov esi, ecx
        xor ecx, ecx
        mov dword ptr [esi+4], eax
        mov eax, dword ptr [esp+0xc]
        mov dword ptr [esi+8], eax
        mov dword ptr [esi+0xc], ecx
        mov dword ptr [esi+0x10], ecx
        mov word ptr [esi+0x14], cx
        mov dword ptr [esi], OFFSET g_vt_1004b12c
        mov ecx, dword ptr [eax]
        push eax
        call dword ptr [ecx+4]
        mov eax, esi
        pop esi
        ret 0x8
    }
}
