/*
 * FUN_0041c340 (64 B) — __thiscall. Builds a quaternion from a 3-vector
 * (w=0) and calls FUN_0041b320.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041b320(void);

__declspec(naked) void FUN_0041c340(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [esp+0x18]
        fld     dword ptr [eax]
        push    esi
        fstp    dword ptr [esp+0x4]
        fld     dword ptr [eax+0x4]
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x18]
        fstp    dword ptr [esp+0x8]
        fld     dword ptr [eax+0x8]
        lea     eax, [esp+0x4]
        push    eax
        push    ecx
        fstp    dword ptr [esp+0x14]
        mov     ecx, esi
        mov     dword ptr [esp+0x18], 0
        call    FUN_0041b320
        mov     eax, esi
        pop     esi
        add     esp, 0x10
        ret     0x8
    }
}
