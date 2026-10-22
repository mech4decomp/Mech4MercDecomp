/*
 * FUN_10005ea0 (103 B) - __thiscall constructor with SEH frame (FS:[0]).
 * Calls FUN_10006130, FUN_10003f50, FUN_10005f10, FUN_10005a30; sets vtable
 * 0x10021278.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10006130(void);
extern void __cdecl FUN_10003f50(void);
extern void __cdecl FUN_10005f10(void);
extern void __cdecl FUN_10005a30(void);

__declspec(naked) void __cdecl FUN_10005ea0(void)
{
    __asm {
        push    -0x1
        push    0x1001f726
        mov     eax, fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        call    FUN_10006130
        push    0x1
        lea     ecx, [esi + 0x4]
        call    FUN_10003f50
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        lea     ecx, [esi + 0x30]
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_10005f10
        mov     ecx, esi
        mov     byte ptr [esp + 0x10], 0x1
        mov     dword ptr [esi], 0x10021278
        call    FUN_10005a30
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret     0x4
    }
}
