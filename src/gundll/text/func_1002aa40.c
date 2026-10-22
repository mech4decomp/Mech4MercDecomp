/*
 * FUN_1002aa40 (102 B) - __fastcall. SEH-guarded object destructor: installs
 * an SEH frame, stores vtable 0x1004ad2c, frees two members (FUN_10001d60)
 * if [this+0xc]==0, then calls FUN_1001ca00 (base dtor) and tears down the
 * SEH frame.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern void __cdecl FUN_1001ca00(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1002aa40(void)
{
    __asm {
        push    -1
        push    0x10048768
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esi], 0x1004ad2c
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        jnz     L_87
        mov     eax, dword ptr [esi + 0x1c]
        push    eax
        call    FUN_10001d60
        mov     eax, dword ptr [esi + 0x24]
        push    eax
        call    FUN_10001d60
        add     esp, 8
L_87:
        mov     ecx, esi
        mov     dword ptr [esp + 0x10], -1
        call    FUN_1001ca00
        mov     ecx, dword ptr [esp + 8]
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x10
        ret
    }
}
