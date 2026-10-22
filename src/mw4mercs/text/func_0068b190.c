/*
 * FUN_0068b190 (41 B) — __thiscall. If flag at +0x19 set, sets +0x30=1
 * and calls FUN_005d98b0 with a computed element pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005d98b0(void);

__declspec(naked) void FUN_0068b190(void)
{
    __asm {
        mov     al, byte ptr [ecx+0x19]
        test    al, al
        jz      L_68b1b6
        mov     eax, dword ptr [ecx+0x40]
        mov     byte ptr [ecx+0x30], 1
        mov     ecx, dword ptr [ecx+0x34]
        lea     eax, [eax+eax*2]
        lea     edx, [ecx+eax*4]
        mov     eax, dword ptr [esp+0x4]
        mov     ecx, dword ptr [esp+0x8]
        push    edx
        push    eax
        call    FUN_005d98b0
    L_68b1b6:
        ret     8
    }
}
