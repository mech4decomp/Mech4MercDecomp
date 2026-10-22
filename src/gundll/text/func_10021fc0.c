/*
 * FUN_10021fc0 (111 B) — __fastcall.
 * SEH-guarded object init: sets vtable ptr, calls FUN_1002e070,
 * conditionally FUN_10001d60, then FUN_1001ca00.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1002e070(void);
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1001ca00(void);

__declspec(naked) void __fastcall func_10021fc0(void)
{
    __asm {
        push    -1
        push    0x10048368
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], esi
        mov     dword ptr [esi], 0x1004aac8
        mov     eax, dword ptr [esi + 0x28]
        push    eax
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        setnz   cl
        mov     dword ptr [esp + 0x14], 0
        push    ecx
        call    FUN_1002e070
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jnz     skip
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    skip:
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001ca00
        mov     ecx, dword ptr [esp + 0x8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
