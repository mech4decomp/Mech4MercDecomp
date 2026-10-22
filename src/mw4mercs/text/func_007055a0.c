/*
 * FUN_007055a0 (110 B) — Object method dispatch helper.
 *
 * __stdcall, RET 0x14 (5 stack params). Always returns 1.
 * If param3 == 1 and [param4+8] != 0, obtains an object via
 * FUN_006f6410 (__thiscall) and makes several virtual calls on it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006f5ed0(void);
extern void FUN_006f6410(void);
extern void FUN_006f5ee0(void);

__declspec(naked) int __stdcall FUN_007055a0(void)
{
    __asm {
        cmp     dword ptr [esp + 0xc], 0x1
        push    edi
        jnz     loc_605
        mov     eax, dword ptr [esp + 0x14]
        mov     edi, dword ptr [eax + 0x8]
        test    edi, edi
        jz      loc_605
        push    esi
        call    FUN_006f5ed0
        mov     eax, dword ptr [esp + 0xc]
        lea     ecx, [eax + 0x4]
        push    ecx
        mov     ecx, dword ptr [eax]
        call    FUN_006f6410
        mov     esi, eax
        test    esi, esi
        jz      loc_5F6
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [esi]
        push    edi
        push    0x79fb68
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        mov     edx, dword ptr [esi]
        push    0x7a12ec
        push    0x79fb7c
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
loc_5F6:
        call    FUN_006f5ee0
        pop     esi
        mov     eax, 0x1
        pop     edi
        ret     0x14
loc_605:
        mov     eax, 0x1
        pop     edi
        ret     0x14
    }
}
