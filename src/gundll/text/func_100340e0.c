// FUN_100340e0 (0x100340e0) __thiscall, 60 bytes
extern void __cdecl FUN_10033950(void);   /* conn ctor (cdecl shim -> func_10033950) */
extern char g_vt_1004b1fc[];
extern char g_vt_1004b1f8[];
extern char g_vt_1004b1d8[];

__declspec(naked) void FUN_100340e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_10033950
        mov     eax, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x18], OFFSET g_vt_1004b1fc
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x1c], edx
        mov     dword ptr [esi], OFFSET g_vt_1004b1f8
        mov     dword ptr [esi + 0x18], OFFSET g_vt_1004b1d8
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
