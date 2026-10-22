/*
 * FUN_004eb320 (47 B) — __thiscall MLR/Adept constructor (5 args).
 * Calls FUN_004f1cb0(this, p1..p5) and sets vtable ptr 0x774674.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004f1cb0(void);
extern int g_00774674;

__declspec(naked) void FUN_004eb320(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x14]
        mov     edx, dword ptr [esp+0xc]
        push    esi
        push    eax
        mov     eax, dword ptr [esp+0x10]
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x18]
        push    ecx
        mov     ecx, dword ptr [esp+0x10]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004f1cb0
        mov     dword ptr [esi], offset g_00774674
        mov     eax, esi
        pop     esi
        ret     0x14
    }
}
