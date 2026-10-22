/*
 * FUN_1001c420 (54 B) - __fastcall. Destructor: sets vtable 0x1004a8a8,
 * frees +0xc via FUN_1001cca0 and +0x10 via FUN_10001d60.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001cca0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1001c420(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esi], 0x1004a8a8
        jz      L_43d
        push    eax
        call    FUN_1001cca0
        mov     dword ptr [esi + 0xc], 0
L_43d:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L_454
        push    eax
        call    FUN_10001d60
        add     esp, 4
        mov     dword ptr [esi + 0x10], 0
L_454:
        pop     esi
        ret
    }
}
