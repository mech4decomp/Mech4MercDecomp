/*
 * FUN_1001ee70 (115 B) — __fastcall (ECX = this).
 * SEH-guarded destructor/cleanup: installs an exception frame, sets the
 * vtable pointer, calls FUN_1002b420, conditionally FUN_10001d60, then
 * FUN_1001c750, and restores the exception list.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002b420(void);
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1001c750(void);

__declspec(naked) void FUN_1001ee70(void)
{
    __asm {
        push    -1
        push    0x10048208
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x1004a9d8
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [esi + 0x2c]
        test    edx, edx
        setnz   dl
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x18], 0
        push    edx
        call    FUN_1002b420
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jnz     Leec4
        mov     eax, dword ptr [esi + 0x38]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    Leec4:
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001c750
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
