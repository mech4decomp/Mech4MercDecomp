/*
 * FUN_10028550 (83 B) - __stdcall, RET 0x4. If arg1->+0xc is null returns
 * 0xC112000E; else calls FUN_1001c8d0(arg1); on success (>=0) dispatches
 * vtable[5] (call [ecx+0x14]) with (obj, g_10075060, 0x10049bf8, &local) and
 * stores the returned handle into arg1->+0x24.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c8d0(void);   /* rel32 call */
extern int g_10075060;

__declspec(naked) int __stdcall FUN_10028550(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        jne     L_6f
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L_6f:
        push    esi
        call    FUN_1001c8d0
        test    eax, eax
        jl      L_9e
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bf8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        test    eax, eax
        jl      L_9e
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x24], ecx
L_9e:
        pop     esi
        pop     ecx
        ret     4
    }
}
