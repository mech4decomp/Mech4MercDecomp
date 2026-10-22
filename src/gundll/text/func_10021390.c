/*
 * FUN_10021390 (93 B) - __fastcall. SEH-framed ctor/dtor: sets vtable
 * 0x1004aa80, if [this+0xc]==0 frees [this+0x24] via FUN_10001d60, then
 * calls teardown FUN_1001c8a0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern void __cdecl FUN_1001c8a0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10021390(void)
{
    __asm {
        push    -1
        push    0x10048348
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esi], 0x1004aa80
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        jnz     L_3ce
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_3ce:
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], 0xffffffff
        call    FUN_1001c8a0
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
