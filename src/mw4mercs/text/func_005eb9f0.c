/*
 * FUN_005EB9F0 (66 B) — __cdecl, no args. Tears down the Decal object
 * (FUN_00501b40 + free), nulls DAT_007f2588, then calls a virtual
 * method (offset 8) on DAT_007f258c and finally its virtual destructor
 * (offset 0) with flag 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_00501b40(void);
extern void __cdecl FUN_004084e0(void *p);

extern int DAT_007f2588;
extern int DAT_007f258c;

__declspec(naked) void FUN_005eb9f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007f2588]
        test    esi, esi
        jz      l_skip_decal
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip_decal:
        mov     ecx, dword ptr [DAT_007f258c]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [DAT_007f2588], 0
        call    dword ptr [eax + 8]
        mov     ecx, dword ptr [DAT_007f258c]
        test    ecx, ecx
        pop     esi
        jz      l_done
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
    l_done:
        ret
    }
}
