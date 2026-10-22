/*
 * FUN_00415590 (42 B) — archive/database registered-class subsystem:
 * __thiscall teardown. Calls FUN_00415be0(this[4],1,this),
 * FUN_004157a0(this[4],this), FUN_00415d00(this), FUN_00415cd0(this).
 * this=ECX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415be0(void);
extern void __cdecl FUN_004157a0(void);
extern void __cdecl FUN_00415d00(void);
extern void __cdecl FUN_00415cd0(void);

__declspec(naked) void func_00415590(void)
{
    __asm {
        push    esi
        push    edi
        mov     esi, ecx
        mov     edi, dword ptr [esi + 0x4]
        push    esi
        push    1
        mov     ecx, edi
        call    FUN_00415be0
        push    esi
        mov     ecx, edi
        call    FUN_004157a0
        mov     ecx, esi
        call    FUN_00415d00
        mov     ecx, esi
        call    FUN_00415cd0
        pop     edi
        pop     esi
        ret
    }
}
