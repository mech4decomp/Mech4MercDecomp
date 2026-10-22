/*
 * FUN_1001ab40 (96 B) — __fastcall. Constructor with SEH prologue.
 * Sets vtable 0x10049ad0, calls FUN_1002dcb0 and FUN_1001c8a0.
 *
 * CFLAGS: /O1
 */

extern char g_10048098;                 /* SEH scope table */
extern void __cdecl FUN_1002dcb0(void);
extern void __cdecl FUN_1001c8a0(void);

__declspec(naked) void __fastcall FUN_1001ab40(void)
{
    __asm {
        push    -1
        push    offset g_10048098
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x10049ad0
        mov     eax, dword ptr [esi + 0x24]
        mov     ecx, dword ptr [esi + 0x28]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        setnz   dl
        mov     dword ptr [esp + 0x18], 0
        push    edx
        call    FUN_1002dcb0
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], -1
        call    FUN_1001c8a0
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
