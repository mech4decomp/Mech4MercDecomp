/*
 * FUN_100180f0 (89 B) - __stdcall, RET 0x10.  Object-registration helper.
 * If this->+0xc != 0 returns 0xc112000d.  Else calls FUN_1001ca10(this, arg2);
 * on success calls FUN_10001dd0(arg4); if that fails and arg4 != 0 returns
 * 0x8007000e.  Otherwise stores results into this (+0x20, +0x4, +0x1c) and
 * returns 0.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca10(void);          /* rel32 call (callee cleans) */
extern void __stdcall FUN_10001dd0(void);        /* rel32 call */

__declspec(naked) void __stdcall FUN_100180f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        push    edi
        je      short L_ok
        pop     edi
        mov     eax, 0xc112000d
        pop     esi
        ret     0x10
L_ok:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    esi
        call    FUN_1001ca10
        test    eax, eax
        jl      short L_done
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        call    FUN_10001dd0
        test    eax, eax
        jne     short L_store
        test    edi, edi
        je      short L_store
        pop     edi
        mov     eax, 0x8007000e
        pop     esi
        ret     0x10
L_store:
        mov     edx, dword ptr [esp + 0x14]
        xor     ecx, ecx
        mov     dword ptr [esi + 0x20], eax
        mov     byte ptr [esi + 0x4], 1
        mov     dword ptr [esi + 0x1c], edx
        mov     eax, ecx
L_done:
        pop     edi
        pop     esi
        ret     0x10
    }
}
