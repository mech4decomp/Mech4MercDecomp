/*
 * FUN_100027c3 (43 B) — scan the 0x1000557c entry array (0x14-byte stride)
 * for an entry whose [EAX+0xc] field is within 0x100000 of the given
 * address; return the matching entry pointer or 0.
 *
 * __cdecl, 1 arg.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10005578;                                /* 0x10005578 */
extern int g_1000557c;                                /* 0x1000557c */

__declspec(naked) void *__cdecl FUN_100027c3(void)
{
    __asm {
        mov     eax, dword ptr [g_10005578]
        lea     ecx, [eax + eax*4]
        mov     eax, dword ptr [g_1000557c]
        lea     ecx, [eax + ecx*4]
L27D3:
        cmp     eax, ecx
        jnc     L27EB
        mov     edx, dword ptr [esp + 4]
        sub     edx, dword ptr [eax + 0xc]
        cmp     edx, 0x100000
        jc      L27ED
        add     eax, 0x14
        /* __emit: unconditional jmp rel8 (EB E8); MSVC6 emits rel32 (E9) */
        __emit 0xEB
        __emit 0xE8
L27EB:
        xor     eax, eax
L27ED:
        ret
    }
}
