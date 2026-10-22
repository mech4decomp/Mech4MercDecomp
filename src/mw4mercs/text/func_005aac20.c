/*
 * FUN_005aac20 (52 B) — __cdecl, RET.
 *
 * Calls a virtual method (offset 0x14) on param_2 with arg 0x70, then
 * FUN_00523e60 / FUN_005f0a60, then a virtual method (offset 0x4) whose
 * result has [eax+0x6c] set to -1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00523e60(void);
extern void __cdecl FUN_005f0a60(void);

__declspec(naked) void FUN_005aac20(void)
{
    __asm {
        push    esi
        mov     esi, [esp + 0xc]
        mov     eax, [esi]
        push    0x70
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        push    esi
        push    ecx
        lea     edx, [esp + 0x10]
        mov     ecx, esp
        push    edx
        call    FUN_00523e60
        call    FUN_005f0a60
        mov     eax, [esi]
        add     esp, 0x8
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        mov     dword ptr [eax + 0x6c], 0xffffffff
        pop     esi
        ret
    }
}
