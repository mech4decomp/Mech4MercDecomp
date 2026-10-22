/*
 * FUN_10025970 (93 B) - __fastcall. SEH-framed vtable ctor: installs SEH
 * frame, stores vtable 0x1004abd0 into [ESI], frees member at +0x20 if
 * member at +0xc is null, then tail-calls shared base ctor FUN_1001ca00.
 *
 * CFLAGS: /O1
 */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern void __cdecl FUN_1001ca00(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10025970(void)
{
    __asm {
        push    -1
        push    0x10048528
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        push    ecx
        push    esi
        mov     esi, ecx
        mov     dword ptr [esp + 4], esi
        mov     dword ptr [esi], 0x1004abd0
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        jnz     L_ae
        mov     eax, dword ptr [esi + 0x20]
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_ae:
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
