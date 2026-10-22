/*
 * FUN_10029f40 (124 B) — __fastcall. SEH-guarded constructor: sets vtable
 * ptr 0x1004ad08, calls FUN_1002b420, frees members via FUN_10001d60,
 * then FUN_1001ca00.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002b420(void);
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1001ca00(void);

__declspec(naked) void __fastcall FUN_10029f40(void)
{
    __asm {
        push    -1
        push    0x10048708
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esi], 0x1004ad08
        mov     edx, dword ptr [esi + 0xc]
        mov     eax, dword ptr [esi + 0x1c]
        mov     ecx, dword ptr [esi + 0x20]
        test    edx, edx
        setnz   dl
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x18], 0
        push    edx
        call    FUN_1002b420
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jnz     L_9d
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x28]
        push    eax
        call    FUN_10001d60
        add     esp, 8
    L_9d:
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001ca00
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
