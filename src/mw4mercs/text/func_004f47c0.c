/*
 * FUN_004f47c0 (59 B) — MLR/Adept pick/render chain helper. __thiscall
 * (ECX=this), RET 0x8 (2 args). Calls FUN_004daa20, a virtual method,
 * then FUN_004dae60 with the two args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004daa20(void);
extern void FUN_004dae60(void);

__declspec(naked) void FUN_004f47c0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x170]
        mov     ecx, dword ptr [eax+0xd8]
        add     ecx, 0x80
        push    ecx
        mov     ecx, esi
        call    FUN_004daa20
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx+0x48]
        mov     eax, dword ptr [esp+0xc]
        mov     ecx, dword ptr [esp+0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004dae60
        pop     esi
        ret     0x8
    }
}
