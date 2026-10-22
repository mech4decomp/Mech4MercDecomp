/*
 * FUN_005bcd50 (58 B) — __cdecl teardown. Frees the object at 0x007f2294
 *   (if present) and the buffer at 0x007f2290, then calls FUN_00637f30.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_00415200(void *this);
extern void __cdecl FUN_004084e0(void *p);
extern void FUN_00637f30(void);

__declspec(naked) void FUN_005bcd50(void)
{
    

extern int DAT_007f2294;
extern int DAT_007f2290;
__asm {
push    esi
        mov esi, dword ptr [DAT_007f2294]
        test    esi, esi
        jz      l_skip
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        mov eax, dword ptr [DAT_007f2290]
        push    eax
        mov dword ptr [DAT_007f2294], 0x0
        call    FUN_004084e0
        add     esp, 4
        call    FUN_00637f30
        pop     esi
        ret
    }


}
