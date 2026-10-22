// FUN_10033d00 (0x10033d00) __thiscall, 75 bytes
extern void __cdecl FUN_10033950(void);   /* conn ctor (cdecl shim -> func_10033950) */
extern char g_vt_1004b188[];
extern char g_vt_1004b180[];
extern char g_vt_1004b130[];

__declspec(naked) void FUN_10033d00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_10033950
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x18], OFFSET g_vt_1004b188
        mov     eax, 1
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        xor     eax, eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x30], eax
        mov     byte ptr [esi + 0x34], al
        mov     dword ptr [esi + 0x1c], edx
        mov     dword ptr [esi], OFFSET g_vt_1004b180
        mov     dword ptr [esi + 0x18], OFFSET g_vt_1004b130
        mov     eax, esi
        pop     esi
        ret     0xc
    }
}
