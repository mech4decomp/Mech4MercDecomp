/*
 * FUN_1000c980 (96 B) — __fastcall.
 * SEH-guarded alloc + ctor dispatch.
 *
 * CFLAGS: /O1
 */

extern void *__cdecl FUN_10001d50(void);
extern void *__cdecl FUN_1000c960(void);

__declspec(naked) void __fastcall FUN_1000c980(void)
{
    __asm {
        push    -0x1
        push    0x100479fb
        mov     eax, fs:[0x0]
        push    eax
        mov     dword ptr fs:[0x0], esp
        push    ecx
        push    esi
        push    0x14
        mov     esi, ecx
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x4], eax
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x0
        jz      fail
        mov     ecx, dword ptr [esi + 0x10]
        push    ecx
        mov     ecx, eax
        call    FUN_1000c960
        pop     esi
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret
    fail:
        mov     ecx, dword ptr [esp + 0x8]
        xor     eax, eax
        pop     esi
        mov     dword ptr fs:[0x0], ecx
        add     esp, 0x10
        ret
    }
}
