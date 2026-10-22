/*
 * FUN_005e1d40 (91 B) — static object destructor.
 *
 * Frees the objects stored at 0x007F2528, 0x007F2530, 0x007F252C
 * (calling their destructors first) and clears the globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00501b40(void *this);
extern void __cdecl FUN_00417980(void *this);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_005e1d40(void)
{
    

extern int DAT_007f2528;
extern int DAT_007f2530;
extern int DAT_007f252c;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2528]
        push    edi
        xor     edi, edi
        cmp     esi, edi
        jz      l_skip1
        mov     ecx, esi
        call    FUN_00501b40
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip1:
        mov eax, dword ptr [DAT_007f2530]
        push    eax
        mov dword ptr [DAT_007f2528], edi
        call    FUN_004084e0
        mov esi, dword ptr [DAT_007f252c]
        add     esp, 4
        cmp     esi, edi
        mov dword ptr [DAT_007f2530], edi
        jz      l_skip2
        mov     ecx, esi
        call    FUN_00417980
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip2:
        mov dword ptr [DAT_007f252c], edi
        pop     edi
        pop     esi
        ret
    }


}
