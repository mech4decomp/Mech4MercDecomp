/*
 * FUN_100171f0 (95 B) - __stdcall, RET 4. Frees a member array
 * (this+0x38) and a wide-string buffer (this+0x34), guarding with
 * IsBadStringPtrW.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1000a0e0(void *p);   /* array free helper @ 0x1000a0e0 */
extern void *g_1002105c;                     /* IsBadStringPtrW IAT @ 0x1002105c */
extern void *g_100210ec;                     /* free() IAT @ 0x100210ec */

__declspec(naked) void __cdecl FUN_100171f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     eax, dword ptr [esi + 0x38]
        test    eax, eax
        jz      L2
        mov     ecx, dword ptr [eax + 4]
        test    ecx, ecx
        jbe     L2
        mov     eax, dword ptr [eax + 0xc]
        test    eax, eax
        jz      L1
        push    eax
        call    FUN_1000a0e0
L1:
        mov     eax, dword ptr [esi + 0x38]
        mov     dword ptr [eax + 4], 0
L2:
        mov     eax, dword ptr [esi + 0x34]
        test    eax, eax
        jz      done
        mov     ecx, dword ptr [eax + 0xc]
        push    -1
        push    ecx
        call    dword ptr [g_1002105c]
        test    eax, eax
        jnz     done
        mov     edx, dword ptr [esi + 0x34]
        mov     eax, dword ptr [edx + 0xc]
        push    eax
        call    dword ptr [g_100210ec]
        mov     ecx, dword ptr [esi + 0x34]
        add     esp, 4
        mov     dword ptr [ecx + 0xc], 0
done:
        pop     esi
        ret     4
    }
}
